/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_00771996(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771996u);

    goto L_00771996;

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

L_00771996:
    eax = 0x007DDE20u; /* 0x00771996: mov eax, 0x7dde20 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077199B: jmp 0x75bfd2 */

}

void sub_007719A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719A0u);

L_007719A0:
    eax = MEM32(ebp + 0x8); /* 0x007719A0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x007719A3: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719A4: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007719A9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007719AA: ret  */

}

void sub_007719AB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719ABu);

L_007719AB:
    eax = MEM32(ebp + 0x8); /* 0x007719AB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x007719AE: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719AF: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007719B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007719B5: ret  */

}

void sub_007719B6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719B6u);

    goto L_007719B6;

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

L_007719B6:
    eax = 0x007DDE4Cu; /* 0x007719B6: mov eax, 0x7dde4c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007719BB: jmp 0x75bfd2 */

}

void sub_007719C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719C0u);

L_007719C0:
    eax = MEM32(ebp + (-0x10)); /* 0x007719C0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007719C3: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719C4: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007719C9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007719CA: ret  */

}

void sub_007719CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719CBu);

L_007719CB:
    eax = MEM32(ebp + (-0x10)); /* 0x007719CB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007719CE: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719CF: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007719D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007719D5: ret  */

}

void sub_007719D6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719D6u);

L_007719D6:
    eax = MEM32(ebp + (-0x10)); /* 0x007719D6: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007719D9: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719DA: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007719DF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007719E0: ret  */

}

void sub_007719E1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719E1u);

L_007719E1:
    eax = MEM32(ebp + (-0x10)); /* 0x007719E1: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007719E4: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719E5: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007719EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007719EB: ret  */

}

void sub_007719EC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719ECu);

L_007719EC:
    eax = MEM32(ebp + (-0x10)); /* 0x007719EC: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007719EF: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719F0: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007719F5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007719F6: ret  */

}

void sub_007719F7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007719F7u);

L_007719F7:
    eax = MEM32(ebp + (-0x10)); /* 0x007719F7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007719FA: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x007719FB: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A00: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A01: ret  */

}

void sub_00771A02(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A02u);

L_00771A02:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A02: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A05: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A06: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A0B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A0C: ret  */

}

void sub_00771A0D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A0Du);

L_00771A0D:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A0D: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A10: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A11: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A16: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A17: ret  */

}

void sub_00771A18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A18u);

L_00771A18:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A18: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A1B: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A1C: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A21: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A22: ret  */

}

void sub_00771A23(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A23u);

L_00771A23:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A23: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A26: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A27: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A2C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A2D: ret  */

}

void sub_00771A2E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A2Eu);

L_00771A2E:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A2E: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A31: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A32: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A37: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A38: ret  */

}

void sub_00771A39(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A39u);

L_00771A39:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A39: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A3C: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A3D: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A42: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A43: ret  */

}

void sub_00771A44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A44u);

L_00771A44:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A44: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A47: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A48: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A4D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A4E: ret  */

}

void sub_00771A4F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A4Fu);

L_00771A4F:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A4F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A52: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A53: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A58: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A59: ret  */

}

void sub_00771A5A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A5Au);

L_00771A5A:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A5A: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A5D: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A5E: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A63: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A64: ret  */

}

void sub_00771A65(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A65u);

L_00771A65:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A65: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A68: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A69: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A6E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A6F: ret  */

}

void sub_00771A70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A70u);

L_00771A70:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A70: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A73: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A74: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A79: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A7A: ret  */

}

void sub_00771A7B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A7Bu);

L_00771A7B:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A7B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A7E: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A7F: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A84: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A85: ret  */

}

void sub_00771A86(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A86u);

L_00771A86:
    eax = MEM32(ebp + (-0x10)); /* 0x00771A86: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771A89: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771A8A: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771A8F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771A90: ret  */

}

void sub_00771A91(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771A91u);

    goto L_00771A91;

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

L_00771A91:
    eax = 0x007DDF00u; /* 0x00771A91: mov eax, 0x7ddf00 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771A96: jmp 0x75bfd2 */

}

void sub_00771AA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771AA0u);

L_00771AA0:
    PUSH32(esp, 0x00405330u); /* 0x00771AA0: push 0x405330 */
    PUSH32(esp, 0x14u); /* 0x00771AA5: push 0x14 */
    PUSH32(esp, 0x50u); /* 0x00771AA7: push 0x50 */
    eax = ebp + (-0x650); /* 0x00771AA9: lea eax, [ebp - 0x650] */
    PUSH32(esp, eax); /* 0x00771AAF: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00771AB0: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771AB5: ret  */

}

void sub_00771AB6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771AB6u);

L_00771AB6:
    PUSH32(esp, 0x00405330u); /* 0x00771AB6: push 0x405330 */
    PUSH32(esp, 0x14u); /* 0x00771ABB: push 0x14 */
    PUSH32(esp, 0x50u); /* 0x00771ABD: push 0x50 */
    eax = ebp + (-0xC90); /* 0x00771ABF: lea eax, [ebp - 0xc90] */
    PUSH32(esp, eax); /* 0x00771AC5: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00771AC6: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771ACB: ret  */

}

void sub_00771ACC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771ACCu);

    goto L_00771ACC;

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

L_00771ACC:
    eax = 0x007DDF2Cu; /* 0x00771ACC: mov eax, 0x7ddf2c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771AD1: jmp 0x75bfd2 */

}

void sub_00771AE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771AE0u);

L_00771AE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771AE0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0041E480u); RECOMP_RETURN(); /* 0x00771AE3: jmp 0x41e480 */

}

void sub_00771AE8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771AE8u);

L_00771AE8:
    PUSH32(esp, 0); /* 0x00771AE8: push 0 */
    PUSH32(esp, 0x007851A0u); /* 0x00771AEA: push 0x7851a0 */
    eax = MEM32(ebp + 0x4); /* 0x00771AEF: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00771AF2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00771AF3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00771AF8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771AFB: ret  */

}

void sub_00771AFC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771AFCu);

    goto L_00771AFC;

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

L_00771AFC:
    eax = 0x007DDF84u; /* 0x00771AFC: mov eax, 0x7ddf84 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771B01: jmp 0x75bfd2 */

}

void sub_00771B10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B10u);

L_00771B10:
    eax = MEM32(ebp + (-0x1EC)); /* 0x00771B10: mov eax, dword ptr [ebp - 0x1ec] */
    PUSH32(esp, eax); /* 0x00771B16: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771B17: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771B1C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771B1D: ret  */

}

void sub_00771B1E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B1Eu);

    goto L_00771B1E;

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

L_00771B1E:
    eax = 0x007DDFA8u; /* 0x00771B1E: mov eax, 0x7ddfa8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771B23: jmp 0x75bfd2 */

}

void sub_00771B30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B30u);

L_00771B30:
    PUSH32(esp, 0); /* 0x00771B30: push 0 */
    PUSH32(esp, 0x00785BC0u); /* 0x00771B32: push 0x785bc0 */
    eax = MEM32(ebp + (-0x3C)); /* 0x00771B37: mov eax, dword ptr [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x00771B3A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00771B3B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00771B40: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771B43: ret  */

}

void sub_00771B44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B44u);

    goto L_00771B44;

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

L_00771B44:
    eax = 0x007DDFCCu; /* 0x00771B44: mov eax, 0x7ddfcc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771B49: jmp 0x75bfd2 */

}

void sub_00771B50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B50u);

L_00771B50:
    eax = MEM32(ebp + 0xC); /* 0x00771B50: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00771B53: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771B54: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771B59: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771B5A: ret  */

}

void sub_00771B5B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B5Bu);

L_00771B5B:
    eax = MEM32(ebp + 0x8); /* 0x00771B5B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00771B5E: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771B5F: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771B64: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771B65: ret  */

}

void sub_00771B66(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B66u);

L_00771B66:
    eax = MEM32(ebp + 0x8); /* 0x00771B66: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00771B69: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771B6A: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771B6F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771B70: ret  */

}

void sub_00771B71(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B71u);

L_00771B71:
    eax = MEM32(ebp + 0x8); /* 0x00771B71: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00771B74: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771B75: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771B7A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771B7B: ret  */

}

void sub_00771B7C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B7Cu);

L_00771B7C:
    eax = MEM32(ebp + 0xC); /* 0x00771B7C: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00771B7F: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771B80: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771B85: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771B86: ret  */

}

void sub_00771B87(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771B87u);

    goto L_00771B87;

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

L_00771B87:
    eax = 0x007DE04Cu; /* 0x00771B87: mov eax, 0x7de04c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771B8C: jmp 0x75bfd2 */

}

void sub_00771BA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BA0u);

L_00771BA0:
    eax = MEM32(ebp + 0x8); /* 0x00771BA0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00771BA3: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771BA4: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771BA9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771BAA: ret  */

}

void sub_00771BAB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BABu);

L_00771BAB:
    eax = MEM32(ebp + 0xC); /* 0x00771BAB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00771BAE: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771BAF: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771BB4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771BB5: ret  */

}

void sub_00771BB6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BB6u);

L_00771BB6:
    eax = MEM32(ebp + 0xC); /* 0x00771BB6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00771BB9: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771BBA: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771BBF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771BC0: ret  */

}

void sub_00771BC1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BC1u);

L_00771BC1:
    eax = MEM32(ebp + 0xC); /* 0x00771BC1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00771BC4: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771BC5: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771BCA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771BCB: ret  */

}

void sub_00771BCC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BCCu);

    goto L_00771BCC;

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

L_00771BCC:
    eax = 0x007DE008u; /* 0x00771BCC: mov eax, 0x7de008 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771BD1: jmp 0x75bfd2 */

}

void sub_00771BE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BE0u);

L_00771BE0:
    eax = MEM32(ebp + 0x8); /* 0x00771BE0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00771BE3: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771BE4: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771BE9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771BEA: ret  */

}

void sub_00771BEB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BEBu);

L_00771BEB:
    eax = MEM32(ebp + 0xC); /* 0x00771BEB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00771BEE: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771BEF: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771BF4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771BF5: ret  */

}

void sub_00771BF6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771BF6u);

L_00771BF6:
    eax = MEM32(ebp + 0xC); /* 0x00771BF6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00771BF9: push eax */
    RECOMP_CALL(sub_004019E0); /* 0x00771BFA: call 0x4019e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771BFF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771C00: ret  */

}

void sub_00771C01(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C01u);

    goto L_00771C01;

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

L_00771C01:
    eax = 0x007DE080u; /* 0x00771C01: mov eax, 0x7de080 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771C06: jmp 0x75bfd2 */

}

void sub_00771C10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C10u);

L_00771C10:
    ecx = ebp + (-0x328); /* 0x00771C10: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00771C16: jmp 0x5e0bf0 */

}

void sub_00771C1B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C1Bu);

L_00771C1B:
    ecx = ebp + (-0x364); /* 0x00771C1B: lea ecx, [ebp - 0x364] */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00771C21: jmp 0x4022c0 */

}

void sub_00771C26(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C26u);

    goto L_00771C26;

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

L_00771C26:
    eax = 0x007DE0ACu; /* 0x00771C26: mov eax, 0x7de0ac */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771C2B: jmp 0x75bfd2 */

}

void sub_00771C30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C30u);

L_00771C30:
    ecx = ebp + (-0x274); /* 0x00771C30: lea ecx, [ebp - 0x274] */
    RECOMP_ITAIL(0x0043E060u); RECOMP_RETURN(); /* 0x00771C36: jmp 0x43e060 */

}

void sub_00771C3B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C3Bu);

    goto L_00771C3B;

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

L_00771C3B:
    eax = 0x007DE0D0u; /* 0x00771C3B: mov eax, 0x7de0d0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771C40: jmp 0x75bfd2 */

}

