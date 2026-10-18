/*
 * hybrid.c - lifted <-> real boundary. See hybrid.h and docs/HYBRID.md.
 *
 * 32-bit x86, MSVC (uses __asm). The three rules that make it correct are
 * marked RULE 1/2/3 below; each one cost a long debugging session to find.
 */
#include "hybrid.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include <stdio.h>

/* ============================================================
 * lifted -> real
 * ============================================================ */

/* Everything this needs lives on the caller's own stack, and the pointer to it
 * lives in a TEB slot. No file-scope state at all, which is what makes it both
 * reentrant AND thread-safe.
 *
 * The problem it solves: MSVC inline asm cannot address a local once esp and
 * ebp have been handed to the guest, so the marshalling block used to be
 * file-scope, saved and restored around each call. That is reentrant - a
 * nested crossing on the same thread works - and it is not thread-safe, and
 * with fourteen engine threads calling forwarded imports the difference stops
 * being academic: two of them hand each other's registers to each other's
 * target.
 *
 * `__declspec(thread)` is not the fix. The TLS lookup MSVC emits needs eax and
 * ecx, and every reference happens after the machine has been handed over -
 * so it costs the very registers being marshalled. Measured: a game that ran
 * 2,015 guest calls ran 3.
 *
 * What works is not needing a register to find the block. `fs:[0x14]` is
 * NT_TIB.ArbitraryUserPointer, free for application use and per-thread by
 * construction, and `mov`/`xchg` can reach it with no register at all. The
 * previous occupant is saved on the host stack, so a nested crossing nests.
 */
typedef struct {
    uint32_t eax, ecx, edx, ebx, esi, edi, ebp, esp_, tgt;
} L2R;

#define TIB_SCRATCH 14h    /* NT_TIB.ArbitraryUserPointer */

#pragma warning(disable:4731)   /* we clobber ebp deliberately; push/pop restores it */
void hybrid_call_machine(hybrid_regs *r, uint32_t target)
{
    L2R b;

    b.eax = r->eax; b.ecx = r->ecx; b.edx = r->edx; b.ebx = r->ebx;
    b.esi = r->esi; b.edi = r->edi;

    /* RULE 1: SEED ebp.
     * MSVC emits frameless funclets for SEH unwind and local-object destruction
     * that address the CALLER's frame:
     *     lea ecx, [ebp-0x10]
     *     jmp CString::~CString
     * If such a funclet is not in your lifted set, dispatch falls back to the
     * real original - which then runs against the HOST's ebp and destructs a
     * garbage pointer. That reads as heap corruption a long way from the cause. */
    b.ebp = r->ebp;

    b.esp_ = r->esp + 4;   /* skip the fake return slot; `call` writes a real one there */
    b.tgt = target;

    __asm {
        push ebx
        push esi
        push edi
        push ebp
        push dword ptr fs:[TIB_SCRATCH]   /* RULE 2: whoever had it, gets it back */
        lea  eax, b
        push eax                          /* the block, for the recovery half */
        mov  fs:[TIB_SCRATCH], esp        /* host esp, reachable with no register */

        mov  esp, [eax]L2R.esp_           /* the guest's arguments */
        mov  ecx, [eax]L2R.tgt
        mov  [esp-4], ecx                 /* target into the dead fake-return slot */
        mov  ecx, [eax]L2R.ecx
        mov  edx, [eax]L2R.edx
        mov  ebx, [eax]L2R.ebx
        mov  esi, [eax]L2R.esi
        mov  edi, [eax]L2R.edi
        mov  ebp, [eax]L2R.ebp
        mov  eax, [eax]L2R.eax            /* the block pointer is released here */

        /* `call [esp-4]` and not `call [esp]`: the operand is read before the
         * return address is pushed, and pushing lands on that same slot - so
         * the callee ends up with its arguments at [esp+4], exactly where a
         * normal `call` would have left them. Through [esp] they would be one
         * slot short. */
        call dword ptr [esp-4]

        /* One instruction to get the host stack back and the guest's final esp
         * out, with every register still holding a result. */
        xchg esp, fs:[TIB_SCRATCH]

        pop  ecx                          /* the block */
        mov  [ecx]L2R.eax, eax
        /* RULE 3: CAPTURE edx.
         * A 64-bit return comes back in edx:eax. Dropping edx silently
         * truncates every one of them, and compilers of this era pass such
         * pairs around constantly (`mov [ebp-8],eax; mov [ebp-4],edx`). */
        mov  [ecx]L2R.edx, edx
        mov  eax, fs:[TIB_SCRATCH]        /* the guest's esp after its own `ret N` */
        mov  [ecx]L2R.esp_, eax
        pop  eax
        mov  fs:[TIB_SCRATCH], eax        /* give the slot back */
        pop  ebp
        pop  edi
        pop  esi
        pop  ebx
    }

    r->eax = b.eax; r->edx = b.edx; r->esp = b.esp_;
}

/* ============================================================
 * real -> lifted
 * ============================================================
 *
 * A per-target stub `mov eax, <ova>; jmp r2l_common` is what goes in the vtable
 * slot. It lands in r2l_common with eax = the target's original VA, ecx = this,
 * [esp] = the real return address and arguments above it. r2l_helper copies the
 * arguments onto a private emulated frame, calls the host's invoke, and reports
 * how many argument bytes the callee's `ret N` cleaned so we can return
 * __thiscall-correctly.
 */

static hybrid_invoke_fn g_invoke;
static uint32_t  g_frame, g_arena_bytes;
static uint8_t  *g_pool;
static size_t    g_pool_off, g_pool_size;
static unsigned long g_r2l_calls;

/* One emulated-frame arena per thread.
 *
 * The frame cannot live on the real stack - the host's own C frames keep
 * descending on it while the lifted code runs, and the two would interleave -
 * and it cannot be one shared arena either, because two threads calling back
 * at once would carve overlapping frames out of it and quietly corrupt each
 * other's locals. Allocated on the thread's first crossing; a thread that
 * never calls back never pays for one. */
static __declspec(thread) uint8_t  *t_arena;
static __declspec(thread) uint32_t  t_arena_top;
static __declspec(thread) uint32_t  t_arena_low;   /* lowest committed byte */

/* The same pointer again, in the one Win32 slot that has a destructor. */
static DWORD g_fls = FLS_OUT_OF_INDEXES;

static void WINAPI arena_released(void *p)
{
    if (p) VirtualFree(p, 0, MEM_RELEASE);
}

#define R2L_STUB_BYTES 16
#define R2L_ARGS_COPIED 16      /* enough for any sane calling convention */

/*
 * A thread that cannot get an arena returns 0 from every callback, and 0 is a
 * legal answer to most messages - so the failure arrives somewhere else
 * entirely, as a library function that says no for a reason of its own.
 *
 * The one that cost a day: a window procedure returning 0 to WM_NCCREATE makes
 * CreateWindowExW return NULL and set ERROR_NOT_ENOUGH_MEMORY, which reads as a
 * problem with the window and is a problem with the arena. Say it out loud.
 */
static void arena_failed(const char *verb)
{
    static volatile LONG said;
    if (InterlockedExchange(&said, 1)) return;
    fprintf(stderr,
        "[hybrid] a thread could not %s its callback arena (%u MB reserved, "
        "%u KB per frame).\n"
        "  Callbacks from real code into lifted code need one, so this thread\n"
        "  now returns 0 from every callback it is given. Where that surfaces\n"
        "  depends on who was calling: a window procedure answering 0 to\n"
        "  WM_NCCREATE turns into CreateWindowEx failing with\n"
        "  ERROR_NOT_ENOUGH_MEMORY and nothing at all in between.\n"
        "  A 32-bit process has 2 GB of address space and a game with a worker\n"
        "  pool has a lot of threads. Lower the arena size given to\n"
        "  hybrid_init() before lowering the frame size - only nesting depth\n"
        "  needs the arena, and every crossing needs the frame.\n",
        verb, (unsigned)(g_arena_bytes >> 20), (unsigned)(g_frame >> 10));
}

static uint64_t __cdecl r2l_helper(uint32_t ova, uint32_t this_, uint32_t *real_args,
                                   uint32_t ebx, uint32_t esi, uint32_t edi, uint32_t ebp)
{
    uint32_t save, argsp;
    hybrid_regs r;
    uint64_t ret;
    int i;

    /* The frame goes on a private arena, NOT on the real stack: the host's own
     * C frames (dispatch, the lifted function bodies) keep descending on the
     * real stack while the lifted code runs, and the two would interleave.
     * Per thread, so two threads crossing at once do not carve overlapping
     * frames out of the same one. */
    /* Reserved whole, committed a frame at a time. Committing it all up front
     * charged every thread that ever crossed the boundary for the deepest
     * nesting it might ever reach, and sixteen of those is most of a 32-bit
     * address space. */
    if (!t_arena) {
        t_arena = (uint8_t *)VirtualAlloc(NULL, g_arena_bytes,
                                          MEM_RESERVE, PAGE_READWRITE);
        if (!t_arena) { arena_failed("reserve"); return 0; }
        t_arena_top = t_arena_low = (uint32_t)(uintptr_t)(t_arena + g_arena_bytes);
        /* And a way to give it back. `__declspec(thread)` has no destructor,
         * so a thread that exits leaves its reservation behind forever - and a
         * game whose thread pool churns leaves dozens. Mario Kart reached 67
         * arenas at 15 MB, a gigabyte of a two-gigabyte address space, and the
         * symptom was `operator new` throwing std::bad_alloc with a 125 MB
         * working set: nothing was allocated, everything was reserved.
         *
         * FLS is the Win32 slot that does run a callback on thread exit. The
         * hot path still reads the TLS variable; this is only the funeral. */
        if (g_fls != FLS_OUT_OF_INDEXES) FlsSetValue(g_fls, t_arena);
        {   /* Named once per arena, so a memory map can be read against it:
             * "44 regions of 15 MB" is only an accusation until the addresses
             * match. */
            static volatile LONG n;
            LONG k = InterlockedIncrement(&n);
            fprintf(stderr, "[hybrid] arena %ld at %p, %u MB reserved "
                            "(thread %lu)\n", k, (void *)t_arena,
                    (unsigned)(g_arena_bytes >> 20), GetCurrentThreadId());
        }
    }
    save = t_arena_top;
    t_arena_top -= g_frame;
    if (t_arena_top < (uint32_t)(uintptr_t)t_arena) {
        t_arena_top = save;
        arena_failed("grow");      /* nested this deep - raise the arena size */
        return 0;
    }
    if (t_arena_top < t_arena_low) {
        if (!VirtualAlloc((LPVOID)(uintptr_t)t_arena_top,
                          t_arena_low - t_arena_top, MEM_COMMIT, PAGE_READWRITE)) {
            t_arena_top = save;
            arena_failed("commit");
            return 0;
        }
        t_arena_low = t_arena_top;
    }
    argsp = t_arena_top + g_frame - 0x100;

    for (i = 0; i < R2L_ARGS_COPIED; i++)
        *(uint32_t *)(uintptr_t)(argsp + 4 + i * 4) = real_args[i];
    *(uint32_t *)(uintptr_t)argsp = 0xDEADBEEFu;    /* fake return slot */

    memset(&r, 0, sizeof r);
    /* Seed every callee-saved register from the real caller, not just `this`:
     * some routed targets are thunks that use the caller's ebp (RULE 1 again,
     * from the other side of the boundary). */
    r.ecx = this_; r.ebx = ebx; r.esi = esi; r.edi = edi; r.ebp = ebp;
    r.esp = argsp;

    InterlockedIncrement((volatile LONG *)&g_r2l_calls);

    /* __finally, because a callback can leave without returning.
     *
     * Guest code throws, and the handler that catches it is somewhere further
     * out - so the unwind runs straight past this function and the line below
     * never executes. The frame is then never given back, the next crossing
     * carves a new one under it, and the arena walks downwards one throw at a
     * time until a forwarded call pushes into memory that was never committed.
     * That is unreportable: the kernel cannot push an exception frame onto a
     * stack that has just run out, so there is no handler, no filter and no
     * log - only a process that is suddenly gone.
     *
     * Mario Kart threw about three thousand times during its data load and ate
     * sixteen megabytes doing it. */
    __try {
        ret = g_invoke(ova, &r, real_args);
    } __finally {
        t_arena_top = save;
    }
    return ret;
}

__declspec(naked) static void r2l_common(void)
{
    __asm {
        push ebp
        mov  ebp, esp                  /* [ebp+4]=retaddr, [ebp+8]=arg0, [ebp]=caller ebp */
        push dword ptr [ebp]           /* caller's ebp, for ebp-relative thunks */
        push edi
        push esi
        push ebx
        lea  edx, [ebp+8]
        push edx                       /* real_args */
        push ecx                       /* this */
        push eax                       /* ova */
        call r2l_helper                /* edx:eax = pop:result */
        add  esp, 28                   /* clean 7 cdecl args */
        mov  ecx, edx                  /* ecx = arg bytes the callee cleaned */
        mov  edx, [ebp+4]              /* retaddr */
        mov  esp, ebp
        pop  ebp
        add  esp, 4                    /* pop retaddr */
        add  esp, ecx                  /* callee-cleans convention */
        jmp  edx                       /* return, eax = result */
    }
}

int hybrid_init(hybrid_invoke_fn invoke, uint32_t frame_bytes, uint32_t arena_bytes)
{
    if (!invoke) return 0;
    if (!frame_bytes) frame_bytes = 0x8000u;
    if (!arena_bytes) arena_bytes = 8u << 20;
    g_invoke = invoke;
    g_frame  = frame_bytes;
    /* Not allocated here: each thread takes its own on first crossing, and the
     * thread that calls hybrid_init is often not one of them. */
    g_arena_bytes = arena_bytes;
    g_fls = FlsAlloc(arena_released);   /* so a thread's arena dies with it */
    g_pool_size = 0x200000u;
    g_pool = (uint8_t *)VirtualAlloc(NULL, g_pool_size, MEM_RESERVE | MEM_COMMIT,
                                     PAGE_EXECUTE_READWRITE);
    /* Named because a fault "in private memory at 036E0000" is a mystery
     * until something says that region is the thunk pool. */
    if (g_pool)
        fprintf(stderr, "[hybrid] thunk pool at %p, %u KB; r2l_common at %p\n",
                (void *)g_pool, (unsigned)(g_pool_size >> 10),
                (void *)(uintptr_t)r2l_common);
    return g_pool != NULL;
}

uint32_t hybrid_thunk(uint32_t ova)
{
    uint8_t *s;
    size_t off;
    if (!g_pool) return 0;
    /* The pool is shared and append-only, so a bump is all the synchronisation
     * it needs - but it does need that much: two threads minting a thunk at
     * once would otherwise write two stubs over each other and both return the
     * same address. */
    off = (size_t)InterlockedExchangeAdd((volatile LONG *)&g_pool_off,
                                         R2L_STUB_BYTES);
    if (off + R2L_STUB_BYTES > g_pool_size) return 0;
    s = g_pool + off;
    s[0] = 0xB8; *(uint32_t *)(s + 1) = ova;                          /* mov eax, ova */
    s[5] = 0xE9; *(int32_t *)(s + 6) =
        (int32_t)((uint8_t *)r2l_common - (s + 10));                  /* jmp r2l_common */
    return (uint32_t)(uintptr_t)s;
}

int hybrid_thunk_target(uint32_t addr, uint32_t *out_ova)
{
    if (!g_pool) return 0;
    if (addr < (uint32_t)(uintptr_t)g_pool ||
        addr >= (uint32_t)(uintptr_t)g_pool + g_pool_off) return 0;
    if (out_ova) *out_ova = *(uint32_t *)(uintptr_t)(addr + 1);
    return 1;
}

unsigned long hybrid_r2l_calls(void) { return g_r2l_calls; }

/* ============================================================
 * vtable / function-pointer routing
 * ============================================================ */

#define HYBRID_MAX_SLOTS 65536
static uint32_t g_slot_ova[HYBRID_MAX_SLOTS];
static int      g_nslots;

uint32_t hybrid_slot_target(int slot_index)
{
    if (slot_index < 0 || slot_index >= g_nslots) return (uint32_t)-1;
    return g_slot_ova[slot_index];
}

int hybrid_route_fnptr_slots(void *image_base, int32_t image_delta,
                             hybrid_is_fn_start is_fn_start, int min_run,
                             int slot_lo, int slot_hi, int *out_total)
{
    uint8_t *base = (uint8_t *)image_base;
    PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)base;
    PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)(base + dos->e_lfanew);
    PIMAGE_SECTION_HEADER sec = IMAGE_FIRST_SECTION(nt);
    uint32_t b = (uint32_t)(uintptr_t)base, tlo = 0, thi = 0;
    int i, n = 0, routed = 0;

    if (min_run < 1) min_run = 3;

    for (i = 0; i < nt->FileHeader.NumberOfSections; i++)
        if (!memcmp(sec[i].Name, ".text", 5)) {
            tlo = b + sec[i].VirtualAddress;
            thi = tlo + sec[i].Misc.VirtualSize;
        }

    #define IS_FNPTR(v) ((v) >= tlo && (v) < thi && is_fn_start((v) - image_delta))

    for (i = 0; i < nt->FileHeader.NumberOfSections; i++) {
        uint32_t p, e;
        if (memcmp(sec[i].Name, ".rdata", 6) && memcmp(sec[i].Name, ".data", 5))
            continue;
        p = b + sec[i].VirtualAddress;
        e = p + sec[i].Misc.VirtualSize;
        while (p + 4 <= e) {
            uint32_t v = *(uint32_t *)(uintptr_t)p;
            if (IS_FNPTR(v)) {
                uint32_t q = p, r;
                int run = 0;
                while (q + 4 <= e && IS_FNPTR(*(uint32_t *)(uintptr_t)q)) { run++; q += 4; }
                if (run >= min_run) {
                    for (r = p; r < q; r += 4) {
                        uint32_t ova = *(uint32_t *)(uintptr_t)r - image_delta;
                        if (n < HYBRID_MAX_SLOTS) g_slot_ova[n] = ova;
                        if (n >= slot_lo && n < slot_hi) {
                            uint32_t t = hybrid_thunk(ova);
                            if (t) { *(uint32_t *)(uintptr_t)r = t; routed++; }
                        }
                        n++;
                    }
                }
                p = q;
            } else {
                p += 4;
            }
        }
    }
    #undef IS_FNPTR

    g_nslots = n;
    if (out_total) *out_total = n;
    FlushInstructionCache(GetCurrentProcess(), NULL, 0);
    return routed;
}

/* ---------------- the x87 stack across the boundary ---------------- */
/*
 * Why this is here and not in the caller: `__asm` is MSVC-x86-only and the
 * rest of the boundary already is, and because getting the depth right needs
 * fnstenv, which has a side effect - it masks every exception - that has to be
 * undone or the caller's FPU control word quietly changes under it.
 */

/* fnstenv writes a 28-byte environment; the tag word is at offset 8, two bits
 * per PHYSICAL register with 3 meaning empty. Physical and st(n) numbering
 * differ, but the count of non-empty registers is the same either way, and a
 * count is all a depth is. */
int hybrid_fpu_depth(void)
{
    unsigned char env[28];
    unsigned short tw;
    int i, live = 0;

    __asm {
        fnstenv [env]
        fldenv  [env]      /* fnstenv masks all exceptions; fldenv puts the
                              control word back exactly as it was */
    }
    tw = (unsigned short)(env[8] | (env[9] << 8));
    for (i = 0; i < 8; i++)
        if (((tw >> (2 * i)) & 3) != 3) live++;
    return live;
}

void hybrid_fpu_push(const double *st, int n)
{
    int i;
    if (n > 8) n = 8;
    /* Backwards, so st[0] is pushed last and ends up in st(0). That is the
     * order `_CIpow(x, y)` wants: y in st(0), x in st(1). */
    for (i = n - 1; i >= 0; i--) {
        double v = st[i];
        __asm { fld qword ptr [v] }
    }
}

double hybrid_fpu_pop(void)
{
    double v;
    __asm { fstp qword ptr [v] }
    return v;
}

/* Discard whatever is on the stack without touching the control word - fninit
 * would also reset rounding and precision, and a game that set 24-bit
 * precision (Direct3D used to, on every device create) would silently start
 * computing in 53. `ffree` marks a register empty; `fincstp` moves the top. */
void hybrid_fpu_clear(void)
{
    int i, n = hybrid_fpu_depth();
    for (i = 0; i < n; i++) {
        __asm {
            ffree st(0)
            fincstp
        }
    }
}
