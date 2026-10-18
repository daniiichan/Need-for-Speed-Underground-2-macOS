/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_007730D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007730D0u);

L_007730D0:
    PUSH32(esp, 0); /* 0x007730D0: push 0 */
    PUSH32(esp, 0x00793E44u); /* 0x007730D2: push 0x793e44 */
    eax = MEM32(ebp + (-0x10)); /* 0x007730D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007730DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007730DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007730E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007730E3: ret  */

}

void sub_007730E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007730E4u);

L_007730E4:
    PUSH32(esp, 0); /* 0x007730E4: push 0 */
    PUSH32(esp, 0x00793E38u); /* 0x007730E6: push 0x793e38 */
    eax = MEM32(ebp + (-0x10)); /* 0x007730EB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007730EE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007730EF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007730F4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007730F7: ret  */

}

void sub_007730F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007730F8u);

L_007730F8:
    PUSH32(esp, 0); /* 0x007730F8: push 0 */
    PUSH32(esp, 0x00793E2Cu); /* 0x007730FA: push 0x793e2c */
    eax = MEM32(ebp + (-0x10)); /* 0x007730FF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773102: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773103: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773108: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077310B: ret  */

}

void sub_0077310C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077310Cu);

L_0077310C:
    PUSH32(esp, 0); /* 0x0077310C: push 0 */
    PUSH32(esp, 0x00793E20u); /* 0x0077310E: push 0x793e20 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773113: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773116: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773117: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077311C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077311F: ret  */

}

void sub_00773120(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773120u);

L_00773120:
    PUSH32(esp, 0); /* 0x00773120: push 0 */
    PUSH32(esp, 0x00793E10u); /* 0x00773122: push 0x793e10 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773127: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077312A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077312B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773130: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773133: ret  */

}

void sub_00773134(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773134u);

L_00773134:
    PUSH32(esp, 0); /* 0x00773134: push 0 */
    PUSH32(esp, 0x00793E04u); /* 0x00773136: push 0x793e04 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077313B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077313E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077313F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773144: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773147: ret  */

}

void sub_00773148(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773148u);

L_00773148:
    PUSH32(esp, 0); /* 0x00773148: push 0 */
    PUSH32(esp, 0x00793DF8u); /* 0x0077314A: push 0x793df8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077314F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773152: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773153: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773158: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077315B: ret  */

}

void sub_0077315C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077315Cu);

L_0077315C:
    PUSH32(esp, 0); /* 0x0077315C: push 0 */
    PUSH32(esp, 0x00793DECu); /* 0x0077315E: push 0x793dec */
    eax = MEM32(ebp + (-0x10)); /* 0x00773163: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773166: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773167: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077316C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077316F: ret  */

}

void sub_00773170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773170u);

L_00773170:
    PUSH32(esp, 0); /* 0x00773170: push 0 */
    PUSH32(esp, 0x00793DECu); /* 0x00773172: push 0x793dec */
    eax = MEM32(ebp + (-0x10)); /* 0x00773177: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077317A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077317B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773180: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773183: ret  */

}

void sub_00773184(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773184u);

    goto L_00773184;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773184:
    eax = 0x007DF600u; /* 0x00773184: mov eax, 0x7df600 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773189: jmp 0x75bfd2 */

}

void sub_00773190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773190u);

L_00773190:
    PUSH32(esp, 0); /* 0x00773190: push 0 */
    PUSH32(esp, 0x00793FACu); /* 0x00773192: push 0x793fac */
    eax = MEM32(ebp + (-0x10)); /* 0x00773197: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077319A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077319B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007731A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007731A3: ret  */

}

void sub_007731A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007731A4u);

L_007731A4:
    PUSH32(esp, 0); /* 0x007731A4: push 0 */
    PUSH32(esp, 0x00793F9Cu); /* 0x007731A6: push 0x793f9c */
    eax = MEM32(ebp + (-0x10)); /* 0x007731AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007731AE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007731AF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007731B4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007731B7: ret  */

}

void sub_007731B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007731B8u);

L_007731B8:
    PUSH32(esp, 0); /* 0x007731B8: push 0 */
    PUSH32(esp, 0x00793F88u); /* 0x007731BA: push 0x793f88 */
    eax = MEM32(ebp + (-0x10)); /* 0x007731BF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007731C2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007731C3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007731C8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007731CB: ret  */

}

void sub_007731CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007731CCu);

L_007731CC:
    PUSH32(esp, 0); /* 0x007731CC: push 0 */
    PUSH32(esp, 0x00793F78u); /* 0x007731CE: push 0x793f78 */
    eax = MEM32(ebp + (-0x10)); /* 0x007731D3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007731D6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007731D7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007731DC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007731DF: ret  */

}

void sub_007731E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007731E0u);

L_007731E0:
    PUSH32(esp, 0); /* 0x007731E0: push 0 */
    PUSH32(esp, 0x00793F68u); /* 0x007731E2: push 0x793f68 */
    eax = MEM32(ebp + (-0x10)); /* 0x007731E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007731EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007731EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007731F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007731F3: ret  */

}

void sub_007731F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007731F4u);

L_007731F4:
    PUSH32(esp, 0); /* 0x007731F4: push 0 */
    PUSH32(esp, 0x00793F54u); /* 0x007731F6: push 0x793f54 */
    eax = MEM32(ebp + (-0x10)); /* 0x007731FB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007731FE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007731FF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773204: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773207: ret  */

}

void sub_00773208(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773208u);

L_00773208:
    PUSH32(esp, 0); /* 0x00773208: push 0 */
    PUSH32(esp, 0x00793F44u); /* 0x0077320A: push 0x793f44 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077320F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773212: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773213: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773218: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077321B: ret  */

}

void sub_0077321C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077321Cu);

L_0077321C:
    PUSH32(esp, 0); /* 0x0077321C: push 0 */
    PUSH32(esp, 0x00793F34u); /* 0x0077321E: push 0x793f34 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773223: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773226: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773227: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077322C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077322F: ret  */

}

void sub_00773230(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773230u);

L_00773230:
    PUSH32(esp, 0); /* 0x00773230: push 0 */
    PUSH32(esp, 0x00793F1Cu); /* 0x00773232: push 0x793f1c */
    eax = MEM32(ebp + (-0x10)); /* 0x00773237: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077323A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077323B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773240: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773243: ret  */

}

void sub_00773244(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773244u);

L_00773244:
    PUSH32(esp, 0); /* 0x00773244: push 0 */
    PUSH32(esp, 0x00793F0Cu); /* 0x00773246: push 0x793f0c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077324B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077324E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077324F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773254: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773257: ret  */

}

void sub_00773258(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773258u);

L_00773258:
    PUSH32(esp, 0); /* 0x00773258: push 0 */
    PUSH32(esp, 0x00793EFCu); /* 0x0077325A: push 0x793efc */
    eax = MEM32(ebp + (-0x10)); /* 0x0077325F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773262: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773263: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773268: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077326B: ret  */

}

void sub_0077326C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077326Cu);

L_0077326C:
    PUSH32(esp, 0); /* 0x0077326C: push 0 */
    PUSH32(esp, 0x00793EE8u); /* 0x0077326E: push 0x793ee8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773273: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773276: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773277: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077327C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077327F: ret  */

}

void sub_00773280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773280u);

L_00773280:
    PUSH32(esp, 0); /* 0x00773280: push 0 */
    PUSH32(esp, 0x00793ED8u); /* 0x00773282: push 0x793ed8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773287: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077328A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077328B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773290: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773293: ret  */

}

void sub_00773294(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773294u);

L_00773294:
    PUSH32(esp, 0); /* 0x00773294: push 0 */
    PUSH32(esp, 0x00793EC8u); /* 0x00773296: push 0x793ec8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077329B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077329E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077329F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007732A4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007732A7: ret  */

}

void sub_007732A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007732A8u);

L_007732A8:
    PUSH32(esp, 0); /* 0x007732A8: push 0 */
    PUSH32(esp, 0x00793EB8u); /* 0x007732AA: push 0x793eb8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007732AF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007732B2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007732B3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007732B8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007732BB: ret  */

}

void sub_007732BC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007732BCu);

L_007732BC:
    PUSH32(esp, 0); /* 0x007732BC: push 0 */
    PUSH32(esp, 0x00793EB0u); /* 0x007732BE: push 0x793eb0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007732C3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007732C6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007732C7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007732CC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007732CF: ret  */

}

void sub_007732D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007732D0u);

L_007732D0:
    PUSH32(esp, 0); /* 0x007732D0: push 0 */
    PUSH32(esp, 0x00793EA4u); /* 0x007732D2: push 0x793ea4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007732D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007732DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007732DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007732E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007732E3: ret  */

}

void sub_007732E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007732E4u);

L_007732E4:
    PUSH32(esp, 0); /* 0x007732E4: push 0 */
    PUSH32(esp, 0x00793E94u); /* 0x007732E6: push 0x793e94 */
    eax = MEM32(ebp + (-0x10)); /* 0x007732EB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007732EE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007732EF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007732F4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007732F7: ret  */

}

void sub_007732F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007732F8u);

L_007732F8:
    PUSH32(esp, 0); /* 0x007732F8: push 0 */
    PUSH32(esp, 0x00793E84u); /* 0x007732FA: push 0x793e84 */
    eax = MEM32(ebp + (-0x10)); /* 0x007732FF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773302: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773303: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773308: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077330B: ret  */

}

void sub_0077330C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077330Cu);

L_0077330C:
    PUSH32(esp, 0); /* 0x0077330C: push 0 */
    PUSH32(esp, 0x00793E74u); /* 0x0077330E: push 0x793e74 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773313: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773316: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773317: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077331C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077331F: ret  */

}

void sub_00773320(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773320u);

L_00773320:
    PUSH32(esp, 0); /* 0x00773320: push 0 */
    PUSH32(esp, 0x00793E6Cu); /* 0x00773322: push 0x793e6c */
    eax = MEM32(ebp + (-0x10)); /* 0x00773327: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077332A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077332B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773330: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773333: ret  */

}

void sub_00773334(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773334u);

L_00773334:
    PUSH32(esp, 0); /* 0x00773334: push 0 */
    PUSH32(esp, 0x00793E58u); /* 0x00773336: push 0x793e58 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077333B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077333E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077333F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773344: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773347: ret  */

}

void sub_00773348(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773348u);

L_00773348:
    PUSH32(esp, 0); /* 0x00773348: push 0 */
    PUSH32(esp, 0x00793E4Cu); /* 0x0077334A: push 0x793e4c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077334F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773352: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773353: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773358: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077335B: ret  */

}

void sub_0077335C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077335Cu);

    goto L_0077335C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077335C:
    eax = 0x007DF6D4u; /* 0x0077335C: mov eax, 0x7df6d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773361: jmp 0x75bfd2 */

}

void sub_00773370(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773370u);

L_00773370:
    PUSH32(esp, 0); /* 0x00773370: push 0 */
    PUSH32(esp, 0x00794028u); /* 0x00773372: push 0x794028 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773377: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077337A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077337B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773380: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773383: ret  */

}

void sub_00773384(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773384u);

L_00773384:
    PUSH32(esp, 0); /* 0x00773384: push 0 */
    PUSH32(esp, 0x00794018u); /* 0x00773386: push 0x794018 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077338B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077338E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077338F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773394: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773397: ret  */

}

void sub_00773398(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773398u);

L_00773398:
    PUSH32(esp, 0); /* 0x00773398: push 0 */
    PUSH32(esp, 0x00794008u); /* 0x0077339A: push 0x794008 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077339F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007733A2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007733A3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007733A8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007733AB: ret  */

}

void sub_007733AC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007733ACu);

L_007733AC:
    PUSH32(esp, 0); /* 0x007733AC: push 0 */
    PUSH32(esp, 0x00793FFCu); /* 0x007733AE: push 0x793ffc */
    eax = MEM32(ebp + (-0x10)); /* 0x007733B3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007733B6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007733B7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007733BC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007733BF: ret  */

}

void sub_007733C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007733C0u);

L_007733C0:
    PUSH32(esp, 0); /* 0x007733C0: push 0 */
    PUSH32(esp, 0x00793FECu); /* 0x007733C2: push 0x793fec */
    eax = MEM32(ebp + (-0x10)); /* 0x007733C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007733CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007733CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007733D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007733D3: ret  */

}

void sub_007733D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007733D4u);

L_007733D4:
    PUSH32(esp, 0); /* 0x007733D4: push 0 */
    PUSH32(esp, 0x00793FE0u); /* 0x007733D6: push 0x793fe0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007733DB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007733DE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007733DF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007733E4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007733E7: ret  */

}

void sub_007733E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007733E8u);

L_007733E8:
    PUSH32(esp, 0); /* 0x007733E8: push 0 */
    PUSH32(esp, 0x00793FD4u); /* 0x007733EA: push 0x793fd4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007733EF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007733F2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007733F3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007733F8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007733FB: ret  */

}

void sub_007733FC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007733FCu);

L_007733FC:
    PUSH32(esp, 0); /* 0x007733FC: push 0 */
    PUSH32(esp, 0x00793FC8u); /* 0x007733FE: push 0x793fc8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773403: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773406: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773407: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077340C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077340F: ret  */

}

void sub_00773410(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773410u);

    goto L_00773410;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773410:
    eax = 0x007DF730u; /* 0x00773410: mov eax, 0x7df730 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773415: jmp 0x75bfd2 */

}

void sub_00773420(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773420u);

