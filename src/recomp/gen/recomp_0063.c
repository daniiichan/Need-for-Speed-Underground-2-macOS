/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_00774BE4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774BE4u);

L_00774BE4:
    PUSH32(esp, 0); /* 0x00774BE4: push 0 */
    PUSH32(esp, 0x00796590u); /* 0x00774BE6: push 0x796590 */
    eax = MEM32(ebp + (-0x24)); /* 0x00774BEB: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x00774BEE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774BEF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774BF4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774BF7: ret  */

}

void sub_00774BF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774BF8u);

    goto L_00774BF8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774BF8:
    eax = 0x007E08BCu; /* 0x00774BF8: mov eax, 0x7e08bc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774BFD: jmp 0x75bfd2 */

}

void sub_00774C10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C10u);

L_00774C10:
    PUSH32(esp, 0); /* 0x00774C10: push 0 */
    PUSH32(esp, 0x00796A20u); /* 0x00774C12: push 0x796a20 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774C17: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774C1A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774C1B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774C20: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774C23: ret  */

}

void sub_00774C24(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C24u);

L_00774C24:
    PUSH32(esp, 0); /* 0x00774C24: push 0 */
    PUSH32(esp, 0x00796A08u); /* 0x00774C26: push 0x796a08 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774C2B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774C2E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774C2F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774C34: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774C37: ret  */

}

void sub_00774C38(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C38u);

L_00774C38:
    PUSH32(esp, 0); /* 0x00774C38: push 0 */
    PUSH32(esp, 0x007969F4u); /* 0x00774C3A: push 0x7969f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774C3F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774C42: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774C43: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774C48: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774C4B: ret  */

}

void sub_00774C4C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C4Cu);

L_00774C4C:
    PUSH32(esp, 0); /* 0x00774C4C: push 0 */
    PUSH32(esp, 0x007969DCu); /* 0x00774C4E: push 0x7969dc */
    eax = MEM32(ebp + (-0x10)); /* 0x00774C53: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774C56: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774C57: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774C5C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774C5F: ret  */

}

void sub_00774C60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C60u);

L_00774C60:
    PUSH32(esp, 0); /* 0x00774C60: push 0 */
    PUSH32(esp, 0x007969C4u); /* 0x00774C62: push 0x7969c4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774C67: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774C6A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774C6B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774C70: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774C73: ret  */

}

void sub_00774C74(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C74u);

L_00774C74:
    PUSH32(esp, 0); /* 0x00774C74: push 0 */
    PUSH32(esp, 0x007969B0u); /* 0x00774C76: push 0x7969b0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774C7B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774C7E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774C7F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774C84: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774C87: ret  */

}

void sub_00774C88(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C88u);

L_00774C88:
    PUSH32(esp, 0); /* 0x00774C88: push 0 */
    PUSH32(esp, 0x00796998u); /* 0x00774C8A: push 0x796998 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774C8F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774C92: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774C93: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774C98: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774C9B: ret  */

}

void sub_00774C9C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774C9Cu);

L_00774C9C:
    PUSH32(esp, 0); /* 0x00774C9C: push 0 */
    PUSH32(esp, 0x00796984u); /* 0x00774C9E: push 0x796984 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774CA3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774CA6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774CA7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774CAC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774CAF: ret  */

}

void sub_00774CB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774CB0u);

L_00774CB0:
    PUSH32(esp, 0); /* 0x00774CB0: push 0 */
    PUSH32(esp, 0x00796970u); /* 0x00774CB2: push 0x796970 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774CB7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774CBA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774CBB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774CC0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774CC3: ret  */

}

void sub_00774CC4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774CC4u);

L_00774CC4:
    PUSH32(esp, 0); /* 0x00774CC4: push 0 */
    PUSH32(esp, 0x0079695Cu); /* 0x00774CC6: push 0x79695c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774CCB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774CCE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774CCF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774CD4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774CD7: ret  */

}

void sub_00774CD8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774CD8u);

L_00774CD8:
    PUSH32(esp, 0); /* 0x00774CD8: push 0 */
    PUSH32(esp, 0x0079694Cu); /* 0x00774CDA: push 0x79694c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774CDF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774CE2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774CE3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774CE8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774CEB: ret  */

}

void sub_00774CEC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774CECu);

L_00774CEC:
    PUSH32(esp, 0); /* 0x00774CEC: push 0 */
    PUSH32(esp, 0x0079693Cu); /* 0x00774CEE: push 0x79693c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774CF3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774CF6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774CF7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774CFC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774CFF: ret  */

}

void sub_00774D00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D00u);

L_00774D00:
    PUSH32(esp, 0); /* 0x00774D00: push 0 */
    PUSH32(esp, 0x00796924u); /* 0x00774D02: push 0x796924 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D07: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D0A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D0B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D10: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D13: ret  */

}

void sub_00774D14(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D14u);

L_00774D14:
    PUSH32(esp, 0); /* 0x00774D14: push 0 */
    PUSH32(esp, 0x00796910u); /* 0x00774D16: push 0x796910 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D1B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D1E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D1F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D24: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D27: ret  */

}

void sub_00774D28(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D28u);

L_00774D28:
    PUSH32(esp, 0); /* 0x00774D28: push 0 */
    PUSH32(esp, 0x007968FCu); /* 0x00774D2A: push 0x7968fc */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D2F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D32: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D33: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D38: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D3B: ret  */

}

void sub_00774D3C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D3Cu);

L_00774D3C:
    PUSH32(esp, 0); /* 0x00774D3C: push 0 */
    PUSH32(esp, 0x007968E4u); /* 0x00774D3E: push 0x7968e4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D43: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D46: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D47: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D4C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D4F: ret  */

}

void sub_00774D50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D50u);

L_00774D50:
    PUSH32(esp, 0); /* 0x00774D50: push 0 */
    PUSH32(esp, 0x007968CCu); /* 0x00774D52: push 0x7968cc */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D63: ret  */

}

void sub_00774D64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D64u);

L_00774D64:
    PUSH32(esp, 0); /* 0x00774D64: push 0 */
    PUSH32(esp, 0x007968B8u); /* 0x00774D66: push 0x7968b8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D6B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D6E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D6F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D74: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D77: ret  */

}

void sub_00774D78(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D78u);

L_00774D78:
    PUSH32(esp, 0); /* 0x00774D78: push 0 */
    PUSH32(esp, 0x007968A4u); /* 0x00774D7A: push 0x7968a4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D7F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D82: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D83: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D88: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D8B: ret  */

}

void sub_00774D8C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774D8Cu);

L_00774D8C:
    PUSH32(esp, 0); /* 0x00774D8C: push 0 */
    PUSH32(esp, 0x00796890u); /* 0x00774D8E: push 0x796890 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774D93: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774D96: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774D97: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774D9C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774D9F: ret  */

}

void sub_00774DA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774DA0u);

L_00774DA0:
    PUSH32(esp, 0); /* 0x00774DA0: push 0 */
    PUSH32(esp, 0x00796880u); /* 0x00774DA2: push 0x796880 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774DA7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774DAA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774DAB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774DB0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774DB3: ret  */

}

void sub_00774DB4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774DB4u);

L_00774DB4:
    PUSH32(esp, 0); /* 0x00774DB4: push 0 */
    PUSH32(esp, 0x0079686Cu); /* 0x00774DB6: push 0x79686c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774DBB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774DBE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774DBF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774DC4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774DC7: ret  */

}

void sub_00774DC8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774DC8u);

L_00774DC8:
    PUSH32(esp, 0); /* 0x00774DC8: push 0 */
    PUSH32(esp, 0x0079685Cu); /* 0x00774DCA: push 0x79685c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774DCF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774DD2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774DD3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774DD8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774DDB: ret  */

}

void sub_00774DDC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774DDCu);

L_00774DDC:
    PUSH32(esp, 0); /* 0x00774DDC: push 0 */
    PUSH32(esp, 0x0079684Cu); /* 0x00774DDE: push 0x79684c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774DE3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774DE6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774DE7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774DEC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774DEF: ret  */

}

void sub_00774DF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774DF0u);

L_00774DF0:
    PUSH32(esp, 0); /* 0x00774DF0: push 0 */
    PUSH32(esp, 0x00796838u); /* 0x00774DF2: push 0x796838 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774DF7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774DFA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774DFB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E00: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E03: ret  */

}

void sub_00774E04(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E04u);

L_00774E04:
    PUSH32(esp, 0); /* 0x00774E04: push 0 */
    PUSH32(esp, 0x00796824u); /* 0x00774E06: push 0x796824 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E0B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E0E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E0F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E14: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E17: ret  */

}

void sub_00774E18(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E18u);

L_00774E18:
    PUSH32(esp, 0); /* 0x00774E18: push 0 */
    PUSH32(esp, 0x00796814u); /* 0x00774E1A: push 0x796814 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E1F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E22: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E23: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E28: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E2B: ret  */

}

void sub_00774E2C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E2Cu);

L_00774E2C:
    PUSH32(esp, 0); /* 0x00774E2C: push 0 */
    PUSH32(esp, 0x007967FCu); /* 0x00774E2E: push 0x7967fc */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E33: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E36: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E37: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E3C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E3F: ret  */

}

void sub_00774E40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E40u);

L_00774E40:
    PUSH32(esp, 0); /* 0x00774E40: push 0 */
    PUSH32(esp, 0x007967E8u); /* 0x00774E42: push 0x7967e8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E53: ret  */

}

void sub_00774E54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E54u);

L_00774E54:
    PUSH32(esp, 0); /* 0x00774E54: push 0 */
    PUSH32(esp, 0x007967D4u); /* 0x00774E56: push 0x7967d4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E5B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E5E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E5F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E64: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E67: ret  */

}

void sub_00774E68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E68u);

L_00774E68:
    PUSH32(esp, 0); /* 0x00774E68: push 0 */
    PUSH32(esp, 0x007967C0u); /* 0x00774E6A: push 0x7967c0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E6F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E72: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E73: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E78: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E7B: ret  */

}

void sub_00774E7C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E7Cu);

L_00774E7C:
    PUSH32(esp, 0); /* 0x00774E7C: push 0 */
    PUSH32(esp, 0x007967ACu); /* 0x00774E7E: push 0x7967ac */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E83: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E86: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E87: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774E8C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774E8F: ret  */

}

void sub_00774E90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774E90u);

L_00774E90:
    PUSH32(esp, 0); /* 0x00774E90: push 0 */
    PUSH32(esp, 0x0079679Cu); /* 0x00774E92: push 0x79679c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774E97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774E9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774E9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774EA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774EA3: ret  */

}

void sub_00774EA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774EA4u);

L_00774EA4:
    PUSH32(esp, 0); /* 0x00774EA4: push 0 */
    PUSH32(esp, 0x00796784u); /* 0x00774EA6: push 0x796784 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774EAB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774EAE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774EAF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774EB4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774EB7: ret  */

}

void sub_00774EB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774EB8u);

L_00774EB8:
    PUSH32(esp, 0); /* 0x00774EB8: push 0 */
    PUSH32(esp, 0x00796770u); /* 0x00774EBA: push 0x796770 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774EBF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774EC2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774EC3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774EC8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774ECB: ret  */

}

void sub_00774ECC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774ECCu);

L_00774ECC:
    PUSH32(esp, 0); /* 0x00774ECC: push 0 */
    PUSH32(esp, 0x0079675Cu); /* 0x00774ECE: push 0x79675c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774ED3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774ED6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774ED7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774EDC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774EDF: ret  */

}

void sub_00774EE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774EE0u);

L_00774EE0:
    PUSH32(esp, 0); /* 0x00774EE0: push 0 */
    PUSH32(esp, 0x00796744u); /* 0x00774EE2: push 0x796744 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774EE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774EEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774EEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774EF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774EF3: ret  */

}

void sub_00774EF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774EF4u);

L_00774EF4:
    PUSH32(esp, 0); /* 0x00774EF4: push 0 */
    PUSH32(esp, 0x00796730u); /* 0x00774EF6: push 0x796730 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774EFB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774EFE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774EFF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F04: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F07: ret  */

}

void sub_00774F08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F08u);

L_00774F08:
    PUSH32(esp, 0); /* 0x00774F08: push 0 */
    PUSH32(esp, 0x0079671Cu); /* 0x00774F0A: push 0x79671c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F0F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F12: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F13: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F18: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F1B: ret  */

}

void sub_00774F1C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F1Cu);

L_00774F1C:
    PUSH32(esp, 0); /* 0x00774F1C: push 0 */
    PUSH32(esp, 0x00796700u); /* 0x00774F1E: push 0x796700 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F23: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F26: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F27: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F2C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F2F: ret  */

}

void sub_00774F30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F30u);

L_00774F30:
    PUSH32(esp, 0); /* 0x00774F30: push 0 */
    PUSH32(esp, 0x007966E8u); /* 0x00774F32: push 0x7966e8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F37: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F3A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F3B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F40: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F43: ret  */

}

void sub_00774F44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F44u);

L_00774F44:
    PUSH32(esp, 0); /* 0x00774F44: push 0 */
    PUSH32(esp, 0x007966D0u); /* 0x00774F46: push 0x7966d0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F4B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F4E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F4F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F54: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F57: ret  */

}

void sub_00774F58(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F58u);

L_00774F58:
    PUSH32(esp, 0); /* 0x00774F58: push 0 */
    PUSH32(esp, 0x007966BCu); /* 0x00774F5A: push 0x7966bc */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F5F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F62: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F63: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F68: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F6B: ret  */

}

