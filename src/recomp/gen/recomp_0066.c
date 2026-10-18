/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_0077956B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077956Bu);

    goto L_0077956B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077956B:
    eax = 0x007E4D40u; /* 0x0077956B: mov eax, 0x7e4d40 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779570: jmp 0x75bfd2 */

}

void sub_00779580(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779580u);

L_00779580:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779580: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00779583: jmp 0x4def30 */

}

void sub_00779588(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779588u);

L_00779588:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779588: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0077958B: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077958E: jmp 0x4def30 */

}

void sub_00779593(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779593u);

    goto L_00779593;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779593:
    eax = 0x007E4D6Cu; /* 0x00779593: mov eax, 0x7e4d6c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779598: jmp 0x75bfd2 */

}

void sub_007795A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795A0u);

L_007795A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795A0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795A3: jmp 0x4def30 */

}

void sub_007795A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795A8u);

L_007795A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795A8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007795AB: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795AE: jmp 0x4def30 */

}

void sub_007795B3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795B3u);

L_007795B3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795B3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x007795B6: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795B9: jmp 0x4def30 */

}

void sub_007795BE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795BEu);

L_007795BE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795BE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007795C1: add ecx, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795C4: jmp 0x4def30 */

}

void sub_007795C9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795C9u);

L_007795C9:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795C9: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007795CC: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795CF: jmp 0x4def30 */

}

void sub_007795D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795D4u);

L_007795D4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795D4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x007795D7: add ecx, 0x28 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795DA: jmp 0x4def30 */

}

void sub_007795DF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795DFu);

L_007795DF:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795DF: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x007795E2: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795E5: jmp 0x4def30 */

}

void sub_007795EA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795EAu);

L_007795EA:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795EA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x007795ED: add ecx, 0x38 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795F0: jmp 0x4def30 */

}

void sub_007795F5(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007795F5u);

L_007795F5:
    ecx = MEM32(ebp + (-0x10)); /* 0x007795F5: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x007795F8: add ecx, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007795FB: jmp 0x4def30 */

}

void sub_00779600(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779600u);

    goto L_00779600;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779600:
    eax = 0x007E4DD0u; /* 0x00779600: mov eax, 0x7e4dd0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779605: jmp 0x75bfd2 */

}

void sub_00779610(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779610u);

L_00779610:
    eax = MEM32(ebp + 0x4); /* 0x00779610: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779613: push eax */
    RECOMP_CALL(sub_005D2E20); /* 0x00779614: call 0x5d2e20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779619: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077961A: ret  */

}

void sub_0077961B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077961Bu);

    goto L_0077961B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077961B:
    eax = 0x007E4DF4u; /* 0x0077961B: mov eax, 0x7e4df4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779620: jmp 0x75bfd2 */

}

void sub_00779630(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779630u);

L_00779630:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779630: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x60u; /* 0x00779633: add ecx, 0x60 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005DC590u); RECOMP_RETURN(); /* 0x00779636: jmp 0x5dc590 */

}

void sub_0077963B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077963Bu);

    goto L_0077963B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077963B:
    eax = 0x007E4E18u; /* 0x0077963B: mov eax, 0x7e4e18 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779640: jmp 0x75bfd2 */

}

void sub_00779650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779650u);

L_00779650:
    eax = MEM32(ebp + (-0x14)); /* 0x00779650: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00779653: push eax */
    RECOMP_CALL(sub_005D2E40); /* 0x00779654: call 0x5d2e40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779659: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077965A: ret  */

}

void sub_0077965B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077965Bu);

    goto L_0077965B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077965B:
    eax = 0x007E4E3Cu; /* 0x0077965B: mov eax, 0x7e4e3c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779660: jmp 0x75bfd2 */

}

void sub_00779670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779670u);

L_00779670:
    ecx = ebp + (-0x320); /* 0x00779670: lea ecx, [ebp - 0x320] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00779676: jmp 0x5e0bf0 */

}

void sub_0077967B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077967Bu);

    goto L_0077967B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077967B:
    eax = 0x007E4E60u; /* 0x0077967B: mov eax, 0x7e4e60 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779680: jmp 0x75bfd2 */

}

void sub_00779690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779690u);

L_00779690:
    ecx = ebp + (-0x35C); /* 0x00779690: lea ecx, [ebp - 0x35c] */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779696: jmp 0x4022c0 */

}

void sub_0077969B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077969Bu);

L_0077969B:
    ecx = ebp + (-0x320); /* 0x0077969B: lea ecx, [ebp - 0x320] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x007796A1: jmp 0x5e0bf0 */

}

void sub_007796A6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007796A6u);

    goto L_007796A6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007796A6:
    eax = 0x007E4E94u; /* 0x007796A6: mov eax, 0x7e4e94 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007796AB: jmp 0x75bfd2 */

}

void sub_007796B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007796B0u);

L_007796B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007796B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004047E0u); RECOMP_RETURN(); /* 0x007796B3: jmp 0x4047e0 */

}

void sub_007796B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007796B8u);

L_007796B8:
    PUSH32(esp, 0); /* 0x007796B8: push 0 */
    PUSH32(esp, 0x00785B54u); /* 0x007796BA: push 0x785b54 */
    eax = MEM32(ebp + 0x4); /* 0x007796BF: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007796C2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007796C3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007796C8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007796CB: ret  */

}

void sub_007796CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007796CCu);

    goto L_007796CC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007796CC:
    eax = 0x007E4EC0u; /* 0x007796CC: mov eax, 0x7e4ec0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007796D1: jmp 0x75bfd2 */

}

void sub_007796E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007796E0u);

L_007796E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007796E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004047E0u); RECOMP_RETURN(); /* 0x007796E3: jmp 0x4047e0 */

}

void sub_007796E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007796E8u);

    goto L_007796E8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007796E8:
    eax = 0x007E4EE4u; /* 0x007796E8: mov eax, 0x7e4ee4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007796ED: jmp 0x75bfd2 */

}

void sub_00779700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779700u);

L_00779700:
    PUSH32(esp, 0); /* 0x00779700: push 0 */
    PUSH32(esp, 0x007A5D24u); /* 0x00779702: push 0x7a5d24 */
    eax = MEM32(ebp + 0x4); /* 0x00779707: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077970A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077970B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779710: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779713: ret  */

}

void sub_00779714(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779714u);

L_00779714:
    PUSH32(esp, 0); /* 0x00779714: push 0 */
    PUSH32(esp, 0x00785298u); /* 0x00779716: push 0x785298 */
    eax = MEM32(ebp + 0x4); /* 0x0077971B: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077971E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077971F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779724: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779727: ret  */

}

void sub_00779728(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779728u);

L_00779728:
    PUSH32(esp, 0); /* 0x00779728: push 0 */
    PUSH32(esp, 0x00785BB0u); /* 0x0077972A: push 0x785bb0 */
    eax = MEM32(ebp + 0x4); /* 0x0077972F: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779732: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779733: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779738: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077973B: ret  */

}

void sub_0077973C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077973Cu);

L_0077973C:
    PUSH32(esp, 0); /* 0x0077973C: push 0 */
    PUSH32(esp, 0x00785B84u); /* 0x0077973E: push 0x785b84 */
    eax = MEM32(ebp + 0x4); /* 0x00779743: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779746: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779747: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077974C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077974F: ret  */

}

void sub_00779750(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779750u);

L_00779750:
    PUSH32(esp, 0); /* 0x00779750: push 0 */
    PUSH32(esp, 0x00785B98u); /* 0x00779752: push 0x785b98 */
    eax = MEM32(ebp + 0x4); /* 0x00779757: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077975A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077975B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779760: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779763: ret  */

}

void sub_00779764(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779764u);

L_00779764:
    PUSH32(esp, 0); /* 0x00779764: push 0 */
    PUSH32(esp, 0x007A5D10u); /* 0x00779766: push 0x7a5d10 */
    eax = MEM32(ebp + 0x4); /* 0x0077976B: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077976E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077976F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779774: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779777: ret  */

}

void sub_00779778(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779778u);

    goto L_00779778;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779778:
    eax = 0x007E4F30u; /* 0x00779778: mov eax, 0x7e4f30 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077977D: jmp 0x75bfd2 */

}

void sub_00779790(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779790u);

L_00779790:
    PUSH32(esp, 0); /* 0x00779790: push 0 */
    PUSH32(esp, 0x007A5EA0u); /* 0x00779792: push 0x7a5ea0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779797: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077979A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077979B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007797A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007797A3: ret  */

}

void sub_007797A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007797A4u);

    goto L_007797A4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007797A4:
    eax = 0x007E4F54u; /* 0x007797A4: mov eax, 0x7e4f54 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007797A9: jmp 0x75bfd2 */

}

void sub_007797B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007797B0u);

L_007797B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007797B0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x11Cu; /* 0x007797B3: add ecx, 0x11c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x007797B9: jmp 0x4022c0 */

}

void sub_007797BE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007797BEu);

L_007797BE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007797BE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x260u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x260u; /* 0x007797C1: add ecx, 0x260 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x007797C7: jmp 0x4022c0 */

}

void sub_007797CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007797CCu);

L_007797CC:
    ecx = MEM32(ebp + (-0x10)); /* 0x007797CC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3A4u; /* 0x007797CF: add ecx, 0x3a4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x007797D5: jmp 0x4022c0 */

}

void sub_007797DA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007797DAu);

L_007797DA:
    ecx = MEM32(ebp + (-0x10)); /* 0x007797DA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4E8u; /* 0x007797DD: add ecx, 0x4e8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x007797E3: jmp 0x4022c0 */

}

void sub_007797E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007797E8u);

L_007797E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007797E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x62Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x62Cu; /* 0x007797EB: add ecx, 0x62c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x007797F1: jmp 0x4022c0 */

}

void sub_007797F6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007797F6u);

L_007797F6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007797F6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x770u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x770u; /* 0x007797F9: add ecx, 0x770 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x007797FF: jmp 0x4022c0 */

}

void sub_00779804(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779804u);

L_00779804:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779804: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8BCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x8BCu; /* 0x00779807: add ecx, 0x8bc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x0077980D: jmp 0x4022c0 */

}

void sub_00779812(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779812u);

L_00779812:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779812: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA08u; /* 0x00779815: add ecx, 0xa08 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x0077981B: jmp 0x4022c0 */

}

void sub_00779820(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779820u);

L_00779820:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779820: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB54u; /* 0x00779823: add ecx, 0xb54 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779829: jmp 0x4022c0 */

}

void sub_0077982E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077982Eu);

L_0077982E:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077982E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCA0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCA0u; /* 0x00779831: add ecx, 0xca0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779837: jmp 0x4022c0 */

}

void sub_0077983C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077983Cu);

L_0077983C:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077983C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xDECu; /* 0x0077983F: add ecx, 0xdec */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779845: jmp 0x4022c0 */

}

void sub_0077984A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077984Au);

L_0077984A:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077984A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xF38u; /* 0x0077984D: add ecx, 0xf38 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779853: jmp 0x4022c0 */

}

void sub_00779858(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779858u);

L_00779858:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779858: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1084u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1084u; /* 0x0077985B: add ecx, 0x1084 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779861: jmp 0x4022c0 */

}

void sub_00779866(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779866u);

L_00779866:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779866: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11D0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x11D0u; /* 0x00779869: add ecx, 0x11d0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x0077986F: jmp 0x4022c0 */

}

void sub_00779874(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779874u);

L_00779874:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779874: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x131Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x131Cu; /* 0x00779877: add ecx, 0x131c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x0077987D: jmp 0x4022c0 */

}

void sub_00779882(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779882u);

L_00779882:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779882: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1468u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1468u; /* 0x00779885: add ecx, 0x1468 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x0077988B: jmp 0x4022c0 */

}

void sub_00779890(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779890u);

L_00779890:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779890: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x15B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x15B4u; /* 0x00779893: add ecx, 0x15b4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779899: jmp 0x4022c0 */

}

void sub_0077989E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077989Eu);

L_0077989E:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077989E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1700u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1700u; /* 0x007798A1: add ecx, 0x1700 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x007798A7: jmp 0x4022c0 */

}

void sub_007798AC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007798ACu);

    goto L_007798AC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007798AC:
    eax = 0x007E5248u; /* 0x007798AC: mov eax, 0x7e5248 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007798B1: jmp 0x75bfd2 */

}

void sub_007798C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007798C0u);

L_007798C0:
    ecx = ebp + (-0x274); /* 0x007798C0: lea ecx, [ebp - 0x274] */
    RECOMP_ITAIL(0x0043E060u); RECOMP_RETURN(); /* 0x007798C6: jmp 0x43e060 */

}

void sub_007798CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007798CBu);

L_007798CB:
    ecx = ebp + (-0x4DC); /* 0x007798CB: lea ecx, [ebp - 0x4dc] */
    RECOMP_ITAIL(0x0043E060u); RECOMP_RETURN(); /* 0x007798D1: jmp 0x43e060 */

}

void sub_007798D6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007798D6u);

    goto L_007798D6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007798D6:
    eax = 0x007E4F80u; /* 0x007798D6: mov eax, 0x7e4f80 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007798DB: jmp 0x75bfd2 */

}

void sub_007798E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007798E0u);

L_007798E0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007798E0: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2D4u; /* 0x007798E3: add ecx, 0x2d4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00411740u); RECOMP_RETURN(); /* 0x007798E9: jmp 0x411740 */

}

void sub_007798EE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007798EEu);

L_007798EE:
    ecx = MEM32(ebp + (-0x18)); /* 0x007798EE: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64Cu; /* 0x007798F1: add ecx, 0x64c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x007798F7: jmp 0x5e0bf0 */

}

void sub_007798FC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007798FCu);

L_007798FC:
    PUSH32(esp, 0); /* 0x007798FC: push 0 */
    PUSH32(esp, 0x007A610Cu); /* 0x007798FE: push 0x7a610c */
    eax = MEM32(ebp + (-0x14)); /* 0x00779903: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00779906: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779907: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077990C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077990F: ret  */

}

void sub_00779910(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779910u);

L_00779910:
    eax = MEM32(ebp + (-0x14)); /* 0x00779910: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00779913: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00779914: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779919: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077991A: ret  */

}

void sub_0077991B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077991Bu);

    goto L_0077991B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077991B:
    eax = 0x007E4FBCu; /* 0x0077991B: mov eax, 0x7e4fbc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779920: jmp 0x75bfd2 */

}

void sub_00779930(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779930u);

L_00779930:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779930: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2D4u; /* 0x00779933: add ecx, 0x2d4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00411740u); RECOMP_RETURN(); /* 0x00779939: jmp 0x411740 */

}

void sub_0077993E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077993Eu);

L_0077993E:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077993E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64Cu; /* 0x00779941: add ecx, 0x64c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00779947: jmp 0x5e0bf0 */

}

void sub_0077994C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077994Cu);

    goto L_0077994C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077994C:
    eax = 0x007E4FE8u; /* 0x0077994C: mov eax, 0x7e4fe8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779951: jmp 0x75bfd2 */

}

void sub_00779960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779960u);

L_00779960:
    PUSH32(esp, 0); /* 0x00779960: push 0 */
    PUSH32(esp, 0x007A61C0u); /* 0x00779962: push 0x7a61c0 */
    eax = MEM32(ebp + 0x4); /* 0x00779967: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077996A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077996B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779970: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779973: ret  */

}

void sub_00779974(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779974u);

    goto L_00779974;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779974:
    eax = 0x007E500Cu; /* 0x00779974: mov eax, 0x7e500c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779979: jmp 0x75bfd2 */

}

void sub_00779980(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779980u);

L_00779980:
    PUSH32(esp, 0); /* 0x00779980: push 0 */
    PUSH32(esp, 0x007A629Cu); /* 0x00779982: push 0x7a629c */
    eax = MEM32(ebp + (-0xB84)); /* 0x00779987: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x0077998D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077998E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779993: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779996: ret  */

}

void sub_00779997(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779997u);

L_00779997:
    PUSH32(esp, 0); /* 0x00779997: push 0 */
    PUSH32(esp, 0x007A6280u); /* 0x00779999: push 0x7a6280 */
    eax = MEM32(ebp + (-0xB84)); /* 0x0077999E: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x007799A4: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007799A5: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007799AA: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007799AD: ret  */

}

void sub_007799AE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007799AEu);

L_007799AE:
    PUSH32(esp, 0); /* 0x007799AE: push 0 */
    PUSH32(esp, 0x007A6270u); /* 0x007799B0: push 0x7a6270 */
    eax = MEM32(ebp + (-0xB84)); /* 0x007799B5: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x007799BB: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007799BC: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007799C1: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007799C4: ret  */

}

void sub_007799C5(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007799C5u);

L_007799C5:
    PUSH32(esp, 0); /* 0x007799C5: push 0 */
    PUSH32(esp, 0x007A6258u); /* 0x007799C7: push 0x7a6258 */
    eax = MEM32(ebp + (-0xB84)); /* 0x007799CC: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x007799D2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007799D3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007799D8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007799DB: ret  */

}

void sub_007799DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007799DCu);

L_007799DC:
    PUSH32(esp, 0); /* 0x007799DC: push 0 */
    PUSH32(esp, 0x007A6244u); /* 0x007799DE: push 0x7a6244 */
    eax = MEM32(ebp + (-0xB7C)); /* 0x007799E3: mov eax, dword ptr [ebp - 0xb7c] */
    PUSH32(esp, eax); /* 0x007799E9: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007799EA: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007799EF: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007799F2: ret  */

}

void sub_007799F3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007799F3u);

L_007799F3:
    PUSH32(esp, 0); /* 0x007799F3: push 0 */
    PUSH32(esp, 0x007A6230u); /* 0x007799F5: push 0x7a6230 */
    eax = MEM32(ebp + (-0xB84)); /* 0x007799FA: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x00779A00: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779A01: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779A06: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779A09: ret  */

}

void sub_00779A0A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A0Au);

L_00779A0A:
    PUSH32(esp, 0); /* 0x00779A0A: push 0 */
    PUSH32(esp, 0x007A621Cu); /* 0x00779A0C: push 0x7a621c */
    eax = MEM32(ebp + (-0xB84)); /* 0x00779A11: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x00779A17: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779A18: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779A1D: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779A20: ret  */

}

void sub_00779A21(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A21u);

L_00779A21:
    ecx = ebp + (-0xAEC); /* 0x00779A21: lea ecx, [ebp - 0xaec] */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779A27: jmp 0x4022c0 */

}

void sub_00779A2C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A2Cu);

L_00779A2C:
    ecx = ebp + (-0x878); /* 0x00779A2C: lea ecx, [ebp - 0x878] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00779A32: jmp 0x5e0bf0 */

}

void sub_00779A37(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A37u);

L_00779A37:
    PUSH32(esp, 0); /* 0x00779A37: push 0 */
    PUSH32(esp, 0x007A6244u); /* 0x00779A39: push 0x7a6244 */
    eax = MEM32(ebp + (-0xB54)); /* 0x00779A3E: mov eax, dword ptr [ebp - 0xb54] */
    PUSH32(esp, eax); /* 0x00779A44: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779A45: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779A4A: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779A4D: ret  */

}

void sub_00779A4E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A4Eu);