L_00773420:
    PUSH32(esp, 0); /* 0x00773420: push 0 */
    PUSH32(esp, 0x007940E4u); /* 0x00773422: push 0x7940e4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773427: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077342A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077342B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773430: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773433: ret  */

}

void sub_00773434(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773434u);

L_00773434:
    PUSH32(esp, 0); /* 0x00773434: push 0 */
    PUSH32(esp, 0x007940D8u); /* 0x00773436: push 0x7940d8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077343B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077343E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077343F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773444: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773447: ret  */

}

void sub_00773448(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773448u);

L_00773448:
    PUSH32(esp, 0); /* 0x00773448: push 0 */
    PUSH32(esp, 0x007940C8u); /* 0x0077344A: push 0x7940c8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077344F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773452: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773453: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773458: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077345B: ret  */

}

void sub_0077345C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077345Cu);

L_0077345C:
    PUSH32(esp, 0); /* 0x0077345C: push 0 */
    PUSH32(esp, 0x007940B4u); /* 0x0077345E: push 0x7940b4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773463: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773466: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773467: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077346C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077346F: ret  */

}

void sub_00773470(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773470u);

L_00773470:
    PUSH32(esp, 0); /* 0x00773470: push 0 */
    PUSH32(esp, 0x007940A0u); /* 0x00773472: push 0x7940a0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773477: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077347A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077347B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773480: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773483: ret  */

}

void sub_00773484(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773484u);

L_00773484:
    PUSH32(esp, 0); /* 0x00773484: push 0 */
    PUSH32(esp, 0x00794090u); /* 0x00773486: push 0x794090 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077348B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077348E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077348F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773494: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773497: ret  */

}

void sub_00773498(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773498u);

L_00773498:
    PUSH32(esp, 0); /* 0x00773498: push 0 */
    PUSH32(esp, 0x00794084u); /* 0x0077349A: push 0x794084 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077349F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007734A2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007734A3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007734A8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007734AB: ret  */

}

void sub_007734AC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007734ACu);

    goto L_007734AC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007734AC:
    eax = 0x007DF7C0u; /* 0x007734AC: mov eax, 0x7df7c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007734B1: jmp 0x75bfd2 */

}

void sub_007734C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007734C0u);

L_007734C0:
    PUSH32(esp, 0); /* 0x007734C0: push 0 */
    PUSH32(esp, 0x00794448u); /* 0x007734C2: push 0x794448 */
    eax = MEM32(ebp + (-0x14)); /* 0x007734C7: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007734CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007734CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007734D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007734D3: ret  */

}

void sub_007734D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007734D4u);

L_007734D4:
    PUSH32(esp, 0); /* 0x007734D4: push 0 */
    PUSH32(esp, 0x0079443Cu); /* 0x007734D6: push 0x79443c */
    eax = MEM32(ebp + (-0x14)); /* 0x007734DB: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007734DE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007734DF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007734E4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007734E7: ret  */

}

void sub_007734E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007734E8u);

L_007734E8:
    PUSH32(esp, 0); /* 0x007734E8: push 0 */
    PUSH32(esp, 0x00794430u); /* 0x007734EA: push 0x794430 */
    eax = MEM32(ebp + (-0x14)); /* 0x007734EF: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007734F2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007734F3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007734F8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007734FB: ret  */

}

void sub_007734FC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007734FCu);

L_007734FC:
    PUSH32(esp, 0); /* 0x007734FC: push 0 */
    PUSH32(esp, 0x00794424u); /* 0x007734FE: push 0x794424 */
    eax = MEM32(ebp + (-0x14)); /* 0x00773503: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00773506: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773507: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077350C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077350F: ret  */

}

void sub_00773510(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773510u);

L_00773510:
    PUSH32(esp, 0); /* 0x00773510: push 0 */
    PUSH32(esp, 0x00794418u); /* 0x00773512: push 0x794418 */
    eax = MEM32(ebp + (-0x14)); /* 0x00773517: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077351A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077351B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773520: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773523: ret  */

}

void sub_00773524(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773524u);

L_00773524:
    PUSH32(esp, 0); /* 0x00773524: push 0 */
    PUSH32(esp, 0x0079440Cu); /* 0x00773526: push 0x79440c */
    eax = MEM32(ebp + (-0x14)); /* 0x0077352B: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077352E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077352F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773534: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773537: ret  */

}

void sub_00773538(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773538u);

L_00773538:
    PUSH32(esp, 0); /* 0x00773538: push 0 */
    PUSH32(esp, 0x00794400u); /* 0x0077353A: push 0x794400 */
    eax = MEM32(ebp + (-0x14)); /* 0x0077353F: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00773542: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773543: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773548: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077354B: ret  */

}

void sub_0077354C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077354Cu);

L_0077354C:
    PUSH32(esp, 0); /* 0x0077354C: push 0 */
    PUSH32(esp, 0x007943F8u); /* 0x0077354E: push 0x7943f8 */
    eax = MEM32(ebp + (-0x14)); /* 0x00773553: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00773556: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773557: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077355C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077355F: ret  */

}

void sub_00773560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773560u);

L_00773560:
    PUSH32(esp, 0); /* 0x00773560: push 0 */
    PUSH32(esp, 0x007943E8u); /* 0x00773562: push 0x7943e8 */
    eax = MEM32(ebp + (-0x14)); /* 0x00773567: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077356A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077356B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773570: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773573: ret  */

}

void sub_00773574(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773574u);

L_00773574:
    PUSH32(esp, 0); /* 0x00773574: push 0 */
    PUSH32(esp, 0x007943D8u); /* 0x00773576: push 0x7943d8 */
    eax = MEM32(ebp + (-0x14)); /* 0x0077357B: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077357E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077357F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773584: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773587: ret  */

}

void sub_00773588(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773588u);

L_00773588:
    PUSH32(esp, 0); /* 0x00773588: push 0 */
    PUSH32(esp, 0x007943CCu); /* 0x0077358A: push 0x7943cc */
    eax = MEM32(ebp + (-0x10)); /* 0x0077358F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773592: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773593: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773598: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077359B: ret  */

}

void sub_0077359C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077359Cu);

L_0077359C:
    PUSH32(esp, 0); /* 0x0077359C: push 0 */
    PUSH32(esp, 0x007943BCu); /* 0x0077359E: push 0x7943bc */
    eax = MEM32(ebp + (-0x10)); /* 0x007735A3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007735A6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007735A7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007735AC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007735AF: ret  */

}

void sub_007735B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007735B0u);

    goto L_007735B0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007735B0:
    eax = 0x007DF83Cu; /* 0x007735B0: mov eax, 0x7df83c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007735B5: jmp 0x75bfd2 */

}

void sub_007735C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007735C0u);

L_007735C0:
    PUSH32(esp, 0); /* 0x007735C0: push 0 */
    PUSH32(esp, 0x00794470u); /* 0x007735C2: push 0x794470 */
    eax = MEM32(ebp + (-0x10)); /* 0x007735C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007735CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007735CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007735D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007735D3: ret  */

}

void sub_007735D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007735D4u);

L_007735D4:
    PUSH32(esp, 0); /* 0x007735D4: push 0 */
    PUSH32(esp, 0x00794458u); /* 0x007735D6: push 0x794458 */
    eax = MEM32(ebp + (-0x10)); /* 0x007735DB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007735DE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007735DF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007735E4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007735E7: ret  */

}

void sub_007735E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007735E8u);

    goto L_007735E8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007735E8:
    eax = 0x007DF868u; /* 0x007735E8: mov eax, 0x7df868 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007735ED: jmp 0x75bfd2 */

}

void sub_00773600(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773600u);

L_00773600:
    PUSH32(esp, 0); /* 0x00773600: push 0 */
    PUSH32(esp, 0x00794580u); /* 0x00773602: push 0x794580 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773607: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077360A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077360B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773610: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773613: ret  */

}

void sub_00773614(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773614u);

L_00773614:
    PUSH32(esp, 0); /* 0x00773614: push 0 */
    PUSH32(esp, 0x00794574u); /* 0x00773616: push 0x794574 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077361B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077361E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077361F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773624: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773627: ret  */

}

void sub_00773628(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773628u);

L_00773628:
    PUSH32(esp, 0); /* 0x00773628: push 0 */
    PUSH32(esp, 0x00794568u); /* 0x0077362A: push 0x794568 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077362F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773632: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773633: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773638: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077363B: ret  */

}

void sub_0077363C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077363Cu);

    goto L_0077363C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077363C:
    eax = 0x007DF89Cu; /* 0x0077363C: mov eax, 0x7df89c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773641: jmp 0x75bfd2 */

}

void sub_00773650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773650u);

L_00773650:
    PUSH32(esp, 0); /* 0x00773650: push 0 */
    PUSH32(esp, 0x007945D4u); /* 0x00773652: push 0x7945d4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773657: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077365A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077365B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773660: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773663: ret  */

}

void sub_00773664(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773664u);

    goto L_00773664;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773664:
    eax = 0x007DF8C0u; /* 0x00773664: mov eax, 0x7df8c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773669: jmp 0x75bfd2 */

}

void sub_00773670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773670u);

L_00773670:
    PUSH32(esp, 0); /* 0x00773670: push 0 */
    PUSH32(esp, 0x00794620u); /* 0x00773672: push 0x794620 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773677: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077367A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077367B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773680: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773683: ret  */

}

void sub_00773684(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773684u);

    goto L_00773684;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773684:
    eax = 0x007DF8E4u; /* 0x00773684: mov eax, 0x7df8e4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773689: jmp 0x75bfd2 */

}

void sub_00773690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773690u);

L_00773690:
    PUSH32(esp, 0); /* 0x00773690: push 0 */
    PUSH32(esp, 0x00794658u); /* 0x00773692: push 0x794658 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773697: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077369A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077369B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007736A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007736A3: ret  */

}

void sub_007736A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007736A4u);

L_007736A4:
    PUSH32(esp, 0); /* 0x007736A4: push 0 */
    PUSH32(esp, 0x00794644u); /* 0x007736A6: push 0x794644 */
    eax = MEM32(ebp + (-0x10)); /* 0x007736AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007736AE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007736AF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007736B4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007736B7: ret  */

}

void sub_007736B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007736B8u);

L_007736B8:
    PUSH32(esp, 0); /* 0x007736B8: push 0 */
    PUSH32(esp, 0x0079462Cu); /* 0x007736BA: push 0x79462c */
    eax = MEM32(ebp + (-0x10)); /* 0x007736BF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007736C2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007736C3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007736C8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007736CB: ret  */

}

void sub_007736CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007736CCu);

    goto L_007736CC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007736CC:
    eax = 0x007DF918u; /* 0x007736CC: mov eax, 0x7df918 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007736D1: jmp 0x75bfd2 */

}

void sub_007736E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007736E0u);

L_007736E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007736E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007736E3: jmp 0x510d40 */

}

void sub_007736E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007736E8u);

L_007736E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007736E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x007736EB: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x007736EE: jmp 0x49d870 */

}

void sub_007736F3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007736F3u);

    goto L_007736F3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007736F3:
    eax = 0x007DF944u; /* 0x007736F3: mov eax, 0x7df944 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007736F8: jmp 0x75bfd2 */

}

void sub_00773700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773700u);

L_00773700:
    PUSH32(esp, 0); /* 0x00773700: push 0 */
    PUSH32(esp, 0x00794678u); /* 0x00773702: push 0x794678 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773707: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077370A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077370B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773710: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773713: ret  */

}

void sub_00773714(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773714u);

    goto L_00773714;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773714:
    eax = 0x007DF968u; /* 0x00773714: mov eax, 0x7df968 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773719: jmp 0x75bfd2 */

}

void sub_00773720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773720u);

L_00773720:
    PUSH32(esp, 0); /* 0x00773720: push 0 */
    PUSH32(esp, 0x00794800u); /* 0x00773722: push 0x794800 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773727: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077372A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077372B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773730: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773733: ret  */

}

void sub_00773734(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773734u);

L_00773734:
    PUSH32(esp, 0); /* 0x00773734: push 0 */
    PUSH32(esp, 0x007947E8u); /* 0x00773736: push 0x7947e8 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077373B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077373E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077373F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773744: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773747: ret  */

}

void sub_00773748(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773748u);

L_00773748:
    PUSH32(esp, 0); /* 0x00773748: push 0 */
    PUSH32(esp, 0x007947D0u); /* 0x0077374A: push 0x7947d0 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077374F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773752: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773753: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773758: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077375B: ret  */

}

void sub_0077375C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077375Cu);

    goto L_0077375C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077375C:
    eax = 0x007DF99Cu; /* 0x0077375C: mov eax, 0x7df99c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773761: jmp 0x75bfd2 */

}

void sub_00773770(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773770u);

L_00773770:
    PUSH32(esp, 0); /* 0x00773770: push 0 */
    PUSH32(esp, 0x00794814u); /* 0x00773772: push 0x794814 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773777: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077377A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077377B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773780: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773783: ret  */

}

void sub_00773784(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773784u);

    goto L_00773784;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773784:
    eax = 0x007DF9C0u; /* 0x00773784: mov eax, 0x7df9c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773789: jmp 0x75bfd2 */

}

void sub_00773790(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773790u);

L_00773790:
    PUSH32(esp, 0); /* 0x00773790: push 0 */
    PUSH32(esp, 0x00794884u); /* 0x00773792: push 0x794884 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773797: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077379A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077379B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007737A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007737A3: ret  */

}

void sub_007737A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007737A4u);