void sub_00774F6C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F6Cu);

L_00774F6C:
    PUSH32(esp, 0); /* 0x00774F6C: push 0 */
    PUSH32(esp, 0x007966A8u); /* 0x00774F6E: push 0x7966a8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F73: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F76: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F77: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F7C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F7F: ret  */

}

void sub_00774F80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F80u);

L_00774F80:
    PUSH32(esp, 0); /* 0x00774F80: push 0 */
    PUSH32(esp, 0x00796698u); /* 0x00774F82: push 0x796698 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774F90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774F93: ret  */

}

void sub_00774F94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774F94u);

L_00774F94:
    PUSH32(esp, 0); /* 0x00774F94: push 0 */
    PUSH32(esp, 0x00796674u); /* 0x00774F96: push 0x796674 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774F9B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774F9E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774F9F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774FA4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774FA7: ret  */

}

void sub_00774FA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774FA8u);

L_00774FA8:
    PUSH32(esp, 0); /* 0x00774FA8: push 0 */
    PUSH32(esp, 0x00796654u); /* 0x00774FAA: push 0x796654 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774FAF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774FB2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774FB3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774FB8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774FBB: ret  */

}

void sub_00774FBC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774FBCu);

L_00774FBC:
    PUSH32(esp, 0); /* 0x00774FBC: push 0 */
    PUSH32(esp, 0x00796634u); /* 0x00774FBE: push 0x796634 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774FC3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774FC6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774FC7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774FCC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774FCF: ret  */

}

void sub_00774FD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774FD0u);

L_00774FD0:
    PUSH32(esp, 0); /* 0x00774FD0: push 0 */
    PUSH32(esp, 0x00796614u); /* 0x00774FD2: push 0x796614 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774FD7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774FDA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774FDB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774FE0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774FE3: ret  */

}

void sub_00774FE4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774FE4u);

L_00774FE4:
    PUSH32(esp, 0); /* 0x00774FE4: push 0 */
    PUSH32(esp, 0x007965F8u); /* 0x00774FE6: push 0x7965f8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774FEB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774FEE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774FEF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774FF4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774FF7: ret  */

}

void sub_00774FF8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774FF8u);

L_00774FF8:
    PUSH32(esp, 0); /* 0x00774FF8: push 0 */
    PUSH32(esp, 0x007965DCu); /* 0x00774FFA: push 0x7965dc */
    eax = MEM32(ebp + (-0x10)); /* 0x00774FFF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775002: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775003: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775008: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077500B: ret  */

}

void sub_0077500C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077500Cu);

L_0077500C:
    PUSH32(esp, 0); /* 0x0077500C: push 0 */
    PUSH32(esp, 0x007965C8u); /* 0x0077500E: push 0x7965c8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775013: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775016: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775017: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077501C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077501F: ret  */

}

void sub_00775020(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775020u);

L_00775020:
    PUSH32(esp, 0); /* 0x00775020: push 0 */
    PUSH32(esp, 0x007965B4u); /* 0x00775022: push 0x7965b4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775027: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077502A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077502B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775030: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775033: ret  */

}

void sub_00775034(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775034u);

L_00775034:
    PUSH32(esp, 0); /* 0x00775034: push 0 */
    PUSH32(esp, 0x007965A4u); /* 0x00775036: push 0x7965a4 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077503B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077503E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077503F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775044: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775047: ret  */

}

void sub_00775048(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775048u);

    goto L_00775048;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775048:
    eax = 0x007E0A88u; /* 0x00775048: mov eax, 0x7e0a88 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077504D: jmp 0x75bfd2 */

}

void sub_00775060(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775060u);

L_00775060:
    PUSH32(esp, 0); /* 0x00775060: push 0 */
    PUSH32(esp, 0x00796FD4u); /* 0x00775062: push 0x796fd4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775067: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077506A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077506B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775070: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775073: ret  */

}

void sub_00775074(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775074u);

L_00775074:
    PUSH32(esp, 0); /* 0x00775074: push 0 */
    PUSH32(esp, 0x00796FB8u); /* 0x00775076: push 0x796fb8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077507B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077507E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077507F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775084: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775087: ret  */

}

void sub_00775088(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775088u);

L_00775088:
    PUSH32(esp, 0); /* 0x00775088: push 0 */
    PUSH32(esp, 0x00796F9Cu); /* 0x0077508A: push 0x796f9c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077508F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775092: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775093: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775098: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077509B: ret  */

}

void sub_0077509C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077509Cu);

L_0077509C:
    PUSH32(esp, 0); /* 0x0077509C: push 0 */
    PUSH32(esp, 0x00796F7Cu); /* 0x0077509E: push 0x796f7c */
    eax = MEM32(ebp + (-0x10)); /* 0x007750A3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007750A6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007750A7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007750AC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007750AF: ret  */

}

void sub_007750B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007750B0u);

L_007750B0:
    PUSH32(esp, 0); /* 0x007750B0: push 0 */
    PUSH32(esp, 0x00796F60u); /* 0x007750B2: push 0x796f60 */
    eax = MEM32(ebp + (-0x10)); /* 0x007750B7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007750BA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007750BB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007750C0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007750C3: ret  */

}

void sub_007750C4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007750C4u);

L_007750C4:
    PUSH32(esp, 0); /* 0x007750C4: push 0 */
    PUSH32(esp, 0x00796F44u); /* 0x007750C6: push 0x796f44 */
    eax = MEM32(ebp + (-0x10)); /* 0x007750CB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007750CE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007750CF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007750D4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007750D7: ret  */

}

void sub_007750D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007750D8u);

L_007750D8:
    PUSH32(esp, 0); /* 0x007750D8: push 0 */
    PUSH32(esp, 0x00796F28u); /* 0x007750DA: push 0x796f28 */
    eax = MEM32(ebp + (-0x10)); /* 0x007750DF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007750E2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007750E3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007750E8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007750EB: ret  */

}

void sub_007750EC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007750ECu);

L_007750EC:
    PUSH32(esp, 0); /* 0x007750EC: push 0 */
    PUSH32(esp, 0x00796F0Cu); /* 0x007750EE: push 0x796f0c */
    eax = MEM32(ebp + (-0x10)); /* 0x007750F3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007750F6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007750F7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007750FC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007750FF: ret  */

}

void sub_00775100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775100u);

L_00775100:
    PUSH32(esp, 0); /* 0x00775100: push 0 */
    PUSH32(esp, 0x00796EF4u); /* 0x00775102: push 0x796ef4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775107: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077510A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077510B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775110: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775113: ret  */

}

void sub_00775114(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775114u);

L_00775114:
    PUSH32(esp, 0); /* 0x00775114: push 0 */
    PUSH32(esp, 0x00796EDCu); /* 0x00775116: push 0x796edc */
    eax = MEM32(ebp + (-0x10)); /* 0x0077511B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077511E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077511F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775124: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775127: ret  */

}

void sub_00775128(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775128u);

L_00775128:
    PUSH32(esp, 0); /* 0x00775128: push 0 */
    PUSH32(esp, 0x00796EC4u); /* 0x0077512A: push 0x796ec4 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077512F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775132: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775133: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775138: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077513B: ret  */

}

void sub_0077513C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077513Cu);

L_0077513C:
    PUSH32(esp, 0); /* 0x0077513C: push 0 */
    PUSH32(esp, 0x00796EB0u); /* 0x0077513E: push 0x796eb0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775143: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775146: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775147: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077514C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077514F: ret  */

}

void sub_00775150(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775150u);

L_00775150:
    PUSH32(esp, 0); /* 0x00775150: push 0 */
    PUSH32(esp, 0x00796E94u); /* 0x00775152: push 0x796e94 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775157: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077515A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077515B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775160: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775163: ret  */

}

void sub_00775164(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775164u);

L_00775164:
    PUSH32(esp, 0); /* 0x00775164: push 0 */
    PUSH32(esp, 0x00796E78u); /* 0x00775166: push 0x796e78 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077516B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077516E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077516F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775174: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775177: ret  */

}

void sub_00775178(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775178u);

L_00775178:
    PUSH32(esp, 0); /* 0x00775178: push 0 */
    PUSH32(esp, 0x00796E60u); /* 0x0077517A: push 0x796e60 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077517F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775182: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775183: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775188: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077518B: ret  */

}

void sub_0077518C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077518Cu);

L_0077518C:
    PUSH32(esp, 0); /* 0x0077518C: push 0 */
    PUSH32(esp, 0x00796E40u); /* 0x0077518E: push 0x796e40 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775193: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775196: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775197: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077519C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077519F: ret  */

}

void sub_007751A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007751A0u);

L_007751A0:
    PUSH32(esp, 0); /* 0x007751A0: push 0 */
    PUSH32(esp, 0x00796E24u); /* 0x007751A2: push 0x796e24 */
    eax = MEM32(ebp + (-0x10)); /* 0x007751A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007751AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007751AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007751B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007751B3: ret  */

}

void sub_007751B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007751B4u);

L_007751B4:
    PUSH32(esp, 0); /* 0x007751B4: push 0 */
    PUSH32(esp, 0x00796E08u); /* 0x007751B6: push 0x796e08 */
    eax = MEM32(ebp + (-0x10)); /* 0x007751BB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007751BE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007751BF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007751C4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007751C7: ret  */

}

void sub_007751C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007751C8u);

L_007751C8:
    PUSH32(esp, 0); /* 0x007751C8: push 0 */
    PUSH32(esp, 0x00796DECu); /* 0x007751CA: push 0x796dec */
    eax = MEM32(ebp + (-0x10)); /* 0x007751CF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007751D2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007751D3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007751D8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007751DB: ret  */

}

void sub_007751DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007751DCu);

L_007751DC:
    PUSH32(esp, 0); /* 0x007751DC: push 0 */
    PUSH32(esp, 0x00796DD4u); /* 0x007751DE: push 0x796dd4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007751E3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007751E6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007751E7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007751EC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007751EF: ret  */

}

void sub_007751F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007751F0u);

L_007751F0:
    PUSH32(esp, 0); /* 0x007751F0: push 0 */
    PUSH32(esp, 0x00796DBCu); /* 0x007751F2: push 0x796dbc */
    eax = MEM32(ebp + (-0x10)); /* 0x007751F7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007751FA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007751FB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775200: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775203: ret  */

}

void sub_00775204(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775204u);

L_00775204:
    PUSH32(esp, 0); /* 0x00775204: push 0 */
    PUSH32(esp, 0x00796DA4u); /* 0x00775206: push 0x796da4 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077520B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077520E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077520F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775214: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775217: ret  */

}

void sub_00775218(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775218u);

L_00775218:
    PUSH32(esp, 0); /* 0x00775218: push 0 */
    PUSH32(esp, 0x00796D8Cu); /* 0x0077521A: push 0x796d8c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077521F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775222: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775223: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775228: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077522B: ret  */

}

void sub_0077522C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077522Cu);

L_0077522C:
    PUSH32(esp, 0); /* 0x0077522C: push 0 */
    PUSH32(esp, 0x00796D78u); /* 0x0077522E: push 0x796d78 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775233: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775236: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775237: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077523C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077523F: ret  */

}

void sub_00775240(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775240u);

L_00775240:
    PUSH32(esp, 0); /* 0x00775240: push 0 */
    PUSH32(esp, 0x00796D5Cu); /* 0x00775242: push 0x796d5c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775247: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077524A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077524B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775250: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775253: ret  */

}

void sub_00775254(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775254u);

L_00775254:
    PUSH32(esp, 0); /* 0x00775254: push 0 */
    PUSH32(esp, 0x00796D44u); /* 0x00775256: push 0x796d44 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077525B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077525E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077525F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775264: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775267: ret  */

}

void sub_00775268(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775268u);

L_00775268:
    PUSH32(esp, 0); /* 0x00775268: push 0 */
    PUSH32(esp, 0x00796D2Cu); /* 0x0077526A: push 0x796d2c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077526F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775272: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775273: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775278: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077527B: ret  */

}

void sub_0077527C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077527Cu);

L_0077527C:
    PUSH32(esp, 0); /* 0x0077527C: push 0 */
    PUSH32(esp, 0x00796D10u); /* 0x0077527E: push 0x796d10 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775283: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775286: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775287: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077528C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077528F: ret  */

}

void sub_00775290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775290u);

L_00775290:
    PUSH32(esp, 0); /* 0x00775290: push 0 */
    PUSH32(esp, 0x00796CF4u); /* 0x00775292: push 0x796cf4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775297: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077529A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077529B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007752A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007752A3: ret  */

}

void sub_007752A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007752A4u);

L_007752A4:
    PUSH32(esp, 0); /* 0x007752A4: push 0 */
    PUSH32(esp, 0x00796CDCu); /* 0x007752A6: push 0x796cdc */
    eax = MEM32(ebp + (-0x10)); /* 0x007752AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007752AE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007752AF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007752B4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007752B7: ret  */

}

void sub_007752B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007752B8u);

L_007752B8:
    PUSH32(esp, 0); /* 0x007752B8: push 0 */
    PUSH32(esp, 0x00796CC0u); /* 0x007752BA: push 0x796cc0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007752BF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007752C2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007752C3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007752C8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007752CB: ret  */

}

void sub_007752CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007752CCu);