L_00779A4E:
    PUSH32(esp, 0); /* 0x00779A4E: push 0 */
    PUSH32(esp, 0x007A6208u); /* 0x00779A50: push 0x7a6208 */
    eax = MEM32(ebp + (-0xB84)); /* 0x00779A55: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x00779A5B: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779A5C: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779A61: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779A64: ret  */

}

void sub_00779A65(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A65u);

L_00779A65:
    ecx = ebp + (-0x328); /* 0x00779A65: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00779A6B: jmp 0x5e0bf0 */

}

void sub_00779A70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A70u);

L_00779A70:
    PUSH32(esp, 0); /* 0x00779A70: push 0 */
    PUSH32(esp, 0x007A6244u); /* 0x00779A72: push 0x7a6244 */
    eax = MEM32(ebp + (-0xB54)); /* 0x00779A77: mov eax, dword ptr [ebp - 0xb54] */
    PUSH32(esp, eax); /* 0x00779A7D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779A7E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779A83: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779A86: ret  */

}

void sub_00779A87(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A87u);

L_00779A87:
    PUSH32(esp, 0); /* 0x00779A87: push 0 */
    PUSH32(esp, 0x007A6208u); /* 0x00779A89: push 0x7a6208 */
    eax = MEM32(ebp + (-0xB84)); /* 0x00779A8E: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x00779A94: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779A95: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779A9A: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779A9D: ret  */

}

void sub_00779A9E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779A9Eu);

L_00779A9E:
    PUSH32(esp, 0); /* 0x00779A9E: push 0 */
    PUSH32(esp, 0x007A61F4u); /* 0x00779AA0: push 0x7a61f4 */
    eax = MEM32(ebp + (-0xB84)); /* 0x00779AA5: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x00779AAB: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779AAC: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779AB1: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779AB4: ret  */

}

void sub_00779AB5(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779AB5u);

L_00779AB5:
    PUSH32(esp, 0); /* 0x00779AB5: push 0 */
    PUSH32(esp, 0x007A61E0u); /* 0x00779AB7: push 0x7a61e0 */
    eax = MEM32(ebp + (-0xB84)); /* 0x00779ABC: mov eax, dword ptr [ebp - 0xb84] */
    PUSH32(esp, eax); /* 0x00779AC2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779AC3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779AC8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779ACB: ret  */

}

void sub_00779ACC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779ACCu);

    goto L_00779ACC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779ACC:
    eax = 0x007E50A8u; /* 0x00779ACC: mov eax, 0x7e50a8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779AD1: jmp 0x75bfd2 */

}

void sub_00779AE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779AE0u);

L_00779AE0:
    PUSH32(esp, 0); /* 0x00779AE0: push 0 */
    PUSH32(esp, 0x007A62E4u); /* 0x00779AE2: push 0x7a62e4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779AE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779AEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779AEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779AF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779AF3: ret  */

}

void sub_00779AF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779AF4u);

L_00779AF4:
    PUSH32(esp, 0); /* 0x00779AF4: push 0 */
    PUSH32(esp, 0x007A62DCu); /* 0x00779AF6: push 0x7a62dc */
    eax = MEM32(ebp + (-0x10)); /* 0x00779AFB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779AFE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779AFF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779B04: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779B07: ret  */

}

void sub_00779B08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B08u);

    goto L_00779B08;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779B08:
    eax = 0x007E50D4u; /* 0x00779B08: mov eax, 0x7e50d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779B0D: jmp 0x75bfd2 */

}

void sub_00779B20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B20u);

L_00779B20:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779B20: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5C4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5C4u; /* 0x00779B23: add ecx, 0x5c4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00779B29: jmp 0x5e0bf0 */

}

void sub_00779B2E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B2Eu);

L_00779B2E:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779B2E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8D8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x8D8u; /* 0x00779B31: add ecx, 0x8d8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779B37: jmp 0x4022c0 */

}

void sub_00779B3C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B3Cu);

    goto L_00779B3C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779B3C:
    eax = 0x007E5100u; /* 0x00779B3C: mov eax, 0x7e5100 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779B41: jmp 0x75bfd2 */

}

void sub_00779B50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B50u);

L_00779B50:
    PUSH32(esp, 0); /* 0x00779B50: push 0 */
    PUSH32(esp, 0x007A2094u); /* 0x00779B52: push 0x7a2094 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779B57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779B5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779B5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779B60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779B63: ret  */

}

void sub_00779B64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B64u);

L_00779B64:
    PUSH32(esp, 0); /* 0x00779B64: push 0 */
    PUSH32(esp, 0x0078458Cu); /* 0x00779B66: push 0x78458c */
    eax = MEM32(ebp + 0x4); /* 0x00779B6B: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779B6E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779B6F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779B74: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779B77: ret  */

}

void sub_00779B78(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B78u);

L_00779B78:
    eax = MEM32(ebp + 0x4); /* 0x00779B78: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779B7B: push eax */
    RECOMP_CALL(sub_005EB840); /* 0x00779B7C: call 0x5eb840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779B81: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779B82: ret  */

}

void sub_00779B83(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B83u);

L_00779B83:
    PUSH32(esp, 0); /* 0x00779B83: push 0 */
    PUSH32(esp, 0x007A1F1Cu); /* 0x00779B85: push 0x7a1f1c */
    eax = MEM32(ebp + 0x4); /* 0x00779B8A: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779B8D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779B8E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779B93: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779B96: ret  */

}

void sub_00779B97(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779B97u);

L_00779B97:
    eax = MEM32(ebp + 0x4); /* 0x00779B97: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779B9A: push eax */
    RECOMP_CALL(sub_00598EC0); /* 0x00779B9B: call 0x598ec0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779BA0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779BA1: ret  */

}

void sub_00779BA2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779BA2u);

    goto L_00779BA2;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779BA2:
    eax = 0x007E5144u; /* 0x00779BA2: mov eax, 0x7e5144 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779BA7: jmp 0x75bfd2 */

}

void sub_00779BB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779BB0u);

L_00779BB0:
    ecx = ebp + (-0x84C); /* 0x00779BB0: lea ecx, [ebp - 0x84c] */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779BB6: jmp 0x4022c0 */

}

void sub_00779BBB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779BBBu);

    goto L_00779BBB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779BBB:
    eax = 0x007E5168u; /* 0x00779BBB: mov eax, 0x7e5168 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779BC0: jmp 0x75bfd2 */

}

void sub_00779BD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779BD0u);

L_00779BD0:
    PUSH32(esp, 0); /* 0x00779BD0: push 0 */
    PUSH32(esp, 0x007A6324u); /* 0x00779BD2: push 0x7a6324 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779BD7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779BDA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779BDB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779BE0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779BE3: ret  */

}

void sub_00779BE4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779BE4u);

L_00779BE4:
    PUSH32(esp, 0); /* 0x00779BE4: push 0 */
    PUSH32(esp, 0x0079DC04u); /* 0x00779BE6: push 0x79dc04 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779BEB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779BEE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779BEF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779BF4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779BF7: ret  */

}

void sub_00779BF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779BF8u);

L_00779BF8:
    PUSH32(esp, 0); /* 0x00779BF8: push 0 */
    PUSH32(esp, 0x007A6314u); /* 0x00779BFA: push 0x7a6314 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779BFF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779C02: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779C03: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779C08: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779C0B: ret  */

}

void sub_00779C0C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C0Cu);

    goto L_00779C0C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779C0C:
    eax = 0x007E519Cu; /* 0x00779C0C: mov eax, 0x7e519c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779C11: jmp 0x75bfd2 */

}

void sub_00779C20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C20u);

L_00779C20:
    PUSH32(esp, 0); /* 0x00779C20: push 0 */
    PUSH32(esp, 0x007A5D24u); /* 0x00779C22: push 0x7a5d24 */
    eax = MEM32(ebp + (-0x20)); /* 0x00779C27: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x00779C2A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779C2B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779C30: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779C33: ret  */

}

void sub_00779C34(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C34u);

L_00779C34:
    eax = MEM32(ebp + (-0x20)); /* 0x00779C34: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x00779C37: push eax */
    RECOMP_CALL(sub_005EA1B0); /* 0x00779C38: call 0x5ea1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779C3D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779C3E: ret  */

}

void sub_00779C3F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C3Fu);

    goto L_00779C3F;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779C3F:
    eax = 0x007E529Cu; /* 0x00779C3F: mov eax, 0x7e529c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779C44: jmp 0x75bfd2 */

}

void sub_00779C50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C50u);

L_00779C50:
    PUSH32(esp, 0); /* 0x00779C50: push 0 */
    PUSH32(esp, 0x007A6324u); /* 0x00779C52: push 0x7a6324 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779C57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779C5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779C5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779C60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779C63: ret  */

}

void sub_00779C64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C64u);

L_00779C64:
    PUSH32(esp, 0); /* 0x00779C64: push 0 */
    PUSH32(esp, 0x0079DC04u); /* 0x00779C66: push 0x79dc04 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779C6B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779C6E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779C6F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779C74: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779C77: ret  */

}

void sub_00779C78(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C78u);

L_00779C78:
    PUSH32(esp, 0); /* 0x00779C78: push 0 */
    PUSH32(esp, 0x007A6314u); /* 0x00779C7A: push 0x7a6314 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779C7F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779C82: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779C83: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779C88: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779C8B: ret  */

}

void sub_00779C8C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779C8Cu);

L_00779C8C:
    PUSH32(esp, 0); /* 0x00779C8C: push 0 */
    PUSH32(esp, 0x007A63B8u); /* 0x00779C8E: push 0x7a63b8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779C93: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779C96: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779C97: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779C9C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779C9F: ret  */

}

void sub_00779CA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779CA0u);

    goto L_00779CA0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779CA0:
    eax = 0x007E52D8u; /* 0x00779CA0: mov eax, 0x7e52d8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779CA5: jmp 0x75bfd2 */

}

void sub_00779CB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779CB0u);

L_00779CB0:
    PUSH32(esp, 0x005FC290u); /* 0x00779CB0: push 0x5fc290 */
    PUSH32(esp, 6); /* 0x00779CB5: push 6 */
    PUSH32(esp, 0x1F0u); /* 0x00779CB7: push 0x1f0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779CBC: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x00779CBF: add eax, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00779CC2: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00779CC3: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779CC8: ret  */

}

void sub_00779CC9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779CC9u);

L_00779CC9:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779CC9: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC40u; /* 0x00779CCC: add ecx, 0xc40 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0040BDF0u); RECOMP_RETURN(); /* 0x00779CD2: jmp 0x40bdf0 */

}

void sub_00779CD7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779CD7u);

    goto L_00779CD7;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779CD7:
    eax = 0x007E5304u; /* 0x00779CD7: mov eax, 0x7e5304 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779CDC: jmp 0x75bfd2 */

}

void sub_00779CF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779CF0u);

L_00779CF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779CF0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005EF5B0u); RECOMP_RETURN(); /* 0x00779CF3: jmp 0x5ef5b0 */

}

void sub_00779CF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779CF8u);

L_00779CF8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779CF8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00779CFB: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005FA730u); RECOMP_RETURN(); /* 0x00779CFE: jmp 0x5fa730 */

}

void sub_00779D03(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D03u);

L_00779D03:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779D03: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x190u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x190u; /* 0x00779D06: add ecx, 0x190 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00779D0C: jmp 0x5768e0 */

}

void sub_00779D11(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D11u);

L_00779D11:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779D11: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1D0u; /* 0x00779D14: add ecx, 0x1d0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00779D1A: jmp 0x5768e0 */

}

void sub_00779D1F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D1Fu);

L_00779D1F:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779D1F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1F8u; /* 0x00779D22: add ecx, 0x1f8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00779D28: jmp 0x5768e0 */

}

void sub_00779D2D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D2Du);

    goto L_00779D2D;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779D2D:
    eax = 0x007E5348u; /* 0x00779D2D: mov eax, 0x7e5348 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779D32: jmp 0x75bfd2 */

}

void sub_00779D40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D40u);

L_00779D40:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779D40: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x005FF3B0u); RECOMP_RETURN(); /* 0x00779D43: jmp 0x5ff3b0 */

}

void sub_00779D48(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D48u);

L_00779D48:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779D48: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00779D4B: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005FA6F0u); RECOMP_RETURN(); /* 0x00779D4E: jmp 0x5fa6f0 */

}

void sub_00779D53(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D53u);

L_00779D53:
    PUSH32(esp, 0x00405330u); /* 0x00779D53: push 0x405330 */
    PUSH32(esp, 0x14u); /* 0x00779D58: push 0x14 */
    PUSH32(esp, 0x50u); /* 0x00779D5A: push 0x50 */
    eax = MEM32(ebp + (-0x14)); /* 0x00779D5C: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x130u; /* 0x00779D5F: add eax, 0x130 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00779D64: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00779D65: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779D6A: ret  */

}

void sub_00779D6B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D6Bu);

L_00779D6B:
    PUSH32(esp, 0x00405330u); /* 0x00779D6B: push 0x405330 */
    PUSH32(esp, 0x14u); /* 0x00779D70: push 0x14 */
    PUSH32(esp, 0x50u); /* 0x00779D72: push 0x50 */
    eax = MEM32(ebp + (-0x14)); /* 0x00779D74: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x770u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x770u; /* 0x00779D77: add eax, 0x770 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00779D7C: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00779D7D: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779D82: ret  */

}

void sub_00779D83(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D83u);

L_00779D83:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779D83: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1080u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1080u; /* 0x00779D86: add ecx, 0x1080 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779D8C: jmp 0x4022c0 */

}

void sub_00779D91(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D91u);

L_00779D91:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779D91: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1250u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1250u; /* 0x00779D94: add ecx, 0x1250 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779D9A: jmp 0x4022c0 */

}

void sub_00779D9F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779D9Fu);

L_00779D9F:
    ecx = MEM32(ebp + (-0x14)); /* 0x00779D9F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1420u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1420u; /* 0x00779DA2: add ecx, 0x1420 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779DA8: jmp 0x4022c0 */

}

void sub_00779DAD(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779DADu);

L_00779DAD:
    PUSH32(esp, 0); /* 0x00779DAD: push 0 */
    PUSH32(esp, 0x007851ACu); /* 0x00779DAF: push 0x7851ac */
    eax = MEM32(ebp + (-0x10)); /* 0x00779DB4: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779DB7: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779DB8: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779DBD: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779DC0: ret  */

}

void sub_00779DC1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779DC1u);

L_00779DC1:
    PUSH32(esp, 0); /* 0x00779DC1: push 0 */
    PUSH32(esp, 0x007A63E8u); /* 0x00779DC3: push 0x7a63e8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779DC8: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779DCB: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779DCC: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779DD1: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779DD4: ret  */

}

void sub_00779DD5(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779DD5u);

    goto L_00779DD5;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779DD5:
    eax = 0x007E53ACu; /* 0x00779DD5: mov eax, 0x7e53ac */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779DDA: jmp 0x75bfd2 */

}

void sub_00779DE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779DE0u);

L_00779DE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779DE0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x005FF3B0u); RECOMP_RETURN(); /* 0x00779DE3: jmp 0x5ff3b0 */

}

void sub_00779DE8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779DE8u);

L_00779DE8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779DE8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00779DEB: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005FA6F0u); RECOMP_RETURN(); /* 0x00779DEE: jmp 0x5fa6f0 */

}

void sub_00779DF3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779DF3u);

L_00779DF3:
    PUSH32(esp, 0x00405330u); /* 0x00779DF3: push 0x405330 */
    PUSH32(esp, 0x14u); /* 0x00779DF8: push 0x14 */
    PUSH32(esp, 0x50u); /* 0x00779DFA: push 0x50 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779DFC: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x130u; /* 0x00779DFF: add eax, 0x130 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00779E04: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00779E05: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779E0A: ret  */

}

void sub_00779E0B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E0Bu);

L_00779E0B:
    PUSH32(esp, 0x00405330u); /* 0x00779E0B: push 0x405330 */
    PUSH32(esp, 0x14u); /* 0x00779E10: push 0x14 */
    PUSH32(esp, 0x50u); /* 0x00779E12: push 0x50 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779E14: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x770u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x770u; /* 0x00779E17: add eax, 0x770 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00779E1C: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00779E1D: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779E22: ret  */

}

void sub_00779E23(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E23u);

L_00779E23:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779E23: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1080u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1080u; /* 0x00779E26: add ecx, 0x1080 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779E2C: jmp 0x4022c0 */

}

void sub_00779E31(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E31u);

L_00779E31:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779E31: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1250u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1250u; /* 0x00779E34: add ecx, 0x1250 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779E3A: jmp 0x4022c0 */

}

void sub_00779E3F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E3Fu);

L_00779E3F:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779E3F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1420u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1420u; /* 0x00779E42: add ecx, 0x1420 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779E48: jmp 0x4022c0 */

}

void sub_00779E4D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E4Du);

    goto L_00779E4D;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779E4D:
    eax = 0x007E5400u; /* 0x00779E4D: mov eax, 0x7e5400 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779E52: jmp 0x75bfd2 */

}

void sub_00779E60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E60u);

L_00779E60:
    ecx = ebp + (-0x38); /* 0x00779E60: lea ecx, [ebp - 0x38] */
    RECOMP_ITAIL(0x005FF430u); RECOMP_RETURN(); /* 0x00779E63: jmp 0x5ff430 */

}

void sub_00779E68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E68u);

    goto L_00779E68;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779E68:
    eax = 0x007E5424u; /* 0x00779E68: mov eax, 0x7e5424 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779E6D: jmp 0x75bfd2 */

}

void sub_00779E80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E80u);

L_00779E80:
    ecx = ebp + (-0x278); /* 0x00779E80: lea ecx, [ebp - 0x278] */
    RECOMP_ITAIL(0x0043E060u); RECOMP_RETURN(); /* 0x00779E86: jmp 0x43e060 */

}

void sub_00779E8B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779E8Bu);

    goto L_00779E8B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779E8B:
    eax = 0x007E5448u; /* 0x00779E8B: mov eax, 0x7e5448 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779E90: jmp 0x75bfd2 */

}

void sub_00779EA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779EA0u);

L_00779EA0:
    eax = MEM32(ebp + 0x4); /* 0x00779EA0: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779EA3: push eax */
    RECOMP_CALL(sub_005EA1B0); /* 0x00779EA4: call 0x5ea1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00779EA9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779EAA: ret  */

}

void sub_00779EAB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779EABu);

L_00779EAB:
    PUSH32(esp, 0); /* 0x00779EAB: push 0 */
    PUSH32(esp, 0x007A6428u); /* 0x00779EAD: push 0x7a6428 */
    eax = MEM32(ebp + 0x4); /* 0x00779EB2: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779EB5: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779EB6: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779EBB: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779EBE: ret  */

}

void sub_00779EBF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779EBFu);

    goto L_00779EBF;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779EBF:
    eax = 0x007E5474u; /* 0x00779EBF: mov eax, 0x7e5474 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779EC4: jmp 0x75bfd2 */

}

void sub_00779ED0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779ED0u);

L_00779ED0:
    ecx = ebp + (-0x950); /* 0x00779ED0: lea ecx, [ebp - 0x950] */
    RECOMP_ITAIL(0x0050F7D0u); RECOMP_RETURN(); /* 0x00779ED6: jmp 0x50f7d0 */

}