L_007737A4:
    PUSH32(esp, 0); /* 0x007737A4: push 0 */
    PUSH32(esp, 0x00794884u); /* 0x007737A6: push 0x794884 */
    eax = MEM32(ebp + (-0x10)); /* 0x007737AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007737AE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007737AF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007737B4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007737B7: ret  */

}

void sub_007737B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007737B8u);

    goto L_007737B8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007737B8:
    eax = 0x007DF9ECu; /* 0x007737B8: mov eax, 0x7df9ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007737BD: jmp 0x75bfd2 */

}

void sub_007737D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007737D0u);

L_007737D0:
    PUSH32(esp, 0); /* 0x007737D0: push 0 */
    PUSH32(esp, 0x00794AF8u); /* 0x007737D2: push 0x794af8 */
    eax = MEM32(ebp + (-0x10)); /* 0x007737D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007737DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007737DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007737E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007737E3: ret  */

}

void sub_007737E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007737E4u);

    goto L_007737E4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007737E4:
    eax = 0x007DFA10u; /* 0x007737E4: mov eax, 0x7dfa10 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007737E9: jmp 0x75bfd2 */

}

void sub_007737F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007737F0u);

L_007737F0:
    PUSH32(esp, 0); /* 0x007737F0: push 0 */
    PUSH32(esp, 0x00794B14u); /* 0x007737F2: push 0x794b14 */
    eax = MEM32(ebp + (-0x10)); /* 0x007737F7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007737FA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007737FB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773800: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773803: ret  */

}

void sub_00773804(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773804u);

    goto L_00773804;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773804:
    eax = 0x007DFA34u; /* 0x00773804: mov eax, 0x7dfa34 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773809: jmp 0x75bfd2 */

}

void sub_00773810(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773810u);

L_00773810:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773810: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CF650u); RECOMP_RETURN(); /* 0x00773813: jmp 0x4cf650 */

}

void sub_00773818(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773818u);

    goto L_00773818;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773818:
    eax = 0x007DF4A8u; /* 0x00773818: mov eax, 0x7df4a8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077381D: jmp 0x75bfd2 */

}

void sub_00773830(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773830u);

L_00773830:
    PUSH32(esp, 0); /* 0x00773830: push 0 */
    PUSH32(esp, 0x00794C88u); /* 0x00773832: push 0x794c88 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773837: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077383A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077383B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773840: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773843: ret  */

}

void sub_00773844(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773844u);

L_00773844:
    PUSH32(esp, 0); /* 0x00773844: push 0 */
    PUSH32(esp, 0x00794C70u); /* 0x00773846: push 0x794c70 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077384B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077384E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077384F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773854: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773857: ret  */

}

void sub_00773858(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773858u);

L_00773858:
    PUSH32(esp, 0); /* 0x00773858: push 0 */
    PUSH32(esp, 0x00794C5Cu); /* 0x0077385A: push 0x794c5c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077385F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773862: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773863: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773868: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077386B: ret  */

}

void sub_0077386C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077386Cu);

L_0077386C:
    PUSH32(esp, 0); /* 0x0077386C: push 0 */
    PUSH32(esp, 0x00794C44u); /* 0x0077386E: push 0x794c44 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773873: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773876: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773877: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077387C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077387F: ret  */

}

void sub_00773880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773880u);

    goto L_00773880;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773880:
    eax = 0x007DFA70u; /* 0x00773880: mov eax, 0x7dfa70 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773885: jmp 0x75bfd2 */

}

void sub_00773890(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773890u);

L_00773890:
    ecx = ebp + (-0x900); /* 0x00773890: lea ecx, [ebp - 0x900] */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00773896: jmp 0x401800 */

}

void sub_0077389B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077389Bu);

    goto L_0077389B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077389B:
    eax = 0x007DFA94u; /* 0x0077389B: mov eax, 0x7dfa94 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007738A0: jmp 0x75bfd2 */

}

void sub_007738B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007738B0u);

L_007738B0:
    PUSH32(esp, 0); /* 0x007738B0: push 0 */
    PUSH32(esp, 0x00794E58u); /* 0x007738B2: push 0x794e58 */
    eax = MEM32(ebp + (-0x10)); /* 0x007738B7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007738BA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007738BB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007738C0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007738C3: ret  */

}

void sub_007738C4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007738C4u);

L_007738C4:
    PUSH32(esp, 0); /* 0x007738C4: push 0 */
    PUSH32(esp, 0x00794E48u); /* 0x007738C6: push 0x794e48 */
    eax = MEM32(ebp + (-0x10)); /* 0x007738CB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007738CE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007738CF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007738D4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007738D7: ret  */

}

void sub_007738D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007738D8u);

L_007738D8:
    PUSH32(esp, 0); /* 0x007738D8: push 0 */
    PUSH32(esp, 0x00794E34u); /* 0x007738DA: push 0x794e34 */
    eax = MEM32(ebp + (-0x10)); /* 0x007738DF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007738E2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007738E3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007738E8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007738EB: ret  */

}

void sub_007738EC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007738ECu);

L_007738EC:
    PUSH32(esp, 0); /* 0x007738EC: push 0 */
    PUSH32(esp, 0x00794E24u); /* 0x007738EE: push 0x794e24 */
    eax = MEM32(ebp + (-0x10)); /* 0x007738F3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007738F6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007738F7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007738FC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007738FF: ret  */

}

void sub_00773900(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773900u);

L_00773900:
    PUSH32(esp, 0); /* 0x00773900: push 0 */
    PUSH32(esp, 0x00794E14u); /* 0x00773902: push 0x794e14 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773907: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077390A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077390B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773910: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773913: ret  */

}

void sub_00773914(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773914u);

    goto L_00773914;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773914:
    eax = 0x007DFAFCu; /* 0x00773914: mov eax, 0x7dfafc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773919: jmp 0x75bfd2 */

}

void sub_00773920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773920u);

L_00773920:
    PUSH32(esp, 0); /* 0x00773920: push 0 */
    PUSH32(esp, 0x00794F88u); /* 0x00773922: push 0x794f88 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773927: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077392A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077392B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773930: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773933: ret  */

}

void sub_00773934(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773934u);

L_00773934:
    PUSH32(esp, 0); /* 0x00773934: push 0 */
    PUSH32(esp, 0x00794F74u); /* 0x00773936: push 0x794f74 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077393B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077393E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077393F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773944: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773947: ret  */

}

void sub_00773948(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773948u);

L_00773948:
    PUSH32(esp, 0); /* 0x00773948: push 0 */
    PUSH32(esp, 0x00794F60u); /* 0x0077394A: push 0x794f60 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077394F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773952: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773953: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773958: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077395B: ret  */

}

void sub_0077395C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077395Cu);

    goto L_0077395C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077395C:
    eax = 0x007DFB30u; /* 0x0077395C: mov eax, 0x7dfb30 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773961: jmp 0x75bfd2 */

}

void sub_00773970(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773970u);

L_00773970:
    PUSH32(esp, 0); /* 0x00773970: push 0 */
    PUSH32(esp, 0x007950A0u); /* 0x00773972: push 0x7950a0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773977: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077397A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077397B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773980: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773983: ret  */

}

void sub_00773984(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773984u);

L_00773984:
    PUSH32(esp, 0); /* 0x00773984: push 0 */
    PUSH32(esp, 0x00795094u); /* 0x00773986: push 0x795094 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077398B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077398E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077398F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773994: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773997: ret  */

}

void sub_00773998(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773998u);

L_00773998:
    PUSH32(esp, 0); /* 0x00773998: push 0 */
    PUSH32(esp, 0x00795080u); /* 0x0077399A: push 0x795080 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077399F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007739A2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007739A3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007739A8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007739AB: ret  */

}

void sub_007739AC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007739ACu);

L_007739AC:
    PUSH32(esp, 0); /* 0x007739AC: push 0 */
    PUSH32(esp, 0x00795070u); /* 0x007739AE: push 0x795070 */
    eax = MEM32(ebp + (-0x10)); /* 0x007739B3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007739B6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007739B7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007739BC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007739BF: ret  */

}

void sub_007739C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007739C0u);

L_007739C0:
    PUSH32(esp, 0); /* 0x007739C0: push 0 */
    PUSH32(esp, 0x00795060u); /* 0x007739C2: push 0x795060 */
    eax = MEM32(ebp + (-0x10)); /* 0x007739C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007739CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007739CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007739D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007739D3: ret  */

}

void sub_007739D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007739D4u);

L_007739D4:
    PUSH32(esp, 0); /* 0x007739D4: push 0 */
    PUSH32(esp, 0x00795054u); /* 0x007739D6: push 0x795054 */
    eax = MEM32(ebp + (-0x10)); /* 0x007739DB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007739DE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007739DF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007739E4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007739E7: ret  */

}

void sub_007739E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007739E8u);

L_007739E8:
    PUSH32(esp, 0); /* 0x007739E8: push 0 */
    PUSH32(esp, 0x00795044u); /* 0x007739EA: push 0x795044 */
    eax = MEM32(ebp + (-0x10)); /* 0x007739EF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007739F2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007739F3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007739F8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007739FB: ret  */

}

void sub_007739FC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007739FCu);

    goto L_007739FC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007739FC:
    eax = 0x007DFB84u; /* 0x007739FC: mov eax, 0x7dfb84 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773A01: jmp 0x75bfd2 */

}

void sub_00773A10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A10u);

L_00773A10:
    eax = MEM32(ebp + (-0x90)); /* 0x00773A10: mov eax, dword ptr [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x00773A16: push eax */
    RECOMP_CALL(sub_00575630); /* 0x00773A17: call 0x575630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00773A1C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773A1D: ret  */

}

void sub_00773A1E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A1Eu);

    goto L_00773A1E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773A1E:
    eax = 0x007DFBA8u; /* 0x00773A1E: mov eax, 0x7dfba8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773A23: jmp 0x75bfd2 */

}

void sub_00773A30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A30u);

L_00773A30:
    ecx = MEM32(ebp + (-0x30)); /* 0x00773A30: mov ecx, dword ptr [ebp - 0x30] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00773A33: jmp 0x510d40 */

}

void sub_00773A38(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A38u);

    goto L_00773A38;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773A38:
    eax = 0x007DFAB8u; /* 0x00773A38: mov eax, 0x7dfab8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773A3D: jmp 0x75bfd2 */

}

void sub_00773A50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A50u);

L_00773A50:
    PUSH32(esp, 0); /* 0x00773A50: push 0 */
    PUSH32(esp, 0x0079546Cu); /* 0x00773A52: push 0x79546c */
    eax = MEM32(ebp + (-0x10)); /* 0x00773A57: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773A5A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773A5B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773A60: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773A63: ret  */

}

void sub_00773A64(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A64u);

    goto L_00773A64;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773A64:
    eax = 0x007DFBCCu; /* 0x00773A64: mov eax, 0x7dfbcc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773A69: jmp 0x75bfd2 */

}

void sub_00773A70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A70u);

L_00773A70:
    PUSH32(esp, 0); /* 0x00773A70: push 0 */
    PUSH32(esp, 0x007954A0u); /* 0x00773A72: push 0x7954a0 */
    eax = MEM32(ebp + (-0x30)); /* 0x00773A77: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x00773A7A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773A7B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773A80: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773A83: ret  */

}

void sub_00773A84(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A84u);

    goto L_00773A84;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773A84:
    eax = 0x007DFBF0u; /* 0x00773A84: mov eax, 0x7dfbf0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773A89: jmp 0x75bfd2 */

}

void sub_00773A90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A90u);

L_00773A90:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773A90: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00773A93: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x00773A96: jmp 0x4903b0 */

}

void sub_00773A9B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773A9Bu);

L_00773A9B:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773A9B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x00773A9E: add ecx, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x00773AA1: jmp 0x4903b0 */

}

void sub_00773AA6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773AA6u);

    goto L_00773AA6;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773AA6:
    eax = 0x007DFC1Cu; /* 0x00773AA6: mov eax, 0x7dfc1c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773AAB: jmp 0x75bfd2 */

}

void sub_00773AB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773AB0u);

L_00773AB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773AB0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00773AB3: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x00773AB6: jmp 0x4903b0 */

}

void sub_00773ABB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773ABBu);

L_00773ABB:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773ABB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x00773ABE: add ecx, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x00773AC1: jmp 0x4903b0 */

}

void sub_00773AC6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773AC6u);

L_00773AC6:
    PUSH32(esp, 0x004903B0u); /* 0x00773AC6: push 0x4903b0 */
    PUSH32(esp, 3); /* 0x00773ACB: push 3 */
    PUSH32(esp, 0x18u); /* 0x00773ACD: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773ACF: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x34u; /* 0x00773AD2: add eax, 0x34 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00773AD5: push eax */
    RECOMP_CALL(sub_0075C401); /* 0x00773AD6: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773ADB: ret  */

}

void sub_00773ADC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773ADCu);

L_00773ADC:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773ADC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7Cu; /* 0x00773ADF: add ecx, 0x7c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x00773AE2: jmp 0x4903b0 */

}

void sub_00773AE7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773AE7u);

    goto L_00773AE7;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773AE7:
    eax = 0x007DFC58u; /* 0x00773AE7: mov eax, 0x7dfc58 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773AEC: jmp 0x75bfd2 */

}

void sub_00773B00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B00u);

L_00773B00:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773B00: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00773B03: jmp 0x510d40 */

}

void sub_00773B08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B08u);

L_00773B08:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773B08: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x6Cu; /* 0x00773B0B: add ecx, 0x6c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004C19E0u); RECOMP_RETURN(); /* 0x00773B0E: jmp 0x4c19e0 */

}

void sub_00773B13(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B13u);