L_007752CC:
    PUSH32(esp, 0); /* 0x007752CC: push 0 */
    PUSH32(esp, 0x00796CA8u); /* 0x007752CE: push 0x796ca8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007752D3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007752D6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007752D7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007752DC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007752DF: ret  */

}

void sub_007752E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007752E0u);

L_007752E0:
    PUSH32(esp, 0); /* 0x007752E0: push 0 */
    PUSH32(esp, 0x00796C90u); /* 0x007752E2: push 0x796c90 */
    eax = MEM32(ebp + (-0x10)); /* 0x007752E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007752EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007752EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007752F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007752F3: ret  */

}

void sub_007752F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007752F4u);

L_007752F4:
    PUSH32(esp, 0); /* 0x007752F4: push 0 */
    PUSH32(esp, 0x00796C74u); /* 0x007752F6: push 0x796c74 */
    eax = MEM32(ebp + (-0x10)); /* 0x007752FB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007752FE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007752FF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775304: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775307: ret  */

}

void sub_00775308(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775308u);

L_00775308:
    PUSH32(esp, 0); /* 0x00775308: push 0 */
    PUSH32(esp, 0x00796C58u); /* 0x0077530A: push 0x796c58 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077530F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775312: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775313: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775318: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077531B: ret  */

}

void sub_0077531C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077531Cu);

L_0077531C:
    PUSH32(esp, 0); /* 0x0077531C: push 0 */
    PUSH32(esp, 0x00796C40u); /* 0x0077531E: push 0x796c40 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775323: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775326: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775327: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077532C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077532F: ret  */

}

void sub_00775330(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775330u);

L_00775330:
    PUSH32(esp, 0); /* 0x00775330: push 0 */
    PUSH32(esp, 0x00796C24u); /* 0x00775332: push 0x796c24 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775337: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077533A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077533B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775340: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775343: ret  */

}

void sub_00775344(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775344u);

L_00775344:
    PUSH32(esp, 0); /* 0x00775344: push 0 */
    PUSH32(esp, 0x00796C08u); /* 0x00775346: push 0x796c08 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077534B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077534E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077534F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775354: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775357: ret  */

}

void sub_00775358(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775358u);

L_00775358:
    PUSH32(esp, 0); /* 0x00775358: push 0 */
    PUSH32(esp, 0x00796BF0u); /* 0x0077535A: push 0x796bf0 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077535F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775362: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775363: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775368: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077536B: ret  */

}

void sub_0077536C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077536Cu);

L_0077536C:
    PUSH32(esp, 0); /* 0x0077536C: push 0 */
    PUSH32(esp, 0x00796BD0u); /* 0x0077536E: push 0x796bd0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775373: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775376: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775377: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077537C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077537F: ret  */

}

void sub_00775380(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775380u);

L_00775380:
    PUSH32(esp, 0); /* 0x00775380: push 0 */
    PUSH32(esp, 0x00796BB0u); /* 0x00775382: push 0x796bb0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775387: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077538A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077538B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775390: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775393: ret  */

}

void sub_00775394(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775394u);

L_00775394:
    PUSH32(esp, 0); /* 0x00775394: push 0 */
    PUSH32(esp, 0x00796B94u); /* 0x00775396: push 0x796b94 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077539B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077539E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077539F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007753A4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007753A7: ret  */

}

void sub_007753A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007753A8u);

L_007753A8:
    PUSH32(esp, 0); /* 0x007753A8: push 0 */
    PUSH32(esp, 0x00796B78u); /* 0x007753AA: push 0x796b78 */
    eax = MEM32(ebp + (-0x10)); /* 0x007753AF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007753B2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007753B3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007753B8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007753BB: ret  */

}

void sub_007753BC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007753BCu);

L_007753BC:
    PUSH32(esp, 0); /* 0x007753BC: push 0 */
    PUSH32(esp, 0x00796B60u); /* 0x007753BE: push 0x796b60 */
    eax = MEM32(ebp + (-0x10)); /* 0x007753C3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007753C6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007753C7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007753CC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007753CF: ret  */

}

void sub_007753D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007753D0u);

L_007753D0:
    PUSH32(esp, 0); /* 0x007753D0: push 0 */
    PUSH32(esp, 0x00796698u); /* 0x007753D2: push 0x796698 */
    eax = MEM32(ebp + (-0x10)); /* 0x007753D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007753DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007753DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007753E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007753E3: ret  */

}

void sub_007753E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007753E4u);

L_007753E4:
    PUSH32(esp, 0); /* 0x007753E4: push 0 */
    PUSH32(esp, 0x00796B38u); /* 0x007753E6: push 0x796b38 */
    eax = MEM32(ebp + (-0x10)); /* 0x007753EB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007753EE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007753EF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007753F4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007753F7: ret  */

}

void sub_007753F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007753F8u);

L_007753F8:
    PUSH32(esp, 0); /* 0x007753F8: push 0 */
    PUSH32(esp, 0x00796B10u); /* 0x007753FA: push 0x796b10 */
    eax = MEM32(ebp + (-0x10)); /* 0x007753FF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775402: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775403: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775408: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077540B: ret  */

}

void sub_0077540C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077540Cu);

L_0077540C:
    PUSH32(esp, 0); /* 0x0077540C: push 0 */
    PUSH32(esp, 0x00796AECu); /* 0x0077540E: push 0x796aec */
    eax = MEM32(ebp + (-0x10)); /* 0x00775413: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775416: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775417: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077541C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077541F: ret  */

}

void sub_00775420(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775420u);

L_00775420:
    PUSH32(esp, 0); /* 0x00775420: push 0 */
    PUSH32(esp, 0x00796AC8u); /* 0x00775422: push 0x796ac8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775427: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077542A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077542B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775430: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775433: ret  */

}

void sub_00775434(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775434u);

L_00775434:
    PUSH32(esp, 0); /* 0x00775434: push 0 */
    PUSH32(esp, 0x00796AA4u); /* 0x00775436: push 0x796aa4 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077543B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077543E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077543F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775444: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775447: ret  */

}

void sub_00775448(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775448u);

L_00775448:
    PUSH32(esp, 0); /* 0x00775448: push 0 */
    PUSH32(esp, 0x00796A84u); /* 0x0077544A: push 0x796a84 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077544F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775452: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775453: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775458: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077545B: ret  */

}

void sub_0077545C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077545Cu);

L_0077545C:
    PUSH32(esp, 0); /* 0x0077545C: push 0 */
    PUSH32(esp, 0x00796A68u); /* 0x0077545E: push 0x796a68 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775463: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775466: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775467: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077546C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077546F: ret  */

}

void sub_00775470(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775470u);

L_00775470:
    PUSH32(esp, 0); /* 0x00775470: push 0 */
    PUSH32(esp, 0x00796A50u); /* 0x00775472: push 0x796a50 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775477: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077547A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077547B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775480: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775483: ret  */

}

void sub_00775484(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775484u);

L_00775484:
    PUSH32(esp, 0); /* 0x00775484: push 0 */
    PUSH32(esp, 0x00796A38u); /* 0x00775486: push 0x796a38 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077548B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077548E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077548F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775494: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775497: ret  */

}

void sub_00775498(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775498u);

    goto L_00775498;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775498:
    eax = 0x007E0C54u; /* 0x00775498: mov eax, 0x7e0c54 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077549D: jmp 0x75bfd2 */

}

void sub_007754B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007754B0u);

L_007754B0:
    PUSH32(esp, 0); /* 0x007754B0: push 0 */
    PUSH32(esp, 0x007974B8u); /* 0x007754B2: push 0x7974b8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007754B7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007754BA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007754BB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007754C0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007754C3: ret  */

}

void sub_007754C4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007754C4u);

L_007754C4:
    PUSH32(esp, 0); /* 0x007754C4: push 0 */
    PUSH32(esp, 0x0079749Cu); /* 0x007754C6: push 0x79749c */
    eax = MEM32(ebp + (-0x10)); /* 0x007754CB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007754CE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007754CF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007754D4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007754D7: ret  */

}

void sub_007754D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007754D8u);

L_007754D8:
    PUSH32(esp, 0); /* 0x007754D8: push 0 */
    PUSH32(esp, 0x00797484u); /* 0x007754DA: push 0x797484 */
    eax = MEM32(ebp + (-0x10)); /* 0x007754DF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007754E2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007754E3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007754E8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007754EB: ret  */

}

void sub_007754EC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007754ECu);

L_007754EC:
    PUSH32(esp, 0); /* 0x007754EC: push 0 */
    PUSH32(esp, 0x0079746Cu); /* 0x007754EE: push 0x79746c */
    eax = MEM32(ebp + (-0x10)); /* 0x007754F3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007754F6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007754F7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007754FC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007754FF: ret  */

}

void sub_00775500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775500u);

L_00775500:
    PUSH32(esp, 0); /* 0x00775500: push 0 */
    PUSH32(esp, 0x00797454u); /* 0x00775502: push 0x797454 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775507: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077550A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077550B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775510: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775513: ret  */

}

void sub_00775514(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775514u);

L_00775514:
    PUSH32(esp, 0); /* 0x00775514: push 0 */
    PUSH32(esp, 0x00797440u); /* 0x00775516: push 0x797440 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077551B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077551E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077551F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775524: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775527: ret  */

}

void sub_00775528(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775528u);

L_00775528:
    PUSH32(esp, 0); /* 0x00775528: push 0 */
    PUSH32(esp, 0x00797424u); /* 0x0077552A: push 0x797424 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077552F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775532: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775533: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775538: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077553B: ret  */

}

void sub_0077553C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077553Cu);

L_0077553C:
    PUSH32(esp, 0); /* 0x0077553C: push 0 */
    PUSH32(esp, 0x0079740Cu); /* 0x0077553E: push 0x79740c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775543: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775546: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775547: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077554C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077554F: ret  */

}

void sub_00775550(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775550u);

L_00775550:
    PUSH32(esp, 0); /* 0x00775550: push 0 */
    PUSH32(esp, 0x007973F4u); /* 0x00775552: push 0x7973f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775557: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077555A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077555B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775560: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775563: ret  */

}

void sub_00775564(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775564u);

L_00775564:
    PUSH32(esp, 0); /* 0x00775564: push 0 */
    PUSH32(esp, 0x007973D8u); /* 0x00775566: push 0x7973d8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077556B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077556E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077556F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775574: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775577: ret  */

}

void sub_00775578(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775578u);

L_00775578:
    PUSH32(esp, 0); /* 0x00775578: push 0 */
    PUSH32(esp, 0x007973BCu); /* 0x0077557A: push 0x7973bc */
    eax = MEM32(ebp + (-0x10)); /* 0x0077557F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775582: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775583: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775588: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077558B: ret  */

}

void sub_0077558C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077558Cu);

L_0077558C:
    PUSH32(esp, 0); /* 0x0077558C: push 0 */
    PUSH32(esp, 0x007973A4u); /* 0x0077558E: push 0x7973a4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775593: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775596: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775597: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077559C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077559F: ret  */

}

void sub_007755A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007755A0u);

L_007755A0:
    PUSH32(esp, 0); /* 0x007755A0: push 0 */
    PUSH32(esp, 0x00797388u); /* 0x007755A2: push 0x797388 */
    eax = MEM32(ebp + (-0x10)); /* 0x007755A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007755AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007755AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007755B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007755B3: ret  */

}

void sub_007755B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007755B4u);

L_007755B4:
    PUSH32(esp, 0); /* 0x007755B4: push 0 */
    PUSH32(esp, 0x00797370u); /* 0x007755B6: push 0x797370 */
    eax = MEM32(ebp + (-0x10)); /* 0x007755BB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007755BE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007755BF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007755C4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007755C7: ret  */

}

void sub_007755C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007755C8u);

L_007755C8:
    PUSH32(esp, 0); /* 0x007755C8: push 0 */
    PUSH32(esp, 0x00797358u); /* 0x007755CA: push 0x797358 */
    eax = MEM32(ebp + (-0x10)); /* 0x007755CF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007755D2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007755D3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007755D8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007755DB: ret  */

}

void sub_007755DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007755DCu);

L_007755DC:
    PUSH32(esp, 0); /* 0x007755DC: push 0 */
    PUSH32(esp, 0x00797340u); /* 0x007755DE: push 0x797340 */
    eax = MEM32(ebp + (-0x10)); /* 0x007755E3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007755E6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007755E7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007755EC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007755EF: ret  */

}

void sub_007755F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007755F0u);

L_007755F0:
    PUSH32(esp, 0); /* 0x007755F0: push 0 */
    PUSH32(esp, 0x0079732Cu); /* 0x007755F2: push 0x79732c */
    eax = MEM32(ebp + (-0x10)); /* 0x007755F7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007755FA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007755FB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775600: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775603: ret  */

}

void sub_00775604(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775604u);

L_00775604:
    PUSH32(esp, 0); /* 0x00775604: push 0 */
    PUSH32(esp, 0x00797318u); /* 0x00775606: push 0x797318 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077560B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077560E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077560F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775614: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775617: ret  */

}

void sub_00775618(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775618u);

L_00775618:
    PUSH32(esp, 0); /* 0x00775618: push 0 */
    PUSH32(esp, 0x007972FCu); /* 0x0077561A: push 0x7972fc */
    eax = MEM32(ebp + (-0x10)); /* 0x0077561F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775622: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775623: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775628: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077562B: ret  */

}

void sub_0077562C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077562Cu);

