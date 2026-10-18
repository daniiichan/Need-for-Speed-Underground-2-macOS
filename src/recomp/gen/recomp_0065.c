/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_00777E04(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E04u);

    goto L_00777E04;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777E04:
    eax = 0x007E3294u; /* 0x00777E04: mov eax, 0x7e3294 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777E09: jmp 0x75bfd2 */

}

void sub_00777E10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E10u);

L_00777E10:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00777E10: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00777E13: jmp 0x510d40 */

}

void sub_00777E18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E18u);

L_00777E18:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00777E18: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00777E1B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00777E1E: jmp 0x4cbba0 */

}

void sub_00777E23(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E23u);

L_00777E23:
    ecx = ebp + (-0x18); /* 0x00777E23: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x00504950u); RECOMP_RETURN(); /* 0x00777E26: jmp 0x504950 */

}

void sub_00777E2B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E2Bu);

    goto L_00777E2B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777E2B:
    eax = 0x007E32C8u; /* 0x00777E2B: mov eax, 0x7e32c8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777E30: jmp 0x75bfd2 */

}

void sub_00777E40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E40u);

L_00777E40:
    PUSH32(esp, 0); /* 0x00777E40: push 0 */
    PUSH32(esp, 0x0079CB9Cu); /* 0x00777E42: push 0x79cb9c */
    eax = MEM32(ebp + (-0x10)); /* 0x00777E47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777E4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777E4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777E50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777E53: ret  */

}

void sub_00777E54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E54u);

    goto L_00777E54;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777E54:
    eax = 0x007E32ECu; /* 0x00777E54: mov eax, 0x7e32ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777E59: jmp 0x75bfd2 */

}

void sub_00777E60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E60u);

L_00777E60:
    ecx = MEM32(ebp + (-0x10)); /* 0x00777E60: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0051AB10u); RECOMP_RETURN(); /* 0x00777E63: jmp 0x51ab10 */

}

void sub_00777E68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E68u);

L_00777E68:
    ecx = MEM32(ebp + (-0x10)); /* 0x00777E68: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x00777E6B: add ecx, 0x34 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052C420u); RECOMP_RETURN(); /* 0x00777E6E: jmp 0x52c420 */

}

void sub_00777E73(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E73u);

L_00777E73:
    ecx = MEM32(ebp + (-0x10)); /* 0x00777E73: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x44u; /* 0x00777E76: add ecx, 0x44 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052C420u); RECOMP_RETURN(); /* 0x00777E79: jmp 0x52c420 */

}

void sub_00777E7E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E7Eu);

L_00777E7E:
    eax = MEM32(ebp + 0x4); /* 0x00777E7E: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00777E81: push eax */
    RECOMP_CALL(sub_0052B9C0); /* 0x00777E82: call 0x52b9c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00777E87: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777E88: ret  */

}

void sub_00777E89(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777E89u);

    goto L_00777E89;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777E89:
    eax = 0x007E3328u; /* 0x00777E89: mov eax, 0x7e3328 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777E8E: jmp 0x75bfd2 */

}

void sub_00777EA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777EA0u);

L_00777EA0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00777EA0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0052AF90u); RECOMP_RETURN(); /* 0x00777EA3: jmp 0x52af90 */

}

void sub_00777EA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777EA8u);

L_00777EA8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00777EA8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x00777EAB: add ecx, 0x5c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052C420u); RECOMP_RETURN(); /* 0x00777EAE: jmp 0x52c420 */

}

void sub_00777EB3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777EB3u);

    goto L_00777EB3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777EB3:
    eax = 0x007E3378u; /* 0x00777EB3: mov eax, 0x7e3378 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777EB8: jmp 0x75bfd2 */

}

void sub_00777EC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777EC0u);

L_00777EC0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00777EC0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0052AF90u); RECOMP_RETURN(); /* 0x00777EC3: jmp 0x52af90 */

}

void sub_00777EC8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777EC8u);

L_00777EC8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00777EC8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x00777ECB: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0050D390u); RECOMP_RETURN(); /* 0x00777ECE: jmp 0x50d390 */

}

void sub_00777ED3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777ED3u);

    goto L_00777ED3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777ED3:
    eax = 0x007E33A4u; /* 0x00777ED3: mov eax, 0x7e33a4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777ED8: jmp 0x75bfd2 */

}

void sub_00777EE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777EE0u);

L_00777EE0:
    PUSH32(esp, 0); /* 0x00777EE0: push 0 */
    PUSH32(esp, 0x0079CBACu); /* 0x00777EE2: push 0x79cbac */
    eax = MEM32(ebp + (-0x10)); /* 0x00777EE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777EEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777EEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777EF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777EF3: ret  */

}

void sub_00777EF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777EF4u);

    goto L_00777EF4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777EF4:
    eax = 0x007E33C8u; /* 0x00777EF4: mov eax, 0x7e33c8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777EF9: jmp 0x75bfd2 */

}

void sub_00777F00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F00u);

L_00777F00:
    PUSH32(esp, 0); /* 0x00777F00: push 0 */
    PUSH32(esp, 0x0079CBC4u); /* 0x00777F02: push 0x79cbc4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00777F07: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777F0A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777F0B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777F10: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777F13: ret  */

}

void sub_00777F14(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F14u);

    goto L_00777F14;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777F14:
    eax = 0x007E33ECu; /* 0x00777F14: mov eax, 0x7e33ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777F19: jmp 0x75bfd2 */

}

void sub_00777F20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F20u);

L_00777F20:
    PUSH32(esp, 0); /* 0x00777F20: push 0 */
    PUSH32(esp, 0x0079CBD4u); /* 0x00777F22: push 0x79cbd4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00777F27: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777F2A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777F2B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777F30: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777F33: ret  */

}

void sub_00777F34(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F34u);

    goto L_00777F34;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777F34:
    eax = 0x007E3410u; /* 0x00777F34: mov eax, 0x7e3410 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777F39: jmp 0x75bfd2 */

}

void sub_00777F40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F40u);

L_00777F40:
    PUSH32(esp, 0); /* 0x00777F40: push 0 */
    PUSH32(esp, 0x0079CBE8u); /* 0x00777F42: push 0x79cbe8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00777F47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777F4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777F4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777F50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777F53: ret  */

}

void sub_00777F54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F54u);

    goto L_00777F54;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777F54:
    eax = 0x007E3434u; /* 0x00777F54: mov eax, 0x7e3434 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777F59: jmp 0x75bfd2 */

}

void sub_00777F60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F60u);

L_00777F60:
    PUSH32(esp, 0); /* 0x00777F60: push 0 */
    PUSH32(esp, 0x0079CBF8u); /* 0x00777F62: push 0x79cbf8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00777F67: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777F6A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777F6B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777F70: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777F73: ret  */

}

void sub_00777F74(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F74u);

    goto L_00777F74;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777F74:
    eax = 0x007E3458u; /* 0x00777F74: mov eax, 0x7e3458 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777F79: jmp 0x75bfd2 */

}

void sub_00777F80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F80u);

L_00777F80:
    PUSH32(esp, 0); /* 0x00777F80: push 0 */
    PUSH32(esp, 0x0079CC0Cu); /* 0x00777F82: push 0x79cc0c */
    eax = MEM32(ebp + (-0x10)); /* 0x00777F87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777F8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777F8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777F90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777F93: ret  */

}

void sub_00777F94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777F94u);

    goto L_00777F94;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777F94:
    eax = 0x007E347Cu; /* 0x00777F94: mov eax, 0x7e347c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777F99: jmp 0x75bfd2 */

}

void sub_00777FA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777FA0u);

L_00777FA0:
    PUSH32(esp, 0); /* 0x00777FA0: push 0 */
    PUSH32(esp, 0x0079CC20u); /* 0x00777FA2: push 0x79cc20 */
    eax = MEM32(ebp + (-0x10)); /* 0x00777FA7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777FAA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777FAB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777FB0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777FB3: ret  */

}

void sub_00777FB4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777FB4u);

    goto L_00777FB4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777FB4:
    eax = 0x007E34A0u; /* 0x00777FB4: mov eax, 0x7e34a0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777FB9: jmp 0x75bfd2 */

}

void sub_00777FC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777FC0u);

L_00777FC0:
    PUSH32(esp, 0); /* 0x00777FC0: push 0 */
    PUSH32(esp, 0x0079CC50u); /* 0x00777FC2: push 0x79cc50 */
    eax = MEM32(ebp + (-0x10)); /* 0x00777FC7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777FCA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777FCB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777FD0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777FD3: ret  */

}

void sub_00777FD4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777FD4u);

    goto L_00777FD4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777FD4:
    eax = 0x007E34C4u; /* 0x00777FD4: mov eax, 0x7e34c4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777FD9: jmp 0x75bfd2 */

}

void sub_00777FE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777FE0u);

L_00777FE0:
    PUSH32(esp, 0); /* 0x00777FE0: push 0 */
    PUSH32(esp, 0x0079CC60u); /* 0x00777FE2: push 0x79cc60 */
    eax = MEM32(ebp + (-0x10)); /* 0x00777FE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00777FEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00777FEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00777FF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00777FF3: ret  */

}

void sub_00777FF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00777FF4u);

    goto L_00777FF4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00777FF4:
    eax = 0x007E34E8u; /* 0x00777FF4: mov eax, 0x7e34e8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00777FF9: jmp 0x75bfd2 */

}

void sub_00778000(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778000u);

L_00778000:
    PUSH32(esp, 0); /* 0x00778000: push 0 */
    PUSH32(esp, 0x0079CC70u); /* 0x00778002: push 0x79cc70 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778007: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077800A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077800B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778010: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778013: ret  */

}

void sub_00778014(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778014u);

    goto L_00778014;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778014:
    eax = 0x007E350Cu; /* 0x00778014: mov eax, 0x7e350c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778019: jmp 0x75bfd2 */

}

void sub_00778020(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778020u);

L_00778020:
    PUSH32(esp, 0); /* 0x00778020: push 0 */
    PUSH32(esp, 0x0079CC80u); /* 0x00778022: push 0x79cc80 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778027: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077802A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077802B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778030: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778033: ret  */

}

void sub_00778034(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778034u);

    goto L_00778034;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778034:
    eax = 0x007E3530u; /* 0x00778034: mov eax, 0x7e3530 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778039: jmp 0x75bfd2 */

}

void sub_00778040(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778040u);

L_00778040:
    PUSH32(esp, 0); /* 0x00778040: push 0 */
    PUSH32(esp, 0x0079CC90u); /* 0x00778042: push 0x79cc90 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778047: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077804A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077804B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778050: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778053: ret  */

}

void sub_00778054(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778054u);

    goto L_00778054;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778054:
    eax = 0x007E3554u; /* 0x00778054: mov eax, 0x7e3554 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778059: jmp 0x75bfd2 */

}

void sub_00778060(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778060u);

L_00778060:
    eax = MEM32(ebp + (-0x10)); /* 0x00778060: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778063: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00778064: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778069: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077806A: ret  */

}

void sub_0077806B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077806Bu);

    goto L_0077806B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077806B:
    eax = 0x007E3578u; /* 0x0077806B: mov eax, 0x7e3578 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778070: jmp 0x75bfd2 */

}

void sub_00778080(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778080u);

L_00778080:
    eax = MEM32(ebp + 0x8); /* 0x00778080: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00778083: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00778084: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778089: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077808A: ret  */

}

void sub_0077808B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077808Bu);

    goto L_0077808B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077808B:
    eax = 0x007E359Cu; /* 0x0077808B: mov eax, 0x7e359c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778090: jmp 0x75bfd2 */

}

void sub_007780A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007780A0u);

L_007780A0:
    PUSH32(esp, 0); /* 0x007780A0: push 0 */
    PUSH32(esp, 0x0079CCA0u); /* 0x007780A2: push 0x79cca0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007780A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007780AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007780AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007780B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007780B3: ret  */

}

void sub_007780B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007780B4u);

    goto L_007780B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007780B4:
    eax = 0x007E35C0u; /* 0x007780B4: mov eax, 0x7e35c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007780B9: jmp 0x75bfd2 */

}