L_00773B13:
    ecx = MEM32(ebp + (-0x10)); /* 0x00773B13: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x23Cu; /* 0x00773B16: add ecx, 0x23c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004C1720u); RECOMP_RETURN(); /* 0x00773B1C: jmp 0x4c1720 */

}

void sub_00773B21(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B21u);

    goto L_00773B21;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773B21:
    eax = 0x007DFC8Cu; /* 0x00773B21: mov eax, 0x7dfc8c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773B26: jmp 0x75bfd2 */

}

void sub_00773B30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B30u);

L_00773B30:
    PUSH32(esp, 0); /* 0x00773B30: push 0 */
    PUSH32(esp, 0x00795574u); /* 0x00773B32: push 0x795574 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773B37: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773B3A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773B3B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773B40: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773B43: ret  */

}

void sub_00773B44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B44u);

L_00773B44:
    PUSH32(esp, 0); /* 0x00773B44: push 0 */
    PUSH32(esp, 0x00795574u); /* 0x00773B46: push 0x795574 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773B4B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773B4E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773B4F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773B54: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773B57: ret  */

}

void sub_00773B58(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B58u);

L_00773B58:
    PUSH32(esp, 0); /* 0x00773B58: push 0 */
    PUSH32(esp, 0x00795564u); /* 0x00773B5A: push 0x795564 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773B5F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773B62: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773B63: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773B68: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773B6B: ret  */

}

void sub_00773B6C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B6Cu);

L_00773B6C:
    PUSH32(esp, 0); /* 0x00773B6C: push 0 */
    PUSH32(esp, 0x00795550u); /* 0x00773B6E: push 0x795550 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773B73: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773B76: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773B77: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773B7C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773B7F: ret  */

}

void sub_00773B80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B80u);

L_00773B80:
    PUSH32(esp, 0); /* 0x00773B80: push 0 */
    PUSH32(esp, 0x00795544u); /* 0x00773B82: push 0x795544 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773B87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773B8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773B8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773B90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773B93: ret  */

}

void sub_00773B94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773B94u);

L_00773B94:
    PUSH32(esp, 0); /* 0x00773B94: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773B96: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773B9B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773B9E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773B9F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773BA4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773BA7: ret  */

}

void sub_00773BA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773BA8u);

L_00773BA8:
    PUSH32(esp, 0); /* 0x00773BA8: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773BAA: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773BAF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773BB2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773BB3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773BB8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773BBB: ret  */

}

void sub_00773BBC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773BBCu);

L_00773BBC:
    PUSH32(esp, 0); /* 0x00773BBC: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773BBE: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773BC3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773BC6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773BC7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773BCC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773BCF: ret  */

}

void sub_00773BD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773BD0u);

    goto L_00773BD0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773BD0:
    eax = 0x007DFCE8u; /* 0x00773BD0: mov eax, 0x7dfce8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773BD5: jmp 0x75bfd2 */

}

void sub_00773BE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773BE0u);

L_00773BE0:
    PUSH32(esp, 0); /* 0x00773BE0: push 0 */
    PUSH32(esp, 0x007955C0u); /* 0x00773BE2: push 0x7955c0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773BE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773BEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773BEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773BF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773BF3: ret  */

}

void sub_00773BF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773BF4u);

L_00773BF4:
    PUSH32(esp, 0); /* 0x00773BF4: push 0 */
    PUSH32(esp, 0x007955B0u); /* 0x00773BF6: push 0x7955b0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773BFB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773BFE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773BFF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C04: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C07: ret  */

}

void sub_00773C08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C08u);

L_00773C08:
    PUSH32(esp, 0); /* 0x00773C08: push 0 */
    PUSH32(esp, 0x007955A0u); /* 0x00773C0A: push 0x7955a0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C0F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C12: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C13: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C18: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C1B: ret  */

}

void sub_00773C1C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C1Cu);

L_00773C1C:
    PUSH32(esp, 0); /* 0x00773C1C: push 0 */
    PUSH32(esp, 0x00795588u); /* 0x00773C1E: push 0x795588 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C23: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C26: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C27: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C2C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C2F: ret  */

}

void sub_00773C30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C30u);

L_00773C30:
    PUSH32(esp, 0); /* 0x00773C30: push 0 */
    PUSH32(esp, 0x00795550u); /* 0x00773C32: push 0x795550 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C37: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C3A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C3B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C40: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C43: ret  */

}

void sub_00773C44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C44u);

L_00773C44:
    PUSH32(esp, 0); /* 0x00773C44: push 0 */
    PUSH32(esp, 0x00795544u); /* 0x00773C46: push 0x795544 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C4B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C4E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C4F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C54: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C57: ret  */

}

void sub_00773C58(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C58u);

L_00773C58:
    PUSH32(esp, 0); /* 0x00773C58: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773C5A: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C5F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C62: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C63: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C68: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C6B: ret  */

}

void sub_00773C6C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C6Cu);

L_00773C6C:
    PUSH32(esp, 0); /* 0x00773C6C: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773C6E: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C73: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C76: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C77: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C7C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C7F: ret  */

}

void sub_00773C80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C80u);

L_00773C80:
    PUSH32(esp, 0); /* 0x00773C80: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773C82: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773C90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773C93: ret  */

}

void sub_00773C94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773C94u);

L_00773C94:
    PUSH32(esp, 0); /* 0x00773C94: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773C96: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773C9B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773C9E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773C9F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773CA4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773CA7: ret  */

}

void sub_00773CA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773CA8u);

L_00773CA8:
    PUSH32(esp, 0); /* 0x00773CA8: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773CAA: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773CAF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773CB2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773CB3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773CB8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773CBB: ret  */

}

void sub_00773CBC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773CBCu);

L_00773CBC:
    PUSH32(esp, 0); /* 0x00773CBC: push 0 */
    PUSH32(esp, 0x00795530u); /* 0x00773CBE: push 0x795530 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773CC3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773CC6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773CC7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773CCC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773CCF: ret  */

}

void sub_00773CD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773CD0u);

    goto L_00773CD0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773CD0:
    eax = 0x007DFD64u; /* 0x00773CD0: mov eax, 0x7dfd64 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773CD5: jmp 0x75bfd2 */

}

void sub_00773CE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773CE0u);

L_00773CE0:
    PUSH32(esp, 0); /* 0x00773CE0: push 0 */
    PUSH32(esp, 0x00793E44u); /* 0x00773CE2: push 0x793e44 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773CE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773CEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773CEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773CF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773CF3: ret  */

}

void sub_00773CF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773CF4u);

L_00773CF4:
    PUSH32(esp, 0); /* 0x00773CF4: push 0 */
    PUSH32(esp, 0x00793E38u); /* 0x00773CF6: push 0x793e38 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773CFB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773CFE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773CFF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773D04: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773D07: ret  */

}

void sub_00773D08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D08u);

L_00773D08:
    PUSH32(esp, 0); /* 0x00773D08: push 0 */
    PUSH32(esp, 0x00793E2Cu); /* 0x00773D0A: push 0x793e2c */
    eax = MEM32(ebp + (-0x10)); /* 0x00773D0F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773D12: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773D13: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773D18: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773D1B: ret  */

}

void sub_00773D1C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D1Cu);

L_00773D1C:
    PUSH32(esp, 0); /* 0x00773D1C: push 0 */
    PUSH32(esp, 0x00793E20u); /* 0x00773D1E: push 0x793e20 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773D23: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773D26: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773D27: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773D2C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773D2F: ret  */

}

void sub_00773D30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D30u);

    goto L_00773D30;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773D30:
    eax = 0x007DFDA0u; /* 0x00773D30: mov eax, 0x7dfda0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773D35: jmp 0x75bfd2 */

}

void sub_00773D40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D40u);

L_00773D40:
    PUSH32(esp, 0); /* 0x00773D40: push 0 */
    PUSH32(esp, 0x00794028u); /* 0x00773D42: push 0x794028 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773D47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773D4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773D4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773D50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773D53: ret  */

}

void sub_00773D54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D54u);

L_00773D54:
    PUSH32(esp, 0); /* 0x00773D54: push 0 */
    PUSH32(esp, 0x00794018u); /* 0x00773D56: push 0x794018 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773D5B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773D5E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773D5F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773D64: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773D67: ret  */

}

void sub_00773D68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D68u);

L_00773D68:
    PUSH32(esp, 0); /* 0x00773D68: push 0 */
    PUSH32(esp, 0x00794008u); /* 0x00773D6A: push 0x794008 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773D6F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773D72: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773D73: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773D78: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773D7B: ret  */

}

void sub_00773D7C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D7Cu);

L_00773D7C:
    PUSH32(esp, 0); /* 0x00773D7C: push 0 */
    PUSH32(esp, 0x00793FFCu); /* 0x00773D7E: push 0x793ffc */
    eax = MEM32(ebp + (-0x10)); /* 0x00773D83: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773D86: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773D87: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773D8C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773D8F: ret  */

}

void sub_00773D90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773D90u);

L_00773D90:
    PUSH32(esp, 0); /* 0x00773D90: push 0 */
    PUSH32(esp, 0x00793FECu); /* 0x00773D92: push 0x793fec */
    eax = MEM32(ebp + (-0x10)); /* 0x00773D97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773D9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773D9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773DA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773DA3: ret  */

}

void sub_00773DA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773DA4u);

L_00773DA4:
    PUSH32(esp, 0); /* 0x00773DA4: push 0 */
    PUSH32(esp, 0x00795634u); /* 0x00773DA6: push 0x795634 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773DAB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773DAE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773DAF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773DB4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773DB7: ret  */

}

void sub_00773DB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773DB8u);

L_00773DB8:
    PUSH32(esp, 0); /* 0x00773DB8: push 0 */
    PUSH32(esp, 0x00793FD4u); /* 0x00773DBA: push 0x793fd4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773DBF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773DC2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773DC3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773DC8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773DCB: ret  */

}

void sub_00773DCC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773DCCu);

    goto L_00773DCC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773DCC:
    eax = 0x007DFDF4u; /* 0x00773DCC: mov eax, 0x7dfdf4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773DD1: jmp 0x75bfd2 */

}

void sub_00773DE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773DE0u);

L_00773DE0:
    PUSH32(esp, 0); /* 0x00773DE0: push 0 */
    PUSH32(esp, 0x00794074u); /* 0x00773DE2: push 0x794074 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773DE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773DEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773DEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773DF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773DF3: ret  */

}

void sub_00773DF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773DF4u);

L_00773DF4:
    PUSH32(esp, 0); /* 0x00773DF4: push 0 */
    PUSH32(esp, 0x00794060u); /* 0x00773DF6: push 0x794060 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773DFB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773DFE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773DFF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773E04: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773E07: ret  */

}

void sub_00773E08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E08u);

L_00773E08:
    PUSH32(esp, 0); /* 0x00773E08: push 0 */
    PUSH32(esp, 0x00794048u); /* 0x00773E0A: push 0x794048 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773E0F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773E12: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773E13: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773E18: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773E1B: ret  */

}

void sub_00773E1C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E1Cu);

L_00773E1C:
    PUSH32(esp, 0); /* 0x00773E1C: push 0 */
    PUSH32(esp, 0x00794034u); /* 0x00773E1E: push 0x794034 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773E23: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773E26: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773E27: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773E2C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773E2F: ret  */

}

void sub_00773E30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E30u);

    goto L_00773E30;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773E30:
    eax = 0x007DF76Cu; /* 0x00773E30: mov eax, 0x7df76c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773E35: jmp 0x75bfd2 */

}

void sub_00773E40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E40u);

L_00773E40:
    PUSH32(esp, 0); /* 0x00773E40: push 0 */
    PUSH32(esp, 0x007940B4u); /* 0x00773E42: push 0x7940b4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773E47: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773E4A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773E4B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773E50: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773E53: ret  */

}

void sub_00773E54(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E54u);

L_00773E54:
    PUSH32(esp, 0); /* 0x00773E54: push 0 */
    PUSH32(esp, 0x007940E4u); /* 0x00773E56: push 0x7940e4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773E5B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773E5E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773E5F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773E64: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773E67: ret  */

}

void sub_00773E68(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E68u);

L_00773E68:
    PUSH32(esp, 0); /* 0x00773E68: push 0 */
    PUSH32(esp, 0x007940D8u); /* 0x00773E6A: push 0x7940d8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773E6F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773E72: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773E73: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773E78: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773E7B: ret  */

}

void sub_00773E7C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E7Cu);

L_00773E7C:
    PUSH32(esp, 0); /* 0x00773E7C: push 0 */
    PUSH32(esp, 0x007940C8u); /* 0x00773E7E: push 0x7940c8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773E83: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773E86: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773E87: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773E8C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773E8F: ret  */

}

void sub_00773E90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773E90u);

L_00773E90:
    PUSH32(esp, 0); /* 0x00773E90: push 0 */
    PUSH32(esp, 0x007940A0u); /* 0x00773E92: push 0x7940a0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773E97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773E9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773E9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773EA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773EA3: ret  */

}

void sub_00773EA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773EA4u);

L_00773EA4:
    PUSH32(esp, 0); /* 0x00773EA4: push 0 */
    PUSH32(esp, 0x00794090u); /* 0x00773EA6: push 0x794090 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773EAB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773EAE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773EAF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773EB4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773EB7: ret  */

}

void sub_00773EB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773EB8u);

L_00773EB8:
    PUSH32(esp, 0); /* 0x00773EB8: push 0 */
    PUSH32(esp, 0x00795650u); /* 0x00773EBA: push 0x795650 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773EBF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773EC2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773EC3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773EC8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773ECB: ret  */

}