void sub_00771C50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C50u);

L_00771C50:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771C50: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00430600u); RECOMP_RETURN(); /* 0x00771C53: jmp 0x430600 */

}

void sub_00771C58(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C58u);

    goto L_00771C58;

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

L_00771C58:
    eax = 0x007DE118u; /* 0x00771C58: mov eax, 0x7de118 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771C5D: jmp 0x75bfd2 */

}

void sub_00771C70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C70u);

L_00771C70:
    eax = MEM32(ebp + (-0x374)); /* 0x00771C70: mov eax, dword ptr [ebp - 0x374] */
    PUSH32(esp, eax); /* 0x00771C76: push eax */
    RECOMP_CALL(sub_00403580); /* 0x00771C77: call 0x403580 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771C7C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771C7D: ret  */

}

void sub_00771C7E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C7Eu);

L_00771C7E:
    ecx = ebp + (-0x328); /* 0x00771C7E: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00771C84: jmp 0x5e0bf0 */

}

void sub_00771C89(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771C89u);

    goto L_00771C89;

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

L_00771C89:
    eax = 0x007DE144u; /* 0x00771C89: mov eax, 0x7de144 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771C8E: jmp 0x75bfd2 */

}

void sub_00771CA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771CA0u);

L_00771CA0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771CA0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x00771CA3: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00771CA6: jmp 0x4358e0 */

}

void sub_00771CAB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771CABu);

    goto L_00771CAB;

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

L_00771CAB:
    eax = 0x007DE168u; /* 0x00771CAB: mov eax, 0x7de168 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771CB0: jmp 0x75bfd2 */

}

void sub_00771CC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771CC0u);

L_00771CC0:
    PUSH32(esp, 0); /* 0x00771CC0: push 0 */
    PUSH32(esp, 0x00786338u); /* 0x00771CC2: push 0x786338 */
    eax = MEM32(ebp + (-0x10)); /* 0x00771CC7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771CCA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00771CCB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00771CD0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771CD3: ret  */

}

void sub_00771CD4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771CD4u);

    goto L_00771CD4;

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

L_00771CD4:
    eax = 0x007DE1B0u; /* 0x00771CD4: mov eax, 0x7de1b0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771CD9: jmp 0x75bfd2 */

}

void sub_00771CE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771CE0u);

L_00771CE0:
    ecx = ebp + (-0x328); /* 0x00771CE0: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00771CE6: jmp 0x5e0bf0 */

}

void sub_00771CEB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771CEBu);

    goto L_00771CEB;

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

L_00771CEB:
    eax = 0x007DE0F4u; /* 0x00771CEB: mov eax, 0x7de0f4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771CF0: jmp 0x75bfd2 */

}

void sub_00771D00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D00u);

L_00771D00:
    ecx = ebp + (-0x14); /* 0x00771D00: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00771D03: jmp 0x4def30 */

}

void sub_00771D08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D08u);

L_00771D08:
    ecx = ebp + (-0x14); /* 0x00771D08: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00771D0B: jmp 0x4def30 */

}

void sub_00771D10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D10u);

L_00771D10:
    ecx = ebp + (-0x14); /* 0x00771D10: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00771D13: jmp 0x4def30 */

}

void sub_00771D18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D18u);

L_00771D18:
    ecx = ebp + (-0x14); /* 0x00771D18: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00771D1B: jmp 0x4def30 */

}

void sub_00771D20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D20u);

L_00771D20:
    ecx = ebp + (-0x1C); /* 0x00771D20: lea ecx, [ebp - 0x1c] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00771D23: jmp 0x4def30 */

}

void sub_00771D28(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D28u);

    goto L_00771D28;

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

L_00771D28:
    eax = 0x007DE218u; /* 0x00771D28: mov eax, 0x7de218 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771D2D: jmp 0x75bfd2 */

}

void sub_00771D40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D40u);

L_00771D40:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771D40: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x00771D43: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771D46: jmp 0x4835c0 */

}

void sub_00771D4B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D4Bu);

    goto L_00771D4B;

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

L_00771D4B:
    eax = 0x007DE260u; /* 0x00771D4B: mov eax, 0x7de260 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771D50: jmp 0x75bfd2 */

}

void sub_00771D60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D60u);

L_00771D60:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771D60: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x00771D63: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771D66: jmp 0x4835c0 */

}

void sub_00771D6B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D6Bu);

    goto L_00771D6B;

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

L_00771D6B:
    eax = 0x007DE23Cu; /* 0x00771D6B: mov eax, 0x7de23c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771D70: jmp 0x75bfd2 */

}

void sub_00771D80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D80u);

L_00771D80:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771D80: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x00771D83: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771D86: jmp 0x4835c0 */

}

void sub_00771D8B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D8Bu);

L_00771D8B:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771D8B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x00771D8E: add ecx, 0x38 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00771D91: jmp 0x4358e0 */

}

void sub_00771D96(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771D96u);

L_00771D96:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771D96: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x00771D99: add ecx, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00771D9C: jmp 0x4358e0 */

}

void sub_00771DA1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771DA1u);

    goto L_00771DA1;

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

L_00771DA1:
    eax = 0x007DE294u; /* 0x00771DA1: mov eax, 0x7de294 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771DA6: jmp 0x75bfd2 */

}

void sub_00771DB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771DB0u);

L_00771DB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771DB0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004367C0u); RECOMP_RETURN(); /* 0x00771DB3: jmp 0x4367c0 */

}

void sub_00771DB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771DB8u);

L_00771DB8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771DB8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00771DBB: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00437AD0u); RECOMP_RETURN(); /* 0x00771DBE: jmp 0x437ad0 */

}

void sub_00771DC3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771DC3u);

L_00771DC3:
    PUSH32(esp, 0x004022C0u); /* 0x00771DC3: push 0x4022c0 */
    PUSH32(esp, 2); /* 0x00771DC8: push 2 */
    PUSH32(esp, 0x68u); /* 0x00771DCA: push 0x68 */
    eax = MEM32(ebp + (-0x10)); /* 0x00771DCC: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x00771DCF: add eax, 0x3c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00771DD2: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00771DD3: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771DD8: ret  */

}

void sub_00771DD9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771DD9u);

    goto L_00771DD9;

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

L_00771DD9:
    eax = 0x007DE3A4u; /* 0x00771DD9: mov eax, 0x7de3a4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771DDE: jmp 0x75bfd2 */

}

void sub_00771DF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771DF0u);

L_00771DF0:
    eax = MEM32(ebp + (-0x384)); /* 0x00771DF0: mov eax, dword ptr [ebp - 0x384] */
    PUSH32(esp, eax); /* 0x00771DF6: push eax */
    RECOMP_CALL(sub_00403580); /* 0x00771DF7: call 0x403580 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771DFC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771DFD: ret  */

}

void sub_00771DFE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771DFEu);

L_00771DFE:
    ecx = ebp + (-0x328); /* 0x00771DFE: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00771E04: jmp 0x5e0bf0 */

}

void sub_00771E09(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E09u);

    goto L_00771E09;

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

L_00771E09:
    eax = 0x007DE2C0u; /* 0x00771E09: mov eax, 0x7de2c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771E0E: jmp 0x75bfd2 */

}

void sub_00771E20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E20u);

L_00771E20:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771E20: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00771E23: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00771E26: jmp 0x4def30 */

}

void sub_00771E2B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E2Bu);

L_00771E2B:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771E2B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x00771E2E: add ecx, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771E31: jmp 0x4835c0 */

}

void sub_00771E36(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E36u);

    goto L_00771E36;

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

L_00771E36:
    eax = 0x007DE2ECu; /* 0x00771E36: mov eax, 0x7de2ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771E3B: jmp 0x75bfd2 */

}

void sub_00771E40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E40u);

L_00771E40:
    PUSH32(esp, 0); /* 0x00771E40: push 0 */
    PUSH32(esp, 0x007863ACu); /* 0x00771E42: push 0x7863ac */
    eax = MEM32(ebp + 0x4); /* 0x00771E47: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00771E4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00771E4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00771E50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771E53: ret  */

}

void sub_00771E54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E54u);

    goto L_00771E54;

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

L_00771E54:
    eax = 0x007DE310u; /* 0x00771E54: mov eax, 0x7de310 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771E59: jmp 0x75bfd2 */

}

void sub_00771E60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E60u);

L_00771E60:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771E60: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x00771E63: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00434EE0u); RECOMP_RETURN(); /* 0x00771E66: jmp 0x434ee0 */

}

void sub_00771E6B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E6Bu);

    goto L_00771E6B;

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

L_00771E6B:
    eax = 0x007DE1D4u; /* 0x00771E6B: mov eax, 0x7de1d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771E70: jmp 0x75bfd2 */

}

void sub_00771E80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E80u);

L_00771E80:
    eax = MEM32(ebp + 0x4); /* 0x00771E80: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00771E83: push eax */
    RECOMP_CALL(sub_00403580); /* 0x00771E84: call 0x403580 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00771E89: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771E8A: ret  */

}

void sub_00771E8B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771E8Bu);

    goto L_00771E8B;

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

L_00771E8B:
    eax = 0x007DE334u; /* 0x00771E8B: mov eax, 0x7de334 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771E90: jmp 0x75bfd2 */

}

void sub_00771EA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771EA0u);

L_00771EA0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771EA0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x00771EA3: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771EA6: jmp 0x4835c0 */

}

void sub_00771EAB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771EABu);

L_00771EAB:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771EAB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x00771EAE: add ecx, 0x38 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00771EB1: jmp 0x4358e0 */

}

void sub_00771EB6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771EB6u);

L_00771EB6:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771EB6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x00771EB9: add ecx, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00771EBC: jmp 0x4358e0 */

}

void sub_00771EC1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771EC1u);

L_00771EC1:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771EC1: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x124u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x124u; /* 0x00771EC4: add ecx, 0x124 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00432AA0u); RECOMP_RETURN(); /* 0x00771ECA: jmp 0x432aa0 */

}

void sub_00771ECF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771ECFu);

    goto L_00771ECF;

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

L_00771ECF:
    eax = 0x007DE370u; /* 0x00771ECF: mov eax, 0x7de370 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771ED4: jmp 0x75bfd2 */

}

void sub_00771EE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771EE0u);

L_00771EE0:
    PUSH32(esp, 0); /* 0x00771EE0: push 0 */
    PUSH32(esp, 0x00786494u); /* 0x00771EE2: push 0x786494 */
    eax = MEM32(ebp + (-0x10)); /* 0x00771EE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00771EEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00771EEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00771EF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771EF3: ret  */

}

void sub_00771EF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771EF4u);

    goto L_00771EF4;

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

L_00771EF4:
    eax = 0x007DE3C8u; /* 0x00771EF4: mov eax, 0x7de3c8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771EF9: jmp 0x75bfd2 */

}

void sub_00771F00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F00u);

L_00771F00:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771F00: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x00771F03: add ecx, 0x28 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771F06: jmp 0x4835c0 */

}

void sub_00771F0B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F0Bu);

L_00771F0B:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771F0B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x00771F0E: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00771F11: jmp 0x4358e0 */

}

void sub_00771F16(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F16u);

L_00771F16:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771F16: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x00771F19: add ecx, 0x38 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771F1C: jmp 0x4835c0 */

}

void sub_00771F21(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F21u);

L_00771F21:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771F21: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x00771F24: add ecx, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00771F27: jmp 0x4835c0 */

}

void sub_00771F2C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F2Cu);

L_00771F2C:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771F2C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x00771F2F: add ecx, 0x48 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00436800u); RECOMP_RETURN(); /* 0x00771F32: jmp 0x436800 */

}

void sub_00771F37(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F37u);

    goto L_00771F37;

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

L_00771F37:
    eax = 0x007DE40Cu; /* 0x00771F37: mov eax, 0x7de40c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771F3C: jmp 0x75bfd2 */

}