void sub_007780C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007780C0u);

L_007780C0:
    PUSH32(esp, 0); /* 0x007780C0: push 0 */
    PUSH32(esp, 0x0079CD50u); /* 0x007780C2: push 0x79cd50 */
    eax = MEM32(ebp + (-0x10)); /* 0x007780C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007780CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007780CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007780D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007780D3: ret  */

}

void sub_007780D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007780D4u);

    goto L_007780D4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007780D4:
    eax = 0x007E3608u; /* 0x007780D4: mov eax, 0x7e3608 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007780D9: jmp 0x75bfd2 */

}

void sub_007780E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007780E0u);

L_007780E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007780E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x007780E3: jmp 0x4defb0 */

}

void sub_007780E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007780E8u);

L_007780E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007780E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x154u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x154u; /* 0x007780EB: add ecx, 0x154 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x007780F1: jmp 0x49d870 */

}

void sub_007780F6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007780F6u);

    goto L_007780F6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007780F6:
    eax = 0x007E3634u; /* 0x007780F6: mov eax, 0x7e3634 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007780FB: jmp 0x75bfd2 */

}

void sub_00778100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778100u);

L_00778100:
    ecx = MEM32(ebp + (-0x904)); /* 0x00778100: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x00778106: jmp 0x4defb0 */

}

void sub_0077810B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077810Bu);

L_0077810B:
    ecx = ebp + (-0x900); /* 0x0077810B: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00778111: jmp 0x401800 */

}

void sub_00778116(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778116u);

    goto L_00778116;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778116:
    eax = 0x007E3660u; /* 0x00778116: mov eax, 0x7e3660 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077811B: jmp 0x75bfd2 */

}

void sub_00778120(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778120u);

L_00778120:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778120: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00778123: jmp 0x510d40 */

}

void sub_00778128(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778128u);

L_00778128:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778128: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x0077812B: add ecx, 0x54 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077812E: jmp 0x4957a0 */

}

void sub_00778133(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778133u);

L_00778133:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778133: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x98u; /* 0x00778136: add ecx, 0x98 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077813C: jmp 0x4957a0 */

}

void sub_00778141(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778141u);

L_00778141:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778141: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xDCu; /* 0x00778144: add ecx, 0xdc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077814A: jmp 0x4957a0 */

}

void sub_0077814F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077814Fu);

    goto L_0077814F;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077814F:
    eax = 0x007E369Cu; /* 0x0077814F: mov eax, 0x7e369c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778154: jmp 0x75bfd2 */

}

void sub_00778160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778160u);

L_00778160:
    PUSH32(esp, 0); /* 0x00778160: push 0 */
    PUSH32(esp, 0x0079D278u); /* 0x00778162: push 0x79d278 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778167: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077816A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077816B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778170: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778173: ret  */

}

void sub_00778174(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778174u);

    goto L_00778174;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778174:
    eax = 0x007E36C0u; /* 0x00778174: mov eax, 0x7e36c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778179: jmp 0x75bfd2 */

}

void sub_00778180(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778180u);

L_00778180:
    PUSH32(esp, 0); /* 0x00778180: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x00778182: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x00778187: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077818A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077818B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778190: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778193: ret  */

}

void sub_00778194(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778194u);

L_00778194:
    PUSH32(esp, 0); /* 0x00778194: push 0 */
    PUSH32(esp, 0x0079D2A8u); /* 0x00778196: push 0x79d2a8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077819B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077819E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077819F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007781A4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007781A7: ret  */

}

void sub_007781A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007781A8u);

L_007781A8:
    PUSH32(esp, 0); /* 0x007781A8: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x007781AA: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x007781AF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007781B2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007781B3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007781B8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007781BB: ret  */

}

void sub_007781BC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007781BCu);

L_007781BC:
    PUSH32(esp, 0); /* 0x007781BC: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x007781BE: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x007781C3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007781C6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007781C7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007781CC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007781CF: ret  */

}

void sub_007781D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007781D0u);

L_007781D0:
    PUSH32(esp, 0); /* 0x007781D0: push 0 */
    PUSH32(esp, 0x0079D2A8u); /* 0x007781D2: push 0x79d2a8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007781D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007781DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007781DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007781E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007781E3: ret  */

}

void sub_007781E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007781E4u);

L_007781E4:
    PUSH32(esp, 0); /* 0x007781E4: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x007781E6: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x007781EB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007781EE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007781EF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007781F4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007781F7: ret  */

}

void sub_007781F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007781F8u);

L_007781F8:
    PUSH32(esp, 0); /* 0x007781F8: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x007781FA: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x007781FF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778202: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778203: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778208: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077820B: ret  */

}

void sub_0077820C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077820Cu);

L_0077820C:
    PUSH32(esp, 0); /* 0x0077820C: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x0077820E: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x00778213: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778216: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778217: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077821C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077821F: ret  */

}

void sub_00778220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778220u);

L_00778220:
    PUSH32(esp, 0); /* 0x00778220: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x00778222: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x00778227: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077822A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077822B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778230: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778233: ret  */

}

void sub_00778234(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778234u);

L_00778234:
    PUSH32(esp, 0); /* 0x00778234: push 0 */
    PUSH32(esp, 0x0079D290u); /* 0x00778236: push 0x79d290 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077823B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077823E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077823F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778244: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778247: ret  */

}

void sub_00778248(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778248u);

L_00778248:
    PUSH32(esp, 0); /* 0x00778248: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x0077824A: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077824F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778252: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778253: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778258: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077825B: ret  */

}

void sub_0077825C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077825Cu);

L_0077825C:
    PUSH32(esp, 0); /* 0x0077825C: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x0077825E: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x00778263: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778266: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778267: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077826C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077826F: ret  */

}

void sub_00778270(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778270u);

L_00778270:
    PUSH32(esp, 0); /* 0x00778270: push 0 */
    PUSH32(esp, 0x0079BE5Cu); /* 0x00778272: push 0x79be5c */
    eax = MEM32(ebp + (-0x10)); /* 0x00778277: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077827A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077827B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778280: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778283: ret  */

}

void sub_00778284(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778284u);

    goto L_00778284;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778284:
    eax = 0x007E3794u; /* 0x00778284: mov eax, 0x7e3794 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778289: jmp 0x75bfd2 */

}

void sub_00778290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778290u);

L_00778290:
    PUSH32(esp, 0); /* 0x00778290: push 0 */
    PUSH32(esp, 0x0079D2BCu); /* 0x00778292: push 0x79d2bc */
    eax = MEM32(ebp + (-0x10)); /* 0x00778297: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077829A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077829B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007782A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007782A3: ret  */

}

void sub_007782A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007782A4u);

    goto L_007782A4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007782A4:
    eax = 0x007E37B8u; /* 0x007782A4: mov eax, 0x7e37b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007782A9: jmp 0x75bfd2 */

}

void sub_007782B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007782B0u);

L_007782B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007782B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x007782B3: jmp 0x4defb0 */

}

void sub_007782B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007782B8u);

L_007782B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007782B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x150u; /* 0x007782BB: add ecx, 0x150 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x007782C1: jmp 0x4358e0 */

}

void sub_007782C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007782C6u);

L_007782C6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007782C6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x164u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x164u; /* 0x007782C9: add ecx, 0x164 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x007782CF: jmp 0x4957a0 */

}

void sub_007782D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007782D4u);

L_007782D4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007782D4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1B0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1B0u; /* 0x007782D7: add ecx, 0x1b0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x007782DD: jmp 0x4957a0 */

}

void sub_007782E2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007782E2u);

L_007782E2:
    ecx = MEM32(ebp + (-0x10)); /* 0x007782E2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1FCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1FCu; /* 0x007782E5: add ecx, 0x1fc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x007782EB: jmp 0x4957a0 */

}

void sub_007782F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007782F0u);

    goto L_007782F0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007782F0:
    eax = 0x007E37FCu; /* 0x007782F0: mov eax, 0x7e37fc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007782F5: jmp 0x75bfd2 */

}

void sub_00778300(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778300u);

L_00778300:
    PUSH32(esp, 0); /* 0x00778300: push 0 */
    PUSH32(esp, 0x0079D2F4u); /* 0x00778302: push 0x79d2f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778307: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077830A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077830B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778310: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778313: ret  */

}

void sub_00778314(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778314u);

    goto L_00778314;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778314:
    eax = 0x007E3820u; /* 0x00778314: mov eax, 0x7e3820 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778319: jmp 0x75bfd2 */

}

void sub_00778320(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778320u);

L_00778320:
    PUSH32(esp, 0); /* 0x00778320: push 0 */
    PUSH32(esp, 0x0079D384u); /* 0x00778322: push 0x79d384 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778327: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077832A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077832B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778330: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778333: ret  */

}

void sub_00778334(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778334u);

    goto L_00778334;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778334:
    eax = 0x007E3868u; /* 0x00778334: mov eax, 0x7e3868 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778339: jmp 0x75bfd2 */

}

void sub_00778340(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778340u);

L_00778340:
    PUSH32(esp, 0); /* 0x00778340: push 0 */
    PUSH32(esp, 0x0079D398u); /* 0x00778342: push 0x79d398 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778347: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077834A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077834B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778350: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778353: ret  */

}

void sub_00778354(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778354u);

    goto L_00778354;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778354:
    eax = 0x007E388Cu; /* 0x00778354: mov eax, 0x7e388c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778359: jmp 0x75bfd2 */

}

void sub_00778360(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778360u);

L_00778360:
    PUSH32(esp, 0); /* 0x00778360: push 0 */
    PUSH32(esp, 0x0079D3CCu); /* 0x00778362: push 0x79d3cc */
    eax = MEM32(ebp + (-0x10)); /* 0x00778367: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077836A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077836B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778370: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778373: ret  */

}

void sub_00778374(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778374u);

    goto L_00778374;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778374:
    eax = 0x007E38B0u; /* 0x00778374: mov eax, 0x7e38b0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778379: jmp 0x75bfd2 */

}

void sub_00778380(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778380u);

L_00778380:
    PUSH32(esp, 0); /* 0x00778380: push 0 */
    PUSH32(esp, 0x0079D690u); /* 0x00778382: push 0x79d690 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778387: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077838A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077838B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778390: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778393: ret  */

}

void sub_00778394(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778394u);

    goto L_00778394;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778394:
    eax = 0x007E38D4u; /* 0x00778394: mov eax, 0x7e38d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778399: jmp 0x75bfd2 */

}

void sub_007783A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007783A0u);

L_007783A0:
    PUSH32(esp, 0); /* 0x007783A0: push 0 */
    PUSH32(esp, 0x0079D6B4u); /* 0x007783A2: push 0x79d6b4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007783A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007783AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007783AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007783B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007783B3: ret  */

}

void sub_007783B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007783B4u);

    goto L_007783B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007783B4:
    eax = 0x007E38F8u; /* 0x007783B4: mov eax, 0x7e38f8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007783B9: jmp 0x75bfd2 */

}

void sub_007783C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007783C0u);

L_007783C0:
    PUSH32(esp, 0); /* 0x007783C0: push 0 */
    PUSH32(esp, 0x0079D6C8u); /* 0x007783C2: push 0x79d6c8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007783C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007783CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007783CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007783D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007783D3: ret  */

}

void sub_007783D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007783D4u);

    goto L_007783D4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007783D4:
    eax = 0x007E391Cu; /* 0x007783D4: mov eax, 0x7e391c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007783D9: jmp 0x75bfd2 */

}

void sub_007783E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007783E0u);

L_007783E0:
    PUSH32(esp, 0); /* 0x007783E0: push 0 */
    PUSH32(esp, 0x0079D6DCu); /* 0x007783E2: push 0x79d6dc */
    eax = MEM32(ebp + (-0x10)); /* 0x007783E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007783EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007783EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007783F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007783F3: ret  */

}

void sub_007783F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007783F4u);

    goto L_007783F4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007783F4:
    eax = 0x007E3940u; /* 0x007783F4: mov eax, 0x7e3940 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007783F9: jmp 0x75bfd2 */

}