void sub_00773ECC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773ECCu);

    goto L_00773ECC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773ECC:
    eax = 0x007DFE48u; /* 0x00773ECC: mov eax, 0x7dfe48 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773ED1: jmp 0x75bfd2 */

}

void sub_00773EE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773EE0u);

L_00773EE0:
    PUSH32(esp, 0); /* 0x00773EE0: push 0 */
    PUSH32(esp, 0x00795904u); /* 0x00773EE2: push 0x795904 */
    eax = MEM32(ebp + (-0x14)); /* 0x00773EE7: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00773EEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773EEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773EF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773EF3: ret  */

}

void sub_00773EF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773EF4u);

L_00773EF4:
    PUSH32(esp, 0); /* 0x00773EF4: push 0 */
    PUSH32(esp, 0x007958F8u); /* 0x00773EF6: push 0x7958f8 */
    eax = MEM32(ebp + (-0x14)); /* 0x00773EFB: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00773EFE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773EFF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F04: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F07: ret  */

}

void sub_00773F08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F08u);

L_00773F08:
    PUSH32(esp, 0); /* 0x00773F08: push 0 */
    PUSH32(esp, 0x007958ECu); /* 0x00773F0A: push 0x7958ec */
    eax = MEM32(ebp + (-0x14)); /* 0x00773F0F: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00773F12: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F13: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F18: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F1B: ret  */

}

void sub_00773F1C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F1Cu);

L_00773F1C:
    PUSH32(esp, 0); /* 0x00773F1C: push 0 */
    PUSH32(esp, 0x007943CCu); /* 0x00773F1E: push 0x7943cc */
    eax = MEM32(ebp + (-0x10)); /* 0x00773F23: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773F26: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F27: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F2C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F2F: ret  */

}

void sub_00773F30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F30u);

L_00773F30:
    PUSH32(esp, 0); /* 0x00773F30: push 0 */
    PUSH32(esp, 0x007958E0u); /* 0x00773F32: push 0x7958e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773F37: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773F3A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F3B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F40: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F43: ret  */

}

void sub_00773F44(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F44u);

L_00773F44:
    PUSH32(esp, 0); /* 0x00773F44: push 0 */
    PUSH32(esp, 0x007958D4u); /* 0x00773F46: push 0x7958d4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773F4B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773F4E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F4F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F54: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F57: ret  */

}

void sub_00773F58(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F58u);

L_00773F58:
    PUSH32(esp, 0); /* 0x00773F58: push 0 */
    PUSH32(esp, 0x007958C8u); /* 0x00773F5A: push 0x7958c8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773F5F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773F62: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F63: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F68: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F6B: ret  */

}

void sub_00773F6C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F6Cu);

L_00773F6C:
    PUSH32(esp, 0); /* 0x00773F6C: push 0 */
    PUSH32(esp, 0x007958B8u); /* 0x00773F6E: push 0x7958b8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773F73: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773F76: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F77: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F7C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F7F: ret  */

}

void sub_00773F80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F80u);

L_00773F80:
    PUSH32(esp, 0); /* 0x00773F80: push 0 */
    PUSH32(esp, 0x007958A8u); /* 0x00773F82: push 0x7958a8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773F87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773F8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773F90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773F93: ret  */

}

void sub_00773F94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773F94u);

L_00773F94:
    PUSH32(esp, 0); /* 0x00773F94: push 0 */
    PUSH32(esp, 0x0079589Cu); /* 0x00773F96: push 0x79589c */
    eax = MEM32(ebp + (-0x10)); /* 0x00773F9B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773F9E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773F9F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773FA4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773FA7: ret  */

}

void sub_00773FA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773FA8u);

    goto L_00773FA8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773FA8:
    eax = 0x007DFEB4u; /* 0x00773FA8: mov eax, 0x7dfeb4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773FAD: jmp 0x75bfd2 */

}

void sub_00773FC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773FC0u);

L_00773FC0:
    PUSH32(esp, 0); /* 0x00773FC0: push 0 */
    PUSH32(esp, 0x00795918u); /* 0x00773FC2: push 0x795918 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773FC7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773FCA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773FCB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773FD0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773FD3: ret  */

}

void sub_00773FD4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773FD4u);

    goto L_00773FD4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773FD4:
    eax = 0x007DFED8u; /* 0x00773FD4: mov eax, 0x7dfed8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773FD9: jmp 0x75bfd2 */

}

void sub_00773FE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773FE0u);

L_00773FE0:
    PUSH32(esp, 0); /* 0x00773FE0: push 0 */
    PUSH32(esp, 0x00795954u); /* 0x00773FE2: push 0x795954 */
    eax = MEM32(ebp + (-0x10)); /* 0x00773FE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00773FEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00773FEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00773FF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00773FF3: ret  */

}

void sub_00773FF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00773FF4u);

    goto L_00773FF4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00773FF4:
    eax = 0x007DFEFCu; /* 0x00773FF4: mov eax, 0x7dfefc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00773FF9: jmp 0x75bfd2 */

}

void sub_00774000(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774000u);

L_00774000:
    PUSH32(esp, 0); /* 0x00774000: push 0 */
    PUSH32(esp, 0x00795974u); /* 0x00774002: push 0x795974 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774007: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077400A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077400B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774010: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774013: ret  */

}

void sub_00774014(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774014u);

    goto L_00774014;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774014:
    eax = 0x007DFF20u; /* 0x00774014: mov eax, 0x7dff20 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774019: jmp 0x75bfd2 */

}

void sub_00774020(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774020u);

L_00774020:
    PUSH32(esp, 0); /* 0x00774020: push 0 */
    PUSH32(esp, 0x00795A14u); /* 0x00774022: push 0x795a14 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774027: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077402A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077402B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774030: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774033: ret  */

}

void sub_00774034(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774034u);

L_00774034:
    PUSH32(esp, 0); /* 0x00774034: push 0 */
    PUSH32(esp, 0x00795A08u); /* 0x00774036: push 0x795a08 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077403B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077403E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077403F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774044: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774047: ret  */

}

void sub_00774048(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774048u);

L_00774048:
    PUSH32(esp, 0); /* 0x00774048: push 0 */
    PUSH32(esp, 0x00795A00u); /* 0x0077404A: push 0x795a00 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077404F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774052: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774053: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774058: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077405B: ret  */

}

void sub_0077405C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077405Cu);

L_0077405C:
    PUSH32(esp, 0); /* 0x0077405C: push 0 */
    PUSH32(esp, 0x007959F4u); /* 0x0077405E: push 0x7959f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774063: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774066: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774067: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077406C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077406F: ret  */

}

void sub_00774070(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774070u);

    goto L_00774070;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774070:
    eax = 0x007DFF64u; /* 0x00774070: mov eax, 0x7dff64 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774075: jmp 0x75bfd2 */

}

void sub_00774080(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774080u);

L_00774080:
    PUSH32(esp, 0); /* 0x00774080: push 0 */
    PUSH32(esp, 0x00795A08u); /* 0x00774082: push 0x795a08 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774087: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077408A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077408B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774090: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774093: ret  */

}

void sub_00774094(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774094u);

L_00774094:
    PUSH32(esp, 0); /* 0x00774094: push 0 */
    PUSH32(esp, 0x007959F4u); /* 0x00774096: push 0x7959f4 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077409B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077409E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077409F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007740A4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007740A7: ret  */

}

void sub_007740A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007740A8u);

    goto L_007740A8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007740A8:
    eax = 0x007DFF90u; /* 0x007740A8: mov eax, 0x7dff90 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007740AD: jmp 0x75bfd2 */

}

void sub_007740C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007740C0u);

L_007740C0:
    PUSH32(esp, 0); /* 0x007740C0: push 0 */
    PUSH32(esp, 0x00795A34u); /* 0x007740C2: push 0x795a34 */
    eax = MEM32(ebp + (-0x10)); /* 0x007740C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007740CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007740CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007740D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007740D3: ret  */

}

void sub_007740D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007740D4u);

    goto L_007740D4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007740D4:
    eax = 0x007DFFB4u; /* 0x007740D4: mov eax, 0x7dffb4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007740D9: jmp 0x75bfd2 */

}

void sub_007740E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007740E0u);

L_007740E0:
    PUSH32(esp, 0); /* 0x007740E0: push 0 */
    PUSH32(esp, 0x00795A68u); /* 0x007740E2: push 0x795a68 */
    eax = MEM32(ebp + (-0x54)); /* 0x007740E7: mov eax, dword ptr [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x007740EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007740EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007740F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007740F3: ret  */

}

void sub_007740F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007740F4u);

    goto L_007740F4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007740F4:
    eax = 0x007DFFD8u; /* 0x007740F4: mov eax, 0x7dffd8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007740F9: jmp 0x75bfd2 */

}

void sub_00774100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774100u);

L_00774100:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774100: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004C9880u); RECOMP_RETURN(); /* 0x00774103: jmp 0x4c9880 */

}

void sub_00774108(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774108u);

    goto L_00774108;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774108:
    eax = 0x007DFFFCu; /* 0x00774108: mov eax, 0x7dfffc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077410D: jmp 0x75bfd2 */

}

void sub_00774120(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774120u);

L_00774120:
    eax = MEM32(ebp + (-0x10)); /* 0x00774120: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774123: push eax */
    RECOMP_CALL(sub_004022C0); /* 0x00774124: call 0x4022c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00774129: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077412A: ret  */

}

void sub_0077412B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077412Bu);

    goto L_0077412B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077412B:
    eax = 0x007E0020u; /* 0x0077412B: mov eax, 0x7e0020 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774130: jmp 0x75bfd2 */

}

void sub_00774140(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774140u);

L_00774140:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774140: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00774143: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00774146: jmp 0x4358e0 */

}

void sub_0077414B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077414Bu);

    goto L_0077414B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077414B:
    eax = 0x007E0044u; /* 0x0077414B: mov eax, 0x7e0044 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774150: jmp 0x75bfd2 */

}

void sub_00774160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774160u);

L_00774160:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774160: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00774163: jmp 0x510d40 */

}

void sub_00774168(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774168u);

L_00774168:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774168: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077416B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00479100u); RECOMP_RETURN(); /* 0x0077416E: jmp 0x479100 */

}

void sub_00774173(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774173u);

L_00774173:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774173: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC8u; /* 0x00774176: add ecx, 0xc8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077417C: jmp 0x4957a0 */

}

void sub_00774181(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774181u);

L_00774181:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774181: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10Cu; /* 0x00774184: add ecx, 0x10c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077418A: jmp 0x4957a0 */

}

void sub_0077418F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077418Fu);

L_0077418F:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077418F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x150u; /* 0x00774192: add ecx, 0x150 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x00774198: jmp 0x4957a0 */

}

void sub_0077419D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077419Du);

    goto L_0077419D;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077419D:
    eax = 0x007E20ECu; /* 0x0077419D: mov eax, 0x7e20ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007741A2: jmp 0x75bfd2 */

}

void sub_007741B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007741B0u);

L_007741B0:
    ecx = MEM32(ebp + (-0x110)); /* 0x007741B0: mov ecx, dword ptr [ebp - 0x110] */
    RECOMP_ITAIL(0x00531610u); RECOMP_RETURN(); /* 0x007741B6: jmp 0x531610 */

}

void sub_007741BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007741BBu);

    goto L_007741BB;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007741BB:
    eax = 0x007E0068u; /* 0x007741BB: mov eax, 0x7e0068 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007741C0: jmp 0x75bfd2 */

}

void sub_007741D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007741D0u);

L_007741D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007741D0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007741D3: jmp 0x510d40 */

}

void sub_007741D8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007741D8u);

L_007741D8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007741D8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x007741DB: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x007741DE: jmp 0x4cbba0 */

}

void sub_007741E3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007741E3u);

L_007741E3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007741E3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFCu; /* 0x007741E6: add ecx, 0xfc */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x007741EC: jmp 0x4cbba0 */

}

void sub_007741F1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007741F1u);

    goto L_007741F1;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007741F1:
    eax = 0x007E009Cu; /* 0x007741F1: mov eax, 0x7e009c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007741F6: jmp 0x75bfd2 */

}

void sub_00774200(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774200u);

L_00774200:
    PUSH32(esp, 0); /* 0x00774200: push 0 */
    PUSH32(esp, 0x00795D58u); /* 0x00774202: push 0x795d58 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774207: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077420A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077420B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774210: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774213: ret  */

}

void sub_00774214(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774214u);

    goto L_00774214;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774214:
    eax = 0x007E00C0u; /* 0x00774214: mov eax, 0x7e00c0 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774219: jmp 0x75bfd2 */

}

void sub_00774220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774220u);

L_00774220:
    PUSH32(esp, 0); /* 0x00774220: push 0 */
    PUSH32(esp, 0x00795D70u); /* 0x00774222: push 0x795d70 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774227: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077422A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077422B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774230: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774233: ret  */

}

void sub_00774234(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774234u);

    goto L_00774234;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774234:
    eax = 0x007E00E4u; /* 0x00774234: mov eax, 0x7e00e4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774239: jmp 0x75bfd2 */

}

void sub_00774240(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774240u);

L_00774240:
    PUSH32(esp, 0); /* 0x00774240: push 0 */
    PUSH32(esp, 0x007916E0u); /* 0x00774242: push 0x7916e0 */
    eax = MEM32(ebp + (-0x14)); /* 0x00774247: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077424A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077424B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774250: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774253: ret  */

}

void sub_00774254(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774254u);