void sub_00779EDB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779EDBu);

    goto L_00779EDB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779EDB:
    eax = 0x007E5498u; /* 0x00779EDB: mov eax, 0x7e5498 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779EE0: jmp 0x75bfd2 */

}

void sub_00779EF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779EF0u);

L_00779EF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779EF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00779EF3: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005FF3F0u); RECOMP_RETURN(); /* 0x00779EF6: jmp 0x5ff3f0 */

}

void sub_00779EFB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779EFBu);

    goto L_00779EFB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779EFB:
    eax = 0x007E54BCu; /* 0x00779EFB: mov eax, 0x7e54bc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779F00: jmp 0x75bfd2 */

}

void sub_00779F10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F10u);

L_00779F10:
    ecx = MEM32(ebp + (-0x24)); /* 0x00779F10: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5C4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5C4u; /* 0x00779F13: add ecx, 0x5c4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00779F19: jmp 0x5e0bf0 */

}

void sub_00779F1E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F1Eu);

L_00779F1E:
    ecx = MEM32(ebp + (-0x24)); /* 0x00779F1E: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8D8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x8D8u; /* 0x00779F21: add ecx, 0x8d8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00779F27: jmp 0x4022c0 */

}

void sub_00779F2C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F2Cu);

L_00779F2C:
    PUSH32(esp, 0); /* 0x00779F2C: push 0 */
    PUSH32(esp, 0x007A5D24u); /* 0x00779F2E: push 0x7a5d24 */
    eax = MEM32(ebp + (-0x28)); /* 0x00779F33: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00779F36: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779F37: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779F3C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779F3F: ret  */

}

void sub_00779F40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F40u);

L_00779F40:
    PUSH32(esp, 0); /* 0x00779F40: push 0 */
    PUSH32(esp, 0x007A6498u); /* 0x00779F42: push 0x7a6498 */
    eax = MEM32(ebp + (-0x28)); /* 0x00779F47: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00779F4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779F4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779F50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779F53: ret  */

}

void sub_00779F54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F54u);

L_00779F54:
    PUSH32(esp, 0); /* 0x00779F54: push 0 */
    PUSH32(esp, 0x007A648Cu); /* 0x00779F56: push 0x7a648c */
    eax = MEM32(ebp + (-0x28)); /* 0x00779F5B: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00779F5E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779F5F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779F64: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779F67: ret  */

}

void sub_00779F68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F68u);

    goto L_00779F68;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779F68:
    eax = 0x007E5500u; /* 0x00779F68: mov eax, 0x7e5500 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779F6D: jmp 0x75bfd2 */

}

void sub_00779F80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F80u);

L_00779F80:
    PUSH32(esp, 0); /* 0x00779F80: push 0 */
    PUSH32(esp, 0x007A6508u); /* 0x00779F82: push 0x7a6508 */
    eax = MEM32(ebp + 0x4); /* 0x00779F87: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00779F8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779F8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779F90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779F93: ret  */

}

void sub_00779F94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779F94u);

    goto L_00779F94;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779F94:
    eax = 0x007E5524u; /* 0x00779F94: mov eax, 0x7e5524 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779F99: jmp 0x75bfd2 */

}

void sub_00779FA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779FA0u);

L_00779FA0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779FA0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x00779FA3: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004367C0u); RECOMP_RETURN(); /* 0x00779FA6: jmp 0x4367c0 */

}

void sub_00779FAB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779FABu);

L_00779FAB:
    ecx = MEM32(ebp + (-0x10)); /* 0x00779FAB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x00779FAE: add ecx, 0x28 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00779FB1: jmp 0x4835c0 */

}

void sub_00779FB6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779FB6u);

    goto L_00779FB6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779FB6:
    eax = 0x007E5550u; /* 0x00779FB6: mov eax, 0x7e5550 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779FBB: jmp 0x75bfd2 */

}

void sub_00779FC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779FC0u);

L_00779FC0:
    ecx = ebp + (-0x328); /* 0x00779FC0: lea ecx, [ebp - 0x328] */
    RECOMP_ITAIL(0x005E0BF0u); RECOMP_RETURN(); /* 0x00779FC6: jmp 0x5e0bf0 */

}

void sub_00779FCB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779FCBu);

    goto L_00779FCB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779FCB:
    eax = 0x007E5574u; /* 0x00779FCB: mov eax, 0x7e5574 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779FD0: jmp 0x75bfd2 */

}

void sub_00779FE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779FE0u);

L_00779FE0:
    PUSH32(esp, 0); /* 0x00779FE0: push 0 */
    PUSH32(esp, 0x007A6558u); /* 0x00779FE2: push 0x7a6558 */
    eax = MEM32(ebp + (-0x10)); /* 0x00779FE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00779FEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00779FEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00779FF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00779FF3: ret  */

}

void sub_00779FF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00779FF4u);

    goto L_00779FF4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00779FF4:
    eax = 0x007E5598u; /* 0x00779FF4: mov eax, 0x7e5598 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00779FF9: jmp 0x75bfd2 */

}

void sub_0077A000(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A000u);

L_0077A000:
    ecx = ebp + (-0x48); /* 0x0077A000: lea ecx, [ebp - 0x48] */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x0077A003: jmp 0x4022c0 */

}

void sub_0077A008(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A008u);

L_0077A008:
    PUSH32(esp, 0); /* 0x0077A008: push 0 */
    PUSH32(esp, 0x00785BC0u); /* 0x0077A00A: push 0x785bc0 */
    eax = MEM32(ebp + 0x8); /* 0x0077A00F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0077A012: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A013: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A018: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A01B: ret  */

}

void sub_0077A01C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A01Cu);

L_0077A01C:
    PUSH32(esp, 0); /* 0x0077A01C: push 0 */
    PUSH32(esp, 0x00785BC0u); /* 0x0077A01E: push 0x785bc0 */
    eax = MEM32(ebp + 0x8); /* 0x0077A023: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0077A026: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A027: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A02C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A02F: ret  */

}

void sub_0077A030(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A030u);

    goto L_0077A030;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A030:
    eax = 0x007E55CCu; /* 0x0077A030: mov eax, 0x7e55cc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A035: jmp 0x75bfd2 */

}

void sub_0077A040(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A040u);

L_0077A040:
    PUSH32(esp, 0); /* 0x0077A040: push 0 */
    PUSH32(esp, 0x00785B84u); /* 0x0077A042: push 0x785b84 */
    eax = MEM32(ebp + (-0x14)); /* 0x0077A047: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077A04A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A04B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A050: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A053: ret  */

}

void sub_0077A054(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A054u);

L_0077A054:
    PUSH32(esp, 0); /* 0x0077A054: push 0 */
    PUSH32(esp, 0x00785B84u); /* 0x0077A056: push 0x785b84 */
    eax = MEM32(ebp + (-0x14)); /* 0x0077A05B: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077A05E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A05F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A064: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A067: ret  */

}

void sub_0077A068(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A068u);

L_0077A068:
    PUSH32(esp, 0); /* 0x0077A068: push 0 */
    PUSH32(esp, 0x00785B84u); /* 0x0077A06A: push 0x785b84 */
    eax = MEM32(ebp + (-0x14)); /* 0x0077A06F: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077A072: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A073: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A078: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A07B: ret  */

}

void sub_0077A07C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A07Cu);

L_0077A07C:
    ecx = ebp + (-0x1C); /* 0x0077A07C: lea ecx, [ebp - 0x1c] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077A07F: jmp 0x4def30 */

}

void sub_0077A084(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A084u);

    goto L_0077A084;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A084:
    eax = 0x007E5680u; /* 0x0077A084: mov eax, 0x7e5680 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A089: jmp 0x75bfd2 */

}

void sub_0077A090(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A090u);

L_0077A090:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A090: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x0077A093: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x0077A096: jmp 0x4358e0 */

}

void sub_0077A09B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A09Bu);

    goto L_0077A09B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A09B:
    eax = 0x007E56A4u; /* 0x0077A09B: mov eax, 0x7e56a4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A0A0: jmp 0x75bfd2 */

}

void sub_0077A0B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A0B0u);

L_0077A0B0:
    PUSH32(esp, 0); /* 0x0077A0B0: push 0 */
    PUSH32(esp, 0x007A08B0u); /* 0x0077A0B2: push 0x7a08b0 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A0B7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A0BA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A0BB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A0C0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A0C3: ret  */

}

void sub_0077A0C4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A0C4u);

L_0077A0C4:
    PUSH32(esp, 0); /* 0x0077A0C4: push 0 */
    PUSH32(esp, 0x007A5EC8u); /* 0x0077A0C6: push 0x7a5ec8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A0CB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A0CE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A0CF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A0D4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A0D7: ret  */

}

void sub_0077A0D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A0D8u);

L_0077A0D8:
    PUSH32(esp, 0); /* 0x0077A0D8: push 0 */
    PUSH32(esp, 0x007873E8u); /* 0x0077A0DA: push 0x7873e8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A0DF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A0E2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A0E3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A0E8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A0EB: ret  */

}

void sub_0077A0EC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A0ECu);

    goto L_0077A0EC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A0EC:
    eax = 0x007E56D8u; /* 0x0077A0EC: mov eax, 0x7e56d8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A0F1: jmp 0x75bfd2 */

}

void sub_0077A100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A100u);

L_0077A100:
    eax = MEM32(ebp + (-0x10)); /* 0x0077A100: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A103: push eax */
    RECOMP_CALL(sub_00575630); /* 0x0077A104: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A109: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A10A: ret  */

}

void sub_0077A10B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A10Bu);

L_0077A10B:
    PUSH32(esp, 0); /* 0x0077A10B: push 0 */
    PUSH32(esp, 0x007A6590u); /* 0x0077A10D: push 0x7a6590 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A112: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A115: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A116: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A11B: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A11E: ret  */

}

void sub_0077A11F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A11Fu);

    goto L_0077A11F;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A11F:
    eax = 0x007E5704u; /* 0x0077A11F: mov eax, 0x7e5704 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A124: jmp 0x75bfd2 */

}

void sub_0077A130(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A130u);

L_0077A130:
    ecx = MEM32(ebp + (-0x14)); /* 0x0077A130: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x00609CA0u); RECOMP_RETURN(); /* 0x0077A133: jmp 0x609ca0 */

}

void sub_0077A138(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A138u);

L_0077A138:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A138: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x0077A13B: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x0077A13E: jmp 0x4358e0 */

}

void sub_0077A143(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A143u);

    goto L_0077A143;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A143:
    eax = 0x007E5730u; /* 0x0077A143: mov eax, 0x7e5730 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A148: jmp 0x75bfd2 */

}

void sub_0077A150(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A150u);

L_0077A150:
    PUSH32(esp, 0); /* 0x0077A150: push 0 */
    PUSH32(esp, 0x007A51C8u); /* 0x0077A152: push 0x7a51c8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A157: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A15A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A15B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A160: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A163: ret  */

}

void sub_0077A164(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A164u);

    goto L_0077A164;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A164:
    eax = 0x007E5754u; /* 0x0077A164: mov eax, 0x7e5754 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A169: jmp 0x75bfd2 */

}

void sub_0077A170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A170u);

L_0077A170:
    PUSH32(esp, 0x004022C0u); /* 0x0077A170: push 0x4022c0 */
    PUSH32(esp, 0x10u); /* 0x0077A175: push 0x10 */
    PUSH32(esp, 0x30u); /* 0x0077A177: push 0x30 */
    eax = ebp + (-0x310); /* 0x0077A179: lea eax, [ebp - 0x310] */
    PUSH32(esp, eax); /* 0x0077A17F: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A180: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A185: ret  */

}

void sub_0077A186(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A186u);

    goto L_0077A186;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A186:
    eax = 0x007E5778u; /* 0x0077A186: mov eax, 0x7e5778 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A18B: jmp 0x75bfd2 */

}

void sub_0077A190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A190u);

L_0077A190:
    eax = MEM32(ebp + (-0x10)); /* 0x0077A190: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A193: push eax */
    RECOMP_CALL(sub_00486EF0); /* 0x0077A194: call 0x486ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A199: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A19A: ret  */

}

void sub_0077A19B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A19Bu);

L_0077A19B:
    eax = MEM32(ebp + 0x8); /* 0x0077A19B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0077A19E: push eax */
    RECOMP_CALL(sub_00486EF0); /* 0x0077A19F: call 0x486ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A1A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A1A5: ret  */

}

void sub_0077A1A6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A1A6u);

    goto L_0077A1A6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A1A6:
    eax = 0x007E57A4u; /* 0x0077A1A6: mov eax, 0x7e57a4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A1AB: jmp 0x75bfd2 */

}

void sub_0077A1B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A1B0u);

L_0077A1B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A1B0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x374u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x374u; /* 0x0077A1B3: add ecx, 0x374 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x0077A1B9: jmp 0x4022c0 */

}

void sub_0077A1BE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A1BEu);

    goto L_0077A1BE;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A1BE:
    eax = 0x007E57C8u; /* 0x0077A1BE: mov eax, 0x7e57c8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A1C3: jmp 0x75bfd2 */

}

void sub_0077A1D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A1D0u);

L_0077A1D0:
    eax = MEM32(ebp + 0x4); /* 0x0077A1D0: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077A1D3: push eax */
    RECOMP_CALL(sub_00610660); /* 0x0077A1D4: call 0x610660 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A1D9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A1DA: ret  */

}

void sub_0077A1DB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A1DBu);

    goto L_0077A1DB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A1DB:
    eax = 0x007E57ECu; /* 0x0077A1DB: mov eax, 0x7e57ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A1E0: jmp 0x75bfd2 */

}

void sub_0077A1F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A1F0u);

L_0077A1F0:
    eax = MEM32(ebp + 0x4); /* 0x0077A1F0: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077A1F3: push eax */
    RECOMP_CALL(sub_00610640); /* 0x0077A1F4: call 0x610640 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A1F9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A1FA: ret  */

}

void sub_0077A1FB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A1FBu);

    goto L_0077A1FB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A1FB:
    eax = 0x007E5810u; /* 0x0077A1FB: mov eax, 0x7e5810 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A200: jmp 0x75bfd2 */

}

void sub_0077A210(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A210u);

L_0077A210:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A210: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0077A213: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00637ED0u); RECOMP_RETURN(); /* 0x0077A216: jmp 0x637ed0 */

}

void sub_0077A21B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A21Bu);

    goto L_0077A21B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A21B:
    eax = 0x007E5834u; /* 0x0077A21B: mov eax, 0x7e5834 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A220: jmp 0x75bfd2 */

}

void sub_0077A230(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A230u);

L_0077A230:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A230: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3F0u; /* 0x0077A233: add ecx, 0x3f0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077A239: jmp 0x4def30 */

}

void sub_0077A23E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A23Eu);

L_0077A23E:
    PUSH32(esp, 0x004367C0u); /* 0x0077A23E: push 0x4367c0 */
    PUSH32(esp, 0x1Eu); /* 0x0077A243: push 0x1e */
    PUSH32(esp, 8); /* 0x0077A245: push 8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A247: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x458u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x458u; /* 0x0077A24A: add eax, 0x458 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A24F: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A250: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A255: ret  */

}

void sub_0077A256(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A256u);

L_0077A256:
    PUSH32(esp, 0x0061F470u); /* 0x0077A256: push 0x61f470 */
    PUSH32(esp, 0x1Eu); /* 0x0077A25B: push 0x1e */
    PUSH32(esp, 8); /* 0x0077A25D: push 8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A25F: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x548u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x548u; /* 0x0077A262: add eax, 0x548 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A267: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A268: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A26D: ret  */

}

void sub_0077A26E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A26Eu);

L_0077A26E:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A26E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F88u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1F88u; /* 0x0077A271: add ecx, 0x1f88 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00437AD0u); RECOMP_RETURN(); /* 0x0077A277: jmp 0x437ad0 */

}

void sub_0077A27C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A27Cu);

L_0077A27C:
    PUSH32(esp, 0x004022C0u); /* 0x0077A27C: push 0x4022c0 */
    PUSH32(esp, 2); /* 0x0077A281: push 2 */
    PUSH32(esp, 0x68u); /* 0x0077A283: push 0x68 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A285: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1FBCu; /* 0x0077A288: add eax, 0x1fbc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A28D: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A28E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A293: ret  */

}

void sub_0077A294(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A294u);

L_0077A294:
    PUSH32(esp, 0x004903B0u); /* 0x0077A294: push 0x4903b0 */
    PUSH32(esp, 8); /* 0x0077A299: push 8 */
    PUSH32(esp, 0x18u); /* 0x0077A29B: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A29D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x21B4u; /* 0x0077A2A0: add eax, 0x21b4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A2A5: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A2A6: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A2AB: ret  */

}

void sub_0077A2AC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A2ACu);

L_0077A2AC:
    PUSH32(esp, 0x004903B0u); /* 0x0077A2AC: push 0x4903b0 */
    PUSH32(esp, 0x60u); /* 0x0077A2B1: push 0x60 */
    PUSH32(esp, 0x18u); /* 0x0077A2B3: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A2B5: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2274u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2274u; /* 0x0077A2B8: add eax, 0x2274 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A2BD: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A2BE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A2C3: ret  */

}

void sub_0077A2C4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A2C4u);

L_0077A2C4:
    PUSH32(esp, 0x004903B0u); /* 0x0077A2C4: push 0x4903b0 */
    PUSH32(esp, 6); /* 0x0077A2C9: push 6 */
    PUSH32(esp, 0x18u); /* 0x0077A2CB: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A2CD: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2B74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2B74u; /* 0x0077A2D0: add eax, 0x2b74 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A2D5: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A2D6: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A2DB: ret  */

}

void sub_0077A2DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A2DCu);

    goto L_0077A2DC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A2DC:
    eax = 0x007E5890u; /* 0x0077A2DC: mov eax, 0x7e5890 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A2E1: jmp 0x75bfd2 */

}

void sub_0077A2F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A2F0u);

L_0077A2F0:
    eax = MEM32(0x8A4514); /* 0x0077A2F0: mov eax, dword ptr [0x8a4514] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x0077A2F5: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x8A4514) = eax; /* 0x0077A2F8: mov dword ptr [0x8a4514], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A2FD: ret  */

}

void sub_0077A2FE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A2FEu);

    goto L_0077A2FE;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A2FE:
    eax = 0x007E58B4u; /* 0x0077A2FE: mov eax, 0x7e58b4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A303: jmp 0x75bfd2 */

}

void sub_0077A310(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A310u);

L_0077A310:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A310: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x0077A313: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x0077A316: jmp 0x401800 */

}

void sub_0077A31B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A31Bu);

    goto L_0077A31B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A31B:
    eax = 0x007E58D8u; /* 0x0077A31B: mov eax, 0x7e58d8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A320: jmp 0x75bfd2 */

}

void sub_0077A330(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A330u);

L_0077A330:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A330: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x0077A333: add ecx, 0x28 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00634420u); RECOMP_RETURN(); /* 0x0077A336: jmp 0x634420 */

}

void sub_0077A33B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A33Bu);

L_0077A33B:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A33B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x0077A33E: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00634460u); RECOMP_RETURN(); /* 0x0077A341: jmp 0x634460 */

}

void sub_0077A346(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A346u);