void sub_00778400(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778400u);

L_00778400:
    PUSH32(esp, 0); /* 0x00778400: push 0 */
    PUSH32(esp, 0x0079D6F4u); /* 0x00778402: push 0x79d6f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778407: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077840A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077840B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778410: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778413: ret  */

}

void sub_00778414(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778414u);

    goto L_00778414;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778414:
    eax = 0x007E3964u; /* 0x00778414: mov eax, 0x7e3964 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778419: jmp 0x75bfd2 */

}

void sub_00778420(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778420u);

L_00778420:
    PUSH32(esp, 0); /* 0x00778420: push 0 */
    PUSH32(esp, 0x0079D708u); /* 0x00778422: push 0x79d708 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778427: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077842A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077842B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778430: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778433: ret  */

}

void sub_00778434(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778434u);

    goto L_00778434;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778434:
    eax = 0x007E3988u; /* 0x00778434: mov eax, 0x7e3988 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778439: jmp 0x75bfd2 */

}

void sub_00778440(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778440u);

L_00778440:
    ecx = MEM32(ebp + (-0x904)); /* 0x00778440: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00778446: jmp 0x510d40 */

}

void sub_0077844B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077844Bu);

L_0077844B:
    ecx = MEM32(ebp + (-0x904)); /* 0x0077844B: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00778451: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x00778454: jmp 0x52ea90 */

}

void sub_00778459(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778459u);

L_00778459:
    ecx = MEM32(ebp + (-0x904)); /* 0x00778459: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB0u; /* 0x0077845F: add ecx, 0xb0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x00778465: jmp 0x52ea90 */

}

void sub_0077846A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077846Au);

L_0077846A:
    ecx = ebp + (-0x900); /* 0x0077846A: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00778470: jmp 0x401800 */

}

void sub_00778475(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778475u);

    goto L_00778475;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778475:
    eax = 0x007E39C4u; /* 0x00778475: mov eax, 0x7e39c4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077847A: jmp 0x75bfd2 */

}

void sub_00778480(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778480u);

L_00778480:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778480: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00778483: jmp 0x510d40 */

}

void sub_00778488(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778488u);

L_00778488:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778488: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077848B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x0077848E: jmp 0x52ea90 */

}

void sub_00778493(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778493u);

    goto L_00778493;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778493:
    eax = 0x007E39F0u; /* 0x00778493: mov eax, 0x7e39f0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778498: jmp 0x75bfd2 */

}

void sub_007784A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007784A0u);

L_007784A0:
    PUSH32(esp, 0); /* 0x007784A0: push 0 */
    PUSH32(esp, 0x0079D7B8u); /* 0x007784A2: push 0x79d7b8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007784A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007784AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007784AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007784B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007784B3: ret  */

}

void sub_007784B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007784B4u);

    goto L_007784B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007784B4:
    eax = 0x007E3A40u; /* 0x007784B4: mov eax, 0x7e3a40 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007784B9: jmp 0x75bfd2 */

}

void sub_007784C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007784C0u);

L_007784C0:
    ecx = ebp + (-0x14); /* 0x007784C0: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007784C3: jmp 0x4def30 */

}

void sub_007784C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007784C8u);

L_007784C8:
    PUSH32(esp, 0); /* 0x007784C8: push 0 */
    PUSH32(esp, 0x0079D7A0u); /* 0x007784CA: push 0x79d7a0 */
    eax = MEM32(ebp + (-0x18)); /* 0x007784CF: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007784D2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007784D3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007784D8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007784DB: ret  */

}

void sub_007784DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007784DCu);

    goto L_007784DC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007784DC:
    eax = 0x007E3A1Cu; /* 0x007784DC: mov eax, 0x7e3a1c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007784E1: jmp 0x75bfd2 */

}

void sub_007784F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007784F0u);

L_007784F0:
    ecx = ebp + (-0x20); /* 0x007784F0: lea ecx, [ebp - 0x20] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007784F3: jmp 0x4def30 */

}

void sub_007784F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007784F8u);

L_007784F8:
    ecx = ebp + (-0x18); /* 0x007784F8: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007784FB: jmp 0x4def30 */

}

void sub_00778500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778500u);

    goto L_00778500;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778500:
    eax = 0x007E3A6Cu; /* 0x00778500: mov eax, 0x7e3a6c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778505: jmp 0x75bfd2 */

}

void sub_00778510(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778510u);

L_00778510:
    ecx = MEM32(ebp + (-0x904)); /* 0x00778510: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00778516: jmp 0x510d40 */

}

void sub_0077851B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077851Bu);

L_0077851B:
    ecx = ebp + (-0x8F0); /* 0x0077851B: lea ecx, [ebp - 0x8f0] */
    RECOMP_ITAIL(0x004017F0u); RECOMP_RETURN(); /* 0x00778521: jmp 0x4017f0 */

}

void sub_00778526(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778526u);

L_00778526:
    ecx = ebp + (-0x900); /* 0x00778526: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x0077852C: jmp 0x401800 */

}

void sub_00778531(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778531u);

    goto L_00778531;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778531:
    eax = 0x007E3AA0u; /* 0x00778531: mov eax, 0x7e3aa0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778536: jmp 0x75bfd2 */

}

void sub_00778540(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778540u);

L_00778540:
    PUSH32(esp, 0); /* 0x00778540: push 0 */
    PUSH32(esp, 0x0079D860u); /* 0x00778542: push 0x79d860 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778547: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077854A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077854B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778550: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778553: ret  */

}

void sub_00778554(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778554u);

    goto L_00778554;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778554:
    eax = 0x007E3AC4u; /* 0x00778554: mov eax, 0x7e3ac4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778559: jmp 0x75bfd2 */

}

void sub_00778560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778560u);

L_00778560:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778560: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x00778563: jmp 0x4defb0 */

}

void sub_00778568(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778568u);

L_00778568:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778568: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x150u; /* 0x0077856B: add ecx, 0x150 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x00778571: jmp 0x52ea90 */

}

void sub_00778576(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778576u);

    goto L_00778576;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778576:
    eax = 0x007E3B14u; /* 0x00778576: mov eax, 0x7e3b14 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077857B: jmp 0x75bfd2 */

}

void sub_00778580(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778580u);

L_00778580:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778580: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x00778583: jmp 0x4cbc30 */

}

void sub_00778588(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778588u);

L_00778588:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778588: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14Cu; /* 0x0077858B: add ecx, 0x14c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x00778591: jmp 0x4957a0 */

}

void sub_00778596(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778596u);

L_00778596:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778596: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x198u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x198u; /* 0x00778599: add ecx, 0x198 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077859F: jmp 0x4957a0 */

}

void sub_007785A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785A4u);

    goto L_007785A4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007785A4:
    eax = 0x007E3B6Cu; /* 0x007785A4: mov eax, 0x7e3b6c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007785A9: jmp 0x75bfd2 */

}

void sub_007785B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785B0u);

L_007785B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007785B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x007785B3: jmp 0x4defb0 */

}

void sub_007785B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785B8u);

L_007785B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007785B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x158u; /* 0x007785BB: add ecx, 0x158 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007785C1: jmp 0x4def30 */

}

void sub_007785C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785C6u);

L_007785C6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007785C6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x160u; /* 0x007785C9: add ecx, 0x160 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007785CF: jmp 0x4def30 */

}

void sub_007785D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785D4u);

    goto L_007785D4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007785D4:
    eax = 0x007E3BA0u; /* 0x007785D4: mov eax, 0x7e3ba0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007785D9: jmp 0x75bfd2 */

}

void sub_007785E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785E0u);

L_007785E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007785E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x007785E3: jmp 0x4defb0 */

}

void sub_007785E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785E8u);

L_007785E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007785E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x158u; /* 0x007785EB: add ecx, 0x158 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007785F1: jmp 0x4def30 */

}

void sub_007785F6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007785F6u);

    goto L_007785F6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007785F6:
    eax = 0x007E3BCCu; /* 0x007785F6: mov eax, 0x7e3bcc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007785FB: jmp 0x75bfd2 */

}

void sub_00778600(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778600u);

L_00778600:
    PUSH32(esp, 0); /* 0x00778600: push 0 */
    PUSH32(esp, 0x0079D908u); /* 0x00778602: push 0x79d908 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778607: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077860A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077860B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778610: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778613: ret  */

}

void sub_00778614(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778614u);

    goto L_00778614;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778614:
    eax = 0x007E3BF0u; /* 0x00778614: mov eax, 0x7e3bf0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778619: jmp 0x75bfd2 */

}

void sub_00778620(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778620u);

L_00778620:
    PUSH32(esp, 0); /* 0x00778620: push 0 */
    PUSH32(esp, 0x0079D91Cu); /* 0x00778622: push 0x79d91c */
    eax = MEM32(ebp + (-0x10)); /* 0x00778627: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077862A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077862B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778630: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778633: ret  */

}

void sub_00778634(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778634u);

    goto L_00778634;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778634:
    eax = 0x007E3C14u; /* 0x00778634: mov eax, 0x7e3c14 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778639: jmp 0x75bfd2 */

}

void sub_00778640(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778640u);

L_00778640:
    PUSH32(esp, 0); /* 0x00778640: push 0 */
    PUSH32(esp, 0x0079D928u); /* 0x00778642: push 0x79d928 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778647: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077864A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077864B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778650: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778653: ret  */

}

void sub_00778654(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778654u);

    goto L_00778654;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778654:
    eax = 0x007E3C38u; /* 0x00778654: mov eax, 0x7e3c38 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778659: jmp 0x75bfd2 */

}

void sub_00778660(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778660u);

L_00778660:
    PUSH32(esp, 0); /* 0x00778660: push 0 */
    PUSH32(esp, 0x0079D93Cu); /* 0x00778662: push 0x79d93c */
    eax = MEM32(ebp + (-0x10)); /* 0x00778667: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077866A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077866B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778670: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778673: ret  */

}

void sub_00778674(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778674u);

    goto L_00778674;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778674:
    eax = 0x007E3C5Cu; /* 0x00778674: mov eax, 0x7e3c5c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778679: jmp 0x75bfd2 */

}

void sub_00778680(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778680u);

L_00778680:
    PUSH32(esp, 0); /* 0x00778680: push 0 */
    PUSH32(esp, 0x0079D950u); /* 0x00778682: push 0x79d950 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778687: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077868A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077868B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778690: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778693: ret  */

}

void sub_00778694(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778694u);

    goto L_00778694;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778694:
    eax = 0x007E3C80u; /* 0x00778694: mov eax, 0x7e3c80 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778699: jmp 0x75bfd2 */

}

void sub_007786A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007786A0u);

L_007786A0:
    PUSH32(esp, 0); /* 0x007786A0: push 0 */
    PUSH32(esp, 0x0079D964u); /* 0x007786A2: push 0x79d964 */
    eax = MEM32(ebp + (-0x10)); /* 0x007786A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007786AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007786AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007786B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007786B3: ret  */

}

void sub_007786B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007786B4u);

    goto L_007786B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007786B4:
    eax = 0x007E3CA4u; /* 0x007786B4: mov eax, 0x7e3ca4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007786B9: jmp 0x75bfd2 */

}

void sub_007786C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007786C0u);

L_007786C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007786C0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005326F0u); RECOMP_RETURN(); /* 0x007786C3: jmp 0x5326f0 */

}

void sub_007786C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007786C8u);

    goto L_007786C8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007786C8:
    eax = 0x007E3CC8u; /* 0x007786C8: mov eax, 0x7e3cc8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007786CD: jmp 0x75bfd2 */

}

void sub_007786E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007786E0u);

L_007786E0:
    PUSH32(esp, 0); /* 0x007786E0: push 0 */
    PUSH32(esp, 0x0079D988u); /* 0x007786E2: push 0x79d988 */
    eax = MEM32(ebp + (-0x10)); /* 0x007786E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007786EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007786EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007786F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007786F3: ret  */

}

void sub_007786F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007786F4u);

    goto L_007786F4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007786F4:
    eax = 0x007E3D10u; /* 0x007786F4: mov eax, 0x7e3d10 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007786F9: jmp 0x75bfd2 */

}