L_00774254:
    PUSH32(esp, 0); /* 0x00774254: push 0 */
    PUSH32(esp, 0x00795D84u); /* 0x00774256: push 0x795d84 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077425B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077425E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077425F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774264: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774267: ret  */

}

void sub_00774268(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774268u);

L_00774268:
    PUSH32(esp, 0); /* 0x00774268: push 0 */
    PUSH32(esp, 0x00791784u); /* 0x0077426A: push 0x791784 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077426F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774272: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774273: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774278: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077427B: ret  */

}

void sub_0077427C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077427Cu);

L_0077427C:
    PUSH32(esp, 0); /* 0x0077427C: push 0 */
    PUSH32(esp, 0x00791784u); /* 0x0077427E: push 0x791784 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774283: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774286: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774287: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077428C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077428F: ret  */

}

void sub_00774290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774290u);

L_00774290:
    PUSH32(esp, 0); /* 0x00774290: push 0 */
    PUSH32(esp, 0x00791790u); /* 0x00774292: push 0x791790 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774297: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077429A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077429B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007742A0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007742A3: ret  */

}

void sub_007742A4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007742A4u);

L_007742A4:
    PUSH32(esp, 0); /* 0x007742A4: push 0 */
    PUSH32(esp, 0x00791770u); /* 0x007742A6: push 0x791770 */
    eax = MEM32(ebp + (-0x10)); /* 0x007742AB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007742AE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007742AF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007742B4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007742B7: ret  */

}

void sub_007742B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007742B8u);

L_007742B8:
    PUSH32(esp, 0); /* 0x007742B8: push 0 */
    PUSH32(esp, 0x00791764u); /* 0x007742BA: push 0x791764 */
    eax = MEM32(ebp + (-0x10)); /* 0x007742BF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007742C2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007742C3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007742C8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007742CB: ret  */

}

void sub_007742CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007742CCu);

L_007742CC:
    PUSH32(esp, 0); /* 0x007742CC: push 0 */
    PUSH32(esp, 0x00791758u); /* 0x007742CE: push 0x791758 */
    eax = MEM32(ebp + (-0x10)); /* 0x007742D3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007742D6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007742D7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007742DC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007742DF: ret  */

}

void sub_007742E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007742E0u);

    goto L_007742E0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007742E0:
    eax = 0x007E0140u; /* 0x007742E0: mov eax, 0x7e0140 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007742E5: jmp 0x75bfd2 */

}

void sub_007742F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007742F0u);

L_007742F0:
    PUSH32(esp, 0); /* 0x007742F0: push 0 */
    PUSH32(esp, 0x007916E0u); /* 0x007742F2: push 0x7916e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007742F7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007742FA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007742FB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774300: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774303: ret  */

}

void sub_00774304(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774304u);

L_00774304:
    PUSH32(esp, 0); /* 0x00774304: push 0 */
    PUSH32(esp, 0x00791790u); /* 0x00774306: push 0x791790 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077430B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077430E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077430F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774314: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774317: ret  */

}

void sub_00774318(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774318u);

L_00774318:
    PUSH32(esp, 0); /* 0x00774318: push 0 */
    PUSH32(esp, 0x00791770u); /* 0x0077431A: push 0x791770 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077431F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774322: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774323: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774328: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077432B: ret  */

}

void sub_0077432C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077432Cu);

L_0077432C:
    PUSH32(esp, 0); /* 0x0077432C: push 0 */
    PUSH32(esp, 0x00791764u); /* 0x0077432E: push 0x791764 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774333: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774336: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774337: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077433C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077433F: ret  */

}

void sub_00774340(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774340u);

L_00774340:
    PUSH32(esp, 0); /* 0x00774340: push 0 */
    PUSH32(esp, 0x00791758u); /* 0x00774342: push 0x791758 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774347: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077434A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077434B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774350: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774353: ret  */

}

void sub_00774354(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774354u);

    goto L_00774354;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774354:
    eax = 0x007E0184u; /* 0x00774354: mov eax, 0x7e0184 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774359: jmp 0x75bfd2 */

}

void sub_00774360(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774360u);

L_00774360:
    PUSH32(esp, 0); /* 0x00774360: push 0 */
    PUSH32(esp, 0x007916E0u); /* 0x00774362: push 0x7916e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774367: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077436A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077436B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774370: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774373: ret  */

}

void sub_00774374(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774374u);

L_00774374:
    PUSH32(esp, 0); /* 0x00774374: push 0 */
    PUSH32(esp, 0x00791784u); /* 0x00774376: push 0x791784 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077437B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077437E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077437F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774384: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774387: ret  */

}

void sub_00774388(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774388u);

L_00774388:
    PUSH32(esp, 0); /* 0x00774388: push 0 */
    PUSH32(esp, 0x00791770u); /* 0x0077438A: push 0x791770 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077438F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774392: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774393: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774398: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077439B: ret  */

}

void sub_0077439C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077439Cu);

L_0077439C:
    PUSH32(esp, 0); /* 0x0077439C: push 0 */
    PUSH32(esp, 0x00791764u); /* 0x0077439E: push 0x791764 */
    eax = MEM32(ebp + (-0x10)); /* 0x007743A3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007743A6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007743A7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007743AC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007743AF: ret  */

}

void sub_007743B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007743B0u);

L_007743B0:
    PUSH32(esp, 0); /* 0x007743B0: push 0 */
    PUSH32(esp, 0x00791790u); /* 0x007743B2: push 0x791790 */
    eax = MEM32(ebp + (-0x10)); /* 0x007743B7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007743BA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007743BB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007743C0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007743C3: ret  */

}

void sub_007743C4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007743C4u);

    goto L_007743C4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007743C4:
    eax = 0x007E01C8u; /* 0x007743C4: mov eax, 0x7e01c8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007743C9: jmp 0x75bfd2 */

}

void sub_007743D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007743D0u);

L_007743D0:
    PUSH32(esp, 0); /* 0x007743D0: push 0 */
    PUSH32(esp, 0x007916E0u); /* 0x007743D2: push 0x7916e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x007743D7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007743DA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007743DB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007743E0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007743E3: ret  */

}

void sub_007743E4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007743E4u);

L_007743E4:
    PUSH32(esp, 0); /* 0x007743E4: push 0 */
    PUSH32(esp, 0x00791784u); /* 0x007743E6: push 0x791784 */
    eax = MEM32(ebp + (-0x10)); /* 0x007743EB: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007743EE: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007743EF: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007743F4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007743F7: ret  */

}

void sub_007743F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007743F8u);

L_007743F8:
    PUSH32(esp, 0); /* 0x007743F8: push 0 */
    PUSH32(esp, 0x00791770u); /* 0x007743FA: push 0x791770 */
    eax = MEM32(ebp + (-0x10)); /* 0x007743FF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774402: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774403: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774408: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077440B: ret  */

}

void sub_0077440C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077440Cu);

L_0077440C:
    PUSH32(esp, 0); /* 0x0077440C: push 0 */
    PUSH32(esp, 0x00791764u); /* 0x0077440E: push 0x791764 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774413: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774416: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774417: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077441C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077441F: ret  */

}

void sub_00774420(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774420u);

L_00774420:
    PUSH32(esp, 0); /* 0x00774420: push 0 */
    PUSH32(esp, 0x00791758u); /* 0x00774422: push 0x791758 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774427: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077442A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077442B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774430: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774433: ret  */

}

void sub_00774434(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774434u);

    goto L_00774434;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774434:
    eax = 0x007DF570u; /* 0x00774434: mov eax, 0x7df570 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774439: jmp 0x75bfd2 */

}

void sub_00774440(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774440u);

L_00774440:
    PUSH32(esp, 0); /* 0x00774440: push 0 */
    PUSH32(esp, 0x00795D98u); /* 0x00774442: push 0x795d98 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774447: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077444A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077444B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774450: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774453: ret  */

}

void sub_00774454(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774454u);

L_00774454:
    PUSH32(esp, 0); /* 0x00774454: push 0 */
    PUSH32(esp, 0x00795D8Cu); /* 0x00774456: push 0x795d8c */
    eax = MEM32(ebp + (-0x10)); /* 0x0077445B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077445E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077445F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774464: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774467: ret  */

}

void sub_00774468(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774468u);

    goto L_00774468;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774468:
    eax = 0x007E01F4u; /* 0x00774468: mov eax, 0x7e01f4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077446D: jmp 0x75bfd2 */

}

void sub_00774480(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774480u);

L_00774480:
    PUSH32(esp, 0); /* 0x00774480: push 0 */
    PUSH32(esp, 0x007916E0u); /* 0x00774482: push 0x7916e0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774487: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077448A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077448B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774490: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774493: ret  */

}

void sub_00774494(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774494u);

L_00774494:
    PUSH32(esp, 0); /* 0x00774494: push 0 */
    PUSH32(esp, 0x00791770u); /* 0x00774496: push 0x791770 */
    eax = MEM32(ebp + (-0x10)); /* 0x0077449B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077449E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077449F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007744A4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007744A7: ret  */

}

void sub_007744A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007744A8u);

L_007744A8:
    PUSH32(esp, 0); /* 0x007744A8: push 0 */
    PUSH32(esp, 0x00791764u); /* 0x007744AA: push 0x791764 */
    eax = MEM32(ebp + (-0x10)); /* 0x007744AF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007744B2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007744B3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007744B8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007744BB: ret  */

}

void sub_007744BC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007744BCu);

L_007744BC:
    PUSH32(esp, 0); /* 0x007744BC: push 0 */
    PUSH32(esp, 0x00791758u); /* 0x007744BE: push 0x791758 */
    eax = MEM32(ebp + (-0x10)); /* 0x007744C3: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007744C6: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007744C7: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007744CC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007744CF: ret  */

}

void sub_007744D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007744D0u);

    goto L_007744D0;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007744D0:
    eax = 0x007E0230u; /* 0x007744D0: mov eax, 0x7e0230 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007744D5: jmp 0x75bfd2 */

}

void sub_007744E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007744E0u);

L_007744E0:
    PUSH32(esp, 0); /* 0x007744E0: push 0 */
    PUSH32(esp, 0x00795DC4u); /* 0x007744E2: push 0x795dc4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007744E7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007744EA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007744EB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007744F0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007744F3: ret  */

}

void sub_007744F4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007744F4u);

    goto L_007744F4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007744F4:
    eax = 0x007E0254u; /* 0x007744F4: mov eax, 0x7e0254 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007744F9: jmp 0x75bfd2 */

}

void sub_00774500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774500u);

L_00774500:
    PUSH32(esp, 0); /* 0x00774500: push 0 */
    PUSH32(esp, 0x00795DD8u); /* 0x00774502: push 0x795dd8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774507: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077450A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077450B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774510: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774513: ret  */

}

void sub_00774514(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774514u);

    goto L_00774514;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774514:
    eax = 0x007E0278u; /* 0x00774514: mov eax, 0x7e0278 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774519: jmp 0x75bfd2 */

}

void sub_00774520(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774520u);

L_00774520:
    PUSH32(esp, 0); /* 0x00774520: push 0 */
    PUSH32(esp, 0x00795DECu); /* 0x00774522: push 0x795dec */
    eax = MEM32(ebp + (-0x10)); /* 0x00774527: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077452A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077452B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774530: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774533: ret  */

}

void sub_00774534(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774534u);

    goto L_00774534;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774534:
    eax = 0x007E029Cu; /* 0x00774534: mov eax, 0x7e029c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774539: jmp 0x75bfd2 */

}

void sub_00774540(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774540u);

L_00774540:
    PUSH32(esp, 0); /* 0x00774540: push 0 */
    PUSH32(esp, 0x00795E3Cu); /* 0x00774542: push 0x795e3c */
    eax = MEM32(ebp + (-0x10)); /* 0x00774547: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077454A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077454B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774550: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774553: ret  */

}

void sub_00774554(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774554u);

    goto L_00774554;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774554:
    eax = 0x007E02E4u; /* 0x00774554: mov eax, 0x7e02e4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774559: jmp 0x75bfd2 */

}

void sub_00774560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774560u);

L_00774560:
    ecx = ebp + (-0x158); /* 0x00774560: lea ecx, [ebp - 0x158] */
    RECOMP_ITAIL(0x004CBAF0u); RECOMP_RETURN(); /* 0x00774566: jmp 0x4cbaf0 */

}

void sub_0077456B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077456Bu);

    goto L_0077456B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077456B:
    eax = 0x007E0308u; /* 0x0077456B: mov eax, 0x7e0308 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774570: jmp 0x75bfd2 */

}

void sub_00774580(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774580u);

L_00774580:
    PUSH32(esp, 0); /* 0x00774580: push 0 */
    PUSH32(esp, 0x00795E60u); /* 0x00774582: push 0x795e60 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774587: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0077458A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077458B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774590: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774593: ret  */

}

void sub_00774594(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774594u);

    goto L_00774594;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774594:
    eax = 0x007E032Cu; /* 0x00774594: mov eax, 0x7e032c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774599: jmp 0x75bfd2 */

}

void sub_007745A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007745A0u);

L_007745A0:
    PUSH32(esp, 0); /* 0x007745A0: push 0 */
    PUSH32(esp, 0x00795E74u); /* 0x007745A2: push 0x795e74 */
    eax = MEM32(ebp + (-0x10)); /* 0x007745A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007745AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007745AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007745B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007745B3: ret  */

}

void sub_007745B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007745B4u);

    goto L_007745B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007745B4:
    eax = 0x007E0350u; /* 0x007745B4: mov eax, 0x7e0350 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007745B9: jmp 0x75bfd2 */

}

void sub_007745C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007745C0u);