L_0077A346:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A346: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x0077A349: add ecx, 0x38 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x006344A0u); RECOMP_RETURN(); /* 0x0077A34C: jmp 0x6344a0 */

}

void sub_0077A351(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A351u);

L_0077A351:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A351: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x0077A354: add ecx, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077A357: jmp 0x4def30 */

}

void sub_0077A35C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A35Cu);

L_0077A35C:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A35C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x0077A35F: add ecx, 0x48 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077A362: jmp 0x4def30 */

}

void sub_0077A367(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A367u);

L_0077A367:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A367: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x0077A36A: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077A36D: jmp 0x4def30 */

}

void sub_0077A372(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A372u);

L_0077A372:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A372: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x58u; /* 0x0077A375: add ecx, 0x58 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x006344E0u); RECOMP_RETURN(); /* 0x0077A378: jmp 0x6344e0 */

}

void sub_0077A37D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A37Du);

    goto L_0077A37D;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A37D:
    eax = 0x007E592Cu; /* 0x0077A37D: mov eax, 0x7e592c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A382: jmp 0x75bfd2 */

}

void sub_0077A390(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A390u);

L_0077A390:
    eax = MEM32(ebp + (-0x10)); /* 0x0077A390: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A393: push eax */
    RECOMP_CALL(sub_00486EF0); /* 0x0077A394: call 0x486ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A399: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A39A: ret  */

}

void sub_0077A39B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A39Bu);

    goto L_0077A39B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A39B:
    eax = 0x007E5950u; /* 0x0077A39B: mov eax, 0x7e5950 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A3A0: jmp 0x75bfd2 */

}

void sub_0077A3B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A3B0u);

L_0077A3B0:
    ecx = MEM32(ebp + (-0x14)); /* 0x0077A3B0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0077A3B3: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00637ED0u); RECOMP_RETURN(); /* 0x0077A3B6: jmp 0x637ed0 */

}

void sub_0077A3BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A3BBu);

    goto L_0077A3BB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A3BB:
    eax = 0x007E5974u; /* 0x0077A3BB: mov eax, 0x7e5974 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A3C0: jmp 0x75bfd2 */

}

void sub_0077A3D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A3D0u);

L_0077A3D0:
    eax = MEM32(ebp + (-0x10)); /* 0x0077A3D0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A3D3: push eax */
    RECOMP_CALL(sub_0060BAF0); /* 0x0077A3D4: call 0x60baf0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A3D9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A3DA: ret  */

}

void sub_0077A3DB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A3DBu);

    goto L_0077A3DB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A3DB:
    eax = 0x007E5998u; /* 0x0077A3DB: mov eax, 0x7e5998 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A3E0: jmp 0x75bfd2 */

}

void sub_0077A3F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A3F0u);

L_0077A3F0:
    ecx = MEM32(ebp + (-0x24C)); /* 0x0077A3F0: mov ecx, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3F0u; /* 0x0077A3F6: add ecx, 0x3f0 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077A3FC: jmp 0x4def30 */

}

void sub_0077A401(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A401u);

L_0077A401:
    PUSH32(esp, 0x004367C0u); /* 0x0077A401: push 0x4367c0 */
    PUSH32(esp, 0x1Eu); /* 0x0077A406: push 0x1e */
    PUSH32(esp, 8); /* 0x0077A408: push 8 */
    eax = MEM32(ebp + (-0x24C)); /* 0x0077A40A: mov eax, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x458u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x458u; /* 0x0077A410: add eax, 0x458 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A415: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A416: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A41B: ret  */

}

void sub_0077A41C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A41Cu);

L_0077A41C:
    PUSH32(esp, 0x0061F470u); /* 0x0077A41C: push 0x61f470 */
    PUSH32(esp, 0x1Eu); /* 0x0077A421: push 0x1e */
    PUSH32(esp, 8); /* 0x0077A423: push 8 */
    eax = MEM32(ebp + (-0x24C)); /* 0x0077A425: mov eax, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x548u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x548u; /* 0x0077A42B: add eax, 0x548 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A430: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A431: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A436: ret  */

}

void sub_0077A437(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A437u);

L_0077A437:
    ecx = MEM32(ebp + (-0x24C)); /* 0x0077A437: mov ecx, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F88u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1F88u; /* 0x0077A43D: add ecx, 0x1f88 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00437AD0u); RECOMP_RETURN(); /* 0x0077A443: jmp 0x437ad0 */

}

void sub_0077A448(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A448u);

L_0077A448:
    PUSH32(esp, 0x004022C0u); /* 0x0077A448: push 0x4022c0 */
    PUSH32(esp, 2); /* 0x0077A44D: push 2 */
    PUSH32(esp, 0x68u); /* 0x0077A44F: push 0x68 */
    eax = MEM32(ebp + (-0x24C)); /* 0x0077A451: mov eax, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1FBCu; /* 0x0077A457: add eax, 0x1fbc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A45C: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A45D: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A462: ret  */

}

void sub_0077A463(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A463u);

L_0077A463:
    PUSH32(esp, 0x004903B0u); /* 0x0077A463: push 0x4903b0 */
    PUSH32(esp, 8); /* 0x0077A468: push 8 */
    PUSH32(esp, 0x18u); /* 0x0077A46A: push 0x18 */
    eax = MEM32(ebp + (-0x24C)); /* 0x0077A46C: mov eax, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x21B4u; /* 0x0077A472: add eax, 0x21b4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A477: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A478: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A47D: ret  */

}

void sub_0077A47E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A47Eu);

L_0077A47E:
    PUSH32(esp, 0x004903B0u); /* 0x0077A47E: push 0x4903b0 */
    PUSH32(esp, 0x60u); /* 0x0077A483: push 0x60 */
    PUSH32(esp, 0x18u); /* 0x0077A485: push 0x18 */
    eax = MEM32(ebp + (-0x24C)); /* 0x0077A487: mov eax, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2274u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2274u; /* 0x0077A48D: add eax, 0x2274 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A492: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A493: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A498: ret  */

}

void sub_0077A499(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A499u);

L_0077A499:
    PUSH32(esp, 0x004903B0u); /* 0x0077A499: push 0x4903b0 */
    PUSH32(esp, 6); /* 0x0077A49E: push 6 */
    PUSH32(esp, 0x18u); /* 0x0077A4A0: push 0x18 */
    eax = MEM32(ebp + (-0x24C)); /* 0x0077A4A2: mov eax, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2B74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2B74u; /* 0x0077A4A8: add eax, 0x2b74 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0077A4AD: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x0077A4AE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A4B3: ret  */

}

void sub_0077A4B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A4B4u);

    goto L_0077A4B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A4B4:
    eax = 0x007E59F4u; /* 0x0077A4B4: mov eax, 0x7e59f4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A4B9: jmp 0x75bfd2 */

}

void sub_0077A4C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A4C0u);

L_0077A4C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A4C0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x0077A4C3: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0063A320u); RECOMP_RETURN(); /* 0x0077A4C6: jmp 0x63a320 */

}

void sub_0077A4CB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A4CBu);

L_0077A4CB:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A4CB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x100u; /* 0x0077A4CE: add ecx, 0x100 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00610C40u); RECOMP_RETURN(); /* 0x0077A4D4: jmp 0x610c40 */

}

void sub_0077A4D9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A4D9u);

    goto L_0077A4D9;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A4D9:
    eax = 0x007E5A20u; /* 0x0077A4D9: mov eax, 0x7e5a20 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A4DE: jmp 0x75bfd2 */

}

void sub_0077A4F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A4F0u);

L_0077A4F0:
    ecx = MEM32(ebp + (-0x20)); /* 0x0077A4F0: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x0077A4F3: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0063A510u); RECOMP_RETURN(); /* 0x0077A4F6: jmp 0x63a510 */

}

void sub_0077A4FB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A4FBu);

    goto L_0077A4FB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A4FB:
    eax = 0x007E5A44u; /* 0x0077A4FB: mov eax, 0x7e5a44 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A500: jmp 0x75bfd2 */

}

void sub_0077A510(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A510u);

L_0077A510:
    PUSH32(esp, 0); /* 0x0077A510: push 0 */
    PUSH32(esp, 0x007A8D54u); /* 0x0077A512: push 0x7a8d54 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A517: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A51A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A51B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A520: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A523: ret  */

}

void sub_0077A524(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A524u);

    goto L_0077A524;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A524:
    eax = 0x007E5A68u; /* 0x0077A524: mov eax, 0x7e5a68 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A529: jmp 0x75bfd2 */

}

void sub_0077A530(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A530u);

L_0077A530:
    eax = MEM32(ebp + 0x4); /* 0x0077A530: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077A533: push eax */
    RECOMP_CALL(sub_00575630); /* 0x0077A534: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A539: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A53A: ret  */

}

void sub_0077A53B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A53Bu);

    goto L_0077A53B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A53B:
    eax = 0x007E5A8Cu; /* 0x0077A53B: mov eax, 0x7e5a8c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A540: jmp 0x75bfd2 */

}

void sub_0077A550(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A550u);

L_0077A550:
    eax = MEM32(ebp + (-0xA0)); /* 0x0077A550: mov eax, dword ptr [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x0077A556: push eax */
    RECOMP_CALL(sub_006106B0); /* 0x0077A557: call 0x6106b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A55C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A55D: ret  */

}

void sub_0077A55E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A55Eu);

    goto L_0077A55E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A55E:
    eax = 0x007E5AB0u; /* 0x0077A55E: mov eax, 0x7e5ab0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A563: jmp 0x75bfd2 */

}

void sub_0077A570(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A570u);

L_0077A570:
    ecx = MEM32(ebp + (-0x34)); /* 0x0077A570: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x0077A573: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0063A510u); RECOMP_RETURN(); /* 0x0077A576: jmp 0x63a510 */

}

void sub_0077A57B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A57Bu);

    goto L_0077A57B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A57B:
    eax = 0x007E5ADCu; /* 0x0077A57B: mov eax, 0x7e5adc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A580: jmp 0x75bfd2 */

}

void sub_0077A590(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A590u);

L_0077A590:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A590: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x0077A593: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0063A510u); RECOMP_RETURN(); /* 0x0077A596: jmp 0x63a510 */

}

void sub_0077A59B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A59Bu);

    goto L_0077A59B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A59B:
    eax = 0x007E5B00u; /* 0x0077A59B: mov eax, 0x7e5b00 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A5A0: jmp 0x75bfd2 */

}

void sub_0077A5B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A5B0u);

L_0077A5B0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0077A5B0: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x0077A5B3: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0063A510u); RECOMP_RETURN(); /* 0x0077A5B6: jmp 0x63a510 */

}

void sub_0077A5BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A5BBu);

L_0077A5BB:
    PUSH32(esp, 0); /* 0x0077A5BB: push 0 */
    PUSH32(esp, 0x007A6498u); /* 0x0077A5BD: push 0x7a6498 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077A5C2: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077A5C5: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077A5C6: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077A5CB: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A5CE: ret  */

}

void sub_0077A5CF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A5CFu);

    goto L_0077A5CF;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A5CF:
    eax = 0x007E5B2Cu; /* 0x0077A5CF: mov eax, 0x7e5b2c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A5D4: jmp 0x75bfd2 */

}

void sub_0077A5E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A5E0u);

L_0077A5E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077A5E0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x0077A5E3: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x0077A5E6: jmp 0x401800 */

}

void sub_0077A5EB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A5EBu);

    goto L_0077A5EB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A5EB:
    eax = 0x007E5B50u; /* 0x0077A5EB: mov eax, 0x7e5b50 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A5F0: jmp 0x75bfd2 */

}

void sub_0077A5F5(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A5F5u);

    goto L_0077A5F5;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A5F5:
    eax = 0x007E5BA0u; /* 0x0077A5F5: mov eax, 0x7e5ba0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A5FA: jmp 0x75bfd2 */

}

void sub_0077A5FF(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A5FFu);

L_0077A5FF:
    ecx = ebp + (-0x28); /* 0x0077A5FF: lea ecx, [ebp - 0x28] */
    RECOMP_ITAIL(0x005CF000u); RECOMP_RETURN(); /* 0x0077A602: jmp 0x5cf000 */

}

void sub_0077A607(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A607u);

    goto L_0077A607;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077A607:
    eax = 0x007E5C00u; /* 0x0077A607: mov eax, 0x7e5c00 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077A60C: jmp 0x75bfd2 */

}

void sub_0077A620(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A620u);

L_0077A620:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077A620: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x783490); /* 0x0077A626: fdiv dword ptr [0x783490] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x81E7FC) = _v; } /* 0x0077A62C: fstp dword ptr [0x81e7fc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A632: ret  */

}

void sub_0077A640(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A640u);

L_0077A640:
    PUSH32(esp, 5); /* 0x0077A640: push 5 */
    PUSH32(esp, 0x007E9BC8u); /* 0x0077A642: push 0x7e9bc8 */
    ecx = 0x0081E378u; /* 0x0077A647: mov ecx, 0x81e378 */
    RECOMP_CALL(sub_00576770); /* 0x0077A64C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A651: ret  */

}

void sub_0077A660(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A660u);

L_0077A660:
    PUSH32(esp, 2); /* 0x0077A660: push 2 */
    PUSH32(esp, 0x007E9BF0u); /* 0x0077A662: push 0x7e9bf0 */
    ecx = 0x0081E7DCu; /* 0x0077A667: mov ecx, 0x81e7dc */
    RECOMP_CALL(sub_00576770); /* 0x0077A66C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A671: ret  */

}

void sub_0077A680(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A680u);

L_0077A680:
    PUSH32(esp, 2); /* 0x0077A680: push 2 */
    PUSH32(esp, 0x007E9C00u); /* 0x0077A682: push 0x7e9c00 */
    ecx = 0x00827A10u; /* 0x0077A687: mov ecx, 0x827a10 */
    RECOMP_CALL(sub_00576770); /* 0x0077A68C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A691: ret  */

}

void sub_0077A6A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A6A0u);

L_0077A6A0:
    ecx = 0x0081E5B8u; /* 0x0077A6A0: mov ecx, 0x81e5b8 */
    RECOMP_CALL(sub_00414CF0); /* 0x0077A6A5: call 0x414cf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781980u); /* 0x0077A6AA: push 0x781980 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077A6AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A6B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A6B5: ret  */

}

void sub_0077A6C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A6C0u);

L_0077A6C0:
    ecx = 0x0081E388u; /* 0x0077A6C0: mov ecx, 0x81e388 */
    RECOMP_CALL(sub_00414CF0); /* 0x0077A6C5: call 0x414cf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781990u); /* 0x0077A6CA: push 0x781990 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077A6CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A6D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A6D5: ret  */

}

void sub_0077A6E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A6E0u);

L_0077A6E0:
    PUSH32(esp, 0x00781940u); /* 0x0077A6E0: push 0x781940 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077A6E5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A6EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A6EB: ret  */

}

void sub_0077A6F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A6F0u);

L_0077A6F0:
    fp_push(*(float*)&MEM32(0x81CB84)); /* 0x0077A6F0: fld dword ptr [0x81cb84] */
    _st[0] *= (double)*(float*)ADDR(0x81CB84); /* 0x0077A6F6: fmul dword ptr [0x81cb84] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x827A20) = _v; } /* 0x0077A6FC: fstp dword ptr [0x827a20] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A702: ret  */

}

void sub_0077A710(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A710u);

L_0077A710:
    PUSH32(esp, 0xBu); /* 0x0077A710: push 0xb */
    PUSH32(esp, 0x007E9C10u); /* 0x0077A712: push 0x7e9c10 */
    ecx = 0x0081E380u; /* 0x0077A717: mov ecx, 0x81e380 */
    RECOMP_CALL(sub_00576770); /* 0x0077A71C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A721: ret  */

}

void sub_0077A730(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A730u);

L_0077A730:
    PUSH32(esp, 2); /* 0x0077A730: push 2 */
    PUSH32(esp, 0x007E9C68u); /* 0x0077A732: push 0x7e9c68 */
    ecx = 0x0081E370u; /* 0x0077A737: mov ecx, 0x81e370 */
    RECOMP_CALL(sub_00576770); /* 0x0077A73C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A741: ret  */

}

void sub_0077A750(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A750u);

L_0077A750:
    PUSH32(esp, 0xAu); /* 0x0077A750: push 0xa */
    PUSH32(esp, 0x007E9C78u); /* 0x0077A752: push 0x7e9c78 */
    ecx = 0x00827A18u; /* 0x0077A757: mov ecx, 0x827a18 */
    RECOMP_CALL(sub_00576770); /* 0x0077A75C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A761: ret  */

}

void sub_0077A770(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A770u);

L_0077A770:
    PUSH32(esp, 9); /* 0x0077A770: push 9 */
    PUSH32(esp, 0x007E9CC8u); /* 0x0077A772: push 0x7e9cc8 */
    ecx = 0x0081E7F4u; /* 0x0077A777: mov ecx, 0x81e7f4 */
    RECOMP_CALL(sub_00576770); /* 0x0077A77C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A781: ret  */

}

void sub_0077A790(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A790u);

L_0077A790:
    PUSH32(esp, 2); /* 0x0077A790: push 2 */
    PUSH32(esp, 0x007E9D24u); /* 0x0077A792: push 0x7e9d24 */
    ecx = 0x0081E800u; /* 0x0077A797: mov ecx, 0x81e800 */
    RECOMP_CALL(sub_00576770); /* 0x0077A79C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A7A1: ret  */

}

void sub_0077A7B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A7B0u);

L_0077A7B0:
    PUSH32(esp, 2); /* 0x0077A7B0: push 2 */
    PUSH32(esp, 0x007E9D34u); /* 0x0077A7B2: push 0x7e9d34 */
    ecx = 0x0081E7E4u; /* 0x0077A7B7: mov ecx, 0x81e7e4 */
    RECOMP_CALL(sub_00576770); /* 0x0077A7BC: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A7C1: ret  */

}

void sub_0077A7D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A7D0u);

L_0077A7D0:
    MEM32(0x81E5AC) = 0x3DD67750u; /* 0x0077A7D0: mov dword ptr [0x81e5ac], 0x3dd67750 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A7DA: ret  */

}

void sub_0077A7E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A7E0u);

L_0077A7E0:
    PUSH32(esp, 4); /* 0x0077A7E0: push 4 */
    PUSH32(esp, 0x007E9F58u); /* 0x0077A7E2: push 0x7e9f58 */
    ecx = 0x0081E5B0u; /* 0x0077A7E7: mov ecx, 0x81e5b0 */
    RECOMP_CALL(sub_00576770); /* 0x0077A7EC: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A7F1: ret  */

}

void sub_0077A800(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A800u);

L_0077A800:
    ecx = 0x0081E7ECu; /* 0x0077A800: mov ecx, 0x81e7ec */
    RECOMP_CALL(sub_00598750); /* 0x0077A805: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781960u); /* 0x0077A80A: push 0x781960 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077A80F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A814: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A815: ret  */

}

void sub_0077A820(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A820u);