void sub_00778700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778700u);

L_00778700:
    PUSH32(esp, 0); /* 0x00778700: push 0 */
    PUSH32(esp, 0x0079D998u); /* 0x00778702: push 0x79d998 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778707: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077870A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077870B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778710: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778713: ret  */

}

void sub_00778714(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778714u);

    goto L_00778714;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778714:
    eax = 0x007E3D34u; /* 0x00778714: mov eax, 0x7e3d34 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778719: jmp 0x75bfd2 */

}

void sub_00778720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778720u);

L_00778720:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778720: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00778723: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00778726: jmp 0x5768e0 */

}

void sub_0077872B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077872Bu);

    goto L_0077872B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077872B:
    eax = 0x007E3D84u; /* 0x0077872B: mov eax, 0x7e3d84 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778730: jmp 0x75bfd2 */

}

void sub_00778740(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778740u);

L_00778740:
    ecx = ebp + (-0x8F0); /* 0x00778740: lea ecx, [ebp - 0x8f0] */
    RECOMP_ITAIL(0x004017F0u); RECOMP_RETURN(); /* 0x00778746: jmp 0x4017f0 */

}

void sub_0077874B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077874Bu);

L_0077874B:
    ecx = ebp + (-0x900); /* 0x0077874B: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00778751: jmp 0x401800 */

}

void sub_00778756(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778756u);

    goto L_00778756;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778756:
    eax = 0x007E3D60u; /* 0x00778756: mov eax, 0x7e3d60 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077875B: jmp 0x75bfd2 */

}

void sub_00778760(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778760u);

L_00778760:
    eax = MEM32(ebp + (-0x10)); /* 0x00778760: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778763: push eax */
    RECOMP_CALL(sub_0056C480); /* 0x00778764: call 0x56c480 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778769: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077876A: ret  */

}

void sub_0077876B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077876Bu);

    goto L_0077876B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077876B:
    eax = 0x007E3DA8u; /* 0x0077876B: mov eax, 0x7e3da8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778770: jmp 0x75bfd2 */

}

void sub_00778780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778780u);

L_00778780:
    ecx = ebp + (-0x14); /* 0x00778780: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x0056FCA0u); RECOMP_RETURN(); /* 0x00778783: jmp 0x56fca0 */

}

void sub_00778788(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778788u);

    goto L_00778788;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778788:
    eax = 0x007E3DCCu; /* 0x00778788: mov eax, 0x7e3dcc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077878D: jmp 0x75bfd2 */

}

void sub_007787A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007787A0u);

L_007787A0:
    eax = MEM32(0x866634); /* 0x007787A0: mov eax, dword ptr [0x866634] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007787A5: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x866634) = eax; /* 0x007787A8: mov dword ptr [0x866634], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007787AD: ret  */

}

void sub_007787AE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007787AEu);

    goto L_007787AE;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007787AE:
    eax = 0x007E3DF0u; /* 0x007787AE: mov eax, 0x7e3df0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007787B3: jmp 0x75bfd2 */

}

void sub_007787C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007787C0u);

L_007787C0:
    eax = MEM32(ebp + 0x4); /* 0x007787C0: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007787C3: push eax */
    RECOMP_CALL(sub_005753A0); /* 0x007787C4: call 0x5753a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007787C9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007787CA: ret  */

}

void sub_007787CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007787CBu);

    goto L_007787CB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007787CB:
    eax = 0x007E3E14u; /* 0x007787CB: mov eax, 0x7e3e14 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007787D0: jmp 0x75bfd2 */

}

void sub_007787E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007787E0u);

L_007787E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007787E0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x90u; /* 0x007787E3: add ecx, 0x90 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0057A250u); RECOMP_RETURN(); /* 0x007787E9: jmp 0x57a250 */

}

void sub_007787EE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007787EEu);

L_007787EE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007787EE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x98u; /* 0x007787F1: add ecx, 0x98 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0057A250u); RECOMP_RETURN(); /* 0x007787F7: jmp 0x57a250 */

}

void sub_007787FC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007787FCu);

    goto L_007787FC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007787FC:
    eax = 0x007E3E40u; /* 0x007787FC: mov eax, 0x7e3e40 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778801: jmp 0x75bfd2 */

}

void sub_00778810(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778810u);

L_00778810:
    ecx = ebp + (-0x18); /* 0x00778810: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x0057A250u); RECOMP_RETURN(); /* 0x00778813: jmp 0x57a250 */

}

void sub_00778818(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778818u);

    goto L_00778818;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778818:
    eax = 0x007E3E64u; /* 0x00778818: mov eax, 0x7e3e64 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077881D: jmp 0x75bfd2 */

}

void sub_00778830(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778830u);

L_00778830:
    eax = MEM32(ebp + (-0x10)); /* 0x00778830: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778833: push eax */
    RECOMP_CALL(sub_005735A0); /* 0x00778834: call 0x5735a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778839: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077883A: ret  */

}

void sub_0077883B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077883Bu);

    goto L_0077883B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077883B:
    eax = 0x007E3E88u; /* 0x0077883B: mov eax, 0x7e3e88 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778840: jmp 0x75bfd2 */

}

void sub_00778850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778850u);

L_00778850:
    eax = MEM32(ebp + (-0x10)); /* 0x00778850: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778853: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00778854: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778859: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077885A: ret  */

}

void sub_0077885B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077885Bu);

    goto L_0077885B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077885B:
    eax = 0x007E3EACu; /* 0x0077885B: mov eax, 0x7e3eac */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778860: jmp 0x75bfd2 */

}

void sub_00778870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778870u);

L_00778870:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778870: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0057BC10u); RECOMP_RETURN(); /* 0x00778873: jmp 0x57bc10 */

}

void sub_00778878(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778878u);

    goto L_00778878;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778878:
    eax = 0x007E3ED0u; /* 0x00778878: mov eax, 0x7e3ed0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077887D: jmp 0x75bfd2 */

}

void sub_00778890(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778890u);

L_00778890:
    eax = MEM32(ebp + (-0x10)); /* 0x00778890: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778893: push eax */
    RECOMP_CALL(sub_005753A0); /* 0x00778894: call 0x5753a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778899: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077889A: ret  */

}

void sub_0077889B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077889Bu);

    goto L_0077889B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077889B:
    eax = 0x007E3EF4u; /* 0x0077889B: mov eax, 0x7e3ef4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007788A0: jmp 0x75bfd2 */

}

void sub_007788B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007788B0u);

L_007788B0:
    eax = MEM32(ebp + (-0x10)); /* 0x007788B0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007788B3: push eax */
    RECOMP_CALL(sub_00570AC0); /* 0x007788B4: call 0x570ac0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007788B9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007788BA: ret  */

}

void sub_007788BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007788BBu);

    goto L_007788BB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007788BB:
    eax = 0x007E3F18u; /* 0x007788BB: mov eax, 0x7e3f18 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007788C0: jmp 0x75bfd2 */

}

void sub_007788D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007788D0u);

L_007788D0:
    PUSH32(esp, 0); /* 0x007788D0: push 0 */
    PUSH32(esp, 0x007A09A0u); /* 0x007788D2: push 0x7a09a0 */
    eax = MEM32(ebp + (-0x114)); /* 0x007788D7: mov eax, dword ptr [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x007788DD: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007788DE: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007788E3: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007788E6: ret  */

}

void sub_007788E7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007788E7u);

L_007788E7:
    PUSH32(esp, 0); /* 0x007788E7: push 0 */
    PUSH32(esp, 0x007A0990u); /* 0x007788E9: push 0x7a0990 */
    eax = MEM32(ebp + (-0x114)); /* 0x007788EE: mov eax, dword ptr [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x007788F4: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007788F5: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007788FA: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007788FD: ret  */

}

void sub_007788FE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007788FEu);

    goto L_007788FE;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007788FE:
    eax = 0x007E3F44u; /* 0x007788FE: mov eax, 0x7e3f44 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778903: jmp 0x75bfd2 */

}

void sub_00778910(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778910u);

L_00778910:
    PUSH32(esp, 0); /* 0x00778910: push 0 */
    PUSH32(esp, 0x007A0AE8u); /* 0x00778912: push 0x7a0ae8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778917: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077891A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077891B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778920: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778923: ret  */

}

void sub_00778924(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778924u);

    goto L_00778924;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778924:
    eax = 0x007E3F68u; /* 0x00778924: mov eax, 0x7e3f68 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778929: jmp 0x75bfd2 */

}

void sub_00778930(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778930u);

L_00778930:
    PUSH32(esp, 3); /* 0x00778930: push 3 */
    PUSH32(esp, 0x4B1u); /* 0x00778932: push 0x4b1 */
    PUSH32(esp, 0x007A1344u); /* 0x00778937: push 0x7a1344 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077893C: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077893F: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778940: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00778945: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778948: ret  */

}

void sub_00778949(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778949u);

    goto L_00778949;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778949:
    eax = 0x007E3F8Cu; /* 0x00778949: mov eax, 0x7e3f8c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077894E: jmp 0x75bfd2 */

}

void sub_00778960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778960u);

L_00778960:
    PUSH32(esp, 0x004DEF30u); /* 0x00778960: push 0x4def30 */
    PUSH32(esp, 6); /* 0x00778965: push 6 */
    PUSH32(esp, 8); /* 0x00778967: push 8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778969: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0077896C: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077896F: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00778970: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778975: ret  */

}

void sub_00778976(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778976u);

L_00778976:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778976: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x00778979: add ecx, 0x34 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077897C: jmp 0x4def30 */

}

void sub_00778981(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778981u);

L_00778981:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778981: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3Cu; /* 0x00778984: add ecx, 0x3c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00586620u); RECOMP_RETURN(); /* 0x00778987: jmp 0x586620 */

}

void sub_0077898C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077898Cu);

    goto L_0077898C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077898C:
    eax = 0x007E3FC0u; /* 0x0077898C: mov eax, 0x7e3fc0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778991: jmp 0x75bfd2 */

}

void sub_007789A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007789A0u);

L_007789A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007789A0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007789A3: jmp 0x4def30 */

}

void sub_007789A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007789A8u);

L_007789A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007789A8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007789AB: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBAF0u); RECOMP_RETURN(); /* 0x007789AE: jmp 0x4cbaf0 */

}

void sub_007789B3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007789B3u);

    goto L_007789B3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007789B3:
    eax = 0x007E3FECu; /* 0x007789B3: mov eax, 0x7e3fec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007789B8: jmp 0x75bfd2 */

}

void sub_007789C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007789C0u);

L_007789C0:
    PUSH32(esp, 3); /* 0x007789C0: push 3 */
    PUSH32(esp, 0x21Fu); /* 0x007789C2: push 0x21f */
    PUSH32(esp, 0x007A1344u); /* 0x007789C7: push 0x7a1344 */
    eax = MEM32(ebp + 0x4); /* 0x007789CC: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007789CF: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007789D0: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x007789D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007789D8: ret  */

}

void sub_007789D9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007789D9u);

    goto L_007789D9;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007789D9:
    eax = 0x007E4010u; /* 0x007789D9: mov eax, 0x7e4010 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007789DE: jmp 0x75bfd2 */

}

void sub_007789F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007789F0u);

L_007789F0:
    ecx = ebp + (-0x428); /* 0x007789F0: lea ecx, [ebp - 0x428] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007789F6: jmp 0x4def30 */

}

void sub_007789FB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007789FBu);

    goto L_007789FB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007789FB:
    eax = 0x007E407Cu; /* 0x007789FB: mov eax, 0x7e407c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778A00: jmp 0x75bfd2 */

}

void sub_00778A10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A10u);

L_00778A10:
    ecx = ebp + (-0x18); /* 0x00778A10: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00778A13: jmp 0x4def30 */

}

void sub_00778A18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A18u);

    goto L_00778A18;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778A18:
    eax = 0x007E4034u; /* 0x00778A18: mov eax, 0x7e4034 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778A1D: jmp 0x75bfd2 */

}