L_007745C0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007745C0: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x007745C3: jmp 0x4cbc30 */

}

void sub_007745C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007745C8u);

L_007745C8:
    PUSH32(esp, 0); /* 0x007745C8: push 0 */
    PUSH32(esp, 0x00795E8Cu); /* 0x007745CA: push 0x795e8c */
    eax = MEM32(ebp + (-0x10)); /* 0x007745CF: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007745D2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007745D3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007745D8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007745DB: ret  */

}

void sub_007745DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007745DCu);

    goto L_007745DC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007745DC:
    eax = 0x007E037Cu; /* 0x007745DC: mov eax, 0x7e037c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007745E1: jmp 0x75bfd2 */

}

void sub_007745F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007745F0u);

L_007745F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007745F0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x007745F3: jmp 0x4cbc30 */

}

void sub_007745F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007745F8u);

L_007745F8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007745F8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x154u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x154u; /* 0x007745FB: add ecx, 0x154 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00774601: jmp 0x49d870 */

}

void sub_00774606(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774606u);

    goto L_00774606;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774606:
    eax = 0x007E03A8u; /* 0x00774606: mov eax, 0x7e03a8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077460B: jmp 0x75bfd2 */

}

void sub_00774610(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774610u);

L_00774610:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774610: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x00774613: jmp 0x4cbc30 */

}

void sub_00774618(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774618u);

L_00774618:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774618: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x150u; /* 0x0077461B: add ecx, 0x150 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00774621: jmp 0x49d870 */

}

void sub_00774626(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774626u);

    goto L_00774626;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774626:
    eax = 0x007E03D4u; /* 0x00774626: mov eax, 0x7e03d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077462B: jmp 0x75bfd2 */

}

void sub_00774630(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774630u);

L_00774630:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774630: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x00774633: jmp 0x4cbc30 */

}

void sub_00774638(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774638u);

L_00774638:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774638: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x188u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x188u; /* 0x0077463B: add ecx, 0x188 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00774641: jmp 0x49d870 */

}

void sub_00774646(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774646u);

L_00774646:
    PUSH32(esp, 0); /* 0x00774646: push 0 */
    PUSH32(esp, 0x00795F80u); /* 0x00774648: push 0x795f80 */
    eax = MEM32(ebp + 0x4); /* 0x0077464D: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774650: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774651: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774656: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774659: ret  */

}

void sub_0077465A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077465Au);

L_0077465A:
    PUSH32(esp, 0); /* 0x0077465A: push 0 */
    PUSH32(esp, 0x00795F6Cu); /* 0x0077465C: push 0x795f6c */
    eax = MEM32(ebp + 0x4); /* 0x00774661: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774664: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774665: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077466A: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077466D: ret  */

}

void sub_0077466E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077466Eu);

L_0077466E:
    PUSH32(esp, 0); /* 0x0077466E: push 0 */
    PUSH32(esp, 0x00795F54u); /* 0x00774670: push 0x795f54 */
    eax = MEM32(ebp + 0x4); /* 0x00774675: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774678: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774679: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077467E: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774681: ret  */

}

void sub_00774682(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774682u);

L_00774682:
    PUSH32(esp, 0); /* 0x00774682: push 0 */
    PUSH32(esp, 0x00795F40u); /* 0x00774684: push 0x795f40 */
    eax = MEM32(ebp + 0x4); /* 0x00774689: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077468C: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077468D: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774692: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774695: ret  */

}

void sub_00774696(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774696u);

L_00774696:
    PUSH32(esp, 0); /* 0x00774696: push 0 */
    PUSH32(esp, 0x00795F2Cu); /* 0x00774698: push 0x795f2c */
    eax = MEM32(ebp + 0x4); /* 0x0077469D: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007746A0: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007746A1: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007746A6: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007746A9: ret  */

}

void sub_007746AA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007746AAu);

L_007746AA:
    PUSH32(esp, 0); /* 0x007746AA: push 0 */
    PUSH32(esp, 0x00795F1Cu); /* 0x007746AC: push 0x795f1c */
    eax = MEM32(ebp + 0x4); /* 0x007746B1: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007746B4: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007746B5: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007746BA: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007746BD: ret  */

}

void sub_007746BE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007746BEu);

L_007746BE:
    PUSH32(esp, 0); /* 0x007746BE: push 0 */
    PUSH32(esp, 0x00793F9Cu); /* 0x007746C0: push 0x793f9c */
    eax = MEM32(ebp + 0x4); /* 0x007746C5: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007746C8: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007746C9: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007746CE: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007746D1: ret  */

}

void sub_007746D2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007746D2u);

L_007746D2:
    PUSH32(esp, 0); /* 0x007746D2: push 0 */
    PUSH32(esp, 0x00793F9Cu); /* 0x007746D4: push 0x793f9c */
    eax = MEM32(ebp + 0x4); /* 0x007746D9: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007746DC: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007746DD: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007746E2: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007746E5: ret  */

}

void sub_007746E6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007746E6u);

L_007746E6:
    PUSH32(esp, 0); /* 0x007746E6: push 0 */
    PUSH32(esp, 0x00795F0Cu); /* 0x007746E8: push 0x795f0c */
    eax = MEM32(ebp + 0x4); /* 0x007746ED: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007746F0: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007746F1: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007746F6: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007746F9: ret  */

}

void sub_007746FA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007746FAu);

L_007746FA:
    PUSH32(esp, 0); /* 0x007746FA: push 0 */
    PUSH32(esp, 0x00793F9Cu); /* 0x007746FC: push 0x793f9c */
    eax = MEM32(ebp + 0x4); /* 0x00774701: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774704: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774705: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077470A: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077470D: ret  */

}

void sub_0077470E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077470Eu);

L_0077470E:
    PUSH32(esp, 0); /* 0x0077470E: push 0 */
    PUSH32(esp, 0x00793F9Cu); /* 0x00774710: push 0x793f9c */
    eax = MEM32(ebp + 0x4); /* 0x00774715: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774718: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774719: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077471E: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774721: ret  */

}

void sub_00774722(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774722u);

L_00774722:
    PUSH32(esp, 0); /* 0x00774722: push 0 */
    PUSH32(esp, 0x00795EFCu); /* 0x00774724: push 0x795efc */
    eax = MEM32(ebp + 0x4); /* 0x00774729: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077472C: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077472D: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774732: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774735: ret  */

}

void sub_00774736(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774736u);

    goto L_00774736;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774736:
    eax = 0x007E0460u; /* 0x00774736: mov eax, 0x7e0460 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077473B: jmp 0x75bfd2 */

}

void sub_00774740(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774740u);

L_00774740:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774740: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x00774743: jmp 0x4cbc30 */

}

void sub_00774748(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774748u);

L_00774748:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774748: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x188u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x188u; /* 0x0077474B: add ecx, 0x188 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00774751: jmp 0x49d870 */

}

void sub_00774756(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774756u);

    goto L_00774756;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774756:
    eax = 0x007E048Cu; /* 0x00774756: mov eax, 0x7e048c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077475B: jmp 0x75bfd2 */

}

void sub_00774760(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774760u);

L_00774760:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774760: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x00774763: jmp 0x4cbc30 */

}

void sub_00774768(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774768u);

L_00774768:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774768: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x184u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x184u; /* 0x0077476B: add ecx, 0x184 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x00774771: jmp 0x49d870 */

}

void sub_00774776(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774776u);

    goto L_00774776;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774776:
    eax = 0x007E04B8u; /* 0x00774776: mov eax, 0x7e04b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x0077477B: jmp 0x75bfd2 */

}

void sub_00774780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774780u);

L_00774780:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774780: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00774783: jmp 0x510d40 */

}

void sub_00774788(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774788u);

L_00774788:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774788: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077478B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x0077478E: jmp 0x4cbba0 */

}

void sub_00774793(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774793u);

L_00774793:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774793: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x120u; /* 0x00774796: add ecx, 0x120 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0049D870u); RECOMP_RETURN(); /* 0x0077479C: jmp 0x49d870 */

}

void sub_007747A1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007747A1u);

    goto L_007747A1;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007747A1:
    eax = 0x007E04ECu; /* 0x007747A1: mov eax, 0x7e04ec */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007747A6: jmp 0x75bfd2 */

}

void sub_007747B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007747B0u);

L_007747B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007747B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x007747B3: jmp 0x4cbc30 */

}

void sub_007747B8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007747B8u);

L_007747B8:
    PUSH32(esp, 0); /* 0x007747B8: push 0 */
    PUSH32(esp, 0x00795FF4u); /* 0x007747BA: push 0x795ff4 */
    eax = MEM32(ebp + 0x4); /* 0x007747BF: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x007747C2: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007747C3: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007747C8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007747CB: ret  */

}

void sub_007747CC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007747CCu);

    goto L_007747CC;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007747CC:
    eax = 0x007E0518u; /* 0x007747CC: mov eax, 0x7e0518 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007747D1: jmp 0x75bfd2 */

}

void sub_007747E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007747E0u);

L_007747E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007747E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00531610u); RECOMP_RETURN(); /* 0x007747E3: jmp 0x531610 */

}

void sub_007747E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007747E8u);

    goto L_007747E8;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007747E8:
    eax = 0x007E053Cu; /* 0x007747E8: mov eax, 0x7e053c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007747ED: jmp 0x75bfd2 */

}

void sub_00774800(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774800u);

L_00774800:
    ecx = MEM32(ebp + (-0x14)); /* 0x00774800: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00774803: jmp 0x510d40 */

}

void sub_00774808(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774808u);

L_00774808:
    ecx = MEM32(ebp + (-0x14)); /* 0x00774808: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x0077480B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x0077480E: jmp 0x4cbba0 */

}

void sub_00774813(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774813u);

L_00774813:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774813: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00774816: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00774819: jmp 0x4358e0 */

}

void sub_0077481E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077481Eu);

    goto L_0077481E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077481E:
    eax = 0x007E0570u; /* 0x0077481E: mov eax, 0x7e0570 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774823: jmp 0x75bfd2 */

}

void sub_00774830(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774830u);

L_00774830:
    PUSH32(esp, 0); /* 0x00774830: push 0 */
    PUSH32(esp, 0x0079604Cu); /* 0x00774832: push 0x79604c */
    eax = MEM32(ebp + (-0x34)); /* 0x00774837: mov eax, dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0077483A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077483B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774840: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774843: ret  */

}

void sub_00774844(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774844u);

L_00774844:
    PUSH32(esp, 0); /* 0x00774844: push 0 */
    PUSH32(esp, 0x0079604Cu); /* 0x00774846: push 0x79604c */
    eax = MEM32(ebp + (-0x34)); /* 0x0077484B: mov eax, dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0077484E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077484F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774854: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774857: ret  */

}

void sub_00774858(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774858u);

L_00774858:
    PUSH32(esp, 0); /* 0x00774858: push 0 */
    PUSH32(esp, 0x0079604Cu); /* 0x0077485A: push 0x79604c */
    eax = MEM32(ebp + (-0x34)); /* 0x0077485F: mov eax, dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x00774862: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774863: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774868: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077486B: ret  */

}

void sub_0077486C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077486Cu);

L_0077486C:
    PUSH32(esp, 0); /* 0x0077486C: push 0 */
    PUSH32(esp, 0x0079604Cu); /* 0x0077486E: push 0x79604c */
    eax = MEM32(ebp + 0x4); /* 0x00774873: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774876: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774877: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077487C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077487F: ret  */

}

void sub_00774880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774880u);

L_00774880:
    PUSH32(esp, 0); /* 0x00774880: push 0 */
    PUSH32(esp, 0x0079604Cu); /* 0x00774882: push 0x79604c */
    eax = MEM32(ebp + 0x4); /* 0x00774887: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077488A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077488B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774890: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774893: ret  */

}

void sub_00774894(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774894u);

    goto L_00774894;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774894:
    eax = 0x007E05B4u; /* 0x00774894: mov eax, 0x7e05b4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774899: jmp 0x75bfd2 */

}

void sub_007748A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748A0u);

L_007748A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007748A0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007748A3: jmp 0x510d40 */

}

void sub_007748A8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748A8u);

L_007748A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007748A8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x007748AB: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x007748AE: jmp 0x4cbba0 */

}

void sub_007748B3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748B3u);

    goto L_007748B3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007748B3:
    eax = 0x007E137Cu; /* 0x007748B3: mov eax, 0x7e137c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007748B8: jmp 0x75bfd2 */

}

void sub_007748C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748C0u);

L_007748C0:
    PUSH32(esp, 0); /* 0x007748C0: push 0 */
    PUSH32(esp, 0x00796110u); /* 0x007748C2: push 0x796110 */
    eax = MEM32(ebp + (-0x10)); /* 0x007748C7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007748CA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007748CB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007748D0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007748D3: ret  */

}

void sub_007748D4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748D4u);

    goto L_007748D4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007748D4:
    eax = 0x007E05D8u; /* 0x007748D4: mov eax, 0x7e05d8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007748D9: jmp 0x75bfd2 */

}

void sub_007748E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748E0u);

L_007748E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007748E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007748E3: jmp 0x510d40 */

}

void sub_007748E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748E8u);

L_007748E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007748E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x007748EB: add ecx, 0x5c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBAF0u); RECOMP_RETURN(); /* 0x007748EE: jmp 0x4cbaf0 */

}

void sub_007748F3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007748F3u);

L_007748F3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007748F3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1A4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1A4u; /* 0x007748F6: add ecx, 0x1a4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x007748FC: jmp 0x4cbba0 */

}

void sub_00774901(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774901u);