L_0077A820:
    eax = MEM32(0x783C30); /* 0x0077A820: mov eax, dword ptr [0x783c30] */
    edx = MEM32(0x783C28); /* 0x0077A825: mov edx, dword ptr [0x783c28] */
    ecx = eax; /* 0x0077A82B: mov ecx, eax */
    MEM32(0x7EA088) = eax; /* 0x0077A82D: mov dword ptr [0x7ea088], eax */
    MEM32(0x7EA08C) = ecx; /* 0x0077A832: mov dword ptr [0x7ea08c], ecx */
    ecx = MEM32(0x783C2C); /* 0x0077A838: mov ecx, dword ptr [0x783c2c] */
    eax = edx; /* 0x0077A83E: mov eax, edx */
    MEM32(0x7EA0C0) = edx; /* 0x0077A840: mov dword ptr [0x7ea0c0], edx */
    edx = ecx; /* 0x0077A846: mov edx, ecx */
    MEM32(0x7EA0C4) = eax; /* 0x0077A848: mov dword ptr [0x7ea0c4], eax */
    MEM32(0x7EA0C8) = ecx; /* 0x0077A84D: mov dword ptr [0x7ea0c8], ecx */
    SET_LO8(ecx, 0x80u); /* 0x0077A853: mov cl, 0x80 */
    SET_LO8(eax, 0x25u); /* 0x0077A855: mov al, 0x25 */
    MEM8(0x7EA0E8) = (uint8_t)(LO8(eax)); /* 0x0077A857: mov byte ptr [0x7ea0e8], al */
    MEM8(0x7EA0E9) = (uint8_t)(LO8(eax)); /* 0x0077A85C: mov byte ptr [0x7ea0e9], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077A861: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x7EA0EE) = (uint8_t)(LO8(ecx)); /* 0x0077A863: mov byte ptr [0x7ea0ee], cl */
    MEM8(0x7EA0EF) = (uint8_t)(LO8(ecx)); /* 0x0077A869: mov byte ptr [0x7ea0ef], cl */
    MEM8(0x7EA0F0) = (uint8_t)(LO8(ecx)); /* 0x0077A86F: mov byte ptr [0x7ea0f0], cl */
    MEM8(0x7EA0F1) = (uint8_t)(LO8(ecx)); /* 0x0077A875: mov byte ptr [0x7ea0f1], cl */
    MEM8(0x7EA0F2) = (uint8_t)(LO8(ecx)); /* 0x0077A87B: mov byte ptr [0x7ea0f2], cl */
    MEM8(0x7EA0F3) = (uint8_t)(LO8(ecx)); /* 0x0077A881: mov byte ptr [0x7ea0f3], cl */
    SET_LO8(ecx, 0x32u); /* 0x0077A887: mov cl, 0x32 */
    MEM32(0x7EA090) = 0; /* 0x0077A889: mov dword ptr [0x7ea090], 0 */
    MEM32(0x7EA094) = 0x41200000u; /* 0x0077A893: mov dword ptr [0x7ea094], 0x41200000 */
    MEM32(0x7EA098) = 0x40000000u; /* 0x0077A89D: mov dword ptr [0x7ea098], 0x40000000 */
    MEM32(0x7EA09C) = 0; /* 0x0077A8A7: mov dword ptr [0x7ea09c], 0 */
    MEM32(0x7EA0A0) = 0x41200000u; /* 0x0077A8B1: mov dword ptr [0x7ea0a0], 0x41200000 */
    MEM32(0x7EA0A4) = 0x40000000u; /* 0x0077A8BB: mov dword ptr [0x7ea0a4], 0x40000000 */
    MEM32(0x7EA0A8) = 0; /* 0x0077A8C5: mov dword ptr [0x7ea0a8], 0 */
    MEM32(0x7EA0AC) = 0; /* 0x0077A8CF: mov dword ptr [0x7ea0ac], 0 */
    MEM32(0x7EA0B0) = 0; /* 0x0077A8D9: mov dword ptr [0x7ea0b0], 0 */
    MEM32(0x7EA0B4) = 0; /* 0x0077A8E3: mov dword ptr [0x7ea0b4], 0 */
    MEM32(0x7EA0B8) = 0; /* 0x0077A8ED: mov dword ptr [0x7ea0b8], 0 */
    MEM32(0x7EA0BC) = 0; /* 0x0077A8F7: mov dword ptr [0x7ea0bc], 0 */
    MEM32(0x7EA0CC) = edx; /* 0x0077A901: mov dword ptr [0x7ea0cc], edx */
    MEM32(0x7EA0D0) = 0; /* 0x0077A907: mov dword ptr [0x7ea0d0], 0 */
    MEM32(0x7EA0D4) = 0; /* 0x0077A911: mov dword ptr [0x7ea0d4], 0 */
    MEM32(0x7EA0D8) = 0; /* 0x0077A91B: mov dword ptr [0x7ea0d8], 0 */
    MEM32(0x7EA0DC) = 0; /* 0x0077A925: mov dword ptr [0x7ea0dc], 0 */
    MEM32(0x7EA0E0) = 0; /* 0x0077A92F: mov dword ptr [0x7ea0e0], 0 */
    MEM32(0x7EA0E4) = 0; /* 0x0077A939: mov dword ptr [0x7ea0e4], 0 */
    MEM8(0x7EA0EA) = (uint8_t)(LO8(eax)); /* 0x0077A943: mov byte ptr [0x7ea0ea], al */
    MEM8(0x7EA0EB) = (uint8_t)(LO8(eax)); /* 0x0077A948: mov byte ptr [0x7ea0eb], al */
    MEM8(0x7EA0EC) = (uint8_t)(LO8(eax)); /* 0x0077A94D: mov byte ptr [0x7ea0ec], al */
    MEM8(0x7EA0ED) = (uint8_t)(LO8(eax)); /* 0x0077A952: mov byte ptr [0x7ea0ed], al */
    MEM8(0x7EA0F4) = (uint8_t)(LO8(eax)); /* 0x0077A957: mov byte ptr [0x7ea0f4], al */
    MEM8(0x7EA0F5) = (uint8_t)(LO8(ecx)); /* 0x0077A95C: mov byte ptr [0x7ea0f5], cl */
    MEM8(0x7EA0F6) = (uint8_t)(LO8(eax)); /* 0x0077A962: mov byte ptr [0x7ea0f6], al */
    MEM8(0x7EA0F7) = (uint8_t)(LO8(ecx)); /* 0x0077A967: mov byte ptr [0x7ea0f7], cl */
    MEM8(0x7EA0F8) = (uint8_t)(LO8(eax)); /* 0x0077A96D: mov byte ptr [0x7ea0f8], al */
    MEM8(0x7EA0F9) = (uint8_t)(LO8(eax)); /* 0x0077A972: mov byte ptr [0x7ea0f9], al */
    MEM32(0x7EA0FC) = eax; /* 0x0077A977: mov dword ptr [0x7ea0fc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A97C: ret  */

}

void sub_0077A980(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A980u);

L_0077A980:
    PUSH32(esp, 0x00781950u); /* 0x0077A980: push 0x781950 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077A985: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A98A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A98B: ret  */

}

void sub_0077A990(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A990u);

L_0077A990:
    ecx = 0x0081E810u; /* 0x0077A990: mov ecx, 0x81e810 */
    RECOMP_CALL(sub_0041AA60); /* 0x0077A995: call 0x41aa60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007819A0u); /* 0x0077A99A: push 0x7819a0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077A99F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A9A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A9A5: ret  */

}

void sub_0077A9B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A9B0u);

L_0077A9B0:
    ecx = 0x0081CBC0u; /* 0x0077A9B0: mov ecx, 0x81cbc0 */
    RECOMP_CALL(sub_004130A0); /* 0x0077A9B5: call 0x4130a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781970u); /* 0x0077A9BA: push 0x781970 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077A9BF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077A9C4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A9C5: ret  */

}

void sub_0077A9D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A9D0u);

L_0077A9D0:
    fp_push(*(float*)&MEM32(0x785BC8)); /* 0x0077A9D0: fld dword ptr [0x785bc8] */
    _st[0] += _st[0]; /* 0x0077A9D6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x827CC4) = _v; } /* 0x0077A9D8: fstp dword ptr [0x827cc4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A9DE: ret  */

}

void sub_0077A9E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077A9E0u);

L_0077A9E0:
    fp_push(*(float*)&MEM32(0x785BC8)); /* 0x0077A9E0: fld dword ptr [0x785bc8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077A9E6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x827CC0) = _v; } /* 0x0077A9EC: fstp dword ptr [0x827cc0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077A9F2: ret  */

}

void sub_0077AA00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AA00u);

L_0077AA00:
    fp_push(*(double*)ADDR(0x785BD0)); /* 0x0077AA00: fld qword ptr [0x785bd0] */
    _st[0] += _st[0]; /* 0x0077AA06: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x827CB8) = _v; } /* 0x0077AA08: fstp qword ptr [0x827cb8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AA0E: ret  */

}

void sub_0077AA10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AA10u);

L_0077AA10:
    fp_push(*(double*)ADDR(0x785BD0)); /* 0x0077AA10: fld qword ptr [0x785bd0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077AA16: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x827CB0) = _v; } /* 0x0077AA1C: fstp qword ptr [0x827cb0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AA22: ret  */

}

void sub_0077AA30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AA30u);

L_0077AA30:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077AA30: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x785BE4); /* 0x0077AA36: fdiv dword ptr [0x785be4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x827DA0) = _v; } /* 0x0077AA3C: fstp dword ptr [0x827da0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AA42: ret  */

}

void sub_0077AA50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AA50u);

L_0077AA50:
    PUSH32(esp, 0x00781A30u); /* 0x0077AA50: push 0x781a30 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077AA55: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077AA5A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AA5B: ret  */

}

void sub_0077AA60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AA60u);

L_0077AA60:
    PUSH32(esp, 0x007864E8u); /* 0x0077AA60: push 0x7864e8 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AA65: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AA6A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827D34) = eax; /* 0x0077AA6D: mov dword ptr [0x827d34], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AA72: ret  */

}

void sub_0077AA80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AA80u);

L_0077AA80:
    PUSH32(esp, 0x007864FCu); /* 0x0077AA80: push 0x7864fc */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AA85: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AA8A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C5C) = eax; /* 0x0077AA8D: mov dword ptr [0x827c5c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AA92: ret  */

}

void sub_0077AAA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AAA0u);

L_0077AAA0:
    PUSH32(esp, 0x00786510u); /* 0x0077AAA0: push 0x786510 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AAA5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AAAA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C68) = eax; /* 0x0077AAAD: mov dword ptr [0x827c68], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AAB2: ret  */

}

void sub_0077AAC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AAC0u);

L_0077AAC0:
    PUSH32(esp, 0x00786520u); /* 0x0077AAC0: push 0x786520 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AAC5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AACA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C98) = eax; /* 0x0077AACD: mov dword ptr [0x827c98], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AAD2: ret  */

}

void sub_0077AAE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AAE0u);

L_0077AAE0:
    PUSH32(esp, 0x00786530u); /* 0x0077AAE0: push 0x786530 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AAE5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AAEA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827DAC) = eax; /* 0x0077AAED: mov dword ptr [0x827dac], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AAF2: ret  */

}

void sub_0077AB00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AB00u);

L_0077AB00:
    PUSH32(esp, 0x00786548u); /* 0x0077AB00: push 0x786548 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AB05: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AB0A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C7C) = eax; /* 0x0077AB0D: mov dword ptr [0x827c7c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AB12: ret  */

}

void sub_0077AB20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AB20u);

L_0077AB20:
    PUSH32(esp, 0x00786560u); /* 0x0077AB20: push 0x786560 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AB25: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AB2A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F40) = eax; /* 0x0077AB2D: mov dword ptr [0x827f40], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AB32: ret  */

}

void sub_0077AB40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AB40u);

L_0077AB40:
    PUSH32(esp, 0x0078657Cu); /* 0x0077AB40: push 0x78657c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AB45: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AB4A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C8C) = eax; /* 0x0077AB4D: mov dword ptr [0x827c8c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AB52: ret  */

}

void sub_0077AB60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AB60u);

L_0077AB60:
    PUSH32(esp, 0x00786598u); /* 0x0077AB60: push 0x786598 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AB65: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AB6A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827DB0) = eax; /* 0x0077AB6D: mov dword ptr [0x827db0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AB72: ret  */

}

void sub_0077AB80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AB80u);

L_0077AB80:
    ecx = 0x00827E88u; /* 0x0077AB80: mov ecx, 0x827e88 */
    RECOMP_CALL(sub_004301D0); /* 0x0077AB85: call 0x4301d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781A40u); /* 0x0077AB8A: push 0x781a40 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077AB8F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077AB94: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AB95: ret  */

}

void sub_0077ABA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ABA0u);

L_0077ABA0:
    ecx = 0x00827C3Cu; /* 0x0077ABA0: mov ecx, 0x827c3c */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077ABA5: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B10u); /* 0x0077ABAA: push 0x781b10 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077ABAF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077ABB4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ABB5: ret  */

}

void sub_0077ABC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ABC0u);

L_0077ABC0:
    ecx = 0x00827D98u; /* 0x0077ABC0: mov ecx, 0x827d98 */
    RECOMP_CALL(sub_00598750); /* 0x0077ABC5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B30u); /* 0x0077ABCA: push 0x781b30 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077ABCF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077ABD4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ABD5: ret  */

}

void sub_0077ABE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ABE0u);

L_0077ABE0:
    eax = MEM32(0x7FAAA8); /* 0x0077ABE0: mov eax, dword ptr [0x7faaa8] */
    /* test eax, eax */ /* 0x0077ABE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0077ABE7: setne al */
    MEM8(0x827C38) = (uint8_t)(LO8(eax)); /* 0x0077ABEA: mov byte ptr [0x827c38], al */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ABEF: ret  */

}

void sub_0077ABF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ABF0u);

L_0077ABF0:
    ecx = 0x00827B88u; /* 0x0077ABF0: mov ecx, 0x827b88 */
    RECOMP_CALL(sub_00435B80); /* 0x0077ABF5: call 0x435b80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B60u); /* 0x0077ABFA: push 0x781b60 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077ABFF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077AC04: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AC05: ret  */

}

void sub_0077AC10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AC10u);

L_0077AC10:
    ecx = 0x00827C60u; /* 0x0077AC10: mov ecx, 0x827c60 */
    RECOMP_CALL(sub_00598750); /* 0x0077AC15: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B20u); /* 0x0077AC1A: push 0x781b20 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077AC1F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077AC24: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AC25: ret  */

}

void sub_0077AC30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AC30u);

L_0077AC30:
    eax = MEM32(0x785BF0); /* 0x0077AC30: mov eax, dword ptr [0x785bf0] */
    edx = MEM32(0x785BE8); /* 0x0077AC35: mov edx, dword ptr [0x785be8] */
    ecx = eax; /* 0x0077AC3B: mov ecx, eax */
    MEM32(0x7EA4F0) = eax; /* 0x0077AC3D: mov dword ptr [0x7ea4f0], eax */
    MEM32(0x7EA4F4) = ecx; /* 0x0077AC42: mov dword ptr [0x7ea4f4], ecx */
    ecx = MEM32(0x785BEC); /* 0x0077AC48: mov ecx, dword ptr [0x785bec] */
    eax = edx; /* 0x0077AC4E: mov eax, edx */
    MEM32(0x7EA528) = edx; /* 0x0077AC50: mov dword ptr [0x7ea528], edx */
    edx = ecx; /* 0x0077AC56: mov edx, ecx */
    MEM32(0x7EA52C) = eax; /* 0x0077AC58: mov dword ptr [0x7ea52c], eax */
    MEM32(0x7EA530) = ecx; /* 0x0077AC5D: mov dword ptr [0x7ea530], ecx */
    SET_LO8(ecx, 0x80u); /* 0x0077AC63: mov cl, 0x80 */
    SET_LO8(eax, 0x25u); /* 0x0077AC65: mov al, 0x25 */
    MEM8(0x7EA550) = (uint8_t)(LO8(eax)); /* 0x0077AC67: mov byte ptr [0x7ea550], al */
    MEM8(0x7EA551) = (uint8_t)(LO8(eax)); /* 0x0077AC6C: mov byte ptr [0x7ea551], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077AC71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x7EA556) = (uint8_t)(LO8(ecx)); /* 0x0077AC73: mov byte ptr [0x7ea556], cl */
    MEM8(0x7EA557) = (uint8_t)(LO8(ecx)); /* 0x0077AC79: mov byte ptr [0x7ea557], cl */
    MEM8(0x7EA558) = (uint8_t)(LO8(ecx)); /* 0x0077AC7F: mov byte ptr [0x7ea558], cl */
    MEM8(0x7EA559) = (uint8_t)(LO8(ecx)); /* 0x0077AC85: mov byte ptr [0x7ea559], cl */
    MEM8(0x7EA55A) = (uint8_t)(LO8(ecx)); /* 0x0077AC8B: mov byte ptr [0x7ea55a], cl */
    MEM8(0x7EA55B) = (uint8_t)(LO8(ecx)); /* 0x0077AC91: mov byte ptr [0x7ea55b], cl */
    SET_LO8(ecx, 0x32u); /* 0x0077AC97: mov cl, 0x32 */
    MEM32(0x7EA4F8) = 0; /* 0x0077AC99: mov dword ptr [0x7ea4f8], 0 */
    MEM32(0x7EA4FC) = 0x41200000u; /* 0x0077ACA3: mov dword ptr [0x7ea4fc], 0x41200000 */
    MEM32(0x7EA500) = 0x40000000u; /* 0x0077ACAD: mov dword ptr [0x7ea500], 0x40000000 */
    MEM32(0x7EA504) = 0; /* 0x0077ACB7: mov dword ptr [0x7ea504], 0 */
    MEM32(0x7EA508) = 0x41200000u; /* 0x0077ACC1: mov dword ptr [0x7ea508], 0x41200000 */
    MEM32(0x7EA50C) = 0x40000000u; /* 0x0077ACCB: mov dword ptr [0x7ea50c], 0x40000000 */
    MEM32(0x7EA510) = 0; /* 0x0077ACD5: mov dword ptr [0x7ea510], 0 */
    MEM32(0x7EA514) = 0; /* 0x0077ACDF: mov dword ptr [0x7ea514], 0 */
    MEM32(0x7EA518) = 0; /* 0x0077ACE9: mov dword ptr [0x7ea518], 0 */
    MEM32(0x7EA51C) = 0; /* 0x0077ACF3: mov dword ptr [0x7ea51c], 0 */
    MEM32(0x7EA520) = 0; /* 0x0077ACFD: mov dword ptr [0x7ea520], 0 */
    MEM32(0x7EA524) = 0; /* 0x0077AD07: mov dword ptr [0x7ea524], 0 */
    MEM32(0x7EA534) = edx; /* 0x0077AD11: mov dword ptr [0x7ea534], edx */
    MEM32(0x7EA538) = 0; /* 0x0077AD17: mov dword ptr [0x7ea538], 0 */
    MEM32(0x7EA53C) = 0; /* 0x0077AD21: mov dword ptr [0x7ea53c], 0 */
    MEM32(0x7EA540) = 0; /* 0x0077AD2B: mov dword ptr [0x7ea540], 0 */
    MEM32(0x7EA544) = 0; /* 0x0077AD35: mov dword ptr [0x7ea544], 0 */
    MEM32(0x7EA548) = 0; /* 0x0077AD3F: mov dword ptr [0x7ea548], 0 */
    MEM32(0x7EA54C) = 0; /* 0x0077AD49: mov dword ptr [0x7ea54c], 0 */
    MEM8(0x7EA552) = (uint8_t)(LO8(eax)); /* 0x0077AD53: mov byte ptr [0x7ea552], al */
    MEM8(0x7EA553) = (uint8_t)(LO8(eax)); /* 0x0077AD58: mov byte ptr [0x7ea553], al */
    MEM8(0x7EA554) = (uint8_t)(LO8(eax)); /* 0x0077AD5D: mov byte ptr [0x7ea554], al */
    MEM8(0x7EA555) = (uint8_t)(LO8(eax)); /* 0x0077AD62: mov byte ptr [0x7ea555], al */
    MEM8(0x7EA55C) = (uint8_t)(LO8(eax)); /* 0x0077AD67: mov byte ptr [0x7ea55c], al */
    MEM8(0x7EA55D) = (uint8_t)(LO8(ecx)); /* 0x0077AD6C: mov byte ptr [0x7ea55d], cl */
    MEM8(0x7EA55E) = (uint8_t)(LO8(eax)); /* 0x0077AD72: mov byte ptr [0x7ea55e], al */
    MEM8(0x7EA55F) = (uint8_t)(LO8(ecx)); /* 0x0077AD77: mov byte ptr [0x7ea55f], cl */
    MEM8(0x7EA560) = (uint8_t)(LO8(eax)); /* 0x0077AD7D: mov byte ptr [0x7ea560], al */
    MEM8(0x7EA561) = (uint8_t)(LO8(eax)); /* 0x0077AD82: mov byte ptr [0x7ea561], al */
    MEM32(0x7EA564) = eax; /* 0x0077AD87: mov dword ptr [0x7ea564], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AD8C: ret  */

}