L_0077562C:
    PUSH32(esp, 0); /* 0x0077562C: push 0 */
    PUSH32(esp, 0x007972E4u); /* 0x0077562E: push 0x7972e4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775633: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775636: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775637: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077563C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077563F: ret  */

}

void sub_00775640(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775640u);

L_00775640:
    PUSH32(esp, 0); /* 0x00775640: push 0 */
    PUSH32(esp, 0x007972CCu); /* 0x00775642: push 0x7972cc */
    eax = MEM32(ebp + (-0x10)); /* 0x00775647: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077564A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077564B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775650: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775653: ret  */

}

void sub_00775654(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775654u);

L_00775654:
    PUSH32(esp, 0); /* 0x00775654: push 0 */
    PUSH32(esp, 0x007972B0u); /* 0x00775656: push 0x7972b0 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077565B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077565E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077565F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775664: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775667: ret  */

}

void sub_00775668(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775668u);

L_00775668:
    PUSH32(esp, 0); /* 0x00775668: push 0 */
    PUSH32(esp, 0x00797294u); /* 0x0077566A: push 0x797294 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077566F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775672: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775673: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775678: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077567B: ret  */

}

void sub_0077567C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077567Cu);

L_0077567C:
    PUSH32(esp, 0); /* 0x0077567C: push 0 */
    PUSH32(esp, 0x0079727Cu); /* 0x0077567E: push 0x79727c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775683: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775686: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775687: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077568C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077568F: ret  */

}

void sub_00775690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775690u);

L_00775690:
    PUSH32(esp, 0); /* 0x00775690: push 0 */
    PUSH32(esp, 0x00797260u); /* 0x00775692: push 0x797260 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775697: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077569A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077569B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007756A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007756A3: ret  */

}

void sub_007756A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007756A4u);

L_007756A4:
    PUSH32(esp, 0); /* 0x007756A4: push 0 */
    PUSH32(esp, 0x00797248u); /* 0x007756A6: push 0x797248 */
    eax = MEM32(ebp + (-0x10)); /* 0x007756AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007756AE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007756AF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007756B4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007756B7: ret  */

}

void sub_007756B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007756B8u);

L_007756B8:
    PUSH32(esp, 0); /* 0x007756B8: push 0 */
    PUSH32(esp, 0x00797230u); /* 0x007756BA: push 0x797230 */
    eax = MEM32(ebp + (-0x10)); /* 0x007756BF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007756C2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007756C3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007756C8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007756CB: ret  */

}

void sub_007756CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007756CCu);

L_007756CC:
    PUSH32(esp, 0); /* 0x007756CC: push 0 */
    PUSH32(esp, 0x00797214u); /* 0x007756CE: push 0x797214 */
    eax = MEM32(ebp + (-0x10)); /* 0x007756D3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007756D6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007756D7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007756DC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007756DF: ret  */

}

void sub_007756E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007756E0u);

L_007756E0:
    PUSH32(esp, 0); /* 0x007756E0: push 0 */
    PUSH32(esp, 0x007971F8u); /* 0x007756E2: push 0x7971f8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007756E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007756EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007756EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007756F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007756F3: ret  */

}

void sub_007756F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007756F4u);

L_007756F4:
    PUSH32(esp, 0); /* 0x007756F4: push 0 */
    PUSH32(esp, 0x007971E0u); /* 0x007756F6: push 0x7971e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007756FB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007756FE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007756FF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775704: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775707: ret  */

}

void sub_00775708(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775708u);

L_00775708:
    PUSH32(esp, 0); /* 0x00775708: push 0 */
    PUSH32(esp, 0x007971C4u); /* 0x0077570A: push 0x7971c4 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077570F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775712: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775713: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775718: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077571B: ret  */

}

void sub_0077571C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077571Cu);

L_0077571C:
    PUSH32(esp, 0); /* 0x0077571C: push 0 */
    PUSH32(esp, 0x007971ACu); /* 0x0077571E: push 0x7971ac */
    eax = MEM32(ebp + (-0x10)); /* 0x00775723: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775726: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775727: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077572C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077572F: ret  */

}

void sub_00775730(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775730u);

L_00775730:
    PUSH32(esp, 0); /* 0x00775730: push 0 */
    PUSH32(esp, 0x00797194u); /* 0x00775732: push 0x797194 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775737: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077573A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077573B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775740: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775743: ret  */

}

void sub_00775744(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775744u);

L_00775744:
    PUSH32(esp, 0); /* 0x00775744: push 0 */
    PUSH32(esp, 0x00797174u); /* 0x00775746: push 0x797174 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077574B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077574E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077574F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775754: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775757: ret  */

}

void sub_00775758(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775758u);

L_00775758:
    PUSH32(esp, 0); /* 0x00775758: push 0 */
    PUSH32(esp, 0x00797158u); /* 0x0077575A: push 0x797158 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077575F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775762: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775763: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775768: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077576B: ret  */

}

void sub_0077576C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077576Cu);

L_0077576C:
    PUSH32(esp, 0); /* 0x0077576C: push 0 */
    PUSH32(esp, 0x0079713Cu); /* 0x0077576E: push 0x79713c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775773: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775776: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775777: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077577C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077577F: ret  */

}

void sub_00775780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775780u);

L_00775780:
    PUSH32(esp, 0); /* 0x00775780: push 0 */
    PUSH32(esp, 0x00797124u); /* 0x00775782: push 0x797124 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775787: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077578A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077578B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775790: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775793: ret  */

}

void sub_00775794(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775794u);

L_00775794:
    PUSH32(esp, 0); /* 0x00775794: push 0 */
    PUSH32(esp, 0x0079710Cu); /* 0x00775796: push 0x79710c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077579B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077579E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077579F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007757A4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007757A7: ret  */

}

void sub_007757A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007757A8u);

L_007757A8:
    PUSH32(esp, 0); /* 0x007757A8: push 0 */
    PUSH32(esp, 0x00796698u); /* 0x007757AA: push 0x796698 */
    eax = MEM32(ebp + (-0x10)); /* 0x007757AF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007757B2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007757B3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007757B8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007757BB: ret  */

}

void sub_007757BC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007757BCu);

L_007757BC:
    PUSH32(esp, 0); /* 0x007757BC: push 0 */
    PUSH32(esp, 0x007970E4u); /* 0x007757BE: push 0x7970e4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007757C3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007757C6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007757C7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007757CC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007757CF: ret  */

}

void sub_007757D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007757D0u);

L_007757D0:
    PUSH32(esp, 0); /* 0x007757D0: push 0 */
    PUSH32(esp, 0x007970C0u); /* 0x007757D2: push 0x7970c0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007757D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007757DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007757DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007757E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007757E3: ret  */

}

void sub_007757E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007757E4u);

L_007757E4:
    PUSH32(esp, 0); /* 0x007757E4: push 0 */
    PUSH32(esp, 0x0079709Cu); /* 0x007757E6: push 0x79709c */
    eax = MEM32(ebp + (-0x10)); /* 0x007757EB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007757EE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007757EF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007757F4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007757F7: ret  */

}

void sub_007757F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007757F8u);

L_007757F8:
    PUSH32(esp, 0); /* 0x007757F8: push 0 */
    PUSH32(esp, 0x00797078u); /* 0x007757FA: push 0x797078 */
    eax = MEM32(ebp + (-0x10)); /* 0x007757FF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775802: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775803: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775808: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077580B: ret  */

}

void sub_0077580C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077580Cu);

L_0077580C:
    PUSH32(esp, 0); /* 0x0077580C: push 0 */
    PUSH32(esp, 0x00797058u); /* 0x0077580E: push 0x797058 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775813: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775816: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775817: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077581C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077581F: ret  */

}

void sub_00775820(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775820u);

L_00775820:
    PUSH32(esp, 0); /* 0x00775820: push 0 */
    PUSH32(esp, 0x00797038u); /* 0x00775822: push 0x797038 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775827: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077582A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077582B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775830: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775833: ret  */

}

void sub_00775834(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775834u);

L_00775834:
    PUSH32(esp, 0); /* 0x00775834: push 0 */
    PUSH32(esp, 0x00797020u); /* 0x00775836: push 0x797020 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077583B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077583E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077583F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775844: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775847: ret  */

}

void sub_00775848(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775848u);

L_00775848:
    PUSH32(esp, 0); /* 0x00775848: push 0 */
    PUSH32(esp, 0x00797008u); /* 0x0077584A: push 0x797008 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077584F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775852: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775853: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775858: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077585B: ret  */

}

void sub_0077585C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077585Cu);

L_0077585C:
    PUSH32(esp, 0); /* 0x0077585C: push 0 */
    PUSH32(esp, 0x00796FF4u); /* 0x0077585E: push 0x796ff4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775863: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775866: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775867: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077586C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077586F: ret  */

}

void sub_00775870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775870u);

    goto L_00775870;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775870:
    eax = 0x007E0DF0u; /* 0x00775870: mov eax, 0x7e0df0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775875: jmp 0x75bfd2 */

}

void sub_00775880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775880u);

L_00775880:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775880: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00775883: jmp 0x510d40 */

}

void sub_00775888(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775888u);

L_00775888:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775888: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077588B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077588E: jmp 0x4def30 */

}

void sub_00775893(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775893u);

L_00775893:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775893: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x00775896: add ecx, 0x5c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x00775899: jmp 0x52ea90 */

}

void sub_0077589E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077589Eu);

    goto L_0077589E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077589E:
    eax = 0x007E0E24u; /* 0x0077589E: mov eax, 0x7e0e24 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007758A3: jmp 0x75bfd2 */

}

void sub_007758B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007758B0u);

L_007758B0:
    ecx = MEM32(ebp + (-0x904)); /* 0x007758B0: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x007758B6: jmp 0x4defb0 */

}

void sub_007758BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007758BBu);

L_007758BB:
    ecx = ebp + (-0x8F0); /* 0x007758BB: lea ecx, [ebp - 0x8f0] */
    RECOMP_ITAIL(0x004017F0u); RECOMP_RETURN(); /* 0x007758C1: jmp 0x4017f0 */

}

void sub_007758C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007758C6u);

L_007758C6:
    ecx = ebp + (-0x900); /* 0x007758C6: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x007758CC: jmp 0x401800 */

}

void sub_007758D1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007758D1u);

    goto L_007758D1;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007758D1:
    eax = 0x007E0E58u; /* 0x007758D1: mov eax, 0x7e0e58 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007758D6: jmp 0x75bfd2 */

}

void sub_007758E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007758E0u);

L_007758E0:
    ecx = MEM32(ebp + (-0x904)); /* 0x007758E0: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x007758E6: jmp 0x4defb0 */

}

void sub_007758EB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007758EBu);

L_007758EB:
    ecx = MEM32(ebp + (-0x904)); /* 0x007758EB: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x150u; /* 0x007758F1: add ecx, 0x150 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0050DB70u); RECOMP_RETURN(); /* 0x007758F7: jmp 0x50db70 */

}

void sub_007758FC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007758FCu);

L_007758FC:
    ecx = ebp + (-0x8F0); /* 0x007758FC: lea ecx, [ebp - 0x8f0] */
    RECOMP_ITAIL(0x004017F0u); RECOMP_RETURN(); /* 0x00775902: jmp 0x4017f0 */

}

void sub_00775907(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775907u);

L_00775907:
    ecx = ebp + (-0x900); /* 0x00775907: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x0077590D: jmp 0x401800 */

}

void sub_00775912(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775912u);

    goto L_00775912;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775912:
    eax = 0x007E0E94u; /* 0x00775912: mov eax, 0x7e0e94 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775917: jmp 0x75bfd2 */

}

void sub_00775920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775920u);

L_00775920:
    ecx = ebp + (-0x20); /* 0x00775920: lea ecx, [ebp - 0x20] */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00775923: jmp 0x4def30 */

}

void sub_00775928(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775928u);

L_00775928:
    PUSH32(esp, 0); /* 0x00775928: push 0 */
    PUSH32(esp, 0x007975C8u); /* 0x0077592A: push 0x7975c8 */
    eax = MEM32(ebp + (-0x14)); /* 0x0077592F: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00775932: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775933: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775938: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077593B: ret  */

}

void sub_0077593C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077593Cu);

    goto L_0077593C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077593C:
    eax = 0x007E0EE4u; /* 0x0077593C: mov eax, 0x7e0ee4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775941: jmp 0x75bfd2 */

}

void sub_00775950(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775950u);

L_00775950:
    PUSH32(esp, 0); /* 0x00775950: push 0 */
    PUSH32(esp, 0x007975D8u); /* 0x00775952: push 0x7975d8 */
    eax = MEM32(ebp + (-0x14)); /* 0x00775957: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077595A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077595B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775960: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775963: ret  */

}

void sub_00775964(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775964u);

L_00775964:
    PUSH32(esp, 0); /* 0x00775964: push 0 */
    PUSH32(esp, 0x007975D8u); /* 0x00775966: push 0x7975d8 */
    eax = MEM32(ebp + (-0x14)); /* 0x0077596B: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077596E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077596F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775974: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775977: ret  */

}

void sub_00775978(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775978u);

L_00775978:
    PUSH32(esp, 0); /* 0x00775978: push 0 */
    PUSH32(esp, 0x007975D8u); /* 0x0077597A: push 0x7975d8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077597F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775982: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775983: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775988: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077598B: ret  */

}

void sub_0077598C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077598Cu);