L_00774901:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774901: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x380u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x380u; /* 0x00774904: add ecx, 0x380 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x0077490A: jmp 0x4957a0 */

}

void sub_0077490F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077490Fu);

    goto L_0077490F;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077490F:
    eax = 0x007E0614u; /* 0x0077490F: mov eax, 0x7e0614 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774914: jmp 0x75bfd2 */

}

void sub_00774920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774920u);

L_00774920:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774920: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x004CBC30u); RECOMP_RETURN(); /* 0x00774923: jmp 0x4cbc30 */

}

void sub_00774928(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774928u);

L_00774928:
    PUSH32(esp, 0); /* 0x00774928: push 0 */
    PUSH32(esp, 0x007961DCu); /* 0x0077492A: push 0x7961dc */
    eax = MEM32(ebp + 0x4); /* 0x0077492F: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774932: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774933: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774938: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077493B: ret  */

}

void sub_0077493C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077493Cu);

L_0077493C:
    PUSH32(esp, 0); /* 0x0077493C: push 0 */
    PUSH32(esp, 0x00791674u); /* 0x0077493E: push 0x791674 */
    eax = MEM32(ebp + 0x4); /* 0x00774943: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774946: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774947: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077494C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077494F: ret  */

}

void sub_00774950(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774950u);

L_00774950:
    PUSH32(esp, 0); /* 0x00774950: push 0 */
    PUSH32(esp, 0x007916C0u); /* 0x00774952: push 0x7916c0 */
    eax = MEM32(ebp + 0x4); /* 0x00774957: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077495A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077495B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774960: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774963: ret  */

}

void sub_00774964(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774964u);

L_00774964:
    PUSH32(esp, 0); /* 0x00774964: push 0 */
    PUSH32(esp, 0x00791660u); /* 0x00774966: push 0x791660 */
    eax = MEM32(ebp + 0x4); /* 0x0077496B: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x0077496E: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x0077496F: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774974: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774977: ret  */

}

void sub_00774978(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774978u);

L_00774978:
    PUSH32(esp, 0); /* 0x00774978: push 0 */
    PUSH32(esp, 0x00791690u); /* 0x0077497A: push 0x791690 */
    eax = MEM32(ebp + 0x4); /* 0x0077497F: mov eax, dword ptr [ebp + 4] */
    PUSH32(esp, eax); /* 0x00774982: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774983: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774988: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077498B: ret  */

}

void sub_0077498C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077498Cu);

    goto L_0077498C;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_0077498C:
    eax = 0x007E0660u; /* 0x0077498C: mov eax, 0x7e0660 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774991: jmp 0x75bfd2 */

}

void sub_007749A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749A0u);

L_007749A0:
    PUSH32(esp, 0); /* 0x007749A0: push 0 */
    PUSH32(esp, 0x00796298u); /* 0x007749A2: push 0x796298 */
    eax = MEM32(ebp + (-0x10)); /* 0x007749A7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007749AA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x007749AB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007749B0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007749B3: ret  */

}

void sub_007749B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749B4u);

    goto L_007749B4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007749B4:
    eax = 0x007E06B8u; /* 0x007749B4: mov eax, 0x7e06b8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007749B9: jmp 0x75bfd2 */

}

void sub_007749C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749C0u);

L_007749C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007749C0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007749C3: jmp 0x510d40 */

}

void sub_007749C8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749C8u);

L_007749C8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007749C8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x007749CB: add ecx, 0x54 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x007749CE: jmp 0x4cbba0 */

}

void sub_007749D3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749D3u);

    goto L_007749D3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007749D3:
    eax = 0x007E1BA8u; /* 0x007749D3: mov eax, 0x7e1ba8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007749D8: jmp 0x75bfd2 */

}

void sub_007749E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749E0u);

L_007749E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007749E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x007749E3: jmp 0x510d40 */

}

void sub_007749E8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749E8u);

L_007749E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007749E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x007749EB: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x007749EE: jmp 0x4cbba0 */

}

void sub_007749F3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007749F3u);

    goto L_007749F3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_007749F3:
    eax = 0x007E1484u; /* 0x007749F3: mov eax, 0x7e1484 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x007749F8: jmp 0x75bfd2 */

}

void sub_00774A00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A00u);

L_00774A00:
    PUSH32(esp, 0); /* 0x00774A00: push 0 */
    PUSH32(esp, 0x007963ECu); /* 0x00774A02: push 0x7963ec */
    eax = MEM32(ebp + (-0x10)); /* 0x00774A07: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774A0A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774A0B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774A10: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774A13: ret  */

}

void sub_00774A14(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A14u);

    goto L_00774A14;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774A14:
    eax = 0x007E06DCu; /* 0x00774A14: mov eax, 0x7e06dc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774A19: jmp 0x75bfd2 */

}

void sub_00774A20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A20u);

L_00774A20:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774A20: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00774A23: jmp 0x510d40 */

}

void sub_00774A28(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A28u);

L_00774A28:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774A28: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x00774A2B: add ecx, 0x50 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004957A0u); RECOMP_RETURN(); /* 0x00774A2E: jmp 0x4957a0 */

}

void sub_00774A33(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A33u);

L_00774A33:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774A33: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x98u; /* 0x00774A36: add ecx, 0x98 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBAF0u); RECOMP_RETURN(); /* 0x00774A3C: jmp 0x4cbaf0 */

}

void sub_00774A41(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A41u);

    goto L_00774A41;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774A41:
    eax = 0x007E0710u; /* 0x00774A41: mov eax, 0x7e0710 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774A46: jmp 0x75bfd2 */

}

void sub_00774A50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A50u);

L_00774A50:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774A50: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00774A53: jmp 0x510d40 */

}

void sub_00774A58(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A58u);

L_00774A58:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774A58: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00774A5B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00774A5E: jmp 0x4cbba0 */

}

void sub_00774A63(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A63u);

L_00774A63:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774A63: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x908u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x908u; /* 0x00774A66: add ecx, 0x908 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00774A6C: jmp 0x4def30 */

}

void sub_00774A71(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A71u);

    goto L_00774A71;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774A71:
    eax = 0x007E22D4u; /* 0x00774A71: mov eax, 0x7e22d4 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774A76: jmp 0x75bfd2 */

}

void sub_00774A80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A80u);

L_00774A80:
    PUSH32(esp, 0); /* 0x00774A80: push 0 */
    PUSH32(esp, 0x00796430u); /* 0x00774A82: push 0x796430 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774A87: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774A8A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774A8B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774A90: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774A93: ret  */

}

void sub_00774A94(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774A94u);

    goto L_00774A94;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774A94:
    eax = 0x007E0734u; /* 0x00774A94: mov eax, 0x7e0734 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774A99: jmp 0x75bfd2 */

}

void sub_00774AA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774AA0u);

L_00774AA0:
    ecx = MEM32(ebp + (-0x30)); /* 0x00774AA0: mov ecx, dword ptr [ebp - 0x30] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00774AA3: jmp 0x510d40 */

}

void sub_00774AA8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774AA8u);

L_00774AA8:
    ecx = MEM32(ebp + (-0x30)); /* 0x00774AA8: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00774AAB: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004CBBA0u); RECOMP_RETURN(); /* 0x00774AAE: jmp 0x4cbba0 */

}

void sub_00774AB3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774AB3u);

    goto L_00774AB3;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774AB3:
    eax = 0x007E0760u; /* 0x00774AB3: mov eax, 0x7e0760 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774AB8: jmp 0x75bfd2 */

}

void sub_00774AC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774AC0u);

L_00774AC0:
    PUSH32(esp, 0); /* 0x00774AC0: push 0 */
    PUSH32(esp, 0x00796490u); /* 0x00774AC2: push 0x796490 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774AC7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774ACA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774ACB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774AD0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774AD3: ret  */

}

void sub_00774AD4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774AD4u);

    goto L_00774AD4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774AD4:
    eax = 0x007E0784u; /* 0x00774AD4: mov eax, 0x7e0784 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774AD9: jmp 0x75bfd2 */

}

void sub_00774AE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774AE0u);

L_00774AE0:
    PUSH32(esp, 0); /* 0x00774AE0: push 0 */
    PUSH32(esp, 0x007964B8u); /* 0x00774AE2: push 0x7964b8 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774AE7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774AEA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774AEB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774AF0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774AF3: ret  */

}

void sub_00774AF4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774AF4u);

    goto L_00774AF4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774AF4:
    eax = 0x007E07A8u; /* 0x00774AF4: mov eax, 0x7e07a8 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774AF9: jmp 0x75bfd2 */

}

void sub_00774B00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B00u);

L_00774B00:
    PUSH32(esp, 0); /* 0x00774B00: push 0 */
    PUSH32(esp, 0x007964D0u); /* 0x00774B02: push 0x7964d0 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774B07: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774B0A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774B0B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774B10: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774B13: ret  */

}

void sub_00774B14(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B14u);

    goto L_00774B14;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774B14:
    eax = 0x007E07CCu; /* 0x00774B14: mov eax, 0x7e07cc */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774B19: jmp 0x75bfd2 */

}

void sub_00774B20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B20u);

L_00774B20:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774B20: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_ITAIL(0x00510D40u); RECOMP_RETURN(); /* 0x00774B23: jmp 0x510d40 */

}

void sub_00774B28(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B28u);

L_00774B28:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774B28: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x00774B2B: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x00479100u); RECOMP_RETURN(); /* 0x00774B2E: jmp 0x479100 */

}

void sub_00774B33(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B33u);

L_00774B33:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774B33: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x00774B36: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x0052EA90u); RECOMP_RETURN(); /* 0x00774B39: jmp 0x52ea90 */

}

void sub_00774B3E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B3Eu);

    goto L_00774B3E;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774B3E:
    eax = 0x007E0800u; /* 0x00774B3E: mov eax, 0x7e0800 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774B43: jmp 0x75bfd2 */

}

void sub_00774B50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B50u);

L_00774B50:
    PUSH32(esp, 0x00796518u); /* 0x00774B50: push 0x796518 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774B55: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774B58: push eax */
    RECOMP_CALL(sub_004022C0); /* 0x00774B59: call 0x4022c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00774B5E: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774B61: ret  */

}

void sub_00774B62(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B62u);

    goto L_00774B62;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774B62:
    eax = 0x007E0824u; /* 0x00774B62: mov eax, 0x7e0824 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774B67: jmp 0x75bfd2 */

}

void sub_00774B70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B70u);

L_00774B70:
    ecx = MEM32(ebp + (-0x10)); /* 0x00774B70: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00774B73: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00774B76: jmp 0x4358e0 */

}

void sub_00774B7B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B7Bu);

    goto L_00774B7B;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774B7B:
    eax = 0x007E0848u; /* 0x00774B7B: mov eax, 0x7e0848 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774B80: jmp 0x75bfd2 */

}

void sub_00774B90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774B90u);

L_00774B90:
    PUSH32(esp, 0); /* 0x00774B90: push 0 */
    PUSH32(esp, 0x00796528u); /* 0x00774B92: push 0x796528 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774B97: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774B9A: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774B9B: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774BA0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774BA3: ret  */

}

void sub_00774BA4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774BA4u);

    goto L_00774BA4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774BA4:
    eax = 0x007E086Cu; /* 0x00774BA4: mov eax, 0x7e086c */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774BA9: jmp 0x75bfd2 */

}

void sub_00774BB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774BB0u);

L_00774BB0:
    PUSH32(esp, 0); /* 0x00774BB0: push 0 */
    PUSH32(esp, 0x00796538u); /* 0x00774BB2: push 0x796538 */
    eax = MEM32(ebp + (-0x10)); /* 0x00774BB7: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00774BBA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774BBB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774BC0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774BC3: ret  */

}

void sub_00774BC4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774BC4u);

    goto L_00774BC4;

L_0075BFD2:
    PUSH32(esp, ebp); /* 0x0075BFD2: push ebp */
    ebp = esp; /* 0x0075BFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x0075BFD5: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0075BFD8: push ebx */
    PUSH32(esp, esi); /* 0x0075BFD9: push esi */
    PUSH32(esp, edi); /* 0x0075BFDA: push edi */
    _df = 1; /* 0x0075BFDB: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFDC: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0075BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0075BFE1: push eax */
    PUSH32(esp, eax); /* 0x0075BFE2: push eax */
    PUSH32(esp, eax); /* 0x0075BFE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0075BFE4: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0075BFE7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0075BFEA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0075BFED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0075BFF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00762D49); /* 0x0075BFF3: call 0x762d49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0075BFF8: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0075BFFB: mov dword ptr [ebp - 4], eax */
    edi = POP32_VAL(esp); /* 0x0075BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0075BFFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0075C000: pop ebx */
    eax = MEM32(ebp + (-0x4)); /* 0x0075C001: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x0075C004: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0075C006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0075C007: ret  */

L_00774BC4:
    eax = 0x007E0890u; /* 0x00774BC4: mov eax, 0x7e0890 */
    RECOMP_BACKEDGE();
    goto L_0075BFD2; /* 0x00774BC9: jmp 0x75bfd2 */

}

void sub_00774BD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00774BD0u);

L_00774BD0:
    PUSH32(esp, 0); /* 0x00774BD0: push 0 */
    PUSH32(esp, 0x00796590u); /* 0x00774BD2: push 0x796590 */
    eax = MEM32(ebp + (-0x24)); /* 0x00774BD7: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x00774BDA: push eax */
    RECOMP_CALL(sub_006D7120); /* 0x00774BDB: call 0x6d7120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00774BE0: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00774BE3: ret  */

}