void sub_0077AD90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AD90u);

L_0077AD90:
    PUSH32(esp, 0x00786458u); /* 0x0077AD90: push 0x786458 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AD95: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077AD9A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F60) = eax; /* 0x0077AD9D: mov dword ptr [0x827f60], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ADA2: ret  */

}

void sub_0077ADB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ADB0u);

L_0077ADB0:
    ecx = 0x00827B80u; /* 0x0077ADB0: mov ecx, 0x827b80 */
    RECOMP_CALL(sub_00598750); /* 0x0077ADB5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781AD0u); /* 0x0077ADBA: push 0x781ad0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077ADBF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077ADC4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ADC5: ret  */

}

void sub_0077ADD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ADD0u);

L_0077ADD0:
    eax = 0x00827BA0u; /* 0x0077ADD0: mov eax, 0x827ba0 */
    edx = 8; /* 0x0077ADD5: mov edx, 8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077ADDA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x0077ADDC: lea esp, [esp] */

L_0077ADE0:
    MEM32(eax + (-0x8)) = ecx; /* 0x0077ADE0: mov dword ptr [eax - 8], ecx */
    MEM32(eax + (-0x4)) = ecx; /* 0x0077ADE3: mov dword ptr [eax - 4], ecx */
    MEM32(eax) = ecx; /* 0x0077ADE6: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x0077ADE8: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = 0xFFFFFFFFu; /* 0x0077ADEB: mov dword ptr [eax + 8], 0xffffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x0077ADF2: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0077ADF5: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077ADE0; /* 0x0077ADF6: jne 0x77ade0 */

L_0077ADF8:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ADF8: ret  */

}

void sub_0077AE00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AE00u);

L_0077AE00:
    PUSH32(esp, 0x0078660Cu); /* 0x0077AE00: push 0x78660c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE05: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786600u); /* 0x0077AE0A: push 0x786600 */
    MEM32(0x827FA4) = eax; /* 0x0077AE0F: mov dword ptr [0x827fa4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE14: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007865F4u); /* 0x0077AE19: push 0x7865f4 */
    MEM32(0x827FA8) = eax; /* 0x0077AE1E: mov dword ptr [0x827fa8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE23: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007865E8u); /* 0x0077AE28: push 0x7865e8 */
    MEM32(0x827FAC) = eax; /* 0x0077AE2D: mov dword ptr [0x827fac], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE32: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007865DCu); /* 0x0077AE37: push 0x7865dc */
    MEM32(0x827FB0) = eax; /* 0x0077AE3C: mov dword ptr [0x827fb0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE41: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007865D0u); /* 0x0077AE46: push 0x7865d0 */
    MEM32(0x827FB4) = eax; /* 0x0077AE4B: mov dword ptr [0x827fb4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE50: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007865C4u); /* 0x0077AE55: push 0x7865c4 */
    MEM32(0x827FB8) = eax; /* 0x0077AE5A: mov dword ptr [0x827fb8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE5F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007865B8u); /* 0x0077AE64: push 0x7865b8 */
    MEM32(0x827FBC) = eax; /* 0x0077AE69: mov dword ptr [0x827fbc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE6E: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0077AE73: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(0x827FC0) = eax; /* 0x0077AE76: mov dword ptr [0x827fc0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AE7B: ret  */

}

void sub_0077AE80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AE80u);

L_0077AE80:
    PUSH32(esp, 0x0078666Cu); /* 0x0077AE80: push 0x78666c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE85: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786660u); /* 0x0077AE8A: push 0x786660 */
    MEM32(0x827F64) = eax; /* 0x0077AE8F: mov dword ptr [0x827f64], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AE94: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786654u); /* 0x0077AE99: push 0x786654 */
    MEM32(0x827F68) = eax; /* 0x0077AE9E: mov dword ptr [0x827f68], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AEA3: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786648u); /* 0x0077AEA8: push 0x786648 */
    MEM32(0x827F6C) = eax; /* 0x0077AEAD: mov dword ptr [0x827f6c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AEB2: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0078663Cu); /* 0x0077AEB7: push 0x78663c */
    MEM32(0x827F70) = eax; /* 0x0077AEBC: mov dword ptr [0x827f70], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AEC1: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786630u); /* 0x0077AEC6: push 0x786630 */
    MEM32(0x827F74) = eax; /* 0x0077AECB: mov dword ptr [0x827f74], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AED0: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786624u); /* 0x0077AED5: push 0x786624 */
    MEM32(0x827F78) = eax; /* 0x0077AEDA: mov dword ptr [0x827f78], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AEDF: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786618u); /* 0x0077AEE4: push 0x786618 */
    MEM32(0x827F7C) = eax; /* 0x0077AEE9: mov dword ptr [0x827f7c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AEEE: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0077AEF3: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(0x827F80) = eax; /* 0x0077AEF6: mov dword ptr [0x827f80], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AEFB: ret  */

}

void sub_0077AF00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AF00u);

L_0077AF00:
    PUSH32(esp, 0x007866CCu); /* 0x0077AF00: push 0x7866cc */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF05: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007866C0u); /* 0x0077AF0A: push 0x7866c0 */
    MEM32(0x827FC4) = eax; /* 0x0077AF0F: mov dword ptr [0x827fc4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF14: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007866B4u); /* 0x0077AF19: push 0x7866b4 */
    MEM32(0x827FC8) = eax; /* 0x0077AF1E: mov dword ptr [0x827fc8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF23: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007866A8u); /* 0x0077AF28: push 0x7866a8 */
    MEM32(0x827FCC) = eax; /* 0x0077AF2D: mov dword ptr [0x827fcc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF32: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0078669Cu); /* 0x0077AF37: push 0x78669c */
    MEM32(0x827FD0) = eax; /* 0x0077AF3C: mov dword ptr [0x827fd0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF41: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786690u); /* 0x0077AF46: push 0x786690 */
    MEM32(0x827FD4) = eax; /* 0x0077AF4B: mov dword ptr [0x827fd4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF50: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786684u); /* 0x0077AF55: push 0x786684 */
    MEM32(0x827FD8) = eax; /* 0x0077AF5A: mov dword ptr [0x827fd8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF5F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786678u); /* 0x0077AF64: push 0x786678 */
    MEM32(0x827FDC) = eax; /* 0x0077AF69: mov dword ptr [0x827fdc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF6E: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0077AF73: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(0x827FE0) = eax; /* 0x0077AF76: mov dword ptr [0x827fe0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AF7B: ret  */

}

void sub_0077AF80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077AF80u);

L_0077AF80:
    PUSH32(esp, 0x0078672Cu); /* 0x0077AF80: push 0x78672c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF85: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786720u); /* 0x0077AF8A: push 0x786720 */
    MEM32(0x827F84) = eax; /* 0x0077AF8F: mov dword ptr [0x827f84], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AF94: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786714u); /* 0x0077AF99: push 0x786714 */
    MEM32(0x827F88) = eax; /* 0x0077AF9E: mov dword ptr [0x827f88], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AFA3: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00786708u); /* 0x0077AFA8: push 0x786708 */
    MEM32(0x827F8C) = eax; /* 0x0077AFAD: mov dword ptr [0x827f8c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AFB2: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007866FCu); /* 0x0077AFB7: push 0x7866fc */
    MEM32(0x827F90) = eax; /* 0x0077AFBC: mov dword ptr [0x827f90], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AFC1: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007866F0u); /* 0x0077AFC6: push 0x7866f0 */
    MEM32(0x827F94) = eax; /* 0x0077AFCB: mov dword ptr [0x827f94], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AFD0: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007866E4u); /* 0x0077AFD5: push 0x7866e4 */
    MEM32(0x827F98) = eax; /* 0x0077AFDA: mov dword ptr [0x827f98], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AFDF: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007866D8u); /* 0x0077AFE4: push 0x7866d8 */
    MEM32(0x827F9C) = eax; /* 0x0077AFE9: mov dword ptr [0x827f9c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077AFEE: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0077AFF3: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(0x827FA0) = eax; /* 0x0077AFF6: mov dword ptr [0x827fa0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077AFFB: ret  */

}

void sub_0077B000(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B000u);

L_0077B000:
    PUSH32(esp, 0x004022C0u); /* 0x0077B000: push 0x4022c0 */
    PUSH32(esp, 0x004FE910u); /* 0x0077B005: push 0x4fe910 */
    PUSH32(esp, 8); /* 0x0077B00A: push 8 */
    PUSH32(esp, 0xCu); /* 0x0077B00C: push 0xc */
    PUSH32(esp, 0x00827D38u); /* 0x0077B00E: push 0x827d38 */
    RECOMP_CALL(sub_0075C461); /* 0x0077B013: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007819B0u); /* 0x0077B018: push 0x7819b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B01D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B022: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B023: ret  */

}

void sub_0077B030(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B030u);

L_0077B030:
    PUSH32(esp, 0x004022C0u); /* 0x0077B030: push 0x4022c0 */
    PUSH32(esp, 0x004FE910u); /* 0x0077B035: push 0x4fe910 */
    PUSH32(esp, 8); /* 0x0077B03A: push 8 */
    PUSH32(esp, 0xCu); /* 0x0077B03C: push 0xc */
    PUSH32(esp, 0x00827DB8u); /* 0x0077B03E: push 0x827db8 */
    RECOMP_CALL(sub_0075C461); /* 0x0077B043: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007819D0u); /* 0x0077B048: push 0x7819d0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B04D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B052: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B053: ret  */

}

void sub_0077B060(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B060u);

L_0077B060:
    PUSH32(esp, 0x004022C0u); /* 0x0077B060: push 0x4022c0 */
    PUSH32(esp, 0x004FE910u); /* 0x0077B065: push 0x4fe910 */
    PUSH32(esp, 8); /* 0x0077B06A: push 8 */
    PUSH32(esp, 0xCu); /* 0x0077B06C: push 0xc */
    PUSH32(esp, 0x00827E28u); /* 0x0077B06E: push 0x827e28 */
    RECOMP_CALL(sub_0075C461); /* 0x0077B073: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007819F0u); /* 0x0077B078: push 0x7819f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B07D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B082: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B083: ret  */

}

void sub_0077B090(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B090u);

L_0077B090:
    PUSH32(esp, 0x004022C0u); /* 0x0077B090: push 0x4022c0 */
    PUSH32(esp, 0x004FE910u); /* 0x0077B095: push 0x4fe910 */
    PUSH32(esp, 8); /* 0x0077B09A: push 8 */
    PUSH32(esp, 0xCu); /* 0x0077B09C: push 0xc */
    PUSH32(esp, 0x00827CD0u); /* 0x0077B09E: push 0x827cd0 */
    RECOMP_CALL(sub_0075C461); /* 0x0077B0A3: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781A10u); /* 0x0077B0A8: push 0x781a10 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B0AD: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B0B2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B0B3: ret  */

}

void sub_0077B0C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B0C0u);

L_0077B0C0:
    PUSH32(esp, 0x00781A50u); /* 0x0077B0C0: push 0x781a50 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B0C5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B0CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B0CB: ret  */

}

void sub_0077B0D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B0D0u);

L_0077B0D0:
    PUSH32(esp, 0x00781A70u); /* 0x0077B0D0: push 0x781a70 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B0D5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B0DA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B0DB: ret  */

}

void sub_0077B0E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B0E0u);

L_0077B0E0:
    PUSH32(esp, 0x00781A90u); /* 0x0077B0E0: push 0x781a90 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B0E5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B0EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B0EB: ret  */

}

void sub_0077B0F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B0F0u);

L_0077B0F0:
    PUSH32(esp, 0x00781AB0u); /* 0x0077B0F0: push 0x781ab0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B0F5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B0FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B0FB: ret  */

}

void sub_0077B100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B100u);

L_0077B100:
    ecx = 0x00827C9Cu; /* 0x0077B100: mov ecx, 0x827c9c */
    RECOMP_CALL(sub_00598750); /* 0x0077B105: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781AE0u); /* 0x0077B10A: push 0x781ae0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B10F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B114: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B115: ret  */

}

void sub_0077B120(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B120u);

L_0077B120:
    ecx = 0x00827CA4u; /* 0x0077B120: mov ecx, 0x827ca4 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077B125: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B40u); /* 0x0077B12A: push 0x781b40 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B12F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B134: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B135: ret  */

}

void sub_0077B140(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B140u);

L_0077B140:
    PUSH32(esp, 0x00785C3Cu); /* 0x0077B140: push 0x785c3c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B145: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B14A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C84) = eax; /* 0x0077B14D: mov dword ptr [0x827c84], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B152: ret  */

}

void sub_0077B160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B160u);

L_0077B160:
    PUSH32(esp, 0x00786738u); /* 0x0077B160: push 0x786738 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B165: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B16A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F54) = eax; /* 0x0077B16D: mov dword ptr [0x827f54], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B172: ret  */

}

void sub_0077B180(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B180u);

L_0077B180:
    PUSH32(esp, 0x00786748u); /* 0x0077B180: push 0x786748 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B185: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B18A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C6C) = eax; /* 0x0077B18D: mov dword ptr [0x827c6c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B192: ret  */

}

void sub_0077B1A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B1A0u);

L_0077B1A0:
    PUSH32(esp, 0x00786760u); /* 0x0077B1A0: push 0x786760 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B1A5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B1AA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F48) = eax; /* 0x0077B1AD: mov dword ptr [0x827f48], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B1B2: ret  */

}

void sub_0077B1C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B1C0u);

L_0077B1C0:
    PUSH32(esp, 0x00786774u); /* 0x0077B1C0: push 0x786774 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B1C5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B1CA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F4C) = eax; /* 0x0077B1CD: mov dword ptr [0x827f4c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B1D2: ret  */

}

void sub_0077B1E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B1E0u);

L_0077B1E0:
    PUSH32(esp, 0x0078678Cu); /* 0x0077B1E0: push 0x78678c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B1E5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B1EA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827CC8) = eax; /* 0x0077B1ED: mov dword ptr [0x827cc8], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B1F2: ret  */

}

void sub_0077B200(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B200u);

L_0077B200:
    PUSH32(esp, 0x007867A0u); /* 0x0077B200: push 0x7867a0 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B205: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B20A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F44) = eax; /* 0x0077B20D: mov dword ptr [0x827f44], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B212: ret  */

}

void sub_0077B220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B220u);

L_0077B220:
    PUSH32(esp, 0x007867B4u); /* 0x0077B220: push 0x7867b4 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B225: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B22A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F5C) = eax; /* 0x0077B22D: mov dword ptr [0x827f5c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B232: ret  */

}

void sub_0077B240(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B240u);

L_0077B240:
    PUSH32(esp, 0x007867CCu); /* 0x0077B240: push 0x7867cc */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B245: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B24A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F58) = eax; /* 0x0077B24D: mov dword ptr [0x827f58], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B252: ret  */

}

void sub_0077B260(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B260u);

L_0077B260:
    PUSH32(esp, 0x007867E4u); /* 0x0077B260: push 0x7867e4 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B265: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B26A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827F50) = eax; /* 0x0077B26D: mov dword ptr [0x827f50], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B272: ret  */

}

void sub_0077B280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B280u);

L_0077B280:
    PUSH32(esp, 0x007867F8u); /* 0x0077B280: push 0x7867f8 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B285: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B28A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C44) = eax; /* 0x0077B28D: mov dword ptr [0x827c44], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B292: ret  */

}

void sub_0077B2A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B2A0u);

L_0077B2A0:
    PUSH32(esp, 0x00786810u); /* 0x0077B2A0: push 0x786810 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B2A5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B2AA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C58) = eax; /* 0x0077B2AD: mov dword ptr [0x827c58], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B2B2: ret  */

}

void sub_0077B2C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B2C0u);

L_0077B2C0:
    PUSH32(esp, 0x00786828u); /* 0x0077B2C0: push 0x786828 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B2C5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B2CA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C94) = eax; /* 0x0077B2CD: mov dword ptr [0x827c94], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B2D2: ret  */

}

void sub_0077B2E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B2E0u);

L_0077B2E0:
    PUSH32(esp, 0x00786838u); /* 0x0077B2E0: push 0x786838 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B2E5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B2EA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C90) = eax; /* 0x0077B2ED: mov dword ptr [0x827c90], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B2F2: ret  */

}

void sub_0077B300(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B300u);

L_0077B300:
    PUSH32(esp, 0x0078684Cu); /* 0x0077B300: push 0x78684c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B305: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B30A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C70) = eax; /* 0x0077B30D: mov dword ptr [0x827c70], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B312: ret  */

}

void sub_0077B320(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B320u);

L_0077B320:
    PUSH32(esp, 0x00786860u); /* 0x0077B320: push 0x786860 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B325: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B32A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C54) = eax; /* 0x0077B32D: mov dword ptr [0x827c54], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B332: ret  */

}

void sub_0077B340(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B340u);

L_0077B340:
    PUSH32(esp, 0x00786874u); /* 0x0077B340: push 0x786874 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B345: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B34A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C80) = eax; /* 0x0077B34D: mov dword ptr [0x827c80], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B352: ret  */

}

void sub_0077B360(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B360u);

L_0077B360:
    PUSH32(esp, 0x00786888u); /* 0x0077B360: push 0x786888 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B365: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B36A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827DB4) = eax; /* 0x0077B36D: mov dword ptr [0x827db4], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B372: ret  */

}

void sub_0077B380(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B380u);