void sub_00778A30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A30u);

L_00778A30:
    ecx = ebp + (-0x14); /* 0x00778A30: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00778A33: jmp 0x4def30 */

}

void sub_00778A38(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A38u);

    goto L_00778A38;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778A38:
    eax = 0x007E4058u; /* 0x00778A38: mov eax, 0x7e4058 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778A3D: jmp 0x75bfd2 */

}

void sub_00778A50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A50u);

L_00778A50:
    eax = MEM32(0x86A450); /* 0x00778A50: mov eax, dword ptr [0x86a450] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x00778A55: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x86A450) = eax; /* 0x00778A58: mov dword ptr [0x86a450], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778A5D: ret  */

}

void sub_00778A5E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A5Eu);

    goto L_00778A5E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778A5E:
    eax = 0x007E40A0u; /* 0x00778A5E: mov eax, 0x7e40a0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778A63: jmp 0x75bfd2 */

}

void sub_00778A70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A70u);

L_00778A70:
    eax = MEM32(0x86A5E4); /* 0x00778A70: mov eax, dword ptr [0x86a5e4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x00778A75: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x86A5E4) = eax; /* 0x00778A78: mov dword ptr [0x86a5e4], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778A7D: ret  */

}

void sub_00778A7E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A7Eu);

    goto L_00778A7E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778A7E:
    eax = 0x007E40C4u; /* 0x00778A7E: mov eax, 0x7e40c4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778A83: jmp 0x75bfd2 */

}

void sub_00778A90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A90u);

L_00778A90:
    ecx = ebp + (-0x424); /* 0x00778A90: lea ecx, [ebp - 0x424] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00778A96: jmp 0x4def30 */

}

void sub_00778A9B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778A9Bu);

    goto L_00778A9B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778A9B:
    eax = 0x007E40E8u; /* 0x00778A9B: mov eax, 0x7e40e8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778AA0: jmp 0x75bfd2 */

}

void sub_00778AB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778AB0u);

L_00778AB0:
    ecx = ebp + (-0x294); /* 0x00778AB0: lea ecx, [ebp - 0x294] */
    RECOMP_ITAIL(0x004CBAF0u); RECOMP_RETURN(); /* 0x00778AB6: jmp 0x4cbaf0 */

}

void sub_00778ABB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778ABBu);

L_00778ABB:
    ecx = ebp + (-0x150); /* 0x00778ABB: lea ecx, [ebp - 0x150] */
    RECOMP_ITAIL(0x004CBAF0u); RECOMP_RETURN(); /* 0x00778AC1: jmp 0x4cbaf0 */

}

void sub_00778AC6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778AC6u);

    goto L_00778AC6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778AC6:
    eax = 0x007E4114u; /* 0x00778AC6: mov eax, 0x7e4114 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778ACB: jmp 0x75bfd2 */

}

void sub_00778AD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778AD0u);

L_00778AD0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778AD0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00778AD3: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005884A0u); RECOMP_RETURN(); /* 0x00778AD6: jmp 0x5884a0 */

}

void sub_00778ADB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778ADBu);

L_00778ADB:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778ADB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x00778ADE: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005884A0u); RECOMP_RETURN(); /* 0x00778AE1: jmp 0x5884a0 */

}

void sub_00778AE6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778AE6u);

    goto L_00778AE6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778AE6:
    eax = 0x007E4140u; /* 0x00778AE6: mov eax, 0x7e4140 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778AEB: jmp 0x75bfd2 */

}

void sub_00778AF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778AF0u);

L_00778AF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778AF0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00778AF3: jmp 0x4def30 */

}

void sub_00778AF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778AF8u);

    goto L_00778AF8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778AF8:
    eax = 0x007E4164u; /* 0x00778AF8: mov eax, 0x7e4164 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778AFD: jmp 0x75bfd2 */

}

void sub_00778B10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B10u);

L_00778B10:
    PUSH32(esp, 0); /* 0x00778B10: push 0 */
    PUSH32(esp, 0x007A16E8u); /* 0x00778B12: push 0x7a16e8 */
    eax = MEM32(ebp + (-0x214)); /* 0x00778B17: mov eax, dword ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x00778B1D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778B1E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778B23: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778B26: ret  */

}

void sub_00778B27(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B27u);

    goto L_00778B27;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778B27:
    eax = 0x007E4188u; /* 0x00778B27: mov eax, 0x7e4188 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778B2C: jmp 0x75bfd2 */

}

void sub_00778B40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B40u);

L_00778B40:
    PUSH32(esp, 0); /* 0x00778B40: push 0 */
    PUSH32(esp, 0x007A1700u); /* 0x00778B42: push 0x7a1700 */
    eax = MEM32(ebp + (-0x94)); /* 0x00778B47: mov eax, dword ptr [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x00778B4D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778B4E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778B53: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778B56: ret  */

}

void sub_00778B57(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B57u);

    goto L_00778B57;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778B57:
    eax = 0x007E41ACu; /* 0x00778B57: mov eax, 0x7e41ac */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778B5C: jmp 0x75bfd2 */

}

void sub_00778B70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B70u);

L_00778B70:
    PUSH32(esp, 0); /* 0x00778B70: push 0 */
    PUSH32(esp, 0x007A1F34u); /* 0x00778B72: push 0x7a1f34 */
    eax = MEM32(ebp + (-0x10)); /* 0x00778B77: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778B7A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00778B7B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00778B80: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778B83: ret  */

}

void sub_00778B84(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B84u);

    goto L_00778B84;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778B84:
    eax = 0x007E41D0u; /* 0x00778B84: mov eax, 0x7e41d0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778B89: jmp 0x75bfd2 */

}

void sub_00778B90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B90u);

L_00778B90:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778B90: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005A0D10u); RECOMP_RETURN(); /* 0x00778B93: jmp 0x5a0d10 */

}

void sub_00778B98(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778B98u);

L_00778B98:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778B98: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x198u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x198u; /* 0x00778B9B: add ecx, 0x198 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005913A0u); RECOMP_RETURN(); /* 0x00778BA1: jmp 0x5913a0 */

}

void sub_00778BA6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BA6u);

    goto L_00778BA6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778BA6:
    eax = 0x007E41FCu; /* 0x00778BA6: mov eax, 0x7e41fc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778BAB: jmp 0x75bfd2 */

}

void sub_00778BB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BB0u);

L_00778BB0:
    ecx = MEM32(ebp + (-0x28)); /* 0x00778BB0: mov ecx, dword ptr [ebp - 0x28] */
    RECOMP_ITAIL(0x00401FD0u); RECOMP_RETURN(); /* 0x00778BB3: jmp 0x401fd0 */

}

void sub_00778BB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BB8u);

L_00778BB8:
    eax = MEM32(ebp + 0x4); /* 0x00778BB8: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00778BBB: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00778BBC: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778BC1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778BC2: ret  */

}

void sub_00778BC3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BC3u);

L_00778BC3:
    eax = MEM32(ebp + 0x4); /* 0x00778BC3: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00778BC6: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00778BC7: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778BCC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778BCD: ret  */

}

void sub_00778BCE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BCEu);

L_00778BCE:
    eax = MEM32(ebp + (-0x24)); /* 0x00778BCE: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x00778BD1: push eax */
    RECOMP_CALL(sub_005913B0); /* 0x00778BD2: call 0x5913b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778BD7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778BD8: ret  */

}

void sub_00778BD9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BD9u);

    goto L_00778BD9;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778BD9:
    eax = 0x007E4238u; /* 0x00778BD9: mov eax, 0x7e4238 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778BDE: jmp 0x75bfd2 */

}

void sub_00778BF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BF0u);

L_00778BF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778BF0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00401FD0u); RECOMP_RETURN(); /* 0x00778BF3: jmp 0x401fd0 */

}

void sub_00778BF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778BF8u);

    goto L_00778BF8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778BF8:
    eax = 0x007E425Cu; /* 0x00778BF8: mov eax, 0x7e425c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778BFD: jmp 0x75bfd2 */

}

void sub_00778C10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C10u);

L_00778C10:
    eax = MEM32(ebp + (-0x10)); /* 0x00778C10: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778C13: push eax */
    RECOMP_CALL(sub_00592A60); /* 0x00778C14: call 0x592a60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778C19: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778C1A: ret  */

}

void sub_00778C1B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C1Bu);

    goto L_00778C1B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778C1B:
    eax = 0x007E4280u; /* 0x00778C1B: mov eax, 0x7e4280 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778C20: jmp 0x75bfd2 */

}

void sub_00778C30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C30u);

L_00778C30:
    ecx = MEM32(ebp + (-0x84)); /* 0x00778C30: mov ecx, dword ptr [ebp - 0x84] */
    RECOMP_ITAIL(0x005AA090u); RECOMP_RETURN(); /* 0x00778C36: jmp 0x5aa090 */

}

void sub_00778C3B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C3Bu);

L_00778C3B:
    ecx = MEM32(ebp + (-0x84)); /* 0x00778C3B: mov ecx, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x00778C41: add ecx, 0x70 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005A1A70u); RECOMP_RETURN(); /* 0x00778C44: jmp 0x5a1a70 */

}

void sub_00778C49(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C49u);

    goto L_00778C49;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778C49:
    eax = 0x007E42ACu; /* 0x00778C49: mov eax, 0x7e42ac */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778C4E: jmp 0x75bfd2 */

}

void sub_00778C60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C60u);

L_00778C60:
    eax = MEM32(ebp + (-0x10)); /* 0x00778C60: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778C63: push eax */
    RECOMP_CALL(sub_005929F0); /* 0x00778C64: call 0x5929f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778C69: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778C6A: ret  */

}

void sub_00778C6B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C6Bu);

    goto L_00778C6B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778C6B:
    eax = 0x007E42D0u; /* 0x00778C6B: mov eax, 0x7e42d0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778C70: jmp 0x75bfd2 */

}

void sub_00778C80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C80u);

L_00778C80:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778C80: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00778C83: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00778C86: jmp 0x4358e0 */

}

void sub_00778C8B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778C8Bu);

    goto L_00778C8B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778C8B:
    eax = 0x007E42F4u; /* 0x00778C8B: mov eax, 0x7e42f4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778C90: jmp 0x75bfd2 */

}

void sub_00778CA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778CA0u);

L_00778CA0:
    ecx = ebp + (-0x18); /* 0x00778CA0: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00778CA3: jmp 0x4358e0 */

}

void sub_00778CA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778CA8u);

    goto L_00778CA8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778CA8:
    eax = 0x007E4318u; /* 0x00778CA8: mov eax, 0x7e4318 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778CAD: jmp 0x75bfd2 */

}

void sub_00778CC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778CC0u);

L_00778CC0:
    ecx = MEM32(ebp + (-0x84)); /* 0x00778CC0: mov ecx, dword ptr [ebp - 0x84] */
    RECOMP_ITAIL(0x005AA090u); RECOMP_RETURN(); /* 0x00778CC6: jmp 0x5aa090 */

}

void sub_00778CCB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778CCBu);

    goto L_00778CCB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778CCB:
    eax = 0x007E433Cu; /* 0x00778CCB: mov eax, 0x7e433c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778CD0: jmp 0x75bfd2 */

}

void sub_00778CE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778CE0u);

L_00778CE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778CE0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005AA090u); RECOMP_RETURN(); /* 0x00778CE3: jmp 0x5aa090 */

}

void sub_00778CE8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778CE8u);

    goto L_00778CE8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778CE8:
    eax = 0x007E4360u; /* 0x00778CE8: mov eax, 0x7e4360 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778CED: jmp 0x75bfd2 */

}

void sub_00778D00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D00u);

L_00778D00:
    eax = MEM32(ebp + (-0x10)); /* 0x00778D00: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778D03: push eax */
    RECOMP_CALL(sub_00592AC0); /* 0x00778D04: call 0x592ac0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778D09: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778D0A: ret  */

}

void sub_00778D0B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D0Bu);

    goto L_00778D0B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778D0B:
    eax = 0x007E4530u; /* 0x00778D0B: mov eax, 0x7e4530 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778D10: jmp 0x75bfd2 */

}

void sub_00778D20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D20u);

L_00778D20:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778D20: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xF0u; /* 0x00778D23: add ecx, 0xf0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004367C0u); RECOMP_RETURN(); /* 0x00778D29: jmp 0x4367c0 */

}

void sub_00778D2E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D2Eu);

    goto L_00778D2E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778D2E:
    eax = 0x007E4384u; /* 0x00778D2E: mov eax, 0x7e4384 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778D33: jmp 0x75bfd2 */

}

void sub_00778D40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D40u);

L_00778D40:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778D40: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00778D43: jmp 0x4835c0 */

}

void sub_00778D48(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D48u);

    goto L_00778D48;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778D48:
    eax = 0x007E43A8u; /* 0x00778D48: mov eax, 0x7e43a8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778D4D: jmp 0x75bfd2 */

}

void sub_00778D60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D60u);

L_00778D60:
    eax = MEM32(ebp + (-0x10)); /* 0x00778D60: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778D63: push eax */
    RECOMP_CALL(sub_005929D0); /* 0x00778D64: call 0x5929d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778D69: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778D6A: ret  */

}

void sub_00778D6B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D6Bu);

    goto L_00778D6B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778D6B:
    eax = 0x007E460Cu; /* 0x00778D6B: mov eax, 0x7e460c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778D70: jmp 0x75bfd2 */

}

void sub_00778D80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D80u);

L_00778D80:
    eax = MEM32(ebp + (-0xD4)); /* 0x00778D80: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x00778D86: push eax */
    RECOMP_CALL(sub_005929F0); /* 0x00778D87: call 0x5929f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778D8C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778D8D: ret  */

}

void sub_00778D8E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778D8Eu);

    goto L_00778D8E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778D8E:
    eax = 0x007E43CCu; /* 0x00778D8E: mov eax, 0x7e43cc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778D93: jmp 0x75bfd2 */

}

void sub_00778DA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778DA0u);

L_00778DA0:
    ecx = MEM32(ebp + (-0x3C)); /* 0x00778DA0: mov ecx, dword ptr [ebp - 0x3c] */
    RECOMP_ITAIL(0x005A9DC0u); RECOMP_RETURN(); /* 0x00778DA3: jmp 0x5a9dc0 */

}

void sub_00778DA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778DA8u);

    goto L_00778DA8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778DA8:
    eax = 0x007E43F0u; /* 0x00778DA8: mov eax, 0x7e43f0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778DAD: jmp 0x75bfd2 */

}

void sub_00778DC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778DC0u);

L_00778DC0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778DC0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005A9DC0u); RECOMP_RETURN(); /* 0x00778DC3: jmp 0x5a9dc0 */

}

void sub_00778DC8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778DC8u);

    goto L_00778DC8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778DC8:
    eax = 0x007E4414u; /* 0x00778DC8: mov eax, 0x7e4414 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778DCD: jmp 0x75bfd2 */

}

void sub_00778DE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778DE0u);

L_00778DE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778DE0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005AA090u); RECOMP_RETURN(); /* 0x00778DE3: jmp 0x5aa090 */

}

void sub_00778DE8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778DE8u);

L_00778DE8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778DE8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x00778DEB: add ecx, 0x70 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005A1A70u); RECOMP_RETURN(); /* 0x00778DEE: jmp 0x5a1a70 */

}

void sub_00778DF3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778DF3u);

    goto L_00778DF3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778DF3:
    eax = 0x007E4440u; /* 0x00778DF3: mov eax, 0x7e4440 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778DF8: jmp 0x75bfd2 */

}

void sub_00778E00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E00u);

L_00778E00:
    ecx = ebp + (-0x28); /* 0x00778E00: lea ecx, [ebp - 0x28] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00778E03: jmp 0x4def30 */

}

void sub_00778E08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E08u);

    goto L_00778E08;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778E08:
    eax = 0x007E4464u; /* 0x00778E08: mov eax, 0x7e4464 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778E0D: jmp 0x75bfd2 */

}

void sub_00778E20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E20u);

L_00778E20:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778E20: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00401FD0u); RECOMP_RETURN(); /* 0x00778E23: jmp 0x401fd0 */

}

void sub_00778E28(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E28u);

L_00778E28:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x00778E28: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00778E40; /* 0x00778E2C: je 0x778e40 */

L_00778E32:
    eax = MEM32(ebp + (-0x10)); /* 0x00778E32: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00778E35: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x00778E38: mov dword ptr [ebp - 0x1c], eax */
    goto L_00778E47; /* 0x00778E3B: jmp 0x778e47 */

L_00778E40:
    MEM32(ebp + (-0x1C)) = 0; /* 0x00778E40: mov dword ptr [ebp - 0x1c], 0 */

L_00778E47:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00778E47: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_ITAIL(0x005AE1F0u); RECOMP_RETURN(); /* 0x00778E4A: jmp 0x5ae1f0 */

}

void sub_00778E47(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E47u);

L_00778E47:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00778E47: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_ITAIL(0x005AE1F0u); RECOMP_RETURN(); /* 0x00778E4A: jmp 0x5ae1f0 */

}

void sub_00778E4F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E4Fu);

    goto L_00778E4F;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778E4F:
    eax = 0x007E4490u; /* 0x00778E4F: mov eax, 0x7e4490 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778E54: jmp 0x75bfd2 */

}

void sub_00778E60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E60u);

L_00778E60:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778E60: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005A0D10u); RECOMP_RETURN(); /* 0x00778E63: jmp 0x5a0d10 */

}

void sub_00778E68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E68u);

    goto L_00778E68;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778E68:
    eax = 0x007E44B4u; /* 0x00778E68: mov eax, 0x7e44b4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778E6D: jmp 0x75bfd2 */

}

void sub_00778E80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E80u);

L_00778E80:
    ecx = MEM32(ebp + (-0x24)); /* 0x00778E80: mov ecx, dword ptr [ebp - 0x24] */
    RECOMP_ITAIL(0x00401FD0u); RECOMP_RETURN(); /* 0x00778E83: jmp 0x401fd0 */

}

void sub_00778E88(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778E88u);

L_00778E88:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x00778E88: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00778EA3; /* 0x00778E8C: je 0x778ea3 */

L_00778E92:
    eax = MEM32(ebp + (-0x24)); /* 0x00778E92: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00778E95: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xA8)) = eax; /* 0x00778E98: mov dword ptr [ebp - 0xa8], eax */
    goto L_00778EAD; /* 0x00778E9E: jmp 0x778ead */

L_00778EA3:
    MEM32(ebp + (-0xA8)) = 0; /* 0x00778EA3: mov dword ptr [ebp - 0xa8], 0 */

L_00778EAD:
    ecx = MEM32(ebp + (-0xA8)); /* 0x00778EAD: mov ecx, dword ptr [ebp - 0xa8] */
    RECOMP_ITAIL(0x005AE1F0u); RECOMP_RETURN(); /* 0x00778EB3: jmp 0x5ae1f0 */

}

void sub_00778EAD(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778EADu);

L_00778EAD:
    ecx = MEM32(ebp + (-0xA8)); /* 0x00778EAD: mov ecx, dword ptr [ebp - 0xa8] */
    RECOMP_ITAIL(0x005AE1F0u); RECOMP_RETURN(); /* 0x00778EB3: jmp 0x5ae1f0 */

}

void sub_00778EB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778EB8u);

    goto L_00778EB8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778EB8:
    eax = 0x007E44E0u; /* 0x00778EB8: mov eax, 0x7e44e0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778EBD: jmp 0x75bfd2 */

}

void sub_00778ED0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778ED0u);

L_00778ED0:
    eax = MEM32(ebp + (-0x2C)); /* 0x00778ED0: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00778ED3: push eax */
    RECOMP_CALL(sub_00592AC0); /* 0x00778ED4: call 0x592ac0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778ED9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778EDA: ret  */

}

void sub_00778EDB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778EDBu);

L_00778EDB:
    eax = MEM32(ebp + (-0x10)); /* 0x00778EDB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00778EDE: push eax */
    RECOMP_CALL(sub_00592AC0); /* 0x00778EDF: call 0x592ac0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778EE4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778EE5: ret  */

}

void sub_00778EE6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778EE6u);

    goto L_00778EE6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778EE6:
    eax = 0x007E450Cu; /* 0x00778EE6: mov eax, 0x7e450c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778EEB: jmp 0x75bfd2 */

}

void sub_00778EF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778EF0u);

L_00778EF0:
    ecx = ebp + (-0x328); /* 0x00778EF0: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00778EF6: jmp 0x5e0bf0 */

}

void sub_00778EFB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778EFBu);

    goto L_00778EFB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778EFB:
    eax = 0x007E4554u; /* 0x00778EFB: mov eax, 0x7e4554 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778F00: jmp 0x75bfd2 */

}

void sub_00778F10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F10u);

L_00778F10:
    eax = MEM32(ebp + (-0x94)); /* 0x00778F10: mov eax, dword ptr [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x00778F16: push eax */
    RECOMP_CALL(sub_00591360); /* 0x00778F17: call 0x591360 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00778F1C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00778F1D: ret  */

}

void sub_00778F1E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F1Eu);

    goto L_00778F1E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778F1E:
    eax = 0x007E4578u; /* 0x00778F1E: mov eax, 0x7e4578 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778F23: jmp 0x75bfd2 */

}

void sub_00778F30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F30u);

L_00778F30:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778F30: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005A9DC0u); RECOMP_RETURN(); /* 0x00778F33: jmp 0x5a9dc0 */

}

void sub_00778F38(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F38u);

L_00778F38:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x00778F38: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00778F52; /* 0x00778F3C: je 0x778f52 */

L_00778F42:
    eax = MEM32(ebp + (-0x10)); /* 0x00778F42: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x130u; /* 0x00778F45: add eax, 0x130 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x00778F4A: mov dword ptr [ebp - 0x14], eax */
    goto L_00778F59; /* 0x00778F4D: jmp 0x778f59 */

L_00778F52:
    MEM32(ebp + (-0x14)) = 0; /* 0x00778F52: mov dword ptr [ebp - 0x14], 0 */

L_00778F59:
    ecx = MEM32(ebp + (-0x14)); /* 0x00778F59: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x005AA410u); RECOMP_RETURN(); /* 0x00778F5C: jmp 0x5aa410 */

}

void sub_00778F59(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F59u);

L_00778F59:
    ecx = MEM32(ebp + (-0x14)); /* 0x00778F59: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x005AA410u); RECOMP_RETURN(); /* 0x00778F5C: jmp 0x5aa410 */

}

void sub_00778F61(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F61u);

L_00778F61:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778F61: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16Cu; /* 0x00778F64: add ecx, 0x16c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00778F6A: jmp 0x5e0bf0 */

}

void sub_00778F6F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F6Fu);

L_00778F6F:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778F6F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x480u; /* 0x00778F72: add ecx, 0x480 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00633FD0u); RECOMP_RETURN(); /* 0x00778F78: jmp 0x633fd0 */

}

void sub_00778F7D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F7Du);

L_00778F7D:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778F7D: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4F4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4F4u; /* 0x00778F80: add ecx, 0x4f4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00778F86: jmp 0x4835c0 */

}

void sub_00778F8B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F8Bu);

L_00778F8B:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778F8B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4FCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4FCu; /* 0x00778F8E: add ecx, 0x4fc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00778F94: jmp 0x4835c0 */

}

void sub_00778F99(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778F99u);

    goto L_00778F99;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778F99:
    eax = 0x007E45C4u; /* 0x00778F99: mov eax, 0x7e45c4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778F9E: jmp 0x75bfd2 */

}

void sub_00778FB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778FB0u);

L_00778FB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778FB0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00598120u); RECOMP_RETURN(); /* 0x00778FB3: jmp 0x598120 */

}

void sub_00778FB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778FB8u);

    goto L_00778FB8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00778FB8:
    eax = 0x007E45E8u; /* 0x00778FB8: mov eax, 0x7e45e8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00778FBD: jmp 0x75bfd2 */

}

void sub_00778FD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778FD0u);

L_00778FD0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778FD0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005A9DC0u); RECOMP_RETURN(); /* 0x00778FD3: jmp 0x5a9dc0 */

}

void sub_00778FD8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778FD8u);

L_00778FD8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778FD8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x130u; /* 0x00778FDB: add ecx, 0x130 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005AA410u); RECOMP_RETURN(); /* 0x00778FE1: jmp 0x5aa410 */

}

void sub_00778FE6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778FE6u);

L_00778FE6:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778FE6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16Cu; /* 0x00778FE9: add ecx, 0x16c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00778FEF: jmp 0x5e0bf0 */

}

void sub_00778FF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00778FF4u);

L_00778FF4:
    ecx = MEM32(ebp + (-0x10)); /* 0x00778FF4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x480u; /* 0x00778FF7: add ecx, 0x480 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00633FD0u); RECOMP_RETURN(); /* 0x00778FFD: jmp 0x633fd0 */

}

void sub_00779002(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779002u);

L_00779002:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779002: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4F4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4F4u; /* 0x00779005: add ecx, 0x4f4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x0077900B: jmp 0x4835c0 */

}

void sub_00779010(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779010u);

L_00779010:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779010: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4FCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4FCu; /* 0x00779013: add ecx, 0x4fc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00779019: jmp 0x4835c0 */

}

void sub_0077901E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077901Eu);

    goto L_0077901E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077901E:
    eax = 0x007E4658u; /* 0x0077901E: mov eax, 0x7e4658 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779023: jmp 0x75bfd2 */

}

void sub_00779030(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779030u);

L_00779030:
    eax = MEM32(ebp + (-0x10)); /* 0x00779030: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779033: push eax */
    RECOMP_CALL(sub_00592AE0); /* 0x00779034: call 0x592ae0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779039: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077903A: ret  */

}

void sub_0077903B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077903Bu);

    goto L_0077903B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077903B:
    eax = 0x007E467Cu; /* 0x0077903B: mov eax, 0x7e467c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779040: jmp 0x75bfd2 */

}

void sub_00779050(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779050u);

L_00779050:
    eax = MEM32(ebp + (-0x10)); /* 0x00779050: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779053: push eax */
    RECOMP_CALL(sub_00592DD0); /* 0x00779054: call 0x592dd0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779059: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077905A: ret  */

}

void sub_0077905B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077905Bu);

    goto L_0077905B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077905B:
    eax = 0x007E46A0u; /* 0x0077905B: mov eax, 0x7e46a0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779060: jmp 0x75bfd2 */

}

void sub_00779070(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779070u);

L_00779070:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779070: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x00401FD0u); RECOMP_RETURN(); /* 0x00779073: jmp 0x401fd0 */

}

void sub_00779078(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779078u);

L_00779078:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779078: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0077907B: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005AE1F0u); RECOMP_RETURN(); /* 0x0077907E: jmp 0x5ae1f0 */

}

void sub_00779083(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779083u);

L_00779083:
    eax = MEM32(ebp + 0x4); /* 0x00779083: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779086: push eax */
    RECOMP_CALL(sub_00591360); /* 0x00779087: call 0x591360 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077908C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077908D: ret  */

}

void sub_0077908E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077908Eu);

L_0077908E:
    eax = MEM32(ebp + 0xC); /* 0x0077908E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00779091: push eax */
    RECOMP_CALL(sub_005913B0); /* 0x00779092: call 0x5913b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779097: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779098: ret  */

}

void sub_00779099(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779099u);

L_00779099:
    eax = MEM32(ebp + (-0x10)); /* 0x00779099: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077909C: push eax */
    RECOMP_CALL(sub_00598EF0); /* 0x0077909D: call 0x598ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007790A2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007790A3: ret  */

}

void sub_007790A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790A4u);

L_007790A4:
    eax = MEM32(ebp + 0x4); /* 0x007790A4: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007790A7: push eax */
    RECOMP_CALL(sub_00592A80); /* 0x007790A8: call 0x592a80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007790AD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007790AE: ret  */

}

void sub_007790AF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790AFu);

L_007790AF:
    eax = MEM32(ebp + 0x8); /* 0x007790AF: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x007790B2: push eax */
    RECOMP_CALL(sub_00592AA0); /* 0x007790B3: call 0x592aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007790B8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007790B9: ret  */

}

void sub_007790BA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790BAu);

    goto L_007790BA;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007790BA:
    eax = 0x007E46F4u; /* 0x007790BA: mov eax, 0x7e46f4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007790BF: jmp 0x75bfd2 */

}

void sub_007790D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790D0u);

L_007790D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007790D0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00401FD0u); RECOMP_RETURN(); /* 0x007790D3: jmp 0x401fd0 */

}

void sub_007790D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790D8u);

L_007790D8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007790D8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007790DB: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005AE1F0u); RECOMP_RETURN(); /* 0x007790DE: jmp 0x5ae1f0 */

}

void sub_007790E3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790E3u);

L_007790E3:
    eax = MEM32(ebp + 0x8); /* 0x007790E3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x007790E6: push eax */
    RECOMP_CALL(sub_00591360); /* 0x007790E7: call 0x591360 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007790EC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007790ED: ret  */

}

void sub_007790EE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790EEu);

L_007790EE:
    eax = MEM32(ebp + 0x8); /* 0x007790EE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x007790F1: push eax */
    RECOMP_CALL(sub_00592DB0); /* 0x007790F2: call 0x592db0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007790F7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007790F8: ret  */

}

void sub_007790F9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007790F9u);

L_007790F9:
    eax = MEM32(ebp + 0x8); /* 0x007790F9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x007790FC: push eax */
    RECOMP_CALL(sub_005913B0); /* 0x007790FD: call 0x5913b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779102: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779103: ret  */

}

void sub_00779104(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779104u);

    goto L_00779104;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779104:
    eax = 0x007E4738u; /* 0x00779104: mov eax, 0x7e4738 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779109: jmp 0x75bfd2 */

}

void sub_00779110(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779110u);

L_00779110:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779110: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005AFF60u); RECOMP_RETURN(); /* 0x00779113: jmp 0x5aff60 */

}

void sub_00779118(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779118u);

L_00779118:
    eax = MEM32(ebp + 0xC); /* 0x00779118: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x0077911B: push eax */
    RECOMP_CALL(sub_00591360); /* 0x0077911C: call 0x591360 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779121: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779122: ret  */

}

void sub_00779123(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779123u);

L_00779123:
    eax = MEM32(ebp + 0xC); /* 0x00779123: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00779126: push eax */
    RECOMP_CALL(sub_00598EC0); /* 0x00779127: call 0x598ec0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077912C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077912D: ret  */

}

void sub_0077912E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077912Eu);

L_0077912E:
    eax = MEM32(ebp + 0x10); /* 0x0077912E: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x00779131: push eax */
    RECOMP_CALL(sub_005913B0); /* 0x00779132: call 0x5913b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779137: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779138: ret  */

}

void sub_00779139(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779139u);

    goto L_00779139;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779139:
    eax = 0x007E4774u; /* 0x00779139: mov eax, 0x7e4774 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077913E: jmp 0x75bfd2 */

}

void sub_00779150(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779150u);

L_00779150:
    eax = MEM32(ebp + (-0x10)); /* 0x00779150: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779153: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00779154: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779159: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077915A: ret  */

}

void sub_0077915B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077915Bu);

L_0077915B:
    eax = MEM32(ebp + (-0x10)); /* 0x0077915B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077915E: push eax */
    RECOMP_CALL(sub_00575630); /* 0x0077915F: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779164: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779165: ret  */

}

void sub_00779166(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779166u);

L_00779166:
    eax = MEM32(ebp + (-0x10)); /* 0x00779166: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779169: push eax */
    RECOMP_CALL(sub_00575630); /* 0x0077916A: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077916F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779170: ret  */

}

void sub_00779171(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779171u);

L_00779171:
    eax = MEM32(ebp + (-0x10)); /* 0x00779171: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779174: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00779175: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077917A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077917B: ret  */

}

void sub_0077917C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077917Cu);

    goto L_0077917C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077917C:
    eax = 0x007E47B0u; /* 0x0077917C: mov eax, 0x7e47b0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779181: jmp 0x75bfd2 */

}

void sub_00779190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779190u);

L_00779190:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779190: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2224u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2224u; /* 0x00779193: add ecx, 0x2224 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005C8650u); RECOMP_RETURN(); /* 0x00779199: jmp 0x5c8650 */

}

void sub_0077919E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077919Eu);

L_0077919E:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077919E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2448u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2448u; /* 0x007791A1: add ecx, 0x2448 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005CA4A0u); RECOMP_RETURN(); /* 0x007791A7: jmp 0x5ca4a0 */

}

void sub_007791AC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007791ACu);

L_007791AC:
    ecx = MEM32(ebp + (-0x10)); /* 0x007791AC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2498u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2498u; /* 0x007791AF: add ecx, 0x2498 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005CA4A0u); RECOMP_RETURN(); /* 0x007791B5: jmp 0x5ca4a0 */

}

void sub_007791BA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007791BAu);

L_007791BA:
    ecx = MEM32(ebp + (-0x10)); /* 0x007791BA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24E8u; /* 0x007791BD: add ecx, 0x24e8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005CA4A0u); RECOMP_RETURN(); /* 0x007791C3: jmp 0x5ca4a0 */

}

void sub_007791C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007791C8u);

L_007791C8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007791C8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2538u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2538u; /* 0x007791CB: add ecx, 0x2538 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005CA4A0u); RECOMP_RETURN(); /* 0x007791D1: jmp 0x5ca4a0 */

}

void sub_007791D6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007791D6u);

L_007791D6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007791D6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2588u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2588u; /* 0x007791D9: add ecx, 0x2588 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005CA4A0u); RECOMP_RETURN(); /* 0x007791DF: jmp 0x5ca4a0 */

}

void sub_007791E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007791E4u);

    goto L_007791E4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007791E4:
    eax = 0x007E47FCu; /* 0x007791E4: mov eax, 0x7e47fc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007791E9: jmp 0x75bfd2 */

}

void sub_007791F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007791F0u);

    goto L_007791F0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007791F0:
    eax = 0x007E4880u; /* 0x007791F0: mov eax, 0x7e4880 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007791F5: jmp 0x75bfd2 */

}

void sub_00779200(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779200u);

    goto L_00779200;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779200:
    eax = 0x007E48D0u; /* 0x00779200: mov eax, 0x7e48d0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779205: jmp 0x75bfd2 */

}

void sub_00779210(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779210u);

L_00779210:
    eax = MEM32(ebp + (-0x10)); /* 0x00779210: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779213: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00779214: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779219: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077921A: ret  */

}

void sub_0077921B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077921Bu);

    goto L_0077921B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077921B:
    eax = 0x007E4A58u; /* 0x0077921B: mov eax, 0x7e4a58 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779220: jmp 0x75bfd2 */

}

void sub_00779230(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779230u);

    goto L_00779230;

L_0075D994:
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x0075D994: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x007D3A70u; /* 0x0075D998: mov dword ptr [ecx], 0x7d3a70 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0075D9A9; /* 0x0075D99E: je 0x75d9a9 */

L_0075D9A0:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x0075D9A0: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_0075C6DA); /* 0x0075D9A3: call 0x75c6da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0075D9A8: pop ecx */

L_0075D9A9:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075D9A9: ret  */

L_00779230:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779230: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_0075D994; /* 0x00779233: jmp 0x75d994 */

}

void sub_00779238(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779238u);

    goto L_00779238;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779238:
    eax = 0x007E4968u; /* 0x00779238: mov eax, 0x7e4968 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077923D: jmp 0x75bfd2 */

}

void sub_00779250(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779250u);

L_00779250:
    ecx = ebp + (-0x50); /* 0x00779250: lea ecx, [ebp - 0x50] */
    RECOMP_ITAIL(0x005CF000u); RECOMP_RETURN(); /* 0x00779253: jmp 0x5cf000 */

}

void sub_00779258(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779258u);

    goto L_00779258;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779258:
    eax = 0x007E498Cu; /* 0x00779258: mov eax, 0x7e498c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077925D: jmp 0x75bfd2 */

}

void sub_00779270(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779270u);

    goto L_00779270;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779270:
    eax = 0x007E4A10u; /* 0x00779270: mov eax, 0x7e4a10 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779275: jmp 0x75bfd2 */

}

void sub_00779280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779280u);

L_00779280:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779280: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00779283: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005CFAC0u); RECOMP_RETURN(); /* 0x00779286: jmp 0x5cfac0 */

}

void sub_0077928B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077928Bu);

    goto L_0077928B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077928B:
    eax = 0x007E4A34u; /* 0x0077928B: mov eax, 0x7e4a34 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779290: jmp 0x75bfd2 */

}

void sub_007792A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792A0u);

L_007792A0:
    eax = MEM32(ebp + (-0x10)); /* 0x007792A0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792A3: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792A4: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792A9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792AA: ret  */

}

void sub_007792AB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792ABu);

L_007792AB:
    eax = MEM32(ebp + (-0x10)); /* 0x007792AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792AE: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792AF: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792B5: ret  */

}

void sub_007792B6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792B6u);

L_007792B6:
    eax = MEM32(ebp + (-0x10)); /* 0x007792B6: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792B9: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792BA: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792BF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792C0: ret  */

}

void sub_007792C1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792C1u);

L_007792C1:
    eax = MEM32(ebp + (-0x10)); /* 0x007792C1: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792C4: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792C5: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792CB: ret  */

}

void sub_007792CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792CCu);

L_007792CC:
    eax = MEM32(ebp + (-0x10)); /* 0x007792CC: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792CF: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792D0: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792D5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792D6: ret  */

}

void sub_007792D7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792D7u);

L_007792D7:
    eax = MEM32(ebp + (-0x10)); /* 0x007792D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792DA: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792DB: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792E0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792E1: ret  */

}

void sub_007792E2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792E2u);

L_007792E2:
    eax = MEM32(ebp + (-0x10)); /* 0x007792E2: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792E5: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792E6: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792EB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792EC: ret  */

}

void sub_007792ED(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792EDu);

L_007792ED:
    eax = MEM32(ebp + (-0x10)); /* 0x007792ED: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007792F0: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007792F1: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007792F6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007792F7: ret  */

}

void sub_007792F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007792F8u);

    goto L_007792F8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007792F8:
    eax = 0x007E4AB4u; /* 0x007792F8: mov eax, 0x7e4ab4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007792FD: jmp 0x75bfd2 */

}

void sub_00779310(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779310u);

L_00779310:
    eax = MEM32(ebp + (-0x34)); /* 0x00779310: mov eax, dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x00779313: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00779314: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779319: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077931A: ret  */

}

void sub_0077931B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077931Bu);

    goto L_0077931B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077931B:
    eax = 0x007E4AD8u; /* 0x0077931B: mov eax, 0x7e4ad8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779320: jmp 0x75bfd2 */

}

void sub_00779330(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779330u);

L_00779330:
    PUSH32(esp, 0); /* 0x00779330: push 0 */
    PUSH32(esp, 0x007A5214u); /* 0x00779332: push 0x7a5214 */
    eax = MEM32(ebp + 0x4); /* 0x00779337: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077933A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077933B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779340: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779343: ret  */

}

void sub_00779344(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779344u);

    goto L_00779344;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779344:
    eax = 0x007E4AFCu; /* 0x00779344: mov eax, 0x7e4afc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779349: jmp 0x75bfd2 */

}

void sub_00779350(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779350u);

L_00779350:
    ecx = ebp + (-0x278); /* 0x00779350: lea ecx, [ebp - 0x278] */
    RECOMP_ITAIL(0x0043E060u); RECOMP_RETURN(); /* 0x00779356: jmp 0x43e060 */

}

void sub_0077935B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077935Bu);

    goto L_0077935B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077935B:
    eax = 0x007E4B20u; /* 0x0077935B: mov eax, 0x7e4b20 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779360: jmp 0x75bfd2 */

}

void sub_00779370(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779370u);

L_00779370:
    PUSH32(esp, 0x004903B0u); /* 0x00779370: push 0x4903b0 */
    PUSH32(esp, 4); /* 0x00779375: push 4 */
    PUSH32(esp, 0x18u); /* 0x00779377: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779379: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2084u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2084u; /* 0x0077937C: add eax, 0x2084 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00779381: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00779382: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779387: ret  */

}

void sub_00779388(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779388u);

    goto L_00779388;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779388:
    eax = 0x007E4B44u; /* 0x00779388: mov eax, 0x7e4b44 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077938D: jmp 0x75bfd2 */

}

void sub_007793A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007793A0u);

L_007793A0:
    eax = MEM32(ebp + (-0x10)); /* 0x007793A0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007793A3: push eax */
    RECOMP_CALL(sub_00486EF0); /* 0x007793A4: call 0x486ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007793A9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007793AA: ret  */

}

void sub_007793AB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007793ABu);

    goto L_007793AB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007793AB:
    eax = 0x007E4B68u; /* 0x007793AB: mov eax, 0x7e4b68 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007793B0: jmp 0x75bfd2 */

}

void sub_007793C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007793C0u);

L_007793C0:
    eax = MEM32(ebp + (-0x60)); /* 0x007793C0: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x007793C3: push eax */
    RECOMP_CALL(sub_00486EF0); /* 0x007793C4: call 0x486ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007793C9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007793CA: ret  */

}

void sub_007793CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007793CBu);

    goto L_007793CB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007793CB:
    eax = 0x007E4B8Cu; /* 0x007793CB: mov eax, 0x7e4b8c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007793D0: jmp 0x75bfd2 */

}

void sub_007793E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007793E0u);

L_007793E0:
    PUSH32(esp, 0x004367C0u); /* 0x007793E0: push 0x4367c0 */
    PUSH32(esp, 0xCBu); /* 0x007793E5: push 0xcb */
    PUSH32(esp, 8); /* 0x007793EA: push 8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007793EC: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007793EF: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x007793F0: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007793F5: ret  */

}

void sub_007793F6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007793F6u);

    goto L_007793F6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007793F6:
    eax = 0x007E4BB0u; /* 0x007793F6: mov eax, 0x7e4bb0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007793FB: jmp 0x75bfd2 */

}

void sub_00779400(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779400u);

L_00779400:
    PUSH32(esp, 0); /* 0x00779400: push 0 */
    PUSH32(esp, 0x007A52B8u); /* 0x00779402: push 0x7a52b8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779407: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077940A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077940B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779410: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779413: ret  */

}

void sub_00779414(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779414u);

    goto L_00779414;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779414:
    eax = 0x007E4BD4u; /* 0x00779414: mov eax, 0x7e4bd4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779419: jmp 0x75bfd2 */

}

void sub_00779420(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779420u);

L_00779420:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779420: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4A0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4A0u; /* 0x00779423: add ecx, 0x4a0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005E0800u); RECOMP_RETURN(); /* 0x00779429: jmp 0x5e0800 */

}

void sub_0077942E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077942Eu);

    goto L_0077942E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077942E:
    eax = 0x007E4BF8u; /* 0x0077942E: mov eax, 0x7e4bf8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779433: jmp 0x75bfd2 */

}

void sub_00779440(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779440u);

L_00779440:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779440: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00779443: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00779446: jmp 0x4835c0 */

}

void sub_0077944B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077944Bu);

    goto L_0077944B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077944B:
    eax = 0x007E4C1Cu; /* 0x0077944B: mov eax, 0x7e4c1c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779450: jmp 0x75bfd2 */

}

void sub_00779460(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779460u);

L_00779460:
    eax = MEM32(ebp + 0x4); /* 0x00779460: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779463: push eax */
    RECOMP_CALL(sub_005D7D30); /* 0x00779464: call 0x5d7d30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779469: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077946A: ret  */

}

void sub_0077946B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077946Bu);

    goto L_0077946B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077946B:
    eax = 0x007E4C40u; /* 0x0077946B: mov eax, 0x7e4c40 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779470: jmp 0x75bfd2 */

}

void sub_00779480(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779480u);

L_00779480:
    ecx = MEM32(ebp + (-0x40)); /* 0x00779480: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00779483: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00779486: jmp 0x4def30 */

}

void sub_0077948B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077948Bu);

L_0077948B:
    ecx = MEM32(ebp + (-0x40)); /* 0x0077948B: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x0077948E: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00779491: jmp 0x4def30 */

}

void sub_00779496(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779496u);

L_00779496:
    PUSH32(esp, 0x004022C0u); /* 0x00779496: push 0x4022c0 */
    PUSH32(esp, 0xC0u); /* 0x0077949B: push 0xc0 */
    PUSH32(esp, 0x14u); /* 0x007794A0: push 0x14 */
    eax = MEM32(ebp + (-0x40)); /* 0x007794A2: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x007794A5: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007794A8: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x007794A9: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007794AE: ret  */

}

void sub_007794AF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007794AFu);

    goto L_007794AF;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007794AF:
    eax = 0x007E4C74u; /* 0x007794AF: mov eax, 0x7e4c74 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007794B4: jmp 0x75bfd2 */

}

void sub_007794C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007794C0u);

L_007794C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007794C0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007794C3: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007794C6: jmp 0x4def30 */

}

void sub_007794CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007794CBu);

L_007794CB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007794CB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007794CE: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007794D1: jmp 0x4def30 */

}

void sub_007794D6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007794D6u);

L_007794D6:
    PUSH32(esp, 0x004022C0u); /* 0x007794D6: push 0x4022c0 */
    PUSH32(esp, 0xC0u); /* 0x007794DB: push 0xc0 */
    PUSH32(esp, 0x14u); /* 0x007794E0: push 0x14 */
    eax = MEM32(ebp + (-0x10)); /* 0x007794E2: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x007794E5: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007794E8: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x007794E9: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007794EE: ret  */

}

void sub_007794EF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007794EFu);

    goto L_007794EF;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007794EF:
    eax = 0x007E4CA8u; /* 0x007794EF: mov eax, 0x7e4ca8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007794F4: jmp 0x75bfd2 */

}

void sub_00779500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779500u);

L_00779500:
    PUSH32(esp, 0); /* 0x00779500: push 0 */
    PUSH32(esp, 0x007A52D4u); /* 0x00779502: push 0x7a52d4 */
    eax = MEM32(ebp + 0x4); /* 0x00779507: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077950A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077950B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779510: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779513: ret  */

}

void sub_00779514(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779514u);

    goto L_00779514;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779514:
    eax = 0x007E4CCCu; /* 0x00779514: mov eax, 0x7e4ccc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779519: jmp 0x75bfd2 */

}

void sub_00779520(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779520u);

L_00779520:
    ecx = ebp + (-0x18); /* 0x00779520: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x005E0870u); RECOMP_RETURN(); /* 0x00779523: jmp 0x5e0870 */

}

void sub_00779528(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779528u);

L_00779528:
    ecx = ebp + (-0x20); /* 0x00779528: lea ecx, [ebp - 0x20] */
    RECOMP_ITAIL(0x005E0870u); RECOMP_RETURN(); /* 0x0077952B: jmp 0x5e0870 */

}

void sub_00779530(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779530u);

    goto L_00779530;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779530:
    eax = 0x007E4CF8u; /* 0x00779530: mov eax, 0x7e4cf8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779535: jmp 0x75bfd2 */

}

void sub_00779540(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779540u);

L_00779540:
    PUSH32(esp, 0); /* 0x00779540: push 0 */
    PUSH32(esp, 0x007A52F8u); /* 0x00779542: push 0x7a52f8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779547: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077954A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077954B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779550: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779553: ret  */

}

void sub_00779554(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779554u);

    goto L_00779554;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779554:
    eax = 0x007E4D1Cu; /* 0x00779554: mov eax, 0x7e4d1c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779559: jmp 0x75bfd2 */

}

void sub_00779560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779560u);

L_00779560:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779560: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00779563: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00779566: jmp 0x4835c0 */

}