L_0077598C:
    ecx = MEM32(ebp + (-0x14)); /* 0x0077598C: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x0077598F: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004017F0u); RECOMP_RETURN(); /* 0x00775992: jmp 0x4017f0 */

}

void sub_00775997(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775997u);

    goto L_00775997;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775997:
    eax = 0x007E0F20u; /* 0x00775997: mov eax, 0x7e0f20 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077599C: jmp 0x75bfd2 */

}

void sub_007759B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007759B0u);

L_007759B0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007759B0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007759B3: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007759B6: jmp 0x4def30 */

}

void sub_007759BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007759BBu);

L_007759BB:
    ecx = MEM32(ebp + (-0x14)); /* 0x007759BB: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007759BE: add ecx, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007759C1: jmp 0x4def30 */

}

void sub_007759C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007759C6u);

L_007759C6:
    PUSH32(esp, 0); /* 0x007759C6: push 0 */
    PUSH32(esp, 0x007975ECu); /* 0x007759C8: push 0x7975ec */
    eax = MEM32(ebp + (-0x18)); /* 0x007759CD: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007759D0: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007759D1: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007759D6: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007759D9: ret  */

}

void sub_007759DA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007759DAu);

L_007759DA:
    PUSH32(esp, 0); /* 0x007759DA: push 0 */
    PUSH32(esp, 0x007975ECu); /* 0x007759DC: push 0x7975ec */
    eax = MEM32(ebp + (-0x18)); /* 0x007759E1: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007759E4: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007759E5: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007759EA: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007759ED: ret  */

}

void sub_007759EE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007759EEu);

L_007759EE:
    PUSH32(esp, 0); /* 0x007759EE: push 0 */
    PUSH32(esp, 0x007975ECu); /* 0x007759F0: push 0x7975ec */
    eax = MEM32(ebp + (-0x18)); /* 0x007759F5: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007759F8: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007759F9: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007759FE: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775A01: ret  */

}

void sub_00775A02(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A02u);

    goto L_00775A02;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775A02:
    eax = 0x007E0F64u; /* 0x00775A02: mov eax, 0x7e0f64 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775A07: jmp 0x75bfd2 */

}

void sub_00775A10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A10u);

L_00775A10:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775A10: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00775A13: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00775A16: jmp 0x4def30 */

}

void sub_00775A1B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A1Bu);

    goto L_00775A1B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775A1B:
    eax = 0x007E0F88u; /* 0x00775A1B: mov eax, 0x7e0f88 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775A20: jmp 0x75bfd2 */

}

void sub_00775A30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A30u);

L_00775A30:
    ecx = MEM32(ebp + (-0x18)); /* 0x00775A30: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_ITAIL(0x004EE670u); RECOMP_RETURN(); /* 0x00775A33: jmp 0x4ee670 */

}

void sub_00775A38(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A38u);

    goto L_00775A38;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775A38:
    eax = 0x007E0FACu; /* 0x00775A38: mov eax, 0x7e0fac */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775A3D: jmp 0x75bfd2 */

}

void sub_00775A50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A50u);

L_00775A50:
    PUSH32(esp, 0); /* 0x00775A50: push 0 */
    PUSH32(esp, 0x00797608u); /* 0x00775A52: push 0x797608 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775A57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775A5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775A5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775A60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775A63: ret  */

}

void sub_00775A64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A64u);

    goto L_00775A64;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775A64:
    eax = 0x007E0FD0u; /* 0x00775A64: mov eax, 0x7e0fd0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775A69: jmp 0x75bfd2 */

}

void sub_00775A70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A70u);

L_00775A70:
    ecx = ebp + (-0x18); /* 0x00775A70: lea ecx, [ebp - 0x18] */
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00775A73: jmp 0x4358e0 */

}

void sub_00775A78(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A78u);

    goto L_00775A78;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775A78:
    eax = 0x007E0FF4u; /* 0x00775A78: mov eax, 0x7e0ff4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775A7D: jmp 0x75bfd2 */

}

void sub_00775A90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775A90u);

L_00775A90:
    PUSH32(esp, 0); /* 0x00775A90: push 0 */
    PUSH32(esp, 0x00790F3Cu); /* 0x00775A92: push 0x790f3c */
    eax = MEM32(ebp + (-0x90)); /* 0x00775A97: mov eax, dword ptr [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x00775A9D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775A9E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775AA3: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775AA6: ret  */

}

void sub_00775AA7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775AA7u);

    goto L_00775AA7;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775AA7:
    eax = 0x007E1018u; /* 0x00775AA7: mov eax, 0x7e1018 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775AAC: jmp 0x75bfd2 */

}

void sub_00775AC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775AC0u);

L_00775AC0:
    PUSH32(esp, 0); /* 0x00775AC0: push 0 */
    PUSH32(esp, 0x0079767Cu); /* 0x00775AC2: push 0x79767c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775AC7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775ACA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775ACB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775AD0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775AD3: ret  */

}

void sub_00775AD4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775AD4u);

    goto L_00775AD4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775AD4:
    eax = 0x007E103Cu; /* 0x00775AD4: mov eax, 0x7e103c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775AD9: jmp 0x75bfd2 */

}

void sub_00775AE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775AE0u);

L_00775AE0:
    ecx = MEM32(ebp + (-0x18)); /* 0x00775AE0: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00775AE3: jmp 0x510d40 */

}

void sub_00775AE8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775AE8u);

L_00775AE8:
    ecx = MEM32(ebp + (-0x18)); /* 0x00775AE8: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x00775AEB: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00775AEE: jmp 0x4cbba0 */

}

void sub_00775AF3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775AF3u);

L_00775AF3:
    ecx = MEM32(ebp + (-0x18)); /* 0x00775AF3: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFCu; /* 0x00775AF6: add ecx, 0xfc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00775AFC: jmp 0x4cbba0 */

}

void sub_00775B01(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B01u);

L_00775B01:
    PUSH32(esp, 0); /* 0x00775B01: push 0 */
    PUSH32(esp, 0x00797690u); /* 0x00775B03: push 0x797690 */
    eax = MEM32(ebp + (-0x14)); /* 0x00775B08: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00775B0B: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775B0C: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775B11: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775B14: ret  */

}

void sub_00775B15(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B15u);

L_00775B15:
    ecx = MEM32(ebp + (-0x14)); /* 0x00775B15: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x00531610u); RECOMP_RETURN(); /* 0x00775B18: jmp 0x531610 */

}

void sub_00775B1D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B1Du);

    goto L_00775B1D;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775B1D:
    eax = 0x007E1080u; /* 0x00775B1D: mov eax, 0x7e1080 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775B22: jmp 0x75bfd2 */

}

void sub_00775B30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B30u);

L_00775B30:
    PUSH32(esp, 0); /* 0x00775B30: push 0 */
    PUSH32(esp, 0x007976E8u); /* 0x00775B32: push 0x7976e8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775B37: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775B3A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775B3B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775B40: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775B43: ret  */

}

void sub_00775B44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B44u);

    goto L_00775B44;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775B44:
    eax = 0x007E10A4u; /* 0x00775B44: mov eax, 0x7e10a4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775B49: jmp 0x75bfd2 */

}

void sub_00775B50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B50u);

L_00775B50:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775B50: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00775B56: jmp 0x510d40 */

}

void sub_00775B5B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B5Bu);

L_00775B5B:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775B5B: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x00775B61: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00479100u); RECOMP_RETURN(); /* 0x00775B64: jmp 0x479100 */

}

void sub_00775B69(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B69u);

L_00775B69:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775B69: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD8u; /* 0x00775B6F: add ecx, 0xd8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x00775B75: jmp 0x4957a0 */

}

void sub_00775B7A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B7Au);

L_00775B7A:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775B7A: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x11Cu; /* 0x00775B80: add ecx, 0x11c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x00775B86: jmp 0x4957a0 */

}

void sub_00775B8B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B8Bu);

L_00775B8B:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775B8B: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x160u; /* 0x00775B91: add ecx, 0x160 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x00775B97: jmp 0x4957a0 */

}

void sub_00775B9C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775B9Cu);

L_00775B9C:
    ecx = ebp + (-0x900); /* 0x00775B9C: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00775BA2: jmp 0x401800 */

}

void sub_00775BA7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775BA7u);

    goto L_00775BA7;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775BA7:
    eax = 0x007E10F0u; /* 0x00775BA7: mov eax, 0x7e10f0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775BAC: jmp 0x75bfd2 */

}

void sub_00775BC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775BC0u);

L_00775BC0:
    PUSH32(esp, 0); /* 0x00775BC0: push 0 */
    PUSH32(esp, 0x007975C8u); /* 0x00775BC2: push 0x7975c8 */
    eax = MEM32(ebp + (-0x20)); /* 0x00775BC7: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x00775BCA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775BCB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775BD0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775BD3: ret  */

}

void sub_00775BD4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775BD4u);

    goto L_00775BD4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775BD4:
    eax = 0x007E1114u; /* 0x00775BD4: mov eax, 0x7e1114 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775BD9: jmp 0x75bfd2 */

}

void sub_00775BE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775BE0u);

L_00775BE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775BE0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00775BE3: jmp 0x510d40 */

}

void sub_00775BE8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775BE8u);

L_00775BE8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775BE8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00775BEB: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00775BEE: jmp 0x4def30 */

}

void sub_00775BF3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775BF3u);

L_00775BF3:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775BF3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x00775BF6: add ecx, 0x5c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x00775BF9: jmp 0x52ea90 */

}

void sub_00775BFE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775BFEu);

L_00775BFE:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775BFE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x118u; /* 0x00775C01: add ecx, 0x118 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004985A0u); RECOMP_RETURN(); /* 0x00775C07: jmp 0x4985a0 */

}

void sub_00775C0C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C0Cu);

    goto L_00775C0C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775C0C:
    eax = 0x007E1150u; /* 0x00775C0C: mov eax, 0x7e1150 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775C11: jmp 0x75bfd2 */

}

void sub_00775C20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C20u);

L_00775C20:
    PUSH32(esp, 0); /* 0x00775C20: push 0 */
    PUSH32(esp, 0x00797768u); /* 0x00775C22: push 0x797768 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775C27: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775C2A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775C2B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775C30: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775C33: ret  */

}

void sub_00775C34(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C34u);

    goto L_00775C34;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775C34:
    eax = 0x007E1174u; /* 0x00775C34: mov eax, 0x7e1174 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775C39: jmp 0x75bfd2 */

}

void sub_00775C40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C40u);

L_00775C40:
    PUSH32(esp, 0); /* 0x00775C40: push 0 */
    PUSH32(esp, 0x0079777Cu); /* 0x00775C42: push 0x79777c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775C47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775C4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775C4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775C50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775C53: ret  */

}

void sub_00775C54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C54u);

    goto L_00775C54;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775C54:
    eax = 0x007E1198u; /* 0x00775C54: mov eax, 0x7e1198 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775C59: jmp 0x75bfd2 */

}

void sub_00775C60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C60u);

L_00775C60:
    PUSH32(esp, 0); /* 0x00775C60: push 0 */
    PUSH32(esp, 0x007977B0u); /* 0x00775C62: push 0x7977b0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775C67: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775C6A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775C6B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775C70: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775C73: ret  */

}

void sub_00775C74(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C74u);

    goto L_00775C74;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775C74:
    eax = 0x007E11BCu; /* 0x00775C74: mov eax, 0x7e11bc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775C79: jmp 0x75bfd2 */

}

void sub_00775C80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C80u);

L_00775C80:
    PUSH32(esp, 0); /* 0x00775C80: push 0 */
    PUSH32(esp, 0x007977CCu); /* 0x00775C82: push 0x7977cc */
    eax = MEM32(ebp + (-0x10)); /* 0x00775C87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775C8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775C8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775C90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775C93: ret  */

}

void sub_00775C94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775C94u);

    goto L_00775C94;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775C94:
    eax = 0x007E11E0u; /* 0x00775C94: mov eax, 0x7e11e0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775C99: jmp 0x75bfd2 */

}

void sub_00775CA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775CA0u);

L_00775CA0:
    PUSH32(esp, 0); /* 0x00775CA0: push 0 */
    PUSH32(esp, 0x007977DCu); /* 0x00775CA2: push 0x7977dc */
    eax = MEM32(ebp + (-0x10)); /* 0x00775CA7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775CAA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775CAB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775CB0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775CB3: ret  */

}

void sub_00775CB4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775CB4u);

    goto L_00775CB4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775CB4:
    eax = 0x007E1204u; /* 0x00775CB4: mov eax, 0x7e1204 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775CB9: jmp 0x75bfd2 */

}

void sub_00775CC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775CC0u);

L_00775CC0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775CC0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x138u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x138u; /* 0x00775CC3: add ecx, 0x138 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00775CC9: jmp 0x4def30 */

}

void sub_00775CCE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775CCEu);

    goto L_00775CCE;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775CCE:
    eax = 0x007E1228u; /* 0x00775CCE: mov eax, 0x7e1228 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775CD3: jmp 0x75bfd2 */

}

void sub_00775CE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775CE0u);

L_00775CE0:
    PUSH32(esp, 0); /* 0x00775CE0: push 0 */
    PUSH32(esp, 0x007977F4u); /* 0x00775CE2: push 0x7977f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775CE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775CEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775CEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775CF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775CF3: ret  */

}

void sub_00775CF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775CF4u);

    goto L_00775CF4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775CF4:
    eax = 0x007E124Cu; /* 0x00775CF4: mov eax, 0x7e124c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775CF9: jmp 0x75bfd2 */

}