L_0077B380:
    PUSH32(esp, 0x007868A0u); /* 0x0077B380: push 0x7868a0 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B385: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B38A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827D30) = eax; /* 0x0077B38D: mov dword ptr [0x827d30], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B392: ret  */

}

void sub_0077B3A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B3A0u);

L_0077B3A0:
    PUSH32(esp, 0x007868B8u); /* 0x0077B3A0: push 0x7868b8 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B3A5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B3AA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827C88) = eax; /* 0x0077B3AD: mov dword ptr [0x827c88], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B3B2: ret  */

}

void sub_0077B3C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B3C0u);

L_0077B3C0:
    PUSH32(esp, 0x007868D0u); /* 0x0077B3C0: push 0x7868d0 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B3C5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077B3CA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x827E18) = eax; /* 0x0077B3CD: mov dword ptr [0x827e18], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B3D2: ret  */

}

void sub_0077B3E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B3E0u);

L_0077B3E0:
    eax = MEM32(0x827C84); /* 0x0077B3E0: mov eax, dword ptr [0x827c84] */
    ecx = MEM32(0x827F54); /* 0x0077B3E5: mov ecx, dword ptr [0x827f54] */
    edx = MEM32(0x827C6C); /* 0x0077B3EB: mov edx, dword ptr [0x827c6c] */
    MEM32(0x7EA56C) = eax; /* 0x0077B3F1: mov dword ptr [0x7ea56c], eax */
    eax = MEM32(0x827F48); /* 0x0077B3F6: mov eax, dword ptr [0x827f48] */
    MEM32(0x7EA574) = ecx; /* 0x0077B3FB: mov dword ptr [0x7ea574], ecx */
    ecx = MEM32(0x827F4C); /* 0x0077B401: mov ecx, dword ptr [0x827f4c] */
    MEM32(0x7EA57C) = edx; /* 0x0077B407: mov dword ptr [0x7ea57c], edx */
    edx = MEM32(0x827CC8); /* 0x0077B40D: mov edx, dword ptr [0x827cc8] */
    MEM32(0x7EA584) = eax; /* 0x0077B413: mov dword ptr [0x7ea584], eax */
    eax = MEM32(0x827F44); /* 0x0077B418: mov eax, dword ptr [0x827f44] */
    MEM32(0x7EA58C) = ecx; /* 0x0077B41D: mov dword ptr [0x7ea58c], ecx */
    ecx = MEM32(0x827F5C); /* 0x0077B423: mov ecx, dword ptr [0x827f5c] */
    MEM32(0x7EA594) = edx; /* 0x0077B429: mov dword ptr [0x7ea594], edx */
    edx = MEM32(0x827F58); /* 0x0077B42F: mov edx, dword ptr [0x827f58] */
    MEM32(0x7EA59C) = eax; /* 0x0077B435: mov dword ptr [0x7ea59c], eax */
    eax = MEM32(0x827F50); /* 0x0077B43A: mov eax, dword ptr [0x827f50] */
    MEM32(0x7EA5A4) = ecx; /* 0x0077B43F: mov dword ptr [0x7ea5a4], ecx */
    ecx = MEM32(0x827C44); /* 0x0077B445: mov ecx, dword ptr [0x827c44] */
    MEM32(0x7EA5AC) = edx; /* 0x0077B44B: mov dword ptr [0x7ea5ac], edx */
    edx = MEM32(0x827C58); /* 0x0077B451: mov edx, dword ptr [0x827c58] */
    MEM32(0x7EA5B4) = eax; /* 0x0077B457: mov dword ptr [0x7ea5b4], eax */
    eax = MEM32(0x827C94); /* 0x0077B45C: mov eax, dword ptr [0x827c94] */
    MEM32(0x7EA5BC) = ecx; /* 0x0077B461: mov dword ptr [0x7ea5bc], ecx */
    ecx = MEM32(0x827C90); /* 0x0077B467: mov ecx, dword ptr [0x827c90] */
    MEM32(0x7EA5C4) = edx; /* 0x0077B46D: mov dword ptr [0x7ea5c4], edx */
    edx = MEM32(0x827C70); /* 0x0077B473: mov edx, dword ptr [0x827c70] */
    MEM32(0x7EA5CC) = eax; /* 0x0077B479: mov dword ptr [0x7ea5cc], eax */
    eax = MEM32(0x827C54); /* 0x0077B47E: mov eax, dword ptr [0x827c54] */
    MEM32(0x7EA5D4) = ecx; /* 0x0077B483: mov dword ptr [0x7ea5d4], ecx */
    ecx = MEM32(0x827C80); /* 0x0077B489: mov ecx, dword ptr [0x827c80] */
    MEM32(0x7EA5DC) = edx; /* 0x0077B48F: mov dword ptr [0x7ea5dc], edx */
    edx = MEM32(0x827DB4); /* 0x0077B495: mov edx, dword ptr [0x827db4] */
    MEM32(0x7EA5E4) = eax; /* 0x0077B49B: mov dword ptr [0x7ea5e4], eax */
    eax = MEM32(0x827D30); /* 0x0077B4A0: mov eax, dword ptr [0x827d30] */
    MEM32(0x7EA5EC) = ecx; /* 0x0077B4A5: mov dword ptr [0x7ea5ec], ecx */
    ecx = MEM32(0x827C88); /* 0x0077B4AB: mov ecx, dword ptr [0x827c88] */
    MEM32(0x7EA5F4) = edx; /* 0x0077B4B1: mov dword ptr [0x7ea5f4], edx */
    edx = MEM32(0x827E18); /* 0x0077B4B7: mov edx, dword ptr [0x827e18] */
    MEM32(0x7EA570) = 0x00786738u; /* 0x0077B4BD: mov dword ptr [0x7ea570], 0x786738 */
    MEM32(0x7EA578) = 0x00786748u; /* 0x0077B4C7: mov dword ptr [0x7ea578], 0x786748 */
    MEM32(0x7EA580) = 0x00786760u; /* 0x0077B4D1: mov dword ptr [0x7ea580], 0x786760 */
    MEM32(0x7EA588) = 0x00786774u; /* 0x0077B4DB: mov dword ptr [0x7ea588], 0x786774 */
    MEM32(0x7EA590) = 0x0078678Cu; /* 0x0077B4E5: mov dword ptr [0x7ea590], 0x78678c */
    MEM32(0x7EA598) = 0x007867A0u; /* 0x0077B4EF: mov dword ptr [0x7ea598], 0x7867a0 */
    MEM32(0x7EA5A0) = 0x007867B4u; /* 0x0077B4F9: mov dword ptr [0x7ea5a0], 0x7867b4 */
    MEM32(0x7EA5A8) = 0x007867CCu; /* 0x0077B503: mov dword ptr [0x7ea5a8], 0x7867cc */
    MEM32(0x7EA5B0) = 0x007867E4u; /* 0x0077B50D: mov dword ptr [0x7ea5b0], 0x7867e4 */
    MEM32(0x7EA5B8) = 0x007867F8u; /* 0x0077B517: mov dword ptr [0x7ea5b8], 0x7867f8 */
    MEM32(0x7EA5C0) = 0x00786810u; /* 0x0077B521: mov dword ptr [0x7ea5c0], 0x786810 */
    MEM32(0x7EA5C8) = 0x00786828u; /* 0x0077B52B: mov dword ptr [0x7ea5c8], 0x786828 */
    MEM32(0x7EA5D0) = 0x00786838u; /* 0x0077B535: mov dword ptr [0x7ea5d0], 0x786838 */
    MEM32(0x7EA5D8) = 0x0078684Cu; /* 0x0077B53F: mov dword ptr [0x7ea5d8], 0x78684c */
    MEM32(0x7EA5E0) = 0x00786860u; /* 0x0077B549: mov dword ptr [0x7ea5e0], 0x786860 */
    MEM32(0x7EA5E8) = 0x00786874u; /* 0x0077B553: mov dword ptr [0x7ea5e8], 0x786874 */
    MEM32(0x7EA5F0) = 0x00786888u; /* 0x0077B55D: mov dword ptr [0x7ea5f0], 0x786888 */
    MEM32(0x7EA5F8) = 0x007868A0u; /* 0x0077B567: mov dword ptr [0x7ea5f8], 0x7868a0 */
    MEM32(0x7EA5FC) = eax; /* 0x0077B571: mov dword ptr [0x7ea5fc], eax */
    MEM32(0x7EA600) = 0x007868B8u; /* 0x0077B576: mov dword ptr [0x7ea600], 0x7868b8 */
    MEM32(0x7EA604) = ecx; /* 0x0077B580: mov dword ptr [0x7ea604], ecx */
    MEM32(0x7EA608) = 0x007868D0u; /* 0x0077B586: mov dword ptr [0x7ea608], 0x7868d0 */
    MEM32(0x7EA60C) = edx; /* 0x0077B590: mov dword ptr [0x7ea60c], edx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B596: ret  */

}

void sub_0077B5A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B5A0u);

L_0077B5A0:
    ecx = 0x00827DA4u; /* 0x0077B5A0: mov ecx, 0x827da4 */
    RECOMP_CALL(sub_00598750); /* 0x0077B5A5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781AF0u); /* 0x0077B5AA: push 0x781af0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B5AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B5B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B5B5: ret  */

}

void sub_0077B5C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B5C0u);

L_0077B5C0:
    ecx = 0x00827C74u; /* 0x0077B5C0: mov ecx, 0x827c74 */
    RECOMP_CALL(sub_00598750); /* 0x0077B5C5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B00u); /* 0x0077B5CA: push 0x781b00 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B5CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B5D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B5D5: ret  */

}

void sub_0077B5E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B5E0u);

L_0077B5E0:
    ecx = 0x00827EF0u; /* 0x0077B5E0: mov ecx, 0x827ef0 */
    RECOMP_CALL(sub_00439EA0); /* 0x0077B5E5: call 0x439ea0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B50u); /* 0x0077B5EA: push 0x781b50 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B5EF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B5F4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B5F5: ret  */

}

void sub_0077B600(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B600u);

L_0077B600:
    ecx = 0x00828520u; /* 0x0077B600: mov ecx, 0x828520 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077B605: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B80u); /* 0x0077B60A: push 0x781b80 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B60F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B614: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B615: ret  */

}

void sub_0077B620(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B620u);

L_0077B620:
    eax = MEM32(0x828050); /* 0x0077B620: mov eax, dword ptr [0x828050] */
    MEM32(0x7EB3F4) = eax; /* 0x0077B625: mov dword ptr [0x7eb3f4], eax */
    SET_LO8(eax, MEM8(0x827FE8)); /* 0x0077B62A: mov al, byte ptr [0x827fe8] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x0077B62F: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM32(0x828050) = 0x007EB3F4u; /* 0x0077B631: mov dword ptr [0x828050], 0x7eb3f4 */
    MEM8(0x827FE8) = (uint8_t)(LO8(eax)); /* 0x0077B63B: mov byte ptr [0x827fe8], al */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B640: ret  */

}

void sub_0077B650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B650u);

L_0077B650:
    ecx = 0x00828528u; /* 0x0077B650: mov ecx, 0x828528 */
    RECOMP_CALL(sub_0043E820); /* 0x0077B655: call 0x43e820 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B70u); /* 0x0077B65A: push 0x781b70 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B65F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B664: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B665: ret  */

}

void sub_0077B670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B670u);

L_0077B670:
    ecx = 0x00828530u; /* 0x0077B670: mov ecx, 0x828530 */
    RECOMP_CALL(sub_004407B0); /* 0x0077B675: call 0x4407b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781B90u); /* 0x0077B67A: push 0x781b90 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077B67F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077B684: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B685: ret  */

}

void sub_0077B690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B690u);

L_0077B690:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077B690: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x786F78); /* 0x0077B696: fdiv dword ptr [0x786f78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x828734) = _v; } /* 0x0077B69C: fstp dword ptr [0x828734] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B6A2: ret  */

}

void sub_0077B6B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B6B0u);

L_0077B6B0:
    eax = MEM32(0x786F8C); /* 0x0077B6B0: mov eax, dword ptr [0x786f8c] */
    edx = MEM32(0x786F84); /* 0x0077B6B5: mov edx, dword ptr [0x786f84] */
    ecx = eax; /* 0x0077B6BB: mov ecx, eax */
    MEM32(0x7EC7C4) = ecx; /* 0x0077B6BD: mov dword ptr [0x7ec7c4], ecx */
    ecx = MEM32(0x786F88); /* 0x0077B6C3: mov ecx, dword ptr [0x786f88] */
    MEM32(0x7EC7C0) = eax; /* 0x0077B6C9: mov dword ptr [0x7ec7c0], eax */
    eax = edx; /* 0x0077B6CE: mov eax, edx */
    MEM32(0x7EC7F8) = edx; /* 0x0077B6D0: mov dword ptr [0x7ec7f8], edx */
    edx = ecx; /* 0x0077B6D6: mov edx, ecx */
    MEM32(0x7EC7FC) = eax; /* 0x0077B6D8: mov dword ptr [0x7ec7fc], eax */
    MEM32(0x7EC800) = ecx; /* 0x0077B6DD: mov dword ptr [0x7ec800], ecx */
    MEM32(0x7EC804) = edx; /* 0x0077B6E3: mov dword ptr [0x7ec804], edx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B6E9: ret  */

}

void sub_0077B6F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B6F0u);

L_0077B6F0:
    PUSH32(esp, 0x007881E4u); /* 0x0077B6F0: push 0x7881e4 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B6F5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007881E0u); /* 0x0077B6FA: push 0x7881e0 */
    MEM32(0x7EC1F8) = eax; /* 0x0077B6FF: mov dword ptr [0x7ec1f8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B704: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007881D4u); /* 0x0077B709: push 0x7881d4 */
    MEM32(0x7EC1FC) = eax; /* 0x0077B70E: mov dword ptr [0x7ec1fc], eax */
    MEM32(0x7EC214) = 0x007881CCu; /* 0x0077B713: mov dword ptr [0x7ec214], 0x7881cc */
    MEM32(0x7EC218) = 0x00441B40u; /* 0x0077B71D: mov dword ptr [0x7ec218], 0x441b40 */
    MEM32(0x7EC21C) = 0x00404800u; /* 0x0077B727: mov dword ptr [0x7ec21c], 0x404800 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B731: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007881CCu); /* 0x0077B736: push 0x7881cc */
    MEM32(0x7EC20C) = eax; /* 0x0077B73B: mov dword ptr [0x7ec20c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B740: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007881BCu); /* 0x0077B745: push 0x7881bc */
    MEM32(0x7EC210) = eax; /* 0x0077B74A: mov dword ptr [0x7ec210], eax */
    MEM32(0x7EC228) = 0x007881B4u; /* 0x0077B74F: mov dword ptr [0x7ec228], 0x7881b4 */
    MEM32(0x7EC22C) = 0x00441BF0u; /* 0x0077B759: mov dword ptr [0x7ec22c], 0x441bf0 */
    MEM32(0x7EC230) = 0x00404800u; /* 0x0077B763: mov dword ptr [0x7ec230], 0x404800 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B76D: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007881B4u); /* 0x0077B772: push 0x7881b4 */
    MEM32(0x7EC220) = eax; /* 0x0077B777: mov dword ptr [0x7ec220], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B77C: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007881A4u); /* 0x0077B781: push 0x7881a4 */
    MEM32(0x7EC224) = eax; /* 0x0077B786: mov dword ptr [0x7ec224], eax */
    MEM32(0x7EC23C) = 0x0078819Cu; /* 0x0077B78B: mov dword ptr [0x7ec23c], 0x78819c */
    MEM32(0x7EC240) = 0x00441C80u; /* 0x0077B795: mov dword ptr [0x7ec240], 0x441c80 */
    MEM32(0x7EC244) = 0x00441D00u; /* 0x0077B79F: mov dword ptr [0x7ec244], 0x441d00 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B7A9: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0078819Cu); /* 0x0077B7AE: push 0x78819c */
    MEM32(0x7EC234) = eax; /* 0x0077B7B3: mov dword ptr [0x7ec234], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B7B8: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0078818Cu); /* 0x0077B7BD: push 0x78818c */
    MEM32(0x7EC238) = eax; /* 0x0077B7C2: mov dword ptr [0x7ec238], eax */
    MEM32(0x7EC250) = 0x00788184u; /* 0x0077B7C7: mov dword ptr [0x7ec250], 0x788184 */
    MEM32(0x7EC254) = 0x00441D30u; /* 0x0077B7D1: mov dword ptr [0x7ec254], 0x441d30 */
    MEM32(0x7EC258) = 0x00404800u; /* 0x0077B7DB: mov dword ptr [0x7ec258], 0x404800 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B7E5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00788184u); /* 0x0077B7EA: push 0x788184 */
    MEM32(0x7EC248) = eax; /* 0x0077B7EF: mov dword ptr [0x7ec248], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B7F4: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00788174u); /* 0x0077B7F9: push 0x788174 */
    MEM32(0x7EC24C) = eax; /* 0x0077B7FE: mov dword ptr [0x7ec24c], eax */
    MEM32(0x7EC264) = 0x00788168u; /* 0x0077B803: mov dword ptr [0x7ec264], 0x788168 */
    MEM32(0x7EC268) = 0x00441E90u; /* 0x0077B80D: mov dword ptr [0x7ec268], 0x441e90 */
    MEM32(0x7EC26C) = 0x00441F40u; /* 0x0077B817: mov dword ptr [0x7ec26c], 0x441f40 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B821: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00788168u); /* 0x0077B826: push 0x788168 */
    MEM32(0x7EC25C) = eax; /* 0x0077B82B: mov dword ptr [0x7ec25c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077B830: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0077B835: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM32(0x7EC260) = eax; /* 0x0077B838: mov dword ptr [0x7ec260], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B83D: ret  */

}

void sub_0077B840(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B840u);

L_0077B840:
    eax = MEM32(0x786FBC); /* 0x0077B840: mov eax, dword ptr [0x786fbc] */
    MEM32(0x8286E0) = eax; /* 0x0077B845: mov dword ptr [0x8286e0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B84A: ret  */

}

void sub_0077B850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B850u);

L_0077B850:
    fp_push(*(float*)&MEM32(0x786FB4)); /* 0x0077B850: fld dword ptr [0x786fb4] */
    _st[0] -= (double)*(float*)ADDR(0x786FBC); /* 0x0077B856: fsub dword ptr [0x786fbc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82A458) = _v; } /* 0x0077B85C: fstp dword ptr [0x82a458] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B862: ret  */

}

void sub_0077B870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B870u);

L_0077B870:
    fp_push(*(float*)&MEM32(0x786FB8)); /* 0x0077B870: fld dword ptr [0x786fb8] */
    _st[0] -= (double)*(float*)ADDR(0x786FBC); /* 0x0077B876: fsub dword ptr [0x786fbc] */
    _st[0] -= (double)*(float*)ADDR(0x7881F0); /* 0x0077B87C: fsub dword ptr [0x7881f0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82871C) = _v; } /* 0x0077B882: fstp dword ptr [0x82871c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B888: ret  */

}

void sub_0077B890(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B890u);

L_0077B890:
    fp_push(*(float*)&MEM32(0x786FB8)); /* 0x0077B890: fld dword ptr [0x786fb8] */
    _st[0] -= (double)*(float*)ADDR(0x786FBC); /* 0x0077B896: fsub dword ptr [0x786fbc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x828730) = _v; } /* 0x0077B89C: fstp dword ptr [0x828730] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B8A2: ret  */

}