void sub_00771F50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F50u);

L_00771F50:
    PUSH32(esp, 0); /* 0x00771F50: push 0 */
    PUSH32(esp, 0x007864BCu); /* 0x00771F52: push 0x7864bc */
    eax = MEM32(ebp + (-0x90)); /* 0x00771F57: mov eax, dword ptr [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x00771F5D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00771F5E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00771F63: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771F66: ret  */

}

void sub_00771F67(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F67u);

    goto L_00771F67;

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

L_00771F67:
    eax = 0x007DE430u; /* 0x00771F67: mov eax, 0x7de430 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771F6C: jmp 0x75bfd2 */

}

void sub_00771F80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F80u);

L_00771F80:
    ecx = MEM32(ebp + (-0x10)); /* 0x00771F80: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00771F83: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00479100u); RECOMP_RETURN(); /* 0x00771F86: jmp 0x479100 */

}

void sub_00771F8B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771F8Bu);

    goto L_00771F8B;

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

L_00771F8B:
    eax = 0x007DE18Cu; /* 0x00771F8B: mov eax, 0x7de18c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771F90: jmp 0x75bfd2 */

}

void sub_00771FA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771FA0u);

L_00771FA0:
    PUSH32(esp, 0); /* 0x00771FA0: push 0 */
    PUSH32(esp, 0x007864CCu); /* 0x00771FA2: push 0x7864cc */
    eax = MEM32(ebp + (-0x20)); /* 0x00771FA7: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x00771FAA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00771FAB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00771FB0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00771FB3: ret  */

}

void sub_00771FB4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771FB4u);

    goto L_00771FB4;

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

L_00771FB4:
    eax = 0x007DE454u; /* 0x00771FB4: mov eax, 0x7de454 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771FB9: jmp 0x75bfd2 */

}

void sub_00771FC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771FC0u);

L_00771FC0:
    ecx = ebp + (-0x274); /* 0x00771FC0: lea ecx, [ebp - 0x274] */
    RECOMP_ITAIL(0x0043E060u); RECOMP_RETURN(); /* 0x00771FC6: jmp 0x43e060 */

}

void sub_00771FCB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771FCBu);

    goto L_00771FCB;

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

L_00771FCB:
    eax = 0x007DE478u; /* 0x00771FCB: mov eax, 0x7de478 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771FD0: jmp 0x75bfd2 */

}

void sub_00771FE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771FE0u);

L_00771FE0:
    ecx = ebp + (-0x320); /* 0x00771FE0: lea ecx, [ebp - 0x320] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00771FE6: jmp 0x5e0bf0 */

}

void sub_00771FEB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771FEBu);

    goto L_00771FEB;

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

L_00771FEB:
    eax = 0x007DE49Cu; /* 0x00771FEB: mov eax, 0x7de49c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00771FF0: jmp 0x75bfd2 */

}

void sub_00772000(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772000u);

L_00772000:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772000: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00441860u); RECOMP_RETURN(); /* 0x00772003: jmp 0x441860 */

}

void sub_00772008(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772008u);

    goto L_00772008;

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

L_00772008:
    eax = 0x007DE4E4u; /* 0x00772008: mov eax, 0x7de4e4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077200D: jmp 0x75bfd2 */

}

void sub_00772020(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772020u);

L_00772020:
    PUSH32(esp, 0); /* 0x00772020: push 0 */
    PUSH32(esp, 0x00787B34u); /* 0x00772022: push 0x787b34 */
    eax = MEM32(ebp + 0x4); /* 0x00772027: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077202A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077202B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772030: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772033: ret  */

}

void sub_00772034(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772034u);

    goto L_00772034;

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

L_00772034:
    eax = 0x007DE508u; /* 0x00772034: mov eax, 0x7de508 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772039: jmp 0x75bfd2 */

}

void sub_00772040(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772040u);

L_00772040:
    PUSH32(esp, 0); /* 0x00772040: push 0 */
    PUSH32(esp, 0x00787B44u); /* 0x00772042: push 0x787b44 */
    eax = MEM32(ebp + (-0x24)); /* 0x00772047: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x0077204A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077204B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772050: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772053: ret  */

}

void sub_00772054(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772054u);

    goto L_00772054;

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

L_00772054:
    eax = 0x007DE52Cu; /* 0x00772054: mov eax, 0x7de52c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772059: jmp 0x75bfd2 */

}

void sub_00772060(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772060u);

L_00772060:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772060: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0044CDB0u); RECOMP_RETURN(); /* 0x00772063: jmp 0x44cdb0 */

}

void sub_00772068(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772068u);

    goto L_00772068;

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

L_00772068:
    eax = 0x007DE550u; /* 0x00772068: mov eax, 0x7de550 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077206D: jmp 0x75bfd2 */

}

void sub_00772080(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772080u);

L_00772080:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772080: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0044CDB0u); RECOMP_RETURN(); /* 0x00772083: jmp 0x44cdb0 */

}

void sub_00772088(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772088u);

L_00772088:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772088: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x340u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x340u; /* 0x0077208B: add ecx, 0x340 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579740u); RECOMP_RETURN(); /* 0x00772091: jmp 0x579740 */

}

void sub_00772096(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772096u);

L_00772096:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772096: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x370u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x370u; /* 0x00772099: add ecx, 0x370 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579740u); RECOMP_RETURN(); /* 0x0077209F: jmp 0x579740 */

}

void sub_007720A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007720A4u);

L_007720A4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007720A4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3A0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3A0u; /* 0x007720A7: add ecx, 0x3a0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579740u); RECOMP_RETURN(); /* 0x007720AD: jmp 0x579740 */

}

void sub_007720B2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007720B2u);

L_007720B2:
    ecx = MEM32(ebp + (-0x10)); /* 0x007720B2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3D0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3D0u; /* 0x007720B5: add ecx, 0x3d0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579740u); RECOMP_RETURN(); /* 0x007720BB: jmp 0x579740 */

}

void sub_007720C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007720C0u);

    goto L_007720C0;

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

L_007720C0:
    eax = 0x007DE594u; /* 0x007720C0: mov eax, 0x7de594 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007720C5: jmp 0x75bfd2 */

}

void sub_007720D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007720D0u);

L_007720D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007720D0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0044CDB0u); RECOMP_RETURN(); /* 0x007720D3: jmp 0x44cdb0 */

}

void sub_007720D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007720D8u);

L_007720D8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007720D8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x340u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x340u; /* 0x007720DB: add ecx, 0x340 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579740u); RECOMP_RETURN(); /* 0x007720E1: jmp 0x579740 */

}

void sub_007720E6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007720E6u);

L_007720E6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007720E6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x370u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x370u; /* 0x007720E9: add ecx, 0x370 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579740u); RECOMP_RETURN(); /* 0x007720EF: jmp 0x579740 */

}

void sub_007720F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007720F4u);

L_007720F4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007720F4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3A0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3A0u; /* 0x007720F7: add ecx, 0x3a0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579740u); RECOMP_RETURN(); /* 0x007720FD: jmp 0x579740 */

}

void sub_00772102(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772102u);

    goto L_00772102;

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

L_00772102:
    eax = 0x007DE5D0u; /* 0x00772102: mov eax, 0x7de5d0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772107: jmp 0x75bfd2 */

}

void sub_00772110(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772110u);

L_00772110:
    PUSH32(esp, 0); /* 0x00772110: push 0 */
    PUSH32(esp, 0x00787B34u); /* 0x00772112: push 0x787b34 */
    eax = MEM32(ebp + (-0x20)); /* 0x00772117: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x0077211A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077211B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772120: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772123: ret  */

}

void sub_00772124(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772124u);

    goto L_00772124;

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

L_00772124:
    eax = 0x007DE5F4u; /* 0x00772124: mov eax, 0x7de5f4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772129: jmp 0x75bfd2 */

}

void sub_00772130(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772130u);

L_00772130:
    ecx = MEM32(ebp + (-0x104)); /* 0x00772130: mov ecx, dword ptr [ebp - 0x104] */
    RECOMP_ITAIL(0x0044CDB0u); RECOMP_RETURN(); /* 0x00772136: jmp 0x44cdb0 */

}

void sub_0077213B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077213Bu);

L_0077213B:
    PUSH32(esp, 0); /* 0x0077213B: push 0 */
    PUSH32(esp, 0x007880CCu); /* 0x0077213D: push 0x7880cc */
    eax = MEM32(ebp + (-0x158)); /* 0x00772142: mov eax, dword ptr [ebp - 0x158] */
    PUSH32(esp, eax); /* 0x00772148: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772149: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077214E: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772151: ret  */

}

void sub_00772152(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772152u);

    goto L_00772152;

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

L_00772152:
    eax = 0x007DE620u; /* 0x00772152: mov eax, 0x7de620 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772157: jmp 0x75bfd2 */

}

void sub_00772160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772160u);

L_00772160:
    ecx = MEM32(ebp + (-0x94)); /* 0x00772160: mov ecx, dword ptr [ebp - 0x94] */
    RECOMP_ITAIL(0x0044CDB0u); RECOMP_RETURN(); /* 0x00772166: jmp 0x44cdb0 */

}

void sub_0077216B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077216Bu);

    goto L_0077216B;

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

L_0077216B:
    eax = 0x007DE644u; /* 0x0077216B: mov eax, 0x7de644 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772170: jmp 0x75bfd2 */

}

void sub_00772180(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772180u);

L_00772180:
    ecx = MEM32(ebp + (-0xF8)); /* 0x00772180: mov ecx, dword ptr [ebp - 0xf8] */
    RECOMP_ITAIL(0x0044CDB0u); RECOMP_RETURN(); /* 0x00772186: jmp 0x44cdb0 */

}

void sub_0077218B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077218Bu);

    goto L_0077218B;

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

L_0077218B:
    eax = 0x007DE668u; /* 0x0077218B: mov eax, 0x7de668 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772190: jmp 0x75bfd2 */

}

void sub_007721A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007721A0u);

L_007721A0:
    PUSH32(esp, 0); /* 0x007721A0: push 0 */
    PUSH32(esp, 0x00788144u); /* 0x007721A2: push 0x788144 */
    eax = MEM32(ebp + (-0x10)); /* 0x007721A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007721AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007721AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007721B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007721B3: ret  */

}

void sub_007721B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007721B4u);

L_007721B4:
    PUSH32(esp, 0); /* 0x007721B4: push 0 */
    PUSH32(esp, 0x00788134u); /* 0x007721B6: push 0x788134 */
    eax = MEM32(ebp + (-0x10)); /* 0x007721BB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007721BE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007721BF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007721C4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007721C7: ret  */

}

void sub_007721C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007721C8u);

L_007721C8:
    PUSH32(esp, 0); /* 0x007721C8: push 0 */
    PUSH32(esp, 0x00788124u); /* 0x007721CA: push 0x788124 */
    eax = MEM32(ebp + (-0x10)); /* 0x007721CF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007721D2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007721D3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007721D8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007721DB: ret  */

}

void sub_007721DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007721DCu);

    goto L_007721DC;

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

L_007721DC:
    eax = 0x007DE69Cu; /* 0x007721DC: mov eax, 0x7de69c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007721E1: jmp 0x75bfd2 */

}

void sub_007721F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007721F0u);

L_007721F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007721F0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0044CDB0u); RECOMP_RETURN(); /* 0x007721F3: jmp 0x44cdb0 */

}

void sub_007721F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007721F8u);

L_007721F8:
    PUSH32(esp, 0); /* 0x007721F8: push 0 */
    PUSH32(esp, 0x007880CCu); /* 0x007721FA: push 0x7880cc */
    eax = MEM32(ebp + 0x4); /* 0x007721FF: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00772202: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772203: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772208: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077220B: ret  */

}