void sub_00775D00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D00u);

L_00775D00:
    PUSH32(esp, 0); /* 0x00775D00: push 0 */
    PUSH32(esp, 0x0079780Cu); /* 0x00775D02: push 0x79780c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775D07: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775D0A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775D0B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775D10: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775D13: ret  */

}

void sub_00775D14(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D14u);

    goto L_00775D14;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775D14:
    eax = 0x007E1270u; /* 0x00775D14: mov eax, 0x7e1270 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775D19: jmp 0x75bfd2 */

}

void sub_00775D20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D20u);

L_00775D20:
    PUSH32(esp, 0); /* 0x00775D20: push 0 */
    PUSH32(esp, 0x00797818u); /* 0x00775D22: push 0x797818 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775D27: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775D2A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775D2B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775D30: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775D33: ret  */

}

void sub_00775D34(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D34u);

    goto L_00775D34;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775D34:
    eax = 0x007E1294u; /* 0x00775D34: mov eax, 0x7e1294 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775D39: jmp 0x75bfd2 */

}

void sub_00775D40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D40u);

L_00775D40:
    PUSH32(esp, 0); /* 0x00775D40: push 0 */
    PUSH32(esp, 0x00797828u); /* 0x00775D42: push 0x797828 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775D47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775D4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775D4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775D50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775D53: ret  */

}

void sub_00775D54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D54u);

    goto L_00775D54;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775D54:
    eax = 0x007E12B8u; /* 0x00775D54: mov eax, 0x7e12b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775D59: jmp 0x75bfd2 */

}

void sub_00775D60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D60u);

L_00775D60:
    PUSH32(esp, 0); /* 0x00775D60: push 0 */
    PUSH32(esp, 0x0079783Cu); /* 0x00775D62: push 0x79783c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775D67: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775D6A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775D6B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775D70: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775D73: ret  */

}

void sub_00775D74(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D74u);

    goto L_00775D74;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775D74:
    eax = 0x007E12DCu; /* 0x00775D74: mov eax, 0x7e12dc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775D79: jmp 0x75bfd2 */

}

void sub_00775D80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D80u);

L_00775D80:
    PUSH32(esp, 0); /* 0x00775D80: push 0 */
    PUSH32(esp, 0x0079784Cu); /* 0x00775D82: push 0x79784c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775D87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775D8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775D8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775D90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775D93: ret  */

}

void sub_00775D94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775D94u);

    goto L_00775D94;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775D94:
    eax = 0x007E1300u; /* 0x00775D94: mov eax, 0x7e1300 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775D99: jmp 0x75bfd2 */

}

void sub_00775DA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DA0u);

L_00775DA0:
    PUSH32(esp, 0); /* 0x00775DA0: push 0 */
    PUSH32(esp, 0x007978B4u); /* 0x00775DA2: push 0x7978b4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775DA7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775DAA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775DAB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775DB0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775DB3: ret  */

}

void sub_00775DB4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DB4u);

    goto L_00775DB4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775DB4:
    eax = 0x007E1324u; /* 0x00775DB4: mov eax, 0x7e1324 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775DB9: jmp 0x75bfd2 */

}

void sub_00775DC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DC0u);

L_00775DC0:
    ecx = MEM32(ebp + (-0x14)); /* 0x00775DC0: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00775DC3: jmp 0x510d40 */

}

void sub_00775DC8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DC8u);

L_00775DC8:
    ecx = MEM32(ebp + (-0x14)); /* 0x00775DC8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00775DCB: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00775DCE: jmp 0x4cbba0 */

}

void sub_00775DD3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DD3u);

    goto L_00775DD3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775DD3:
    eax = 0x007E1350u; /* 0x00775DD3: mov eax, 0x7e1350 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775DD8: jmp 0x75bfd2 */

}

void sub_00775DE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DE0u);

L_00775DE0:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775DE0: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x00775DE6: jmp 0x4defb0 */

}

void sub_00775DEB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DEBu);

L_00775DEB:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775DEB: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x150u; /* 0x00775DF1: add ecx, 0x150 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00775DF7: jmp 0x49d870 */

}

void sub_00775DFC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775DFCu);

L_00775DFC:
    ecx = ebp + (-0x8F0); /* 0x00775DFC: lea ecx, [ebp - 0x8f0] */
    RECOMP_ITAIL(0x004017F0u); RECOMP_RETURN(); /* 0x00775E02: jmp 0x4017f0 */

}

void sub_00775E07(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E07u);

L_00775E07:
    ecx = ebp + (-0x900); /* 0x00775E07: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00775E0D: jmp 0x401800 */

}

void sub_00775E12(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E12u);

    goto L_00775E12;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775E12:
    eax = 0x007E13B8u; /* 0x00775E12: mov eax, 0x7e13b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775E17: jmp 0x75bfd2 */

}

void sub_00775E20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E20u);

L_00775E20:
    PUSH32(esp, 0); /* 0x00775E20: push 0 */
    PUSH32(esp, 0x00797964u); /* 0x00775E22: push 0x797964 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775E27: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775E2A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775E2B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775E30: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775E33: ret  */

}

void sub_00775E34(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E34u);

    goto L_00775E34;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775E34:
    eax = 0x007E1408u; /* 0x00775E34: mov eax, 0x7e1408 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775E39: jmp 0x75bfd2 */

}

void sub_00775E40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E40u);

L_00775E40:
    PUSH32(esp, 0); /* 0x00775E40: push 0 */
    PUSH32(esp, 0x0079797Cu); /* 0x00775E42: push 0x79797c */
    eax = MEM32(ebp + (-0x10)); /* 0x00775E47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775E4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775E4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775E50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775E53: ret  */

}

void sub_00775E54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E54u);

    goto L_00775E54;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775E54:
    eax = 0x007E142Cu; /* 0x00775E54: mov eax, 0x7e142c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775E59: jmp 0x75bfd2 */

}

void sub_00775E60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E60u);

L_00775E60:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775E60: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00775E63: jmp 0x510d40 */

}

void sub_00775E68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E68u);

L_00775E68:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775E68: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x00775E6B: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00775E6E: jmp 0x4cbba0 */

}

void sub_00775E73(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E73u);

L_00775E73:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775E73: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x128u; /* 0x00775E76: add ecx, 0x128 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004956A0u); RECOMP_RETURN(); /* 0x00775E7C: jmp 0x4956a0 */

}

void sub_00775E81(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E81u);

    goto L_00775E81;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775E81:
    eax = 0x007E0694u; /* 0x00775E81: mov eax, 0x7e0694 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775E86: jmp 0x75bfd2 */

}

void sub_00775E90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E90u);

L_00775E90:
    ecx = MEM32(ebp + (-0x28C)); /* 0x00775E90: mov ecx, dword ptr [ebp - 0x28c] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00775E96: jmp 0x510d40 */

}

void sub_00775E9B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775E9Bu);

L_00775E9B:
    ecx = MEM32(ebp + (-0x28C)); /* 0x00775E9B: mov ecx, dword ptr [ebp - 0x28c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x00775EA1: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00775EA4: jmp 0x4cbba0 */

}

void sub_00775EA9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775EA9u);

    goto L_00775EA9;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775EA9:
    eax = 0x007E1458u; /* 0x00775EA9: mov eax, 0x7e1458 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775EAE: jmp 0x75bfd2 */

}

void sub_00775EC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775EC0u);

L_00775EC0:
    ecx = MEM32(ebp + (-0x904)); /* 0x00775EC0: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x004E20B0u); RECOMP_RETURN(); /* 0x00775EC6: jmp 0x4e20b0 */

}

void sub_00775ECB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775ECBu);

L_00775ECB:
    ecx = ebp + (-0x900); /* 0x00775ECB: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00775ED1: jmp 0x401800 */

}

void sub_00775ED6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775ED6u);

    goto L_00775ED6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775ED6:
    eax = 0x007E14B0u; /* 0x00775ED6: mov eax, 0x7e14b0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775EDB: jmp 0x75bfd2 */

}

void sub_00775EE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775EE0u);

L_00775EE0:
    PUSH32(esp, 0); /* 0x00775EE0: push 0 */
    PUSH32(esp, 0x00797A40u); /* 0x00775EE2: push 0x797a40 */
    eax = MEM32(ebp + (-0x10)); /* 0x00775EE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00775EEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775EEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775EF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775EF3: ret  */

}

void sub_00775EF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775EF4u);

    goto L_00775EF4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775EF4:
    eax = 0x007E14D4u; /* 0x00775EF4: mov eax, 0x7e14d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775EF9: jmp 0x75bfd2 */

}

void sub_00775F00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F00u);

L_00775F00:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775F00: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00495930u); RECOMP_RETURN(); /* 0x00775F03: jmp 0x495930 */

}

void sub_00775F08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F08u);

L_00775F08:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775F08: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x90u; /* 0x00775F0B: add ecx, 0x90 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00775F11: jmp 0x4def30 */

}

void sub_00775F16(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F16u);

    goto L_00775F16;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775F16:
    eax = 0x007E1500u; /* 0x00775F16: mov eax, 0x7e1500 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775F1B: jmp 0x75bfd2 */

}

void sub_00775F20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F20u);

L_00775F20:
    ecx = MEM32(ebp + (-0x10)); /* 0x00775F20: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x00775F23: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00775F26: jmp 0x4835c0 */

}

void sub_00775F2B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F2Bu);

    goto L_00775F2B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00775F2B:
    eax = 0x007E1524u; /* 0x00775F2B: mov eax, 0x7e1524 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00775F30: jmp 0x75bfd2 */

}

void sub_00775F40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F40u);

L_00775F40:
    PUSH32(esp, 0); /* 0x00775F40: push 0 */
    PUSH32(esp, 0x00797B40u); /* 0x00775F42: push 0x797b40 */
    eax = MEM32(ebp + 0x4); /* 0x00775F47: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775F4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775F4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775F50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775F53: ret  */

}

void sub_00775F54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F54u);

L_00775F54:
    PUSH32(esp, 0); /* 0x00775F54: push 0 */
    PUSH32(esp, 0x00797B2Cu); /* 0x00775F56: push 0x797b2c */
    eax = MEM32(ebp + 0x4); /* 0x00775F5B: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775F5E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775F5F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775F64: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775F67: ret  */

}

void sub_00775F68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F68u);

L_00775F68:
    PUSH32(esp, 0); /* 0x00775F68: push 0 */
    PUSH32(esp, 0x00797B1Cu); /* 0x00775F6A: push 0x797b1c */
    eax = MEM32(ebp + 0x4); /* 0x00775F6F: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775F72: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775F73: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775F78: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775F7B: ret  */

}

void sub_00775F7C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F7Cu);

L_00775F7C:
    PUSH32(esp, 0); /* 0x00775F7C: push 0 */
    PUSH32(esp, 0x00797B10u); /* 0x00775F7E: push 0x797b10 */
    eax = MEM32(ebp + 0x4); /* 0x00775F83: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775F86: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775F87: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775F8C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775F8F: ret  */

}

void sub_00775F90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775F90u);

L_00775F90:
    PUSH32(esp, 0); /* 0x00775F90: push 0 */
    PUSH32(esp, 0x00797B00u); /* 0x00775F92: push 0x797b00 */
    eax = MEM32(ebp + 0x4); /* 0x00775F97: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775F9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775F9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775FA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775FA3: ret  */

}

void sub_00775FA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775FA4u);

L_00775FA4:
    PUSH32(esp, 0); /* 0x00775FA4: push 0 */
    PUSH32(esp, 0x00797AF0u); /* 0x00775FA6: push 0x797af0 */
    eax = MEM32(ebp + 0x4); /* 0x00775FAB: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775FAE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775FAF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775FB4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775FB7: ret  */

}

void sub_00775FB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775FB8u);

L_00775FB8:
    PUSH32(esp, 0); /* 0x00775FB8: push 0 */
    PUSH32(esp, 0x00797AE0u); /* 0x00775FBA: push 0x797ae0 */
    eax = MEM32(ebp + 0x4); /* 0x00775FBF: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775FC2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775FC3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775FC8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775FCB: ret  */

}

void sub_00775FCC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775FCCu);

L_00775FCC:
    PUSH32(esp, 0); /* 0x00775FCC: push 0 */
    PUSH32(esp, 0x00797B10u); /* 0x00775FCE: push 0x797b10 */
    eax = MEM32(ebp + 0x4); /* 0x00775FD3: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775FD6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775FD7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775FDC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775FDF: ret  */

}

void sub_00775FE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775FE0u);

L_00775FE0:
    PUSH32(esp, 0); /* 0x00775FE0: push 0 */
    PUSH32(esp, 0x00797B00u); /* 0x00775FE2: push 0x797b00 */
    eax = MEM32(ebp + 0x4); /* 0x00775FE7: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775FEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775FEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00775FF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00775FF3: ret  */

}

void sub_00775FF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00775FF4u);

L_00775FF4:
    PUSH32(esp, 0); /* 0x00775FF4: push 0 */
    PUSH32(esp, 0x00797AD0u); /* 0x00775FF6: push 0x797ad0 */
    eax = MEM32(ebp + 0x4); /* 0x00775FFB: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00775FFE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00775FFF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776004: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776007: ret  */

}

void sub_00776008(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776008u);

L_00776008:
    PUSH32(esp, 0); /* 0x00776008: push 0 */
    PUSH32(esp, 0x00797AC0u); /* 0x0077600A: push 0x797ac0 */
    eax = MEM32(ebp + 0x4); /* 0x0077600F: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00776012: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00776013: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776018: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077601B: ret  */

}

void sub_0077601C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077601Cu);

L_0077601C:
    PUSH32(esp, 0); /* 0x0077601C: push 0 */
    PUSH32(esp, 0x00797AB4u); /* 0x0077601E: push 0x797ab4 */
    eax = MEM32(ebp + 0x4); /* 0x00776023: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00776026: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00776027: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077602C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077602F: ret  */

}

void sub_00776030(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776030u);

    goto L_00776030;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776030:
    eax = 0x007E15A0u; /* 0x00776030: mov eax, 0x7e15a0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776035: jmp 0x75bfd2 */

}

void sub_00776040(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776040u);

L_00776040:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776040: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776043: jmp 0x510d40 */

}

void sub_00776048(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776048u);

L_00776048:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776048: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077604B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077604E: jmp 0x4def30 */

}

void sub_00776053(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776053u);

L_00776053:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776053: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x00776056: add ecx, 0x70 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00776059: jmp 0x49d870 */

}

void sub_0077605E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077605Eu);

    goto L_0077605E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077605E:
    eax = 0x007E1D78u; /* 0x0077605E: mov eax, 0x7e1d78 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776063: jmp 0x75bfd2 */

}

void sub_00776070(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776070u);

L_00776070:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776070: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x00776073: jmp 0x4defb0 */

}

void sub_00776078(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776078u);

L_00776078:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776078: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x160u; /* 0x0077607B: add ecx, 0x160 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0050DB70u); RECOMP_RETURN(); /* 0x00776081: jmp 0x50db70 */

}

void sub_00776086(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776086u);

    goto L_00776086;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776086:
    eax = 0x007E15CCu; /* 0x00776086: mov eax, 0x7e15cc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077608B: jmp 0x75bfd2 */

}

void sub_00776090(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776090u);

L_00776090:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776090: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776093: jmp 0x510d40 */

}

void sub_00776098(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776098u);

L_00776098:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776098: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x6Cu; /* 0x0077609B: add ecx, 0x6c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004C19E0u); RECOMP_RETURN(); /* 0x0077609E: jmp 0x4c19e0 */

}

void sub_007760A3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007760A3u);

L_007760A3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007760A3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x23Cu; /* 0x007760A6: add ecx, 0x23c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004C1720u); RECOMP_RETURN(); /* 0x007760AC: jmp 0x4c1720 */

}

void sub_007760B1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007760B1u);

L_007760B1:
    PUSH32(esp, 0); /* 0x007760B1: push 0 */
    PUSH32(esp, 0x00797C00u); /* 0x007760B3: push 0x797c00 */
    eax = MEM32(ebp + 0x14); /* 0x007760B8: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x007760BB: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007760BC: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007760C1: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007760C4: ret  */

}

void sub_007760C5(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007760C5u);

L_007760C5:
    PUSH32(esp, 0); /* 0x007760C5: push 0 */
    PUSH32(esp, 0x00797BE8u); /* 0x007760C7: push 0x797be8 */
    eax = MEM32(ebp + 0x14); /* 0x007760CC: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x007760CF: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007760D0: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007760D5: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007760D8: ret  */

}

void sub_007760D9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007760D9u);

L_007760D9:
    PUSH32(esp, 0); /* 0x007760D9: push 0 */
    PUSH32(esp, 0x00797BE8u); /* 0x007760DB: push 0x797be8 */
    eax = MEM32(ebp + 0x14); /* 0x007760E0: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x007760E3: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007760E4: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007760E9: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007760EC: ret  */

}

void sub_007760ED(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007760EDu);

L_007760ED:
    PUSH32(esp, 0); /* 0x007760ED: push 0 */
    PUSH32(esp, 0x00797BD0u); /* 0x007760EF: push 0x797bd0 */
    eax = MEM32(ebp + 0x14); /* 0x007760F4: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x007760F7: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007760F8: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007760FD: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776100: ret  */

}

void sub_00776101(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776101u);

    goto L_00776101;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776101:
    eax = 0x007E1620u; /* 0x00776101: mov eax, 0x7e1620 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776106: jmp 0x75bfd2 */

}

void sub_00776110(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776110u);

L_00776110:
    PUSH32(esp, 0); /* 0x00776110: push 0 */
    PUSH32(esp, 0x00797C68u); /* 0x00776112: push 0x797c68 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776117: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077611A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077611B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776120: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776123: ret  */

}

void sub_00776124(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776124u);

    goto L_00776124;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776124:
    eax = 0x007E1644u; /* 0x00776124: mov eax, 0x7e1644 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776129: jmp 0x75bfd2 */

}

void sub_00776130(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776130u);

L_00776130:
    PUSH32(esp, 0); /* 0x00776130: push 0 */
    PUSH32(esp, 0x00797C7Cu); /* 0x00776132: push 0x797c7c */
    eax = MEM32(ebp + (-0x10)); /* 0x00776137: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077613A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077613B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776140: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776143: ret  */

}

void sub_00776144(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776144u);

    goto L_00776144;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776144:
    eax = 0x007E1668u; /* 0x00776144: mov eax, 0x7e1668 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776149: jmp 0x75bfd2 */

}

void sub_00776150(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776150u);

L_00776150:
    PUSH32(esp, 0); /* 0x00776150: push 0 */
    PUSH32(esp, 0x00797CE8u); /* 0x00776152: push 0x797ce8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776157: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077615A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077615B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776160: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776163: ret  */

}

void sub_00776164(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776164u);

    goto L_00776164;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776164:
    eax = 0x007E168Cu; /* 0x00776164: mov eax, 0x7e168c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776169: jmp 0x75bfd2 */

}

void sub_00776170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776170u);

L_00776170:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776170: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEFB0u); RECOMP_RETURN(); /* 0x00776173: jmp 0x4defb0 */

}

void sub_00776178(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776178u);

    goto L_00776178;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776178:
    eax = 0x007E0EB8u; /* 0x00776178: mov eax, 0x7e0eb8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077617D: jmp 0x75bfd2 */

}

void sub_00776190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776190u);

L_00776190:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776190: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x00776193: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00776196: jmp 0x4835c0 */

}

void sub_0077619B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077619Bu);

    goto L_0077619B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077619B:
    eax = 0x007E16B0u; /* 0x0077619B: mov eax, 0x7e16b0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007761A0: jmp 0x75bfd2 */

}

void sub_007761B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007761B0u);

L_007761B0:
    eax = MEM32(ebp + (-0x10)); /* 0x007761B0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007761B3: push eax */
    RECOMP_CALL(sub_004AC290); /* 0x007761B4: call 0x4ac290 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007761B9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007761BA: ret  */

}

void sub_007761BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007761BBu);

    goto L_007761BB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007761BB:
    eax = 0x007E16F8u; /* 0x007761BB: mov eax, 0x7e16f8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007761C0: jmp 0x75bfd2 */

}

void sub_007761D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007761D0u);

L_007761D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007761D0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004DEF70u); RECOMP_RETURN(); /* 0x007761D3: jmp 0x4def70 */

}

void sub_007761D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007761D8u);

    goto L_007761D8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007761D8:
    eax = 0x007E171Cu; /* 0x007761D8: mov eax, 0x7e171c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007761DD: jmp 0x75bfd2 */

}

void sub_007761F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007761F0u);

L_007761F0:
    PUSH32(esp, 0); /* 0x007761F0: push 0 */
    PUSH32(esp, 0x00797D60u); /* 0x007761F2: push 0x797d60 */
    eax = MEM32(ebp + (-0x10)); /* 0x007761F7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007761FA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007761FB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776200: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776203: ret  */

}

void sub_00776200(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776200u);

L_00776200:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776200: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776203: ret  */

}

void sub_00776204(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776204u);

    goto L_00776204;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776204:
    eax = 0x007E1740u; /* 0x00776204: mov eax, 0x7e1740 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776209: jmp 0x75bfd2 */

}

void sub_00776210(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776210u);

L_00776210:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776210: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776213: jmp 0x510d40 */

}

void sub_00776218(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776218u);

L_00776218:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776218: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077621B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x0077621E: jmp 0x4358e0 */

}

void sub_00776223(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776223u);

L_00776223:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776223: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x00776226: add ecx, 0x54 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00776229: jmp 0x4358e0 */

}

void sub_0077622E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077622Eu);

L_0077622E:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077622E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x00776231: add ecx, 0x5c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00776234: jmp 0x4358e0 */

}

void sub_00776239(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776239u);

    goto L_00776239;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776239:
    eax = 0x007E177Cu; /* 0x00776239: mov eax, 0x7e177c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077623E: jmp 0x75bfd2 */

}

void sub_00776250(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776250u);

L_00776250:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776250: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776253: jmp 0x510d40 */

}

void sub_00776258(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776258u);

L_00776258:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776258: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077625B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x0077625E: jmp 0x4358e0 */

}

void sub_00776263(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776263u);

L_00776263:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776263: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x00776266: add ecx, 0x54 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00776269: jmp 0x4358e0 */

}

void sub_0077626E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077626Eu);

    goto L_0077626E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077626E:
    eax = 0x007E17B0u; /* 0x0077626E: mov eax, 0x7e17b0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776273: jmp 0x75bfd2 */

}

void sub_00776280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776280u);

L_00776280:
    PUSH32(esp, 0); /* 0x00776280: push 0 */
    PUSH32(esp, 0x00797E10u); /* 0x00776282: push 0x797e10 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776287: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077628A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077628B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776290: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776293: ret  */

}

void sub_00776294(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776294u);

    goto L_00776294;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776294:
    eax = 0x007E17D4u; /* 0x00776294: mov eax, 0x7e17d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776299: jmp 0x75bfd2 */

}

void sub_007762A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007762A0u);

L_007762A0:
    PUSH32(esp, 0); /* 0x007762A0: push 0 */
    PUSH32(esp, 0x00797E18u); /* 0x007762A2: push 0x797e18 */
    eax = MEM32(ebp + (-0x10)); /* 0x007762A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007762AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007762AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007762B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007762B3: ret  */

}

void sub_007762B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007762B4u);

    goto L_007762B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007762B4:
    eax = 0x007E17F8u; /* 0x007762B4: mov eax, 0x7e17f8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007762B9: jmp 0x75bfd2 */

}

void sub_007762C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007762C0u);

L_007762C0:
    PUSH32(esp, 0); /* 0x007762C0: push 0 */
    PUSH32(esp, 0x00797E28u); /* 0x007762C2: push 0x797e28 */
    eax = MEM32(ebp + (-0x10)); /* 0x007762C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007762CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007762CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007762D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007762D3: ret  */

}

void sub_007762D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007762D4u);

    goto L_007762D4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007762D4:
    eax = 0x007E181Cu; /* 0x007762D4: mov eax, 0x7e181c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007762D9: jmp 0x75bfd2 */

}

void sub_007762E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007762E0u);

L_007762E0:
    PUSH32(esp, 0); /* 0x007762E0: push 0 */
    PUSH32(esp, 0x00797E38u); /* 0x007762E2: push 0x797e38 */
    eax = MEM32(ebp + (-0x10)); /* 0x007762E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007762EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007762EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007762F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007762F3: ret  */

}

void sub_007762F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007762F4u);

    goto L_007762F4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007762F4:
    eax = 0x007E1840u; /* 0x007762F4: mov eax, 0x7e1840 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007762F9: jmp 0x75bfd2 */

}

void sub_00776300(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776300u);

L_00776300:
    PUSH32(esp, 0); /* 0x00776300: push 0 */
    PUSH32(esp, 0x00797E50u); /* 0x00776302: push 0x797e50 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776307: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077630A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077630B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776310: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776313: ret  */

}

void sub_00776314(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776314u);

    goto L_00776314;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776314:
    eax = 0x007E1864u; /* 0x00776314: mov eax, 0x7e1864 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776319: jmp 0x75bfd2 */

}

void sub_00776320(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776320u);

L_00776320:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00776320: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776323: jmp 0x510d40 */

}

void sub_00776328(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776328u);

L_00776328:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00776328: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x0077632B: add ecx, 0x54 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x0077632E: jmp 0x4def30 */

}

void sub_00776333(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776333u);

L_00776333:
    PUSH32(esp, 0); /* 0x00776333: push 0 */
    PUSH32(esp, 0x00797F04u); /* 0x00776335: push 0x797f04 */
    eax = MEM32(ebp + 0x8); /* 0x0077633A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0077633D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077633E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776343: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776346: ret  */

}

void sub_00776347(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776347u);

L_00776347:
    PUSH32(esp, 0); /* 0x00776347: push 0 */
    PUSH32(esp, 0x00797EF4u); /* 0x00776349: push 0x797ef4 */
    eax = MEM32(ebp + 0x8); /* 0x0077634E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00776351: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00776352: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776357: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077635A: ret  */

}

void sub_0077635B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077635Bu);

L_0077635B:
    PUSH32(esp, 0); /* 0x0077635B: push 0 */
    PUSH32(esp, 0x00797EF4u); /* 0x0077635D: push 0x797ef4 */
    eax = MEM32(ebp + 0x8); /* 0x00776362: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00776365: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00776366: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077636B: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077636E: ret  */

}

void sub_0077636F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077636Fu);

L_0077636F:
    PUSH32(esp, 0); /* 0x0077636F: push 0 */
    PUSH32(esp, 0x00797EE4u); /* 0x00776371: push 0x797ee4 */
    eax = MEM32(ebp + (-0x18)); /* 0x00776376: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x00776379: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077637A: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077637F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776382: ret  */

}

void sub_00776383(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776383u);

L_00776383:
    PUSH32(esp, 0); /* 0x00776383: push 0 */
    PUSH32(esp, 0x00797ED0u); /* 0x00776385: push 0x797ed0 */
    eax = MEM32(ebp + (-0x20)); /* 0x0077638A: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x0077638D: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077638E: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776393: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776396: ret  */

}

void sub_00776397(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776397u);

    goto L_00776397;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776397:
    eax = 0x007E18B8u; /* 0x00776397: mov eax, 0x7e18b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077639C: jmp 0x75bfd2 */

}

void sub_007763B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007763B0u);

L_007763B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007763B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007763B3: jmp 0x510d40 */

}

void sub_007763B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007763B8u);

L_007763B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007763B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x8Cu; /* 0x007763BB: add ecx, 0x8c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x007763C1: jmp 0x4cbba0 */

}

void sub_007763C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007763C6u);

L_007763C6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007763C6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x138u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x138u; /* 0x007763C9: add ecx, 0x138 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x007763CF: jmp 0x52ea90 */

}

void sub_007763D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007763D4u);

L_007763D4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007763D4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1F4u; /* 0x007763D7: add ecx, 0x1f4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004985A0u); RECOMP_RETURN(); /* 0x007763DD: jmp 0x4985a0 */

}

void sub_007763E2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007763E2u);

    goto L_007763E2;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007763E2:
    eax = 0x007E18F4u; /* 0x007763E2: mov eax, 0x7e18f4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007763E7: jmp 0x75bfd2 */

}

void sub_007763F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007763F0u);

L_007763F0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007763F0: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007763F3: jmp 0x510d40 */

}

void sub_007763F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007763F8u);

L_007763F8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007763F8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x007763FB: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CC240u); RECOMP_RETURN(); /* 0x007763FE: jmp 0x4cc240 */

}

void sub_00776403(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776403u);

    goto L_00776403;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776403:
    eax = 0x007E1920u; /* 0x00776403: mov eax, 0x7e1920 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776408: jmp 0x75bfd2 */

}

void sub_00776410(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776410u);

L_00776410:
    ecx = MEM32(ebp + (-0x10)); /* 0x00776410: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776413: jmp 0x510d40 */

}

void sub_00776418(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776418u);

    goto L_00776418;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776418:
    eax = 0x007DEE70u; /* 0x00776418: mov eax, 0x7dee70 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077641D: jmp 0x75bfd2 */

}

void sub_00776430(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776430u);

L_00776430:
    PUSH32(esp, 0); /* 0x00776430: push 0 */
    PUSH32(esp, 0x00797FBCu); /* 0x00776432: push 0x797fbc */
    eax = MEM32(ebp + (-0x10)); /* 0x00776437: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077643A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077643B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776440: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776443: ret  */

}

void sub_00776444(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776444u);

    goto L_00776444;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776444:
    eax = 0x007E1944u; /* 0x00776444: mov eax, 0x7e1944 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776449: jmp 0x75bfd2 */

}

void sub_00776450(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776450u);

L_00776450:
    PUSH32(esp, 0); /* 0x00776450: push 0 */
    PUSH32(esp, 0x00797FE8u); /* 0x00776452: push 0x797fe8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776457: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077645A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077645B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776460: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776463: ret  */

}

void sub_00776464(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776464u);

    goto L_00776464;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776464:
    eax = 0x007E1968u; /* 0x00776464: mov eax, 0x7e1968 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776469: jmp 0x75bfd2 */

}

void sub_00776470(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776470u);

L_00776470:
    ecx = ebp + (-0x900); /* 0x00776470: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00776476: jmp 0x401800 */

}

void sub_0077647B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077647Bu);

L_0077647B:
    PUSH32(esp, 0); /* 0x0077647B: push 0 */
    PUSH32(esp, 0x00798004u); /* 0x0077647D: push 0x798004 */
    eax = MEM32(ebp + (-0x904)); /* 0x00776482: mov eax, dword ptr [ebp - 0x904] */
    PUSH32(esp, eax); /* 0x00776488: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00776489: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077648E: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776491: ret  */

}

void sub_00776492(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776492u);

    goto L_00776492;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776492:
    eax = 0x007E1994u; /* 0x00776492: mov eax, 0x7e1994 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776497: jmp 0x75bfd2 */

}

void sub_007764A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007764A0u);

L_007764A0:
    PUSH32(esp, 0); /* 0x007764A0: push 0 */
    PUSH32(esp, 0x00798028u); /* 0x007764A2: push 0x798028 */
    eax = MEM32(ebp + (-0x10)); /* 0x007764A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007764AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007764AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007764B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007764B3: ret  */

}

void sub_007764B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007764B4u);

    goto L_007764B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007764B4:
    eax = 0x007E19B8u; /* 0x007764B4: mov eax, 0x7e19b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007764B9: jmp 0x75bfd2 */

}

void sub_007764C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007764C0u);

L_007764C0:
    PUSH32(esp, 0); /* 0x007764C0: push 0 */
    PUSH32(esp, 0x00798038u); /* 0x007764C2: push 0x798038 */
    eax = MEM32(ebp + (-0x10)); /* 0x007764C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007764CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007764CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007764D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007764D3: ret  */

}

void sub_007764D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007764D4u);

    goto L_007764D4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007764D4:
    eax = 0x007E19DCu; /* 0x007764D4: mov eax, 0x7e19dc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007764D9: jmp 0x75bfd2 */

}

void sub_007764E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007764E0u);

L_007764E0:
    PUSH32(esp, 0); /* 0x007764E0: push 0 */
    PUSH32(esp, 0x00798044u); /* 0x007764E2: push 0x798044 */
    eax = MEM32(ebp + (-0x10)); /* 0x007764E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007764EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007764EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007764F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007764F3: ret  */

}

void sub_007764F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007764F4u);

    goto L_007764F4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007764F4:
    eax = 0x007E1A00u; /* 0x007764F4: mov eax, 0x7e1a00 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007764F9: jmp 0x75bfd2 */

}

void sub_00776500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776500u);

L_00776500:
    PUSH32(esp, 0); /* 0x00776500: push 0 */
    PUSH32(esp, 0x00798054u); /* 0x00776502: push 0x798054 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776507: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077650A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077650B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776510: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776513: ret  */

}

void sub_00776514(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776514u);

    goto L_00776514;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776514:
    eax = 0x007E1A24u; /* 0x00776514: mov eax, 0x7e1a24 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776519: jmp 0x75bfd2 */

}

void sub_00776520(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776520u);

L_00776520:
    ecx = MEM32(ebp + (-0x904)); /* 0x00776520: mov ecx, dword ptr [ebp - 0x904] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776526: jmp 0x510d40 */

}

void sub_0077652B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077652Bu);

L_0077652B:
    ecx = MEM32(ebp + (-0x904)); /* 0x0077652B: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00776531: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00776534: jmp 0x4cbba0 */

}

void sub_00776539(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776539u);

L_00776539:
    ecx = MEM32(ebp + (-0x904)); /* 0x00776539: mov ecx, dword ptr [ebp - 0x904] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x120u; /* 0x0077653F: add ecx, 0x120 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00776545: jmp 0x49d870 */

}

void sub_0077654A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077654Au);

L_0077654A:
    ecx = ebp + (-0x8F0); /* 0x0077654A: lea ecx, [ebp - 0x8f0] */
    RECOMP_ITAIL(0x004017F0u); RECOMP_RETURN(); /* 0x00776550: jmp 0x4017f0 */

}

void sub_00776555(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776555u);

L_00776555:
    ecx = ebp + (-0x900); /* 0x00776555: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x0077655B: jmp 0x401800 */

}

void sub_00776560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776560u);

    goto L_00776560;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776560:
    eax = 0x007E1A68u; /* 0x00776560: mov eax, 0x7e1a68 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776565: jmp 0x75bfd2 */

}

void sub_00776570(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776570u);

L_00776570:
    PUSH32(esp, 0); /* 0x00776570: push 0 */
    PUSH32(esp, 0x007980F0u); /* 0x00776572: push 0x7980f0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776577: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077657A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077657B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776580: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776583: ret  */

}

void sub_00776584(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776584u);

    goto L_00776584;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776584:
    eax = 0x007E1A8Cu; /* 0x00776584: mov eax, 0x7e1a8c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776589: jmp 0x75bfd2 */

}

void sub_00776590(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776590u);

L_00776590:
    PUSH32(esp, 0); /* 0x00776590: push 0 */
    PUSH32(esp, 0x00798100u); /* 0x00776592: push 0x798100 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776597: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077659A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077659B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007765A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007765A3: ret  */

}

void sub_007765A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007765A4u);

    goto L_007765A4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007765A4:
    eax = 0x007E1AB0u; /* 0x007765A4: mov eax, 0x7e1ab0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007765A9: jmp 0x75bfd2 */

}

void sub_007765B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007765B0u);

L_007765B0:
    PUSH32(esp, 0); /* 0x007765B0: push 0 */
    PUSH32(esp, 0x00798114u); /* 0x007765B2: push 0x798114 */
    eax = MEM32(ebp + (-0x10)); /* 0x007765B7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007765BA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007765BB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007765C0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007765C3: ret  */

}

void sub_007765C4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007765C4u);

    goto L_007765C4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007765C4:
    eax = 0x007E1AD4u; /* 0x007765C4: mov eax, 0x7e1ad4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007765C9: jmp 0x75bfd2 */

}

void sub_007765D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007765D0u);

L_007765D0:
    PUSH32(esp, 0); /* 0x007765D0: push 0 */
    PUSH32(esp, 0x00798128u); /* 0x007765D2: push 0x798128 */
    eax = MEM32(ebp + (-0x10)); /* 0x007765D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007765DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007765DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007765E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007765E3: ret  */

}

void sub_007765E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007765E4u);

    goto L_007765E4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007765E4:
    eax = 0x007E1AF8u; /* 0x007765E4: mov eax, 0x7e1af8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007765E9: jmp 0x75bfd2 */

}

void sub_007765F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007765F0u);

L_007765F0:
    PUSH32(esp, 0); /* 0x007765F0: push 0 */
    PUSH32(esp, 0x00798218u); /* 0x007765F2: push 0x798218 */
    eax = MEM32(ebp + (-0x10)); /* 0x007765F7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007765FA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007765FB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776600: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776603: ret  */

}

void sub_00776604(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776604u);

    goto L_00776604;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776604:
    eax = 0x007E1B1Cu; /* 0x00776604: mov eax, 0x7e1b1c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776609: jmp 0x75bfd2 */

}

void sub_00776610(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776610u);

L_00776610:
    ecx = MEM32(ebp + (-0x40)); /* 0x00776610: mov ecx, dword ptr [ebp - 0x40] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00776613: jmp 0x510d40 */

}

void sub_00776618(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776618u);

L_00776618:
    ecx = MEM32(ebp + (-0x40)); /* 0x00776618: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x0077661B: add ecx, 0x5c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBAF0u); RECOMP_RETURN(); /* 0x0077661E: jmp 0x4cbaf0 */

}

void sub_00776623(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776623u);

L_00776623:
    ecx = MEM32(ebp + (-0x40)); /* 0x00776623: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1A4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1A4u; /* 0x00776626: add ecx, 0x1a4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x0077662C: jmp 0x4cbba0 */

}

void sub_00776631(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776631u);

L_00776631:
    ecx = MEM32(ebp + (-0x40)); /* 0x00776631: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x380u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x380u; /* 0x00776634: add ecx, 0x380 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077663A: jmp 0x4957a0 */

}

void sub_0077663F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077663Fu);

    goto L_0077663F;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077663F:
    eax = 0x007E1B58u; /* 0x0077663F: mov eax, 0x7e1b58 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776644: jmp 0x75bfd2 */

}

void sub_00776650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776650u);

L_00776650:
    PUSH32(esp, 0); /* 0x00776650: push 0 */
    PUSH32(esp, 0x00798274u); /* 0x00776652: push 0x798274 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776657: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077665A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077665B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776660: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776663: ret  */

}

void sub_00776664(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776664u);

    goto L_00776664;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776664:
    eax = 0x007E1B7Cu; /* 0x00776664: mov eax, 0x7e1b7c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776669: jmp 0x75bfd2 */

}

void sub_00776670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776670u);

L_00776670:
    PUSH32(esp, 0); /* 0x00776670: push 0 */
    PUSH32(esp, 0x0079829Cu); /* 0x00776672: push 0x79829c */
    eax = MEM32(ebp + (-0x10)); /* 0x00776677: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077667A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077667B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00776680: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00776683: ret  */

}

void sub_00776684(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776684u);

    goto L_00776684;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00776684:
    eax = 0x007E1BCCu; /* 0x00776684: mov eax, 0x7e1bcc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00776689: jmp 0x75bfd2 */

}

void sub_00776690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00776690u);

L_00776690:
    PUSH32(esp, 0); /* 0x00776690: push 0 */
    PUSH32(esp, 0x007982B0u); /* 0x00776692: push 0x7982b0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00776697: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077669A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077669B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007766A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007766A3: ret  */

}