void sub_0077B8B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B8B0u);

L_0077B8B0:
    fp_push(*(float*)&MEM32(0x786FB8)); /* 0x0077B8B0: fld dword ptr [0x786fb8] */
    _st[0] -= (double)*(float*)ADDR(0x786FBC); /* 0x0077B8B6: fsub dword ptr [0x786fbc] */
    _st[0] += (double)*(float*)ADDR(0x7881F4); /* 0x0077B8BC: fadd dword ptr [0x7881f4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8286F4) = _v; } /* 0x0077B8C2: fstp dword ptr [0x8286f4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B8C8: ret  */

}

void sub_0077B8D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B8D0u);

L_0077B8D0:
    fp_push(*(float*)&MEM32(0x786FB8)); /* 0x0077B8D0: fld dword ptr [0x786fb8] */
    _st[0] -= (double)*(float*)ADDR(0x786FBC); /* 0x0077B8D6: fsub dword ptr [0x786fbc] */
    _st[0] += (double)*(float*)ADDR(0x7881F8); /* 0x0077B8DC: fadd dword ptr [0x7881f8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x828710) = _v; } /* 0x0077B8E2: fstp dword ptr [0x828710] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B8E8: ret  */

}

void sub_0077B8F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B8F0u);

L_0077B8F0:
    fp_push(*(float*)&MEM32(0x82A458)); /* 0x0077B8F0: fld dword ptr [0x82a458] */
    _st[0] -= (double)*(float*)ADDR(0x786FF0); /* 0x0077B8F6: fsub dword ptr [0x786ff0] */
    _st[0] -= (double)*(float*)ADDR(0x784560); /* 0x0077B8FC: fsub dword ptr [0x784560] */
    _st[0] -= (double)*(float*)ADDR(0x7844C0); /* 0x0077B902: fsub dword ptr [0x7844c0] */
    _st[0] -= (double)*(float*)ADDR(0x7844C0); /* 0x0077B908: fsub dword ptr [0x7844c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82A4E8) = _v; } /* 0x0077B90E: fstp dword ptr [0x82a4e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B914: ret  */

}

void sub_0077B920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B920u);

L_0077B920:
    fp_push(*(float*)&MEM32(0x82871C)); /* 0x0077B920: fld dword ptr [0x82871c] */
    _st[0] -= (double)*(float*)ADDR(0x786FC4); /* 0x0077B926: fsub dword ptr [0x786fc4] */
    _st[0] -= (double)*(float*)ADDR(0x786FF0); /* 0x0077B92C: fsub dword ptr [0x786ff0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82874C) = _v; } /* 0x0077B932: fstp dword ptr [0x82874c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B938: ret  */

}

void sub_0077B940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B940u);

L_0077B940:
    fp_push(*(float*)&MEM32(0x786FF0)); /* 0x0077B940: fld dword ptr [0x786ff0] */
    _st[0] += _st[0]; /* 0x0077B946: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x828750) = _v; } /* 0x0077B948: fstp dword ptr [0x828750] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B94E: ret  */

}

void sub_0077B950(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B950u);

L_0077B950:
    fp_push(*(float*)&MEM32(0x82A4E8)); /* 0x0077B950: fld dword ptr [0x82a4e8] */
    _st[0] -= (double)*(float*)ADDR(0x786FF0); /* 0x0077B956: fsub dword ptr [0x786ff0] */
    _st[0] -= (double)*(float*)ADDR(0x786FF4); /* 0x0077B95C: fsub dword ptr [0x786ff4] */
    _st[0] -= (double)*(float*)ADDR(0x7844C0); /* 0x0077B962: fsub dword ptr [0x7844c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82A468) = _v; } /* 0x0077B968: fstp dword ptr [0x82a468] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B96E: ret  */

}

void sub_0077B970(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B970u);

L_0077B970:
    fp_push(*(float*)&MEM32(0x786FF4)); /* 0x0077B970: fld dword ptr [0x786ff4] */
    _st[0] += (double)*(float*)ADDR(0x786FF0); /* 0x0077B976: fadd dword ptr [0x786ff0] */
    _st[0] += (double)*(float*)ADDR(0x82A4E8); /* 0x0077B97C: fadd dword ptr [0x82a4e8] */
    _st[0] += (double)*(float*)ADDR(0x7844C0); /* 0x0077B982: fadd dword ptr [0x7844c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82875C) = _v; } /* 0x0077B988: fstp dword ptr [0x82875c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B98E: ret  */

}

void sub_0077B990(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B990u);

L_0077B990:
    eax = MEM32(0x82874C); /* 0x0077B990: mov eax, dword ptr [0x82874c] */
    MEM32(0x828724) = eax; /* 0x0077B995: mov dword ptr [0x828724], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B99A: ret  */

}

void sub_0077B9A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B9A0u);

L_0077B9A0:
    fp_push(*(float*)&MEM32(0x786FF0)); /* 0x0077B9A0: fld dword ptr [0x786ff0] */
    _st[0] += _st[0]; /* 0x0077B9A6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82A464) = _v; } /* 0x0077B9A8: fstp dword ptr [0x82a464] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B9AE: ret  */

}

void sub_0077B9B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B9B0u);

L_0077B9B0:
    eax = MEM32(0x82A4E8); /* 0x0077B9B0: mov eax, dword ptr [0x82a4e8] */
    MEM32(0x82A4EC) = eax; /* 0x0077B9B5: mov dword ptr [0x82a4ec], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B9BA: ret  */

}

void sub_0077B9C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B9C0u);

L_0077B9C0:
    fp_push(*(float*)&MEM32(0x82874C)); /* 0x0077B9C0: fld dword ptr [0x82874c] */
    _st[0] -= (double)*(float*)ADDR(0x786FF0); /* 0x0077B9C6: fsub dword ptr [0x786ff0] */
    _st[0] -= (double)*(float*)ADDR(0x786FF8); /* 0x0077B9CC: fsub dword ptr [0x786ff8] */
    _st[0] -= (double)*(float*)ADDR(0x7844C0); /* 0x0077B9D2: fsub dword ptr [0x7844c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82876C) = _v; } /* 0x0077B9D8: fstp dword ptr [0x82876c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B9DE: ret  */

}

void sub_0077B9E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077B9E0u);

L_0077B9E0:
    fp_push(*(float*)&MEM32(0x786FC4)); /* 0x0077B9E0: fld dword ptr [0x786fc4] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077B9E6: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A47C) = eax; /* 0x0077B9EB: mov dword ptr [0x82a47c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077B9F0: ret  */

}

void sub_0077BA00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BA00u);

L_0077BA00:
    fp_push(*(float*)&MEM32(0x82871C)); /* 0x0077BA00: fld dword ptr [0x82871c] */
    _st[0] -= (double)*(float*)ADDR(0x786FC4); /* 0x0077BA06: fsub dword ptr [0x786fc4] */
    _st[0] -= (double)*(float*)ADDR(0x7881F4); /* 0x0077BA0C: fsub dword ptr [0x7881f4] */
    fp_push(*(float*)&MEM32(0x786FB8)); /* 0x0077BA12: fld dword ptr [0x786fb8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077BA18: fmul dword ptr [0x784260] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x0077BA1E: fsubp st(1) */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BA20: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82873C) = eax; /* 0x0077BA25: mov dword ptr [0x82873c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BA2A: ret  */

}

void sub_0077BA30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BA30u);

L_0077BA30:
    fp_push(*(float*)&MEM32(0x8286E0)); /* 0x0077BA30: fld dword ptr [0x8286e0] */
    _st[0] -= (double)*(float*)ADDR(0x7844C0); /* 0x0077BA36: fsub dword ptr [0x7844c0] */
    fp_push(*(float*)&MEM32(0x786FB4)); /* 0x0077BA3C: fld dword ptr [0x786fb4] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077BA42: fmul dword ptr [0x784260] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x0077BA48: fsubp st(1) */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BA4A: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828718) = eax; /* 0x0077BA4F: mov dword ptr [0x828718], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BA54: ret  */

}

void sub_0077BA60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BA60u);

L_0077BA60:
    fp_push(*(float*)&MEM32(0x786FB4)); /* 0x0077BA60: fld dword ptr [0x786fb4] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077BA66: fmul dword ptr [0x784260] */
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BA6C: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7881FC); /* 0x0077BA72: fmul dword ptr [0x7881fc] */
    _st[0] = _st[1] - _st[0]; /* 0x0077BA78: fsubr st(1) */
    _st[0] -= _st[1]; /* 0x0077BA7A: fsub st(1) */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BA7C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x0077BA81: fstp st(0) */
    MEM32(0x82A44C) = eax; /* 0x0077BA83: mov dword ptr [0x82a44c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BA88: ret  */

}

void sub_0077BA90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BA90u);

L_0077BA90:
    fp_push(*(float*)&MEM32(0x786FB4)); /* 0x0077BA90: fld dword ptr [0x786fb4] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077BA96: fmul dword ptr [0x784260] */
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BA9C: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x787ADC); /* 0x0077BAA2: fmul dword ptr [0x787adc] */
    _st[0] = _st[1] - _st[0]; /* 0x0077BAA8: fsubr st(1) */
    _st[0] -= _st[1]; /* 0x0077BAAA: fsub st(1) */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BAAC: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x0077BAB1: fstp st(0) */
    MEM32(0x8286F0) = eax; /* 0x0077BAB3: mov dword ptr [0x8286f0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BAB8: ret  */

}

void sub_0077BAC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BAC0u);

L_0077BAC0:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BAC0: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7881FC); /* 0x0077BAC6: fmul dword ptr [0x7881fc] */
    _st[0] = (double)*(float*)ADDR(0x82A458) - _st[0]; /* 0x0077BACC: fsubr dword ptr [0x82a458] */
    fp_push(*(float*)&MEM32(0x786FB4)); /* 0x0077BAD2: fld dword ptr [0x786fb4] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077BAD8: fmul dword ptr [0x784260] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x0077BADE: fsubp st(1) */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BAE0: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A4D8) = eax; /* 0x0077BAE5: mov dword ptr [0x82a4d8], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BAEA: ret  */

}

void sub_0077BAF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BAF0u);

L_0077BAF0:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BAF0: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7881F8); /* 0x0077BAF6: fmul dword ptr [0x7881f8] */
    _st[0] = (double)*(float*)ADDR(0x82A458) - _st[0]; /* 0x0077BAFC: fsubr dword ptr [0x82a458] */
    fp_push(*(float*)&MEM32(0x786FB4)); /* 0x0077BB02: fld dword ptr [0x786fb4] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077BB08: fmul dword ptr [0x784260] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x0077BB0E: fsubp st(1) */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BB10: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A474) = eax; /* 0x0077BB15: mov dword ptr [0x82a474], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BB1A: ret  */

}

void sub_0077BB20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BB20u);

L_0077BB20:
    fp_push(*(float*)&MEM32(0x786FC4)); /* 0x0077BB20: fld dword ptr [0x786fc4] */
    _st[0] *= (double)*(float*)ADDR(0x788200); /* 0x0077BB26: fmul dword ptr [0x788200] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BB2C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828738) = eax; /* 0x0077BB31: mov dword ptr [0x828738], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BB36: ret  */

}

void sub_0077BB40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BB40u);

L_0077BB40:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BB40: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x788204); /* 0x0077BB46: fmul dword ptr [0x788204] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BB4C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828728) = eax; /* 0x0077BB51: mov dword ptr [0x828728], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BB56: ret  */

}

void sub_0077BB60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BB60u);

L_0077BB60:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BB60: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7D7D3C); /* 0x0077BB66: fmul dword ptr [0x7d7d3c] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BB6C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828758) = eax; /* 0x0077BB71: mov dword ptr [0x828758], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BB76: ret  */

}

void sub_0077BB80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BB80u);

L_0077BB80:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BB80: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7881F8); /* 0x0077BB86: fmul dword ptr [0x7881f8] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BB8C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828748) = eax; /* 0x0077BB91: mov dword ptr [0x828748], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BB96: ret  */

}

void sub_0077BBA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BBA0u);

L_0077BBA0:
    fp_push(*(float*)&MEM32(0x786FC4)); /* 0x0077BBA0: fld dword ptr [0x786fc4] */
    _st[0] *= (double)*(float*)ADDR(0x788208); /* 0x0077BBA6: fmul dword ptr [0x788208] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BBAC: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828754) = eax; /* 0x0077BBB1: mov dword ptr [0x828754], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BBB6: ret  */

}

void sub_0077BBC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BBC0u);

L_0077BBC0:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BBC0: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x78820C); /* 0x0077BBC6: fmul dword ptr [0x78820c] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BBCC: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A470) = eax; /* 0x0077BBD1: mov dword ptr [0x82a470], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BBD6: ret  */

}

void sub_0077BBE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BBE0u);

L_0077BBE0:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BBE0: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7843E8); /* 0x0077BBE6: fmul dword ptr [0x7843e8] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BBEC: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A460) = eax; /* 0x0077BBF1: mov dword ptr [0x82a460], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BBF6: ret  */

}

void sub_0077BC00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BC00u);

L_0077BC00:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BC00: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x788210); /* 0x0077BC06: fmul dword ptr [0x788210] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BC0C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82872C) = eax; /* 0x0077BC11: mov dword ptr [0x82872c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BC16: ret  */

}

void sub_0077BC20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BC20u);

L_0077BC20:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BC20: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7881F8); /* 0x0077BC26: fmul dword ptr [0x7881f8] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BC2C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A46C) = eax; /* 0x0077BC31: mov dword ptr [0x82a46c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BC36: ret  */

}

void sub_0077BC40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BC40u);

L_0077BC40:
    fp_push(*(float*)&MEM32(0x786FC4)); /* 0x0077BC40: fld dword ptr [0x786fc4] */
    _st[0] *= (double)*(float*)ADDR(0x787ADC); /* 0x0077BC46: fmul dword ptr [0x787adc] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BC4C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A45C) = eax; /* 0x0077BC51: mov dword ptr [0x82a45c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BC56: ret  */

}

void sub_0077BC60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BC60u);

L_0077BC60:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BC60: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x7881F4); /* 0x0077BC66: fmul dword ptr [0x7881f4] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BC6C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x8286F8) = eax; /* 0x0077BC71: mov dword ptr [0x8286f8], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BC76: ret  */

}

void sub_0077BC80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BC80u);

L_0077BC80:
    fp_push(*(float*)&MEM32(0x786FC4)); /* 0x0077BC80: fld dword ptr [0x786fc4] */
    _st[0] *= (double)*(float*)ADDR(0x7D7D3C); /* 0x0077BC86: fmul dword ptr [0x7d7d3c] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BC8C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x8286E4) = eax; /* 0x0077BC91: mov dword ptr [0x8286e4], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BC96: ret  */

}

void sub_0077BCA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BCA0u);

L_0077BCA0:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BCA0: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x788214); /* 0x0077BCA6: fmul dword ptr [0x788214] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BCAC: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828740) = eax; /* 0x0077BCB1: mov dword ptr [0x828740], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BCB6: ret  */

}

void sub_0077BCC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BCC0u);

L_0077BCC0:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BCC0: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x788218); /* 0x0077BCC6: fmul dword ptr [0x788218] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BCCC: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828714) = eax; /* 0x0077BCD1: mov dword ptr [0x828714], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BCD6: ret  */

}

void sub_0077BCE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BCE0u);

L_0077BCE0:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BCE0: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x78821C); /* 0x0077BCE6: fmul dword ptr [0x78821c] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BCEC: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828720) = eax; /* 0x0077BCF1: mov dword ptr [0x828720], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BCF6: ret  */

}

void sub_0077BD00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BD00u);

L_0077BD00:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BD00: fld dword ptr [0x786fc0] */
    _st[0] *= (double)*(float*)ADDR(0x788220); /* 0x0077BD06: fmul dword ptr [0x788220] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BD0C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A4D4) = eax; /* 0x0077BD11: mov dword ptr [0x82a4d4], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BD16: ret  */

}

void sub_0077BD20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BD20u);

L_0077BD20:
    fp_push(*(float*)&MEM32(0x786FC0)); /* 0x0077BD20: fld dword ptr [0x786fc0] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BD26: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x8286EC) = eax; /* 0x0077BD2B: mov dword ptr [0x8286ec], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BD30: ret  */

}

void sub_0077BD40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BD40u);

L_0077BD40:
    fp_push(*(float*)&MEM32(0x786FC4)); /* 0x0077BD40: fld dword ptr [0x786fc4] */
    _st[0] *= (double)*(float*)ADDR(0x784D28); /* 0x0077BD46: fmul dword ptr [0x784d28] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BD4C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x82A478) = eax; /* 0x0077BD51: mov dword ptr [0x82a478], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BD56: ret  */

}

void sub_0077BD60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BD60u);

L_0077BD60:
    fp_push(*(float*)&MEM32(0x786FC4)); /* 0x0077BD60: fld dword ptr [0x786fc4] */
    _st[0] *= (double)*(float*)ADDR(0x784D28); /* 0x0077BD66: fmul dword ptr [0x784d28] */
    RECOMP_CALL(sub_0075BED4); /* 0x0077BD6C: call 0x75bed4 */
    RECOMP_FLAGS_IN();
    MEM32(0x828744) = eax; /* 0x0077BD71: mov dword ptr [0x828744], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BD76: ret  */

}

void sub_0077BD80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BD80u);

L_0077BD80:
    ecx = 0x00828770u; /* 0x0077BD80: mov ecx, 0x828770 */
    RECOMP_CALL(sub_00447C40); /* 0x0077BD85: call 0x447c40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781BB0u); /* 0x0077BD8A: push 0x781bb0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077BD8F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077BD94: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BD95: ret  */

}

void sub_0077BDA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BDA0u);

L_0077BDA0:
    fp_push(*(float*)&MEM32(0x78706C)); /* 0x0077BDA0: fld dword ptr [0x78706c] */
    _st[0] += _st[0]; /* 0x0077BDA6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x828768) = _v; } /* 0x0077BDA8: fstp dword ptr [0x828768] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BDAE: ret  */

}

void sub_0077BDB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BDB0u);

L_0077BDB0:
    fp_push(*(float*)&MEM32(0x78706C)); /* 0x0077BDB0: fld dword ptr [0x78706c] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077BDB6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82A448) = _v; } /* 0x0077BDBC: fstp dword ptr [0x82a448] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BDC2: ret  */

}

void sub_0077BDD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BDD0u);

L_0077BDD0:
    fp_push(*(double*)ADDR(0x787070)); /* 0x0077BDD0: fld qword ptr [0x787070] */
    _st[0] += _st[0]; /* 0x0077BDD6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x82A450) = _v; } /* 0x0077BDD8: fstp qword ptr [0x82a450] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BDDE: ret  */

}

void sub_0077BDE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BDE0u);

L_0077BDE0:
    fp_push(*(double*)ADDR(0x787070)); /* 0x0077BDE0: fld qword ptr [0x787070] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077BDE6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x828760) = _v; } /* 0x0077BDEC: fstp qword ptr [0x828760] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BDF2: ret  */

}