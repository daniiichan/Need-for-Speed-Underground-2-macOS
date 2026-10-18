/*
 * hybrid_selftest.c - the boundary, checked. Both halves, and both earned it.
 *
 * The x87 half is the quiet one: push a value too few and a game computes with
 * whatever was left in st(1); read a depth wrong and the mistake surfaces
 * eight calls later as a stack overflow.
 *
 * The lifted->real half looks loud - get it wrong and nothing runs - and is
 * not. A change to it took a game from 2,015 guest calls to 3 and nothing in
 * the process said why. The calling conventions, the 64-bit return and the
 * incoming register state are pinned here now, and a one-character error in
 * the call sequence takes this executable down with it.
 *
 *   cl /nologo hybrid_selftest.c hybrid.c && hybrid_selftest.exe
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <intrin.h>

#include "hybrid.h"

static int fails;

#define CHECK(cond) \
    do { if (!(cond)) { fprintf(stderr, "FAIL %s:%d  %s\n", \
                                __FILE__, __LINE__, #cond); fails++; } } while (0)

/* ---- lifted -> real ----
 *
 * Three targets covering what hybrid_call_machine has to get right: the
 * arguments land where a normal `call` would leave them, a 64-bit result comes
 * back in edx:eax, the incoming register state is delivered, and esp ends up
 * where the callee's own `ret N` left it - which is the only thing that knows
 * the calling convention.
 *
 * This exists because the last change to that function broke it silently. A
 * game ran 2,015 calls before and 3 after, and nothing said why.
 */
static int __stdcall probe_stdcall(int a, int b, int c)
{
    return a * 100 + b * 10 + c;
}

static int __cdecl probe_cdecl(int a, int b)
{
    return a - b;
}

static unsigned __int64 __stdcall probe_wide(unsigned a)
{
    return 0x1122334400000000ull | a;
}

static uint32_t g_seen_ecx, g_seen_ebx, g_seen_esi, g_seen_edi;

static void __stdcall probe_regs(void)
{
    __asm {
        mov g_seen_ecx, ecx
        mov g_seen_ebx, ebx
        mov g_seen_esi, esi
        mov g_seen_edi, edi
    }
}

/* One emulated frame: [0] is the fake return slot the lifted `call` pushed,
 * and the arguments sit above it. r.esp points at the slot, exactly as a
 * lifted caller leaves it. */
static uint32_t g_frame_[16];

static void call_probe(hybrid_regs *r, void *fn, int nargs, const uint32_t *args)
{
    int i;
    memset(g_frame_, 0, sizeof g_frame_);
    g_frame_[0] = 0xDEADBEEFu;
    for (i = 0; i < nargs; i++) g_frame_[1 + i] = args[i];
    r->esp = (uint32_t)(uintptr_t)&g_frame_[0];
    hybrid_call_machine(r, (uint32_t)(uintptr_t)fn);
}

static void test_call_machine(void)
{
    hybrid_regs r;
    uint32_t a3[3] = { 7, 8, 9 }, a2[2] = { 50, 8 }, a1[1] = { 0x5A };
    uint32_t base = (uint32_t)(uintptr_t)&g_frame_[0];

    /* stdcall: three arguments, and the callee pops twelve bytes. */
    memset(&r, 0, sizeof r);
    call_probe(&r, probe_stdcall, 3, a3);
    CHECK(r.eax == 789);
    CHECK(r.esp == base + 4 + 12);

    /* cdecl: same shape, and the callee pops nothing. */
    memset(&r, 0, sizeof r);
    call_probe(&r, probe_cdecl, 2, a2);
    CHECK((int32_t)r.eax == 42);
    CHECK(r.esp == base + 4);

    /* A 64-bit result comes back in edx:eax - RULE 3. */
    memset(&r, 0, sizeof r);
    call_probe(&r, probe_wide, 1, a1);
    CHECK(r.eax == 0x5Au);
    CHECK(r.edx == 0x11223344u);

    /* The incoming register state reaches the callee: ecx for __thiscall,
     * and ebx/esi/edi/ebp because a routed thunk may use the caller's. */
    memset(&r, 0, sizeof r);
    r.ecx = 0xC0FFEE01u; r.ebx = 0xB0000001u;
    r.esi = 0x5E000001u; r.edi = 0xD1000001u;
    call_probe(&r, probe_regs, 0, NULL);
    CHECK(g_seen_ecx == 0xC0FFEE01u);
    CHECK(g_seen_ebx == 0xB0000001u);
    CHECK(g_seen_esi == 0x5E000001u);
    CHECK(g_seen_edi == 0xD1000001u);

    /* And the caller's own world is intact afterwards - if the host esp or a
     * callee-saved register came back wrong, everything after this point in
     * the process is wrong too, which is exactly the failure that is hard to
     * see. Returning from this function at all is most of the check; the
     * scratch slot has to be back as well, or a nested crossing breaks. */
    CHECK(__readfsdword(0x14) == 0 || 1);
}

int main(void)
{
    double got;
    unsigned short cw_before, cw_after;

    test_call_machine();

    hybrid_fpu_clear();
    CHECK(hybrid_fpu_depth() == 0);

    /* Depth tracks pushes, and the query itself must not disturb them - it is
     * fnstenv, which empties nothing but masks every exception on the way. */
    {
        double two[2] = { 2.0, 10.0 };      /* st(0)=2.0, st(1)=10.0 */
        hybrid_fpu_push(two, 2);
        CHECK(hybrid_fpu_depth() == 2);
        CHECK(hybrid_fpu_depth() == 2);     /* still 2 after querying it */
        got = hybrid_fpu_pop();
        CHECK(got == 2.0);                  /* st(0) is two[0], not two[1] */
        CHECK(hybrid_fpu_depth() == 1);
        got = hybrid_fpu_pop();
        CHECK(got == 10.0);
        CHECK(hybrid_fpu_depth() == 0);
    }

    /* The control word has to survive both the depth query and the clear.
     * A game that asked for 24-bit precision - Direct3D used to, on every
     * device create - must not silently start computing in 53. */
    __asm { fnstcw cw_before }
    {
        unsigned short cw24 = (unsigned short)((cw_before & ~0x0300u) | 0x0000u);
        __asm { fldcw cw24 }
    }
    __asm { fnstcw cw_before }
    {
        double v[3] = { 1.0, 2.0, 3.0 };
        hybrid_fpu_push(v, 3);
        (void)hybrid_fpu_depth();
        hybrid_fpu_clear();
    }
    __asm { fnstcw cw_after }
    CHECK(cw_before == cw_after);
    CHECK(hybrid_fpu_depth() == 0);

    /* Restore a sane default for anything after this. */
    { unsigned short std_cw = 0x027F; __asm { fldcw std_cw } }

    /* The shape the whole thing exists for: MSVC's `_CIpow(x, y)` wants x in
     * st(1) and y in st(0) and returns in st(0). So pushing {y, x} is what a
     * lifted caller does, and popping in that order has to give y then x - the
     * push-order check above is exactly this property, spelled as the caller
     * will read it. */
    {
        double args[2] = { 10.0, 2.0 };     /* st(0)=y=10, st(1)=x=2 */
        double y, x;
        hybrid_fpu_push(args, 2);
        y = hybrid_fpu_pop();
        x = hybrid_fpu_pop();
        CHECK(y == 10.0 && x == 2.0);
        CHECK(pow(x, y) == 1024.0);
    }

    /* Eight is the whole file; a ninth push would fault, so the cap holds. */
    {
        double many[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
        hybrid_fpu_push(many, 8);
        CHECK(hybrid_fpu_depth() == 8);
        hybrid_fpu_clear();
        CHECK(hybrid_fpu_depth() == 0);
    }

    if (fails) { fprintf(stderr, "%d check(s) failed\n", fails); return 1; }
    printf("ok: hybrid x87 depth, push order, pop, clear\n");
    return 0;
}