void sub_0077220C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077220Cu);

    goto L_0077220C;

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

L_0077220C:
    eax = 0x007DE6C8u; /* 0x0077220C: mov eax, 0x7de6c8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772211: jmp 0x75bfd2 */

}

void sub_00772220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772220u);

L_00772220:
    eax = MEM32(ebp + (-0x10)); /* 0x00772220: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772223: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00772224: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772229: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077222A: ret  */

}

void sub_0077222B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077222Bu);

    goto L_0077222B;

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

L_0077222B:
    eax = 0x007DE6ECu; /* 0x0077222B: mov eax, 0x7de6ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772230: jmp 0x75bfd2 */

}

void sub_00772240(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772240u);

L_00772240:
    ecx = ebp + (-0x328); /* 0x00772240: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00772246: jmp 0x5e0bf0 */

}

void sub_0077224B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077224Bu);

    goto L_0077224B;

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

L_0077224B:
    eax = 0x007DE4C0u; /* 0x0077224B: mov eax, 0x7de4c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772250: jmp 0x75bfd2 */

}

void sub_00772260(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772260u);

L_00772260:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772260: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x00772263: jmp 0x475240 */

}

void sub_00772268(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772268u);

    goto L_00772268;

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

L_00772268:
    eax = 0x007DE710u; /* 0x00772268: mov eax, 0x7de710 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077226D: jmp 0x75bfd2 */

}

void sub_00772280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772280u);

L_00772280:
    eax = MEM32(ebp + 0x4); /* 0x00772280: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00772283: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772284: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772289: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077228A: ret  */

}

void sub_0077228B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077228Bu);

    goto L_0077228B;

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

L_0077228B:
    eax = 0x007DE758u; /* 0x0077228B: mov eax, 0x7de758 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772290: jmp 0x75bfd2 */

}

void sub_007722A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722A0u);

L_007722A0:
    eax = MEM32(ebp + 0x4); /* 0x007722A0: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007722A3: push eax */
    RECOMP_CALL(sub_00458160); /* 0x007722A4: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007722A9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007722AA: ret  */

}

void sub_007722AB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722ABu);

L_007722AB:
    eax = MEM32(ebp + 0x4); /* 0x007722AB: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007722AE: push eax */
    RECOMP_CALL(sub_00458160); /* 0x007722AF: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007722B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007722B5: ret  */

}

void sub_007722B6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722B6u);

    goto L_007722B6;

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

L_007722B6:
    eax = 0x007DE7A8u; /* 0x007722B6: mov eax, 0x7de7a8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007722BB: jmp 0x75bfd2 */

}

void sub_007722C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722C0u);

L_007722C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007722C0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x007722C3: jmp 0x475240 */

}

void sub_007722C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722C8u);

L_007722C8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007722C8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007722CB: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0045B4B0u); RECOMP_RETURN(); /* 0x007722CE: jmp 0x45b4b0 */

}

void sub_007722D3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722D3u);

L_007722D3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007722D3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x007722D6: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0045B4B0u); RECOMP_RETURN(); /* 0x007722D9: jmp 0x45b4b0 */

}

void sub_007722DE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722DEu);

L_007722DE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007722DE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x9Cu; /* 0x007722E1: add ecx, 0x9c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0045B4B0u); RECOMP_RETURN(); /* 0x007722E7: jmp 0x45b4b0 */

}

void sub_007722EC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722ECu);

L_007722EC:
    ecx = MEM32(ebp + (-0x10)); /* 0x007722EC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xE8u; /* 0x007722EF: add ecx, 0xe8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0045B4B0u); RECOMP_RETURN(); /* 0x007722F5: jmp 0x45b4b0 */

}

void sub_007722FA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007722FAu);

    goto L_007722FA;

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

L_007722FA:
    eax = 0x007DE7ECu; /* 0x007722FA: mov eax, 0x7de7ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007722FF: jmp 0x75bfd2 */

}

void sub_00772310(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772310u);

L_00772310:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772310: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x00772313: jmp 0x475240 */

}

void sub_00772318(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772318u);

L_00772318:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772318: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA4u; /* 0x0077231B: add ecx, 0xa4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00772321: jmp 0x5768e0 */

}

void sub_00772326(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772326u);

L_00772326:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772326: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCCu; /* 0x00772329: add ecx, 0xcc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x0077232F: jmp 0x5768e0 */

}

void sub_00772334(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772334u);

L_00772334:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772334: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xF4u; /* 0x00772337: add ecx, 0xf4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x0077233D: jmp 0x5768e0 */

}

void sub_00772342(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772342u);

L_00772342:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772342: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x11Cu; /* 0x00772345: add ecx, 0x11c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x0077234B: jmp 0x5768e0 */

}

void sub_00772350(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772350u);

L_00772350:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772350: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x144u; /* 0x00772353: add ecx, 0x144 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00772359: jmp 0x5768e0 */

}

void sub_0077235E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077235Eu);

    goto L_0077235E;

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

L_0077235E:
    eax = 0x007DE838u; /* 0x0077235E: mov eax, 0x7de838 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772363: jmp 0x75bfd2 */

}

void sub_00772370(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772370u);

L_00772370:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772370: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x00772373: jmp 0x475240 */

}

void sub_00772378(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772378u);

L_00772378:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772378: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x90u; /* 0x0077237B: add ecx, 0x90 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00772381: jmp 0x5768e0 */

}

void sub_00772386(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772386u);

    goto L_00772386;

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

L_00772386:
    eax = 0x007DE864u; /* 0x00772386: mov eax, 0x7de864 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077238B: jmp 0x75bfd2 */

}

void sub_00772390(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772390u);

L_00772390:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772390: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x00772393: jmp 0x475240 */

}

void sub_00772398(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772398u);

L_00772398:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772398: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC4u; /* 0x0077239B: add ecx, 0xc4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x007723A1: jmp 0x5768e0 */

}

void sub_007723A6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723A6u);

    goto L_007723A6;

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

L_007723A6:
    eax = 0x007DE890u; /* 0x007723A6: mov eax, 0x7de890 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007723AB: jmp 0x75bfd2 */

}

void sub_007723B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723B0u);

L_007723B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007723B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x007723B3: jmp 0x475240 */

}

void sub_007723B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723B8u);

L_007723B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007723B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x94u; /* 0x007723BB: add ecx, 0x94 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x007723C1: jmp 0x5768e0 */

}

void sub_007723C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723C6u);

    goto L_007723C6;

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

L_007723C6:
    eax = 0x007DE8BCu; /* 0x007723C6: mov eax, 0x7de8bc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007723CB: jmp 0x75bfd2 */

}

void sub_007723D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723D0u);

L_007723D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007723D0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0045D310u); RECOMP_RETURN(); /* 0x007723D3: jmp 0x45d310 */

}

void sub_007723D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723D8u);

    goto L_007723D8;

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

L_007723D8:
    eax = 0x007DE8E0u; /* 0x007723D8: mov eax, 0x7de8e0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007723DD: jmp 0x75bfd2 */

}

void sub_007723F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723F0u);

L_007723F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007723F0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0045D310u); RECOMP_RETURN(); /* 0x007723F3: jmp 0x45d310 */

}

void sub_007723F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007723F8u);

L_007723F8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007723F8: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x007723FB: jmp 0x475240 */

}

void sub_00772400(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772400u);

    goto L_00772400;

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

L_00772400:
    eax = 0x007DE90Cu; /* 0x00772400: mov eax, 0x7de90c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772405: jmp 0x75bfd2 */

}

void sub_00772410(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772410u);

L_00772410:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772410: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x00772413: jmp 0x475240 */

}

void sub_00772418(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772418u);

L_00772418:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772418: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA8u; /* 0x0077241B: add ecx, 0xa8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00772421: jmp 0x5768e0 */

}

void sub_00772426(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772426u);

    goto L_00772426;

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

L_00772426:
    eax = 0x007DE938u; /* 0x00772426: mov eax, 0x7de938 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077242B: jmp 0x75bfd2 */

}

void sub_00772430(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772430u);

L_00772430:
    eax = MEM32(ebp + 0x8); /* 0x00772430: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00772433: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772434: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772439: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077243A: ret  */

}

void sub_0077243B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077243Bu);

    goto L_0077243B;

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

L_0077243B:
    eax = 0x007DE980u; /* 0x0077243B: mov eax, 0x7de980 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772440: jmp 0x75bfd2 */

}

void sub_00772450(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772450u);

L_00772450:
    eax = MEM32(ebp + 0x8); /* 0x00772450: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00772453: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772454: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772459: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077245A: ret  */

}

void sub_0077245B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077245Bu);

L_0077245B:
    eax = MEM32(ebp + 0x8); /* 0x0077245B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0077245E: push eax */
    RECOMP_CALL(sub_00458160); /* 0x0077245F: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772464: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772465: ret  */

}

void sub_00772466(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772466u);

    goto L_00772466;

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

L_00772466:
    eax = 0x007DE9ACu; /* 0x00772466: mov eax, 0x7de9ac */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077246B: jmp 0x75bfd2 */

}

void sub_00772470(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772470u);

L_00772470:
    eax = MEM32(ebp + (-0x1C)); /* 0x00772470: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x00772473: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772474: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772479: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077247A: ret  */

}

void sub_0077247B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077247Bu);

L_0077247B:
    eax = MEM32(ebp + (-0x20)); /* 0x0077247B: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x0077247E: push eax */
    RECOMP_CALL(sub_00458160); /* 0x0077247F: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772484: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772485: ret  */

}

void sub_00772486(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772486u);

    goto L_00772486;

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

L_00772486:
    eax = 0x007DE9D8u; /* 0x00772486: mov eax, 0x7de9d8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077248B: jmp 0x75bfd2 */

}

void sub_00772490(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772490u);

L_00772490:
    eax = MEM32(ebp + (-0x10)); /* 0x00772490: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772493: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772494: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772499: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077249A: ret  */

}

void sub_0077249B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077249Bu);

L_0077249B:
    eax = MEM32(ebp + (-0x10)); /* 0x0077249B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077249E: push eax */
    RECOMP_CALL(sub_00458160); /* 0x0077249F: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007724A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007724A5: ret  */

}

void sub_007724A6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007724A6u);

    goto L_007724A6;

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

L_007724A6:
    eax = 0x007DEA04u; /* 0x007724A6: mov eax, 0x7dea04 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007724AB: jmp 0x75bfd2 */

}

void sub_007724B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007724B0u);

L_007724B0:
    PUSH32(esp, 0x004022C0u); /* 0x007724B0: push 0x4022c0 */
    PUSH32(esp, 6); /* 0x007724B5: push 6 */
    PUSH32(esp, 0x1Cu); /* 0x007724B7: push 0x1c */
    eax = MEM32(ebp + (-0x10)); /* 0x007724B9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2Cu; /* 0x007724BC: add eax, 0x2c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007724BF: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x007724C0: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007724C5: ret  */

}

void sub_007724C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007724C6u);

    goto L_007724C6;

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

L_007724C6:
    eax = 0x007DEA28u; /* 0x007724C6: mov eax, 0x7dea28 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007724CB: jmp 0x75bfd2 */

}

void sub_007724D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007724D0u);

L_007724D0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007724D0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x74u; /* 0x007724D3: add ecx, 0x74 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x007724D6: jmp 0x5768e0 */

}

void sub_007724DB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007724DBu);

    goto L_007724DB;

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

L_007724DB:
    eax = 0x007DEA4Cu; /* 0x007724DB: mov eax, 0x7dea4c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007724E0: jmp 0x75bfd2 */

}

void sub_007724F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007724F0u);

L_007724F0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007724F0: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x007724F3: jmp 0x475240 */

}

void sub_007724F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007724F8u);

L_007724F8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007724F8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x90u; /* 0x007724FB: add ecx, 0x90 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00772501: jmp 0x5768e0 */

}

void sub_00772506(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772506u);

    goto L_00772506;

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

L_00772506:
    eax = 0x007DEA78u; /* 0x00772506: mov eax, 0x7dea78 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077250B: jmp 0x75bfd2 */

}

void sub_00772510(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772510u);

L_00772510:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772510: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x00772513: jmp 0x475240 */

}

void sub_00772518(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772518u);

L_00772518:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772518: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x188u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x188u; /* 0x0077251B: add ecx, 0x188 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00772521: jmp 0x5768e0 */

}

void sub_00772526(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772526u);

    goto L_00772526;

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

L_00772526:
    eax = 0x007DEAA4u; /* 0x00772526: mov eax, 0x7deaa4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077252B: jmp 0x75bfd2 */

}

void sub_00772530(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772530u);

L_00772530:
    eax = MEM32(ebp + (-0x10)); /* 0x00772530: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772533: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772534: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772539: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077253A: ret  */

}

void sub_0077253B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077253Bu);

    goto L_0077253B;

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

L_0077253B:
    eax = 0x007DE77Cu; /* 0x0077253B: mov eax, 0x7de77c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772540: jmp 0x75bfd2 */

}

void sub_00772550(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772550u);

L_00772550:
    eax = MEM32(ebp + (-0x28)); /* 0x00772550: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00772553: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772554: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772559: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077255A: ret  */

}

void sub_0077255B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077255Bu);

L_0077255B:
    eax = MEM32(ebp + (-0x2C)); /* 0x0077255B: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x0077255E: push eax */
    RECOMP_CALL(sub_00458160); /* 0x0077255F: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772564: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772565: ret  */

}

void sub_00772566(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772566u);

    goto L_00772566;

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

L_00772566:
    eax = 0x007DEAD0u; /* 0x00772566: mov eax, 0x7dead0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077256B: jmp 0x75bfd2 */

}

void sub_00772570(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772570u);

L_00772570:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772570: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00473C60u); RECOMP_RETURN(); /* 0x00772573: jmp 0x473c60 */

}

void sub_00772578(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772578u);

    goto L_00772578;

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

L_00772578:
    eax = 0x007DEAF4u; /* 0x00772578: mov eax, 0x7deaf4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077257D: jmp 0x75bfd2 */

}

void sub_00772590(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772590u);

L_00772590:
    eax = MEM32(ebp + (-0x20)); /* 0x00772590: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x00772593: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772594: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772599: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077259A: ret  */

}

void sub_0077259B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077259Bu);

    goto L_0077259B;

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

L_0077259B:
    eax = 0x007DE734u; /* 0x0077259B: mov eax, 0x7de734 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007725A0: jmp 0x75bfd2 */

}

void sub_007725B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007725B0u);

L_007725B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007725B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00477060u); RECOMP_RETURN(); /* 0x007725B3: jmp 0x477060 */

}

void sub_007725B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007725B8u);

L_007725B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007725B8: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x007725BB: jmp 0x475240 */

}

void sub_007725C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007725C0u);

    goto L_007725C0;

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

L_007725C0:
    eax = 0x007DEB20u; /* 0x007725C0: mov eax, 0x7deb20 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007725C5: jmp 0x75bfd2 */

}

void sub_007725D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007725D0u);

L_007725D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007725D0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x74u; /* 0x007725D3: add ecx, 0x74 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x007725D6: jmp 0x5768e0 */

}

void sub_007725DB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007725DBu);

    goto L_007725DB;

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

L_007725DB:
    eax = 0x007DEB44u; /* 0x007725DB: mov eax, 0x7deb44 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007725E0: jmp 0x75bfd2 */

}

void sub_007725F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007725F0u);

L_007725F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007725F0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00479880u); RECOMP_RETURN(); /* 0x007725F3: jmp 0x479880 */

}

void sub_007725F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007725F8u);

    goto L_007725F8;

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

L_007725F8:
    eax = 0x007DEB68u; /* 0x007725F8: mov eax, 0x7deb68 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007725FD: jmp 0x75bfd2 */

}

void sub_00772610(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772610u);

L_00772610:
    eax = MEM32(ebp + (-0x24)); /* 0x00772610: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x00772613: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772614: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772619: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077261A: ret  */

}

void sub_0077261B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077261Bu);

    goto L_0077261B;

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

L_0077261B:
    eax = 0x007DEB8Cu; /* 0x0077261B: mov eax, 0x7deb8c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772620: jmp 0x75bfd2 */

}

void sub_00772630(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772630u);

L_00772630:
    eax = MEM32(ebp + 0x18); /* 0x00772630: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x00772633: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772634: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772639: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077263A: ret  */

}

void sub_0077263B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077263Bu);

    goto L_0077263B;

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

L_0077263B:
    eax = 0x007DEBB0u; /* 0x0077263B: mov eax, 0x7debb0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772640: jmp 0x75bfd2 */

}

void sub_00772650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772650u);

L_00772650:
    eax = MEM32(ebp + (-0x1C)); /* 0x00772650: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x00772653: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772654: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772659: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077265A: ret  */

}

void sub_0077265B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077265Bu);

    goto L_0077265B;

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

L_0077265B:
    eax = 0x007DE95Cu; /* 0x0077265B: mov eax, 0x7de95c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772660: jmp 0x75bfd2 */

}

void sub_00772670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772670u);

L_00772670:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772670: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00479710u); RECOMP_RETURN(); /* 0x00772673: jmp 0x479710 */

}

void sub_00772678(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772678u);

    goto L_00772678;

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

L_00772678:
    eax = 0x007DEBD4u; /* 0x00772678: mov eax, 0x7debd4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077267D: jmp 0x75bfd2 */

}

void sub_00772690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772690u);

L_00772690:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772690: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00475240u); RECOMP_RETURN(); /* 0x00772693: jmp 0x475240 */

}

void sub_00772698(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772698u);

L_00772698:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772698: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0077269B: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x0077269E: jmp 0x4835c0 */

}

void sub_007726A3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007726A3u);

    goto L_007726A3;

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

L_007726A3:
    eax = 0x007DEC00u; /* 0x007726A3: mov eax, 0x7dec00 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007726A8: jmp 0x75bfd2 */

}

void sub_007726B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007726B0u);

L_007726B0:
    ecx = ebp + (-0x18); /* 0x007726B0: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x007726B3: jmp 0x4835c0 */

}

void sub_007726B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007726B8u);

L_007726B8:
    ecx = ebp + (-0x20); /* 0x007726B8: lea ecx, [ebp - 0x20] */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x007726BB: jmp 0x4835c0 */

}

void sub_007726C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007726C0u);

    goto L_007726C0;

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

L_007726C0:
    eax = 0x007DEC2Cu; /* 0x007726C0: mov eax, 0x7dec2c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007726C5: jmp 0x75bfd2 */

}

void sub_007726D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007726D0u);

L_007726D0:
    PUSH32(esp, 0); /* 0x007726D0: push 0 */
    PUSH32(esp, 0x0078C040u); /* 0x007726D2: push 0x78c040 */
    eax = MEM32(ebp + 0x4); /* 0x007726D7: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007726DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007726DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007726E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007726E3: ret  */

}

void sub_007726E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007726E4u);

L_007726E4:
    PUSH32(esp, 0); /* 0x007726E4: push 0 */
    PUSH32(esp, 0x0078C024u); /* 0x007726E6: push 0x78c024 */
    eax = MEM32(ebp + 0x4); /* 0x007726EB: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007726EE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007726EF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007726F4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007726F7: ret  */

}

void sub_007726F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007726F8u);

L_007726F8:
    PUSH32(esp, 0); /* 0x007726F8: push 0 */
    PUSH32(esp, 0x0078C008u); /* 0x007726FA: push 0x78c008 */
    eax = MEM32(ebp + 0x4); /* 0x007726FF: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00772702: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772703: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772708: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077270B: ret  */

}

void sub_0077270C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077270Cu);

L_0077270C:
    PUSH32(esp, 0); /* 0x0077270C: push 0 */
    PUSH32(esp, 0x0078BFF0u); /* 0x0077270E: push 0x78bff0 */
    eax = MEM32(ebp + 0x4); /* 0x00772713: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00772716: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772717: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077271C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077271F: ret  */

}

void sub_00772720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772720u);

    goto L_00772720;

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

L_00772720:
    eax = 0x007DEC68u; /* 0x00772720: mov eax, 0x7dec68 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772725: jmp 0x75bfd2 */

}

void sub_00772730(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772730u);

L_00772730:
    eax = MEM32(ebp + (-0x20)); /* 0x00772730: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x00772733: push eax */
    RECOMP_CALL(sub_00458160); /* 0x00772734: call 0x458160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772739: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077273A: ret  */

}

void sub_0077273B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077273Bu);

L_0077273B:
    eax = MEM32(0x82CC04); /* 0x0077273B: mov eax, dword ptr [0x82cc04] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x00772740: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x82CC04) = eax; /* 0x00772743: mov dword ptr [0x82cc04], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772748: ret  */

}

void sub_00772749(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772749u);

    goto L_00772749;

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

L_00772749:
    eax = 0x007DEC94u; /* 0x00772749: mov eax, 0x7dec94 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077274E: jmp 0x75bfd2 */

}

void sub_00772760(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772760u);

L_00772760:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772760: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00485B50u); RECOMP_RETURN(); /* 0x00772763: jmp 0x485b50 */

}

void sub_00772768(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772768u);

    goto L_00772768;

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

L_00772768:
    eax = 0x007DECB8u; /* 0x00772768: mov eax, 0x7decb8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077276D: jmp 0x75bfd2 */

}

void sub_00772780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772780u);

L_00772780:
    PUSH32(esp, 0); /* 0x00772780: push 0 */
    PUSH32(esp, 0x0078C21Cu); /* 0x00772782: push 0x78c21c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772787: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077278A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077278B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772790: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772793: ret  */

}

void sub_00772794(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772794u);

    goto L_00772794;

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

L_00772794:
    eax = 0x007DECDCu; /* 0x00772794: mov eax, 0x7decdc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772799: jmp 0x75bfd2 */

}

void sub_007727A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007727A0u);

L_007727A0:
    ecx = ebp + (-0x328); /* 0x007727A0: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x007727A6: jmp 0x5e0bf0 */

}

void sub_007727AB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007727ABu);

    goto L_007727AB;

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

L_007727AB:
    eax = 0x007DED00u; /* 0x007727AB: mov eax, 0x7ded00 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007727B0: jmp 0x75bfd2 */

}

void sub_007727C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007727C0u);

L_007727C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007727C0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x44u; /* 0x007727C3: add ecx, 0x44 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x007727C6: jmp 0x4358e0 */

}

void sub_007727CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007727CBu);

    goto L_007727CB;

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

L_007727CB:
    eax = 0x007DED24u; /* 0x007727CB: mov eax, 0x7ded24 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007727D0: jmp 0x75bfd2 */

}

void sub_007727E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007727E0u);

L_007727E0:
    eax = MEM32(ebp + (-0x1D4)); /* 0x007727E0: mov eax, dword ptr [ebp - 0x1d4] */
    PUSH32(esp, eax); /* 0x007727E6: push eax */
    RECOMP_CALL(sub_00486F30); /* 0x007727E7: call 0x486f30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007727EC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007727ED: ret  */

}

void sub_007727EE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007727EEu);

    goto L_007727EE;

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

L_007727EE:
    eax = 0x007DED48u; /* 0x007727EE: mov eax, 0x7ded48 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007727F3: jmp 0x75bfd2 */

}

void sub_00772800(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772800u);

L_00772800:
    eax = MEM32(ebp + 0x4); /* 0x00772800: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00772803: push eax */
    RECOMP_CALL(sub_00486F10); /* 0x00772804: call 0x486f10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00772809: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077280A: ret  */

}

void sub_0077280B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077280Bu);

    goto L_0077280B;

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

L_0077280B:
    eax = 0x007DED6Cu; /* 0x0077280B: mov eax, 0x7ded6c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772810: jmp 0x75bfd2 */

}

void sub_00772820(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772820u);

L_00772820:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772820: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00491E10u); RECOMP_RETURN(); /* 0x00772823: jmp 0x491e10 */

}

void sub_00772828(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772828u);

    goto L_00772828;

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

L_00772828:
    eax = 0x007DED90u; /* 0x00772828: mov eax, 0x7ded90 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077282D: jmp 0x75bfd2 */

}

void sub_00772840(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772840u);

L_00772840:
    ecx = ebp + (-0x14); /* 0x00772840: lea ecx, [ebp - 0x14] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00772843: jmp 0x4def30 */

}

void sub_00772848(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772848u);

    goto L_00772848;

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

L_00772848:
    eax = 0x007DEDB4u; /* 0x00772848: mov eax, 0x7dedb4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077284D: jmp 0x75bfd2 */

}

void sub_00772860(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772860u);

L_00772860:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772860: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x80u; /* 0x00772863: add ecx, 0x80 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00772869: jmp 0x4835c0 */

}

void sub_0077286E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077286Eu);

    goto L_0077286E;

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

L_0077286E:
    eax = 0x007DEDD8u; /* 0x0077286E: mov eax, 0x7dedd8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772873: jmp 0x75bfd2 */

}

void sub_00772880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772880u);

L_00772880:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772880: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0052AF90u); RECOMP_RETURN(); /* 0x00772883: jmp 0x52af90 */

}

void sub_00772888(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772888u);

    goto L_00772888;

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

L_00772888:
    eax = 0x007DEDFCu; /* 0x00772888: mov eax, 0x7dedfc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077288D: jmp 0x75bfd2 */

}

void sub_007728A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007728A0u);

L_007728A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007728A0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x0052AF90u); RECOMP_RETURN(); /* 0x007728A3: jmp 0x52af90 */

}

void sub_007728A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007728A8u);

L_007728A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007728A8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x007728AB: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0050D390u); RECOMP_RETURN(); /* 0x007728AE: jmp 0x50d390 */

}

void sub_007728B3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007728B3u);

    goto L_007728B3;

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

L_007728B3:
    eax = 0x007DEE28u; /* 0x007728B3: mov eax, 0x7dee28 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007728B8: jmp 0x75bfd2 */

}

void sub_007728C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007728C0u);

L_007728C0:
    eax = MEM32(ebp + (-0x10)); /* 0x007728C0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007728C3: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007728C4: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007728C9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007728CA: ret  */

}

void sub_007728CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007728CBu);

    goto L_007728CB;

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

L_007728CB:
    eax = 0x007DEE4Cu; /* 0x007728CB: mov eax, 0x7dee4c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007728D0: jmp 0x75bfd2 */

}

void sub_007728E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007728E0u);

L_007728E0:
    eax = MEM32(ebp + (-0x40)); /* 0x007728E0: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x007728E3: push eax */
    RECOMP_CALL(sub_00575630); /* 0x007728E4: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007728E9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007728EA: ret  */

}

void sub_007728EB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007728EBu);

    goto L_007728EB;

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

L_007728EB:
    eax = 0x007DEE94u; /* 0x007728EB: mov eax, 0x7dee94 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007728F0: jmp 0x75bfd2 */

}

void sub_00772900(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772900u);

L_00772900:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772900: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00772903: jmp 0x510d40 */

}

void sub_00772908(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772908u);

L_00772908:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772908: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x0077290B: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0050DB70u); RECOMP_RETURN(); /* 0x0077290E: jmp 0x50db70 */

}

void sub_00772913(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772913u);

    goto L_00772913;

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

L_00772913:
    eax = 0x007DEEC0u; /* 0x00772913: mov eax, 0x7deec0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772918: jmp 0x75bfd2 */

}

void sub_00772920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772920u);

L_00772920:
    ecx = MEM32(ebp + (-0x30)); /* 0x00772920: mov ecx, dword ptr [ebp - 0x30] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00772923: jmp 0x510d40 */

}

void sub_00772928(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772928u);

L_00772928:
    ecx = MEM32(ebp + (-0x30)); /* 0x00772928: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077292B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049CCA0u); RECOMP_RETURN(); /* 0x0077292E: jmp 0x49cca0 */

}

void sub_00772933(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772933u);

    goto L_00772933;

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

L_00772933:
    eax = 0x007DEEECu; /* 0x00772933: mov eax, 0x7deeec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772938: jmp 0x75bfd2 */

}

void sub_00772940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772940u);

L_00772940:
    ecx = MEM32(ebp + (-0x20)); /* 0x00772940: mov ecx, dword ptr [ebp - 0x20] */
    RECOMP_ITAIL(0x004B1D80u); RECOMP_RETURN(); /* 0x00772943: jmp 0x4b1d80 */

}

void sub_00772948(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772948u);

L_00772948:
    ecx = MEM32(ebp + (-0x20)); /* 0x00772948: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC4u; /* 0x0077294B: add ecx, 0xc4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0050DB70u); RECOMP_RETURN(); /* 0x00772951: jmp 0x50db70 */

}

void sub_00772956(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772956u);

    goto L_00772956;

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

L_00772956:
    eax = 0x007DEF18u; /* 0x00772956: mov eax, 0x7def18 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077295B: jmp 0x75bfd2 */

}

void sub_00772960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772960u);

L_00772960:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772960: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004B1D80u); RECOMP_RETURN(); /* 0x00772963: jmp 0x4b1d80 */

}

void sub_00772968(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772968u);

    goto L_00772968;

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

L_00772968:
    eax = 0x007DEF3Cu; /* 0x00772968: mov eax, 0x7def3c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077296D: jmp 0x75bfd2 */

}

void sub_00772980(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772980u);

L_00772980:
    PUSH32(esp, 0); /* 0x00772980: push 0 */
    PUSH32(esp, 0x0078FC74u); /* 0x00772982: push 0x78fc74 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772987: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077298A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077298B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772990: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772993: ret  */

}

void sub_00772994(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772994u);

    goto L_00772994;

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

L_00772994:
    eax = 0x007DEF60u; /* 0x00772994: mov eax, 0x7def60 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772999: jmp 0x75bfd2 */

}

void sub_007729A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007729A0u);

L_007729A0:
    PUSH32(esp, 0); /* 0x007729A0: push 0 */
    PUSH32(esp, 0x0078FC84u); /* 0x007729A2: push 0x78fc84 */
    eax = MEM32(ebp + (-0x10)); /* 0x007729A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007729AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007729AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007729B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007729B3: ret  */

}

void sub_007729B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007729B4u);

    goto L_007729B4;

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

L_007729B4:
    eax = 0x007DEF84u; /* 0x007729B4: mov eax, 0x7def84 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007729B9: jmp 0x75bfd2 */

}

void sub_007729C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007729C0u);

L_007729C0:
    PUSH32(esp, 0); /* 0x007729C0: push 0 */
    PUSH32(esp, 0x0078FE28u); /* 0x007729C2: push 0x78fe28 */
    eax = MEM32(ebp + (-0x10)); /* 0x007729C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007729CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007729CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007729D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007729D3: ret  */

}

void sub_007729D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007729D4u);

    goto L_007729D4;

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

L_007729D4:
    eax = 0x007DEFA8u; /* 0x007729D4: mov eax, 0x7defa8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007729D9: jmp 0x75bfd2 */

}

void sub_007729E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007729E0u);

L_007729E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007729E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007729E3: jmp 0x510d40 */

}

void sub_007729E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007729E8u);

L_007729E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007729E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x007729EB: add ecx, 0x54 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x007729EE: jmp 0x4957a0 */

}

void sub_007729F3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007729F3u);

    goto L_007729F3;

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

L_007729F3:
    eax = 0x007E13E4u; /* 0x007729F3: mov eax, 0x7e13e4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007729F8: jmp 0x75bfd2 */

}

void sub_00772A00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A00u);

L_00772A00:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772A00: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x00772A03: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00772A06: jmp 0x401800 */

}

void sub_00772A0B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A0Bu);

L_00772A0B:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772A0B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x900u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x900u; /* 0x00772A0E: add ecx, 0x900 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00772A14: jmp 0x401800 */

}

void sub_00772A19(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A19u);

L_00772A19:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772A19: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x11F0u; /* 0x00772A1C: add ecx, 0x11f0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00772A22: jmp 0x401800 */

}

void sub_00772A27(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A27u);

L_00772A27:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772A27: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1AE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1AE0u; /* 0x00772A2A: add ecx, 0x1ae0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00772A30: jmp 0x401800 */

}

void sub_00772A35(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A35u);

L_00772A35:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772A35: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23D0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x23D0u; /* 0x00772A38: add ecx, 0x23d0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00772A3E: jmp 0x401800 */

}

void sub_00772A43(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A43u);

    goto L_00772A43;

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

L_00772A43:
    eax = 0x007DF028u; /* 0x00772A43: mov eax, 0x7df028 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772A48: jmp 0x75bfd2 */

}

void sub_00772A50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A50u);

L_00772A50:
    PUSH32(esp, 0); /* 0x00772A50: push 0 */
    PUSH32(esp, 0x00790794u); /* 0x00772A52: push 0x790794 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772A57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772A5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772A5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772A60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772A63: ret  */

}

void sub_00772A64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A64u);

    goto L_00772A64;

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

L_00772A64:
    eax = 0x007DF04Cu; /* 0x00772A64: mov eax, 0x7df04c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772A69: jmp 0x75bfd2 */

}

void sub_00772A70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A70u);

L_00772A70:
    PUSH32(esp, 0); /* 0x00772A70: push 0 */
    PUSH32(esp, 0x007907BCu); /* 0x00772A72: push 0x7907bc */
    eax = MEM32(ebp + (-0x10)); /* 0x00772A77: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772A7A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772A7B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772A80: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772A83: ret  */

}

void sub_00772A84(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A84u);

    goto L_00772A84;

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

L_00772A84:
    eax = 0x007DF070u; /* 0x00772A84: mov eax, 0x7df070 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772A89: jmp 0x75bfd2 */

}

void sub_00772A90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772A90u);

L_00772A90:
    PUSH32(esp, 0); /* 0x00772A90: push 0 */
    PUSH32(esp, 0x0079080Cu); /* 0x00772A92: push 0x79080c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772A97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772A9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772A9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772AA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772AA3: ret  */

}

void sub_00772AA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772AA4u);

    goto L_00772AA4;

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

L_00772AA4:
    eax = 0x007DF094u; /* 0x00772AA4: mov eax, 0x7df094 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772AA9: jmp 0x75bfd2 */

}

void sub_00772AB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772AB0u);

L_00772AB0:
    PUSH32(esp, 0); /* 0x00772AB0: push 0 */
    PUSH32(esp, 0x00790834u); /* 0x00772AB2: push 0x790834 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772AB7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772ABA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772ABB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772AC0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772AC3: ret  */

}

void sub_00772AC4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772AC4u);

    goto L_00772AC4;

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

L_00772AC4:
    eax = 0x007DF0B8u; /* 0x00772AC4: mov eax, 0x7df0b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772AC9: jmp 0x75bfd2 */

}

void sub_00772AD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772AD0u);

L_00772AD0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772AD0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00772AD3: jmp 0x510d40 */

}

void sub_00772AD8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772AD8u);

L_00772AD8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772AD8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00772ADB: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00579DC0u); RECOMP_RETURN(); /* 0x00772ADE: jmp 0x579dc0 */

}

void sub_00772AE3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772AE3u);

    goto L_00772AE3;

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

L_00772AE3:
    eax = 0x007DF0E4u; /* 0x00772AE3: mov eax, 0x7df0e4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772AE8: jmp 0x75bfd2 */

}

void sub_00772AF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772AF0u);

L_00772AF0:
    PUSH32(esp, 0); /* 0x00772AF0: push 0 */
    PUSH32(esp, 0x0079085Cu); /* 0x00772AF2: push 0x79085c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772AF7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772AFA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772AFB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772B00: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772B03: ret  */

}

void sub_00772B04(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B04u);

    goto L_00772B04;

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

L_00772B04:
    eax = 0x007DF108u; /* 0x00772B04: mov eax, 0x7df108 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772B09: jmp 0x75bfd2 */

}

void sub_00772B10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B10u);

L_00772B10:
    ecx = MEM32(ebp + (-0x50)); /* 0x00772B10: mov ecx, dword ptr [ebp - 0x50] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00772B13: jmp 0x510d40 */

}

void sub_00772B18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B18u);

    goto L_00772B18;

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

L_00772B18:
    eax = 0x007DF12Cu; /* 0x00772B18: mov eax, 0x7df12c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772B1D: jmp 0x75bfd2 */

}

void sub_00772B30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B30u);

L_00772B30:
    PUSH32(esp, 0); /* 0x00772B30: push 0 */
    PUSH32(esp, 0x00790884u); /* 0x00772B32: push 0x790884 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772B37: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772B3A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772B3B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772B40: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772B43: ret  */

}

void sub_00772B44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B44u);

    goto L_00772B44;

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

L_00772B44:
    eax = 0x007DF150u; /* 0x00772B44: mov eax, 0x7df150 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772B49: jmp 0x75bfd2 */

}

void sub_00772B50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B50u);

L_00772B50:
    PUSH32(esp, 0); /* 0x00772B50: push 0 */
    PUSH32(esp, 0x007908A4u); /* 0x00772B52: push 0x7908a4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772B57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772B5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772B5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772B60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772B63: ret  */

}

void sub_00772B64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B64u);

    goto L_00772B64;

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

L_00772B64:
    eax = 0x007DF174u; /* 0x00772B64: mov eax, 0x7df174 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772B69: jmp 0x75bfd2 */

}

void sub_00772B70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B70u);

L_00772B70:
    PUSH32(esp, 0); /* 0x00772B70: push 0 */
    PUSH32(esp, 0x007908C4u); /* 0x00772B72: push 0x7908c4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772B77: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772B7A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772B7B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772B80: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772B83: ret  */

}

void sub_00772B84(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B84u);

    goto L_00772B84;

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

L_00772B84:
    eax = 0x007DF198u; /* 0x00772B84: mov eax, 0x7df198 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772B89: jmp 0x75bfd2 */

}

void sub_00772B90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772B90u);

L_00772B90:
    PUSH32(esp, 0); /* 0x00772B90: push 0 */
    PUSH32(esp, 0x007908E4u); /* 0x00772B92: push 0x7908e4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772B97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772B9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772B9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772BA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772BA3: ret  */

}

void sub_00772BA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772BA4u);

    goto L_00772BA4;

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

L_00772BA4:
    eax = 0x007DF1BCu; /* 0x00772BA4: mov eax, 0x7df1bc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772BA9: jmp 0x75bfd2 */

}

void sub_00772BB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772BB0u);

L_00772BB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772BB0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x00772BB3: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004AE7D0u); RECOMP_RETURN(); /* 0x00772BB6: jmp 0x4ae7d0 */

}

void sub_00772BBB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772BBBu);

    goto L_00772BBB;

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

L_00772BBB:
    eax = 0x007DF1E0u; /* 0x00772BBB: mov eax, 0x7df1e0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772BC0: jmp 0x75bfd2 */

}

void sub_00772BD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772BD0u);

L_00772BD0:
    PUSH32(esp, 0); /* 0x00772BD0: push 0 */
    PUSH32(esp, 0x00790C18u); /* 0x00772BD2: push 0x790c18 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772BD7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772BDA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772BDB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772BE0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772BE3: ret  */

}

void sub_00772BE4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772BE4u);

    goto L_00772BE4;

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

L_00772BE4:
    eax = 0x007DF204u; /* 0x00772BE4: mov eax, 0x7df204 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772BE9: jmp 0x75bfd2 */

}

void sub_00772BF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772BF0u);

L_00772BF0:
    PUSH32(esp, 0); /* 0x00772BF0: push 0 */
    PUSH32(esp, 0x00790CACu); /* 0x00772BF2: push 0x790cac */
    eax = MEM32(ebp + (-0x10)); /* 0x00772BF7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772BFA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772BFB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772C00: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772C03: ret  */

}

void sub_00772C04(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C04u);

L_00772C04:
    PUSH32(esp, 0); /* 0x00772C04: push 0 */
    PUSH32(esp, 0x00790CA0u); /* 0x00772C06: push 0x790ca0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772C0B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772C0E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772C0F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772C14: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772C17: ret  */

}

void sub_00772C18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C18u);

L_00772C18:
    PUSH32(esp, 0); /* 0x00772C18: push 0 */
    PUSH32(esp, 0x00790C94u); /* 0x00772C1A: push 0x790c94 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772C1F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772C22: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772C23: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772C28: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772C2B: ret  */

}

void sub_00772C2C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C2Cu);

L_00772C2C:
    PUSH32(esp, 0); /* 0x00772C2C: push 0 */
    PUSH32(esp, 0x00790C8Cu); /* 0x00772C2E: push 0x790c8c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772C33: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772C36: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772C37: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772C3C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772C3F: ret  */

}

void sub_00772C40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C40u);

L_00772C40:
    PUSH32(esp, 0); /* 0x00772C40: push 0 */
    PUSH32(esp, 0x00790C80u); /* 0x00772C42: push 0x790c80 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772C47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772C4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772C4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772C50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772C53: ret  */

}

void sub_00772C54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C54u);

L_00772C54:
    PUSH32(esp, 0); /* 0x00772C54: push 0 */
    PUSH32(esp, 0x00790C74u); /* 0x00772C56: push 0x790c74 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772C5B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772C5E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772C5F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772C64: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772C67: ret  */

}

void sub_00772C68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C68u);

L_00772C68:
    PUSH32(esp, 0); /* 0x00772C68: push 0 */
    PUSH32(esp, 0x00790C68u); /* 0x00772C6A: push 0x790c68 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772C6F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772C72: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772C73: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772C78: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772C7B: ret  */

}

void sub_00772C7C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C7Cu);

    goto L_00772C7C;

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

L_00772C7C:
    eax = 0x007DF258u; /* 0x00772C7C: mov eax, 0x7df258 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772C81: jmp 0x75bfd2 */

}

void sub_00772C90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772C90u);

L_00772C90:
    PUSH32(esp, 0); /* 0x00772C90: push 0 */
    PUSH32(esp, 0x00790CE0u); /* 0x00772C92: push 0x790ce0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772C97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772C9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772C9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772CA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772CA3: ret  */

}

void sub_00772CA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772CA4u);

L_00772CA4:
    PUSH32(esp, 0); /* 0x00772CA4: push 0 */
    PUSH32(esp, 0x00790CE0u); /* 0x00772CA6: push 0x790ce0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772CAB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772CAE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772CAF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772CB4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772CB7: ret  */

}

void sub_00772CB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772CB8u);

L_00772CB8:
    PUSH32(esp, 0); /* 0x00772CB8: push 0 */
    PUSH32(esp, 0x00790CD8u); /* 0x00772CBA: push 0x790cd8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772CBF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772CC2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772CC3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772CC8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772CCB: ret  */

}

void sub_00772CCC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772CCCu);

L_00772CCC:
    PUSH32(esp, 0); /* 0x00772CCC: push 0 */
    PUSH32(esp, 0x00790CD0u); /* 0x00772CCE: push 0x790cd0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772CD3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772CD6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772CD7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772CDC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772CDF: ret  */

}

void sub_00772CE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772CE0u);

    goto L_00772CE0;

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

L_00772CE0:
    eax = 0x007DF294u; /* 0x00772CE0: mov eax, 0x7df294 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772CE5: jmp 0x75bfd2 */

}

void sub_00772CF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772CF0u);

L_00772CF0:
    PUSH32(esp, 0); /* 0x00772CF0: push 0 */
    PUSH32(esp, 0x00790DF8u); /* 0x00772CF2: push 0x790df8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772CF7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772CFA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772CFB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D00: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D03: ret  */

}

void sub_00772D04(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D04u);

L_00772D04:
    PUSH32(esp, 0); /* 0x00772D04: push 0 */
    PUSH32(esp, 0x00790DE8u); /* 0x00772D06: push 0x790de8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772D0B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772D0E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772D0F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D14: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D17: ret  */

}

void sub_00772D18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D18u);

L_00772D18:
    PUSH32(esp, 0); /* 0x00772D18: push 0 */
    PUSH32(esp, 0x00790DE0u); /* 0x00772D1A: push 0x790de0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772D1F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772D22: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772D23: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D28: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D2B: ret  */

}

void sub_00772D2C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D2Cu);

L_00772D2C:
    PUSH32(esp, 0); /* 0x00772D2C: push 0 */
    PUSH32(esp, 0x00790DD0u); /* 0x00772D2E: push 0x790dd0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772D33: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772D36: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772D37: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D3C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D3F: ret  */

}

void sub_00772D40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D40u);

L_00772D40:
    PUSH32(esp, 0); /* 0x00772D40: push 0 */
    PUSH32(esp, 0x00790DC4u); /* 0x00772D42: push 0x790dc4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772D47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772D4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772D4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D53: ret  */

}

void sub_00772D54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D54u);

L_00772D54:
    PUSH32(esp, 0); /* 0x00772D54: push 0 */
    PUSH32(esp, 0x00790DB4u); /* 0x00772D56: push 0x790db4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772D5B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772D5E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772D5F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D64: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D67: ret  */

}

void sub_00772D68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D68u);

L_00772D68:
    PUSH32(esp, 0); /* 0x00772D68: push 0 */
    PUSH32(esp, 0x00790DA4u); /* 0x00772D6A: push 0x790da4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772D6F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772D72: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772D73: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D78: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D7B: ret  */

}

void sub_00772D7C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D7Cu);

L_00772D7C:
    PUSH32(esp, 0); /* 0x00772D7C: push 0 */
    PUSH32(esp, 0x00790D94u); /* 0x00772D7E: push 0x790d94 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772D83: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772D86: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772D87: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772D8C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772D8F: ret  */

}

void sub_00772D90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772D90u);

    goto L_00772D90;

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

L_00772D90:
    eax = 0x007DF2F8u; /* 0x00772D90: mov eax, 0x7df2f8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772D95: jmp 0x75bfd2 */

}

void sub_00772DA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772DA0u);

L_00772DA0:
    PUSH32(esp, 0); /* 0x00772DA0: push 0 */
    PUSH32(esp, 0x00790E5Cu); /* 0x00772DA2: push 0x790e5c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772DA7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772DAA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772DAB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772DB0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772DB3: ret  */

}

void sub_00772DB4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772DB4u);

L_00772DB4:
    PUSH32(esp, 0); /* 0x00772DB4: push 0 */
    PUSH32(esp, 0x00790E50u); /* 0x00772DB6: push 0x790e50 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772DBB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772DBE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772DBF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772DC4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772DC7: ret  */

}

void sub_00772DC8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772DC8u);

L_00772DC8:
    PUSH32(esp, 0); /* 0x00772DC8: push 0 */
    PUSH32(esp, 0x00790E40u); /* 0x00772DCA: push 0x790e40 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772DCF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772DD2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772DD3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772DD8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772DDB: ret  */

}

void sub_00772DDC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772DDCu);

    goto L_00772DDC;

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

L_00772DDC:
    eax = 0x007DF32Cu; /* 0x00772DDC: mov eax, 0x7df32c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772DE1: jmp 0x75bfd2 */

}

void sub_00772DF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772DF0u);

L_00772DF0:
    PUSH32(esp, 0); /* 0x00772DF0: push 0 */
    PUSH32(esp, 0x00790E70u); /* 0x00772DF2: push 0x790e70 */
    eax = MEM32(ebp + (-0x30)); /* 0x00772DF7: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x00772DFA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772DFB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772E00: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772E03: ret  */

}

void sub_00772E00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E00u);

L_00772E00:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772E00: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772E03: ret  */

}

void sub_00772E04(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E04u);

    goto L_00772E04;

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

L_00772E04:
    eax = 0x007DF350u; /* 0x00772E04: mov eax, 0x7df350 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772E09: jmp 0x75bfd2 */

}

void sub_00772E10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E10u);

L_00772E10:
    PUSH32(esp, 0); /* 0x00772E10: push 0 */
    PUSH32(esp, 0x00790F08u); /* 0x00772E12: push 0x790f08 */
    eax = MEM32(ebp + (-0x20)); /* 0x00772E17: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x00772E1A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772E1B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772E20: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772E23: ret  */

}

void sub_00772E24(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E24u);

    goto L_00772E24;

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

L_00772E24:
    eax = 0x007DF374u; /* 0x00772E24: mov eax, 0x7df374 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772E29: jmp 0x75bfd2 */

}

void sub_00772E30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E30u);

L_00772E30:
    ecx = MEM32(ebp + (-0x10)); /* 0x00772E30: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004AEA30u); RECOMP_RETURN(); /* 0x00772E33: jmp 0x4aea30 */

}

void sub_00772E38(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E38u);

    goto L_00772E38;

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

L_00772E38:
    eax = 0x007DF398u; /* 0x00772E38: mov eax, 0x7df398 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772E3D: jmp 0x75bfd2 */

}

void sub_00772E50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E50u);

L_00772E50:
    PUSH32(esp, 0); /* 0x00772E50: push 0 */
    PUSH32(esp, 0x00790F3Cu); /* 0x00772E52: push 0x790f3c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772E57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772E5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772E5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772E60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772E63: ret  */

}

void sub_00772E64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E64u);

    goto L_00772E64;

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

L_00772E64:
    eax = 0x007DF3BCu; /* 0x00772E64: mov eax, 0x7df3bc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772E69: jmp 0x75bfd2 */

}

void sub_00772E70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E70u);

L_00772E70:
    PUSH32(esp, 0); /* 0x00772E70: push 0 */
    PUSH32(esp, 0x00790F64u); /* 0x00772E72: push 0x790f64 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772E77: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772E7A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772E7B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772E80: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772E83: ret  */

}

void sub_00772E84(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E84u);

    goto L_00772E84;

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

L_00772E84:
    eax = 0x007DF3E0u; /* 0x00772E84: mov eax, 0x7df3e0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772E89: jmp 0x75bfd2 */

}

void sub_00772E90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772E90u);

L_00772E90:
    PUSH32(esp, 0); /* 0x00772E90: push 0 */
    PUSH32(esp, 0x00790F88u); /* 0x00772E92: push 0x790f88 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772E97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772E9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772E9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772EA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772EA3: ret  */

}

void sub_00772EA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772EA4u);

    goto L_00772EA4;

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

L_00772EA4:
    eax = 0x007DF404u; /* 0x00772EA4: mov eax, 0x7df404 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772EA9: jmp 0x75bfd2 */

}

void sub_00772EB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772EB0u);

L_00772EB0:
    PUSH32(esp, 0); /* 0x00772EB0: push 0 */
    PUSH32(esp, 0x00790FB0u); /* 0x00772EB2: push 0x790fb0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772EB7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772EBA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772EBB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772EC0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772EC3: ret  */

}

void sub_00772EC4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772EC4u);

    goto L_00772EC4;

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

L_00772EC4:
    eax = 0x007DF428u; /* 0x00772EC4: mov eax, 0x7df428 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772EC9: jmp 0x75bfd2 */

}

void sub_00772ED0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772ED0u);

L_00772ED0:
    PUSH32(esp, 0); /* 0x00772ED0: push 0 */
    PUSH32(esp, 0x00791060u); /* 0x00772ED2: push 0x791060 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772ED7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772EDA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772EDB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772EE0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772EE3: ret  */

}

void sub_00772EE4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772EE4u);

L_00772EE4:
    PUSH32(esp, 0); /* 0x00772EE4: push 0 */
    PUSH32(esp, 0x00791054u); /* 0x00772EE6: push 0x791054 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772EEB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772EEE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772EEF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772EF4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772EF7: ret  */

}

void sub_00772EF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772EF8u);

L_00772EF8:
    PUSH32(esp, 0); /* 0x00772EF8: push 0 */
    PUSH32(esp, 0x0079104Cu); /* 0x00772EFA: push 0x79104c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772EFF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F02: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F03: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772F08: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772F0B: ret  */

}

void sub_00772F0C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F0Cu);

L_00772F0C:
    PUSH32(esp, 0); /* 0x00772F0C: push 0 */
    PUSH32(esp, 0x00791044u); /* 0x00772F0E: push 0x791044 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772F13: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F16: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F17: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772F1C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772F1F: ret  */

}

void sub_00772F20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F20u);

L_00772F20:
    PUSH32(esp, 0); /* 0x00772F20: push 0 */
    PUSH32(esp, 0x00791034u); /* 0x00772F22: push 0x791034 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772F27: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F2A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F2B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772F30: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772F33: ret  */

}

void sub_00772F34(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F34u);

L_00772F34:
    PUSH32(esp, 0); /* 0x00772F34: push 0 */
    PUSH32(esp, 0x0079102Cu); /* 0x00772F36: push 0x79102c */
    eax = MEM32(ebp + (-0x10)); /* 0x00772F3B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F3E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F3F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772F44: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772F47: ret  */

}

void sub_00772F48(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F48u);

L_00772F48:
    PUSH32(esp, 0); /* 0x00772F48: push 0 */
    PUSH32(esp, 0x00791020u); /* 0x00772F4A: push 0x791020 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772F4F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F52: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F53: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772F58: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772F5B: ret  */

}

void sub_00772F5C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F5Cu);

L_00772F5C:
    PUSH32(esp, 0); /* 0x00772F5C: push 0 */
    PUSH32(esp, 0x00791014u); /* 0x00772F5E: push 0x791014 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772F63: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F66: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F67: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772F6C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772F6F: ret  */

}

void sub_00772F70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F70u);

    goto L_00772F70;

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

L_00772F70:
    eax = 0x007DF484u; /* 0x00772F70: mov eax, 0x7df484 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00772F75: jmp 0x75bfd2 */

}

void sub_00772F80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F80u);

L_00772F80:
    PUSH32(esp, 0); /* 0x00772F80: push 0 */
    PUSH32(esp, 0x00791744u); /* 0x00772F82: push 0x791744 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772F87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772F90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772F93: ret  */

}

void sub_00772F94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772F94u);

L_00772F94:
    PUSH32(esp, 0); /* 0x00772F94: push 0 */
    PUSH32(esp, 0x00791730u); /* 0x00772F96: push 0x791730 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772F9B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772F9E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772F9F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772FA4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772FA7: ret  */

}

void sub_00772FA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772FA8u);

L_00772FA8:
    PUSH32(esp, 0); /* 0x00772FA8: push 0 */
    PUSH32(esp, 0x00791718u); /* 0x00772FAA: push 0x791718 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772FAF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772FB2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772FB3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772FB8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772FBB: ret  */

}

void sub_00772FBC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772FBCu);

L_00772FBC:
    PUSH32(esp, 0); /* 0x00772FBC: push 0 */
    PUSH32(esp, 0x00791704u); /* 0x00772FBE: push 0x791704 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772FC3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772FC6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772FC7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772FCC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772FCF: ret  */

}

void sub_00772FD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772FD0u);

L_00772FD0:
    PUSH32(esp, 0); /* 0x00772FD0: push 0 */
    PUSH32(esp, 0x007916F4u); /* 0x00772FD2: push 0x7916f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772FD7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772FDA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772FDB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772FE0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772FE3: ret  */

}

void sub_00772FE4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772FE4u);

L_00772FE4:
    PUSH32(esp, 0); /* 0x00772FE4: push 0 */
    PUSH32(esp, 0x007916E0u); /* 0x00772FE6: push 0x7916e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772FEB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00772FEE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00772FEF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00772FF4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00772FF7: ret  */

}

void sub_00772FF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00772FF8u);

L_00772FF8:
    PUSH32(esp, 0); /* 0x00772FF8: push 0 */
    PUSH32(esp, 0x007916D0u); /* 0x00772FFA: push 0x7916d0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00772FFF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773002: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773003: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773008: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077300B: ret  */

}

void sub_0077300C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077300Cu);

L_0077300C:
    PUSH32(esp, 0); /* 0x0077300C: push 0 */
    PUSH32(esp, 0x007916C0u); /* 0x0077300E: push 0x7916c0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773013: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773016: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773017: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077301C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077301F: ret  */

}

void sub_00773020(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773020u);

L_00773020:
    PUSH32(esp, 0); /* 0x00773020: push 0 */
    PUSH32(esp, 0x007916ACu); /* 0x00773022: push 0x7916ac */
    eax = MEM32(ebp + (-0x10)); /* 0x00773027: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077302A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077302B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773030: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773033: ret  */

}

void sub_00773034(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773034u);

L_00773034:
    PUSH32(esp, 0); /* 0x00773034: push 0 */
    PUSH32(esp, 0x00791690u); /* 0x00773036: push 0x791690 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077303B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077303E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077303F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773044: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773047: ret  */

}

void sub_00773048(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773048u);

L_00773048:
    PUSH32(esp, 0); /* 0x00773048: push 0 */
    PUSH32(esp, 0x00791674u); /* 0x0077304A: push 0x791674 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077304F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773052: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773053: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773058: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077305B: ret  */

}

void sub_0077305C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077305Cu);

L_0077305C:
    PUSH32(esp, 0); /* 0x0077305C: push 0 */
    PUSH32(esp, 0x00791660u); /* 0x0077305E: push 0x791660 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773063: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773066: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773067: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077306C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077306F: ret  */

}

void sub_00773070(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773070u);

L_00773070:
    PUSH32(esp, 0); /* 0x00773070: push 0 */
    PUSH32(esp, 0x0079164Cu); /* 0x00773072: push 0x79164c */
    eax = MEM32(ebp + (-0x10)); /* 0x00773077: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077307A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077307B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773080: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773083: ret  */

}

void sub_00773084(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773084u);

    goto L_00773084;

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

L_00773084:
    eax = 0x007DF52Cu; /* 0x00773084: mov eax, 0x7df52c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773089: jmp 0x75bfd2 */

}

void sub_00773090(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773090u);

L_00773090:
    PUSH32(esp, 0); /* 0x00773090: push 0 */
    PUSH32(esp, 0x007916E0u); /* 0x00773092: push 0x7916e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773097: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077309A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077309B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007730A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007730A3: ret  */

}

void sub_007730A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007730A4u);

L_007730A4:
    PUSH32(esp, 0); /* 0x007730A4: push 0 */
    PUSH32(esp, 0x00791790u); /* 0x007730A6: push 0x791790 */
    eax = MEM32(ebp + (-0x10)); /* 0x007730AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007730AE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007730AF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007730B4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007730B7: ret  */

}

void sub_007730B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007730B8u);

    goto L_007730B8;

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

L_007730B8:
    eax = 0x007DF59Cu; /* 0x007730B8: mov eax, 0x7df59c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007730BD: jmp 0x75bfd2 */

}