/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_00782180(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782180u);

L_00782180:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782180: ret  */

}

void sub_00782190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782190u);

L_00782190:
    PUSH32(esp, 0x004022C0u); /* 0x00782190: push 0x4022c0 */
    PUSH32(esp, 4); /* 0x00782195: push 4 */
    PUSH32(esp, 0x30u); /* 0x00782197: push 0x30 */
    PUSH32(esp, 0x008653B0u); /* 0x00782199: push 0x8653b0 */
    RECOMP_CALL(sub_0075C401); /* 0x0078219E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007821A3: ret  */

}

void sub_007821B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821B0u);

L_007821B0:
    PUSH32(esp, 0x004022C0u); /* 0x007821B0: push 0x4022c0 */
    PUSH32(esp, 2); /* 0x007821B5: push 2 */
    PUSH32(esp, 0x20u); /* 0x007821B7: push 0x20 */
    PUSH32(esp, 0x00865360u); /* 0x007821B9: push 0x865360 */
    RECOMP_CALL(sub_0075C401); /* 0x007821BE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007821C3: ret  */

}

void sub_007821D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821D0u);

L_007821D0:
    MEM32(0x865930) = 0x007A0604u; /* 0x007821D0: mov dword ptr [0x865930], 0x7a0604 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007821DA: ret  */

}

void sub_007821E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821E0u);

L_007821E0:
    ecx = 0x008652F8u; /* 0x007821E0: mov ecx, 0x8652f8 */
    RECOMP_ITAIL(0x00577A70u); RECOMP_RETURN(); /* 0x007821E5: jmp 0x577a70 */

}

void sub_007821F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821F0u);

L_007821F0:
    ecx = 0x008651A4u; /* 0x007821F0: mov ecx, 0x8651a4 */
    RECOMP_ITAIL(0x0057A280u); RECOMP_RETURN(); /* 0x007821F5: jmp 0x57a280 */

}

void sub_00782200(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782200u);

L_00782200:
    ecx = 0x0086519Cu; /* 0x00782200: mov ecx, 0x86519c */
    RECOMP_ITAIL(0x0057A250u); RECOMP_RETURN(); /* 0x00782205: jmp 0x57a250 */

}

void sub_00782210(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782210u);

L_00782210:
    ecx = 0x00866584u; /* 0x00782210: mov ecx, 0x866584 */
    RECOMP_ITAIL(0x0057A2C0u); RECOMP_RETURN(); /* 0x00782215: jmp 0x57a2c0 */

}

void sub_00782220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782220u);

L_00782220:
    ecx = 0x0086555Cu; /* 0x00782220: mov ecx, 0x86555c */
    RECOMP_ITAIL(0x0057A250u); RECOMP_RETURN(); /* 0x00782225: jmp 0x57a250 */

}

void sub_00782230(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782230u);

L_00782230:
    ecx = 0x00865564u; /* 0x00782230: mov ecx, 0x865564 */
    RECOMP_ITAIL(0x0057AF70u); RECOMP_RETURN(); /* 0x00782235: jmp 0x57af70 */

}

void sub_00782240(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782240u);

L_00782240:
    ecx = 0x00865220u; /* 0x00782240: mov ecx, 0x865220 */
    RECOMP_ITAIL(0x0057BC50u); RECOMP_RETURN(); /* 0x00782245: jmp 0x57bc50 */

}

void sub_00782250(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782250u);

L_00782250:
    ecx = 0x00865550u; /* 0x00782250: mov ecx, 0x865550 */
    RECOMP_ITAIL(0x0057BC50u); RECOMP_RETURN(); /* 0x00782255: jmp 0x57bc50 */

}

void sub_00782260(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782260u);

L_00782260:
    ecx = 0x008652F0u; /* 0x00782260: mov ecx, 0x8652f0 */
    RECOMP_ITAIL(0x0057BC90u); RECOMP_RETURN(); /* 0x00782265: jmp 0x57bc90 */

}

void sub_00782270(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782270u);

L_00782270:
    ecx = 0x00865190u; /* 0x00782270: mov ecx, 0x865190 */
    RECOMP_ITAIL(0x0057BC90u); RECOMP_RETURN(); /* 0x00782275: jmp 0x57bc90 */

}

void sub_00782280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782280u);

L_00782280:
    ecx = 0x00865210u; /* 0x00782280: mov ecx, 0x865210 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00782285: jmp 0x4835c0 */

}

void sub_00782290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782290u);

L_00782290:
    PUSH32(esp, 0x0057C320u); /* 0x00782290: push 0x57c320 */
    PUSH32(esp, 2); /* 0x00782295: push 2 */
    PUSH32(esp, 0x1C8u); /* 0x00782297: push 0x1c8 */
    PUSH32(esp, 0x008655A0u); /* 0x0078229C: push 0x8655a0 */
    RECOMP_CALL(sub_0075C401); /* 0x007822A1: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007822A6: ret  */

}

void sub_007822B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007822B0u);

L_007822B0:
    ecx = 0x00865218u; /* 0x007822B0: mov ecx, 0x865218 */
    RECOMP_ITAIL(0x0057A250u); RECOMP_RETURN(); /* 0x007822B5: jmp 0x57a250 */

}

void sub_007822C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007822C0u);

L_007822C0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007822C0: ret  */

}

void sub_007822D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007822D0u);

L_007822D0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007822D0: ret  */

}

void sub_007822E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007822E0u);

L_007822E0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007822E0: ret  */

}

void sub_007822F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007822F0u);

L_007822F0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007822F0: ret  */

}

void sub_00782300(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782300u);

L_00782300:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782300: ret  */

}

void sub_00782310(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782310u);

L_00782310:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782310: ret  */

}

void sub_00782320(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782320u);

L_00782320:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782320: ret  */

}

void sub_00782330(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782330u);

L_00782330:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782330: ret  */

}

void sub_00782340(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782340u);

L_00782340:
    PUSH32(esp, 0x004022C0u); /* 0x00782340: push 0x4022c0 */
    PUSH32(esp, 5); /* 0x00782345: push 5 */
    PUSH32(esp, 0x20u); /* 0x00782347: push 0x20 */
    PUSH32(esp, 0x008693C8u); /* 0x00782349: push 0x8693c8 */
    RECOMP_CALL(sub_0075C401); /* 0x0078234E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782353: ret  */

}

void sub_00782360(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782360u);

L_00782360:
    ecx = 0x0086A454u; /* 0x00782360: mov ecx, 0x86a454 */
    RECOMP_ITAIL(0x00584730u); RECOMP_RETURN(); /* 0x00782365: jmp 0x584730 */

}

void sub_00782370(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782370u);

L_00782370:
    ecx = 0x0086A388u; /* 0x00782370: mov ecx, 0x86a388 */
    RECOMP_ITAIL(0x005884E0u); RECOMP_RETURN(); /* 0x00782375: jmp 0x5884e0 */

}

void sub_00782380(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782380u);

L_00782380:
    ecx = 0x0086A490u; /* 0x00782380: mov ecx, 0x86a490 */
    RECOMP_ITAIL(0x00588580u); RECOMP_RETURN(); /* 0x00782385: jmp 0x588580 */

}

void sub_00782390(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782390u);

L_00782390:
    ecx = 0x0086A5E8u; /* 0x00782390: mov ecx, 0x86a5e8 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782395: jmp 0x4def30 */

}

void sub_007823A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007823A0u);

L_007823A0:
    ecx = 0x0086A5F4u; /* 0x007823A0: mov ecx, 0x86a5f4 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007823A5: jmp 0x4def30 */

}

void sub_007823B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007823B0u);

L_007823B0:
    ecx = 0x0086A758u; /* 0x007823B0: mov ecx, 0x86a758 */
    RECOMP_ITAIL(0x0058A1D0u); RECOMP_RETURN(); /* 0x007823B5: jmp 0x58a1d0 */

}

void sub_007823C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007823C0u);

L_007823C0:
    ecx = 0x0086A834u; /* 0x007823C0: mov ecx, 0x86a834 */
    RECOMP_ITAIL(0x0058F560u); RECOMP_RETURN(); /* 0x007823C5: jmp 0x58f560 */

}

void sub_007823D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007823D0u);

L_007823D0:
    ecx = 0x0086A858u; /* 0x007823D0: mov ecx, 0x86a858 */
    RECOMP_ITAIL(0x0058F5C0u); RECOMP_RETURN(); /* 0x007823D5: jmp 0x58f5c0 */

}

void sub_007823E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007823E0u);

L_007823E0:
    ecx = 0x0086B4C8u; /* 0x007823E0: mov ecx, 0x86b4c8 */
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x007823E5: jmp 0x4358e0 */

}

void sub_007823F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007823F0u);

L_007823F0:
    ecx = 0x0086B490u; /* 0x007823F0: mov ecx, 0x86b490 */
    RECOMP_ITAIL(0x005A8FD0u); RECOMP_RETURN(); /* 0x007823F5: jmp 0x5a8fd0 */

}

void sub_00782400(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782400u);

L_00782400:
    ecx = 0x0086B598u; /* 0x00782400: mov ecx, 0x86b598 */
    RECOMP_ITAIL(0x005E0800u); RECOMP_RETURN(); /* 0x00782405: jmp 0x5e0800 */

}

void sub_00782410(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782410u);

L_00782410:
    ecx = 0x0086B5A0u; /* 0x00782410: mov ecx, 0x86b5a0 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00782415: jmp 0x4835c0 */

}

void sub_00782420(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782420u);

L_00782420:
    ecx = 0x0086B4C0u; /* 0x00782420: mov ecx, 0x86b4c0 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782425: jmp 0x4def30 */

}

void sub_00782430(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782430u);

L_00782430:
    ecx = 0x0086B5A8u; /* 0x00782430: mov ecx, 0x86b5a8 */
    RECOMP_ITAIL(0x005B3320u); RECOMP_RETURN(); /* 0x00782435: jmp 0x5b3320 */

}

void sub_00782440(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782440u);

L_00782440:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782440: ret  */

}

void sub_00782450(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782450u);

L_00782450:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782450: ret  */

}

void sub_00782460(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782460u);

L_00782460:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782460: ret  */

}

void sub_00782470(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782470u);

L_00782470:
    PUSH32(esp, 0x005B8000u); /* 0x00782470: push 0x5b8000 */
    PUSH32(esp, 6); /* 0x00782475: push 6 */
    PUSH32(esp, 0x370u); /* 0x00782477: push 0x370 */
    PUSH32(esp, 0x00874C40u); /* 0x0078247C: push 0x874c40 */
    RECOMP_CALL(sub_0075C401); /* 0x00782481: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782486: ret  */

}

void sub_00782490(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782490u);

L_00782490:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782490: ret  */

}

void sub_007824A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007824A0u);

L_007824A0:
    ecx = 0x00872B4Cu; /* 0x007824A0: mov ecx, 0x872b4c */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007824A5: jmp 0x4def30 */

}

void sub_007824B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007824B0u);

L_007824B0:
    ecx = 0x008763B0u; /* 0x007824B0: mov ecx, 0x8763b0 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x007824B5: jmp 0x4835c0 */

}

void sub_007824C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007824C0u);

L_007824C0:
    ecx = 0x00872ED0u; /* 0x007824C0: mov ecx, 0x872ed0 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007824C5: jmp 0x4def30 */

}

void sub_007824D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007824D0u);

L_007824D0:
    ecx = 0x00872B44u; /* 0x007824D0: mov ecx, 0x872b44 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x007824D5: jmp 0x4835c0 */

}

void sub_007824E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007824E0u);

L_007824E0:
    ecx = 0x00870D28u; /* 0x007824E0: mov ecx, 0x870d28 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x007824E5: jmp 0x4835c0 */

}

void sub_007824F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007824F0u);

L_007824F0:
    PUSH32(esp, 0x005CF410u); /* 0x007824F0: push 0x5cf410 */
    PUSH32(esp, 0x10u); /* 0x007824F5: push 0x10 */
    PUSH32(esp, 0xB8u); /* 0x007824F7: push 0xb8 */
    PUSH32(esp, 0x00870D30u); /* 0x007824FC: push 0x870d30 */
    RECOMP_CALL(sub_0075C401); /* 0x00782501: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782506: ret  */

}

void sub_00782510(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782510u);

L_00782510:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782510: ret  */

}

void sub_00782520(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782520u);

L_00782520:
    PUSH32(esp, 0x00605400u); /* 0x00782520: push 0x605400 */
    PUSH32(esp, 2); /* 0x00782525: push 2 */
    PUSH32(esp, 0x30u); /* 0x00782527: push 0x30 */
    PUSH32(esp, 0x0088A2C0u); /* 0x00782529: push 0x88a2c0 */
    RECOMP_CALL(sub_0075C401); /* 0x0078252E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782533: ret  */

}

void sub_00782540(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782540u);

L_00782540:
    PUSH32(esp, 0x00605400u); /* 0x00782540: push 0x605400 */
    PUSH32(esp, 2); /* 0x00782545: push 2 */
    PUSH32(esp, 0x30u); /* 0x00782547: push 0x30 */
    PUSH32(esp, 0x0088EA08u); /* 0x00782549: push 0x88ea08 */
    RECOMP_CALL(sub_0075C401); /* 0x0078254E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782553: ret  */

}

void sub_00782560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782560u);

L_00782560:
    PUSH32(esp, 0x00605400u); /* 0x00782560: push 0x605400 */
    PUSH32(esp, 2); /* 0x00782565: push 2 */
    PUSH32(esp, 0x30u); /* 0x00782567: push 0x30 */
    PUSH32(esp, 0x0088F210u); /* 0x00782569: push 0x88f210 */
    RECOMP_CALL(sub_0075C401); /* 0x0078256E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782573: ret  */

}

void sub_00782580(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782580u);

L_00782580:
    ecx = 0x0088EA68u; /* 0x00782580: mov ecx, 0x88ea68 */
    RECOMP_ITAIL(0x004367C0u); RECOMP_RETURN(); /* 0x00782585: jmp 0x4367c0 */

}

void sub_00782590(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782590u);

L_00782590:
    ecx = 0x0088EA8Cu; /* 0x00782590: mov ecx, 0x88ea8c */
    RECOMP_ITAIL(0x005DC590u); RECOMP_RETURN(); /* 0x00782595: jmp 0x5dc590 */

}

void sub_007825A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007825A0u);

L_007825A0:
    ecx = 0x0088E9FCu; /* 0x007825A0: mov ecx, 0x88e9fc */
    RECOMP_ITAIL(0x005DC5C0u); RECOMP_RETURN(); /* 0x007825A5: jmp 0x5dc5c0 */

}

void sub_007825B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007825B0u);

L_007825B0:
    ecx = 0x0088EA84u; /* 0x007825B0: mov ecx, 0x88ea84 */
    RECOMP_ITAIL(0x005DC600u); RECOMP_RETURN(); /* 0x007825B5: jmp 0x5dc600 */

}

void sub_007825C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007825C0u);

L_007825C0:
    ecx = 0x0088EADCu; /* 0x007825C0: mov ecx, 0x88eadc */
    RECOMP_ITAIL(0x005DC640u); RECOMP_RETURN(); /* 0x007825C5: jmp 0x5dc640 */

}

void sub_007825D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007825D0u);

L_007825D0:
    ecx = 0x0088F760u; /* 0x007825D0: mov ecx, 0x88f760 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x007825D5: jmp 0x4def30 */

}

void sub_007825E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007825E0u);

L_007825E0:
    ecx = 0x0088E9C4u; /* 0x007825E0: mov ecx, 0x88e9c4 */
    RECOMP_ITAIL(0x005E0830u); RECOMP_RETURN(); /* 0x007825E5: jmp 0x5e0830 */

}

void sub_007825F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007825F0u);

L_007825F0:
    ecx = 0x0088F208u; /* 0x007825F0: mov ecx, 0x88f208 */
    RECOMP_ITAIL(0x005E0870u); RECOMP_RETURN(); /* 0x007825F5: jmp 0x5e0870 */

}

void sub_00782600(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782600u);

L_00782600:
    ecx = 0x0088FF98u; /* 0x00782600: mov ecx, 0x88ff98 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00782605: jmp 0x4835c0 */

}

void sub_00782610(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782610u);

L_00782610:
    ecx = 0x0088F270u; /* 0x00782610: mov ecx, 0x88f270 */
    RECOMP_ITAIL(0x005E57E0u); RECOMP_RETURN(); /* 0x00782615: jmp 0x5e57e0 */

}

void sub_00782620(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782620u);

L_00782620:
    ecx = 0x0088F740u; /* 0x00782620: mov ecx, 0x88f740 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782625: jmp 0x4def30 */

}

void sub_00782630(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782630u);

L_00782630:
    ecx = 0x0088F298u; /* 0x00782630: mov ecx, 0x88f298 */
    RECOMP_ITAIL(0x005E48A0u); RECOMP_RETURN(); /* 0x00782635: jmp 0x5e48a0 */

}

void sub_00782640(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782640u);

L_00782640:
    ecx = 0x0088EAD4u; /* 0x00782640: mov ecx, 0x88ead4 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782645: jmp 0x4def30 */

}

void sub_00782650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782650u);

L_00782650:
    PUSH32(esp, 0x004DEF30u); /* 0x00782650: push 0x4def30 */
    PUSH32(esp, 8); /* 0x00782655: push 8 */
    PUSH32(esp, 8); /* 0x00782657: push 8 */
    PUSH32(esp, 0x0088F1C8u); /* 0x00782659: push 0x88f1c8 */
    RECOMP_CALL(sub_0075C401); /* 0x0078265E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782663: ret  */

}

void sub_00782670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782670u);

L_00782670:
    ecx = 0x0088F28Cu; /* 0x00782670: mov ecx, 0x88f28c */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782675: jmp 0x4def30 */

}

void sub_00782680(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782680u);

L_00782680:
    ecx = 0x0088FFA0u; /* 0x00782680: mov ecx, 0x88ffa0 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782685: jmp 0x4def30 */

}

void sub_00782690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782690u);

L_00782690:
    ecx = 0x0088F1BCu; /* 0x00782690: mov ecx, 0x88f1bc */
    RECOMP_ITAIL(0x005E66A0u); RECOMP_RETURN(); /* 0x00782695: jmp 0x5e66a0 */

}

void sub_007826A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007826A0u);

L_007826A0:
    ecx = 0x0088A320u; /* 0x007826A0: mov ecx, 0x88a320 */
    RECOMP_ITAIL(0x005E5B10u); RECOMP_RETURN(); /* 0x007826A5: jmp 0x5e5b10 */

}

void sub_007826B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007826B0u);

L_007826B0:
    ecx = 0x00883E70u; /* 0x007826B0: mov ecx, 0x883e70 */
    RECOMP_ITAIL(0x005E6490u); RECOMP_RETURN(); /* 0x007826B5: jmp 0x5e6490 */

}

void sub_007826C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007826C0u);

L_007826C0:
    ecx = 0x0088F768u; /* 0x007826C0: mov ecx, 0x88f768 */
    RECOMP_ITAIL(0x005E8200u); RECOMP_RETURN(); /* 0x007826C5: jmp 0x5e8200 */

}

void sub_007826D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007826D0u);

L_007826D0:
    PUSH32(esp, 0x0050F7D0u); /* 0x007826D0: push 0x50f7d0 */
    PUSH32(esp, 0x16u); /* 0x007826D5: push 0x16 */
    PUSH32(esp, 0x940u); /* 0x007826D7: push 0x940 */
    PUSH32(esp, 0x00890160u); /* 0x007826DC: push 0x890160 */
    RECOMP_CALL(sub_0075C401); /* 0x007826E1: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007826E6: ret  */

}

void sub_007826F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007826F0u);

L_007826F0:
    ecx = 0x0089CF48u; /* 0x007826F0: mov ecx, 0x89cf48 */
    RECOMP_ITAIL(0x005EFCB0u); RECOMP_RETURN(); /* 0x007826F5: jmp 0x5efcb0 */

}

void sub_00782700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782700u);

L_00782700:
    ecx = 0x0089E838u; /* 0x00782700: mov ecx, 0x89e838 */
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00782705: jmp 0x4358e0 */

}

void sub_00782710(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782710u);

L_00782710:
    ecx = 0x0089E844u; /* 0x00782710: mov ecx, 0x89e844 */
    RECOMP_ITAIL(0x0060B2F0u); RECOMP_RETURN(); /* 0x00782715: jmp 0x60b2f0 */

}

void sub_00782720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782720u);

L_00782720:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782720: ret  */

}

void sub_00782730(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782730u);

L_00782730:
    ecx = 0x008A1F28u; /* 0x00782730: mov ecx, 0x8a1f28 */
    RECOMP_ITAIL(0x00605390u); RECOMP_RETURN(); /* 0x00782735: jmp 0x605390 */

}

void sub_00782740(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782740u);

L_00782740:
    PUSH32(esp, 0x00605400u); /* 0x00782740: push 0x605400 */
    PUSH32(esp, 2); /* 0x00782745: push 2 */
    PUSH32(esp, 0x30u); /* 0x00782747: push 0x30 */
    PUSH32(esp, 0x008A3180u); /* 0x00782749: push 0x8a3180 */
    RECOMP_CALL(sub_0075C401); /* 0x0078274E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782753: ret  */

}

void sub_00782760(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782760u);

L_00782760:
    PUSH32(esp, 0x00605400u); /* 0x00782760: push 0x605400 */
    PUSH32(esp, 2); /* 0x00782765: push 2 */
    PUSH32(esp, 0x30u); /* 0x00782767: push 0x30 */
    PUSH32(esp, 0x008A1E90u); /* 0x00782769: push 0x8a1e90 */
    RECOMP_CALL(sub_0075C401); /* 0x0078276E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782773: ret  */

}

void sub_00782780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782780u);

L_00782780:
    PUSH32(esp, 0x00605400u); /* 0x00782780: push 0x605400 */
    PUSH32(esp, 2); /* 0x00782785: push 2 */
    PUSH32(esp, 0x30u); /* 0x00782787: push 0x30 */
    PUSH32(esp, 0x008A31F0u); /* 0x00782789: push 0x8a31f0 */
    RECOMP_CALL(sub_0075C401); /* 0x0078278E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782793: ret  */

}

void sub_007827A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007827A0u);

L_007827A0:
    PUSH32(esp, 0x00605400u); /* 0x007827A0: push 0x605400 */
    PUSH32(esp, 2); /* 0x007827A5: push 2 */
    PUSH32(esp, 0x30u); /* 0x007827A7: push 0x30 */
    PUSH32(esp, 0x008A1E30u); /* 0x007827A9: push 0x8a1e30 */
    RECOMP_CALL(sub_0075C401); /* 0x007827AE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007827B3: ret  */

}

void sub_007827C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007827C0u);

L_007827C0:
    PUSH32(esp, 0x00605390u); /* 0x007827C0: push 0x605390 */
    PUSH32(esp, 2); /* 0x007827C5: push 2 */
    PUSH32(esp, 0x1Cu); /* 0x007827C7: push 0x1c */
    PUSH32(esp, 0x008A3250u); /* 0x007827C9: push 0x8a3250 */
    RECOMP_CALL(sub_0075C401); /* 0x007827CE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007827D3: ret  */

}

void sub_007827E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007827E0u);

L_007827E0:
    ecx = 0x008A1DE4u; /* 0x007827E0: mov ecx, 0x8a1de4 */
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x007827E5: jmp 0x4903b0 */

}

void sub_007827F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007827F0u);

L_007827F0:
    ecx = 0x008A3168u; /* 0x007827F0: mov ecx, 0x8a3168 */
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x007827F5: jmp 0x4903b0 */

}

void sub_00782800(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782800u);

L_00782800:
    ecx = 0x008A1DFCu; /* 0x00782800: mov ecx, 0x8a1dfc */
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x00782805: jmp 0x4903b0 */

}

void sub_00782810(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782810u);

L_00782810:
    ecx = 0x008A1F10u; /* 0x00782810: mov ecx, 0x8a1f10 */
    RECOMP_ITAIL(0x004903B0u); RECOMP_RETURN(); /* 0x00782815: jmp 0x4903b0 */

}

void sub_00782820(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782820u);

L_00782820:
    PUSH32(esp, 0x004022C0u); /* 0x00782820: push 0x4022c0 */
    PUSH32(esp, 1); /* 0x00782825: push 1 */
    PUSH32(esp, 0x64u); /* 0x00782827: push 0x64 */
    PUSH32(esp, 0x008A42C0u); /* 0x00782829: push 0x8a42c0 */
    RECOMP_CALL(sub_0075C401); /* 0x0078282E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782833: ret  */

}

void sub_00782840(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782840u);

L_00782840:
    ecx = 0x008A2B50u; /* 0x00782840: mov ecx, 0x8a2b50 */
    RECOMP_ITAIL(0x00637ED0u); RECOMP_RETURN(); /* 0x00782845: jmp 0x637ed0 */

}

void sub_00782850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782850u);

L_00782850:
    ecx = 0x008A2B68u; /* 0x00782850: mov ecx, 0x8a2b68 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782855: jmp 0x4def30 */

}

void sub_00782860(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782860u);

L_00782860:
    ecx = 0x008A31E4u; /* 0x00782860: mov ecx, 0x8a31e4 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782865: jmp 0x4def30 */

}

void sub_00782870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782870u);

L_00782870:
    ecx = 0x008A3288u; /* 0x00782870: mov ecx, 0x8a3288 */
    RECOMP_ITAIL(0x006379B0u); RECOMP_RETURN(); /* 0x00782875: jmp 0x6379b0 */

}

void sub_00782880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782880u);

L_00782880:
    ecx = 0x008A3148u; /* 0x00782880: mov ecx, 0x8a3148 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782885: jmp 0x4def30 */

}

void sub_00782890(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782890u);

L_00782890:
    ecx = 0x008A4260u; /* 0x00782890: mov ecx, 0x8a4260 */
    RECOMP_ITAIL(0x00637F10u); RECOMP_RETURN(); /* 0x00782895: jmp 0x637f10 */

}

void sub_007828A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828A0u);

L_007828A0:
    ecx = 0x008A2CA4u; /* 0x007828A0: mov ecx, 0x8a2ca4 */
    RECOMP_ITAIL(0x0063B4D0u); RECOMP_RETURN(); /* 0x007828A5: jmp 0x63b4d0 */

}

void sub_007828B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828B0u);

L_007828B0:
    ecx = 0x008A30F0u; /* 0x007828B0: mov ecx, 0x8a30f0 */
    RECOMP_ITAIL(0x0063B510u); RECOMP_RETURN(); /* 0x007828B5: jmp 0x63b510 */

}

void sub_007828C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828C0u);

L_007828C0:
    ecx = 0x008A2C9Cu; /* 0x007828C0: mov ecx, 0x8a2c9c */
    RECOMP_ITAIL(0x0063B550u); RECOMP_RETURN(); /* 0x007828C5: jmp 0x63b550 */

}

void sub_007828D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828D0u);

    goto L_007828D0;

L_006D86E0:
    PUSH32(esp, esi); /* 0x006D86E0: push esi */
    esi = ecx; /* 0x006D86E1: mov esi, ecx */
    RECOMP_CALL(sub_006D8650); /* 0x006D86E3: call 0x6d8650 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x006D86E8: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x006D86EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8707; /* 0x006D86ED: je 0x6d8707 */

L_006D86EF:
    ecx = MEM32(esi + 0x4); /* 0x006D86EF: mov ecx, dword ptr [esi + 4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x006D86F2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x006D86F2: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x006D86F5: push ecx */
    PUSH32(esp, eax); /* 0x006D86F6: push eax */
    RECOMP_ICALL(MEM32(0x80BFDC)); /* 0x006D86F7: call dword ptr [0x80bfdc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D86FD: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x006D8700: mov dword ptr [esi + 8], 0 */

L_006D8707:
    esi = POP32_VAL(esp); /* 0x006D8707: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006D8708: ret  */

L_007828D0:
    ecx = 0x008A7114u; /* 0x007828D0: mov ecx, 0x8a7114 */
    RECOMP_BACKEDGE();
    goto L_006D86E0; /* 0x007828D5: jmp 0x6d86e0 */

}

void sub_007828E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828E0u);

    goto L_007828E0;

L_006D86E0:
    PUSH32(esp, esi); /* 0x006D86E0: push esi */
    esi = ecx; /* 0x006D86E1: mov esi, ecx */
    RECOMP_CALL(sub_006D8650); /* 0x006D86E3: call 0x6d8650 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x006D86E8: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x006D86EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8707; /* 0x006D86ED: je 0x6d8707 */

L_006D86EF:
    ecx = MEM32(esi + 0x4); /* 0x006D86EF: mov ecx, dword ptr [esi + 4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x006D86F2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x006D86F2: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x006D86F5: push ecx */
    PUSH32(esp, eax); /* 0x006D86F6: push eax */
    RECOMP_ICALL(MEM32(0x80BFDC)); /* 0x006D86F7: call dword ptr [0x80bfdc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D86FD: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x006D8700: mov dword ptr [esi + 8], 0 */

L_006D8707:
    esi = POP32_VAL(esp); /* 0x006D8707: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006D8708: ret  */

L_006D87C0:
    PUSH32(esp, esi); /* 0x006D87C0: push esi */
    PUSH32(esp, edi); /* 0x006D87C1: push edi */
    esi = ecx; /* 0x006D87C2: mov esi, ecx */
    RECOMP_CALL(sub_006D86E0); /* 0x006D87C4: call 0x6d86e0 */
    RECOMP_FLAGS_IN();
    edi = esi + 0x14; /* 0x006D87C9: lea edi, [esi + 0x14] */
    ecx = edi; /* 0x006D87CC: mov ecx, edi */
    RECOMP_CALL(sub_006D86E0); /* 0x006D87CE: call 0x6d86e0 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006D87D3: mov ecx, edi */
    RECOMP_CALL(sub_006D86E0); /* 0x006D87D5: call 0x6d86e0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D87DA: pop edi */
    ecx = esi; /* 0x006D87DB: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x006D87DD: pop esi */
    RECOMP_BACKEDGE();
    goto L_006D86E0; /* 0x006D87DE: jmp 0x6d86e0 */

L_007828E0:
    ecx = 0x008A7168u; /* 0x007828E0: mov ecx, 0x8a7168 */
    RECOMP_BACKEDGE();
    goto L_006D87C0; /* 0x007828E5: jmp 0x6d87c0 */

}

void sub_007828F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828F0u);

    goto L_007828F0;

L_006D86E0:
    PUSH32(esp, esi); /* 0x006D86E0: push esi */
    esi = ecx; /* 0x006D86E1: mov esi, ecx */
    RECOMP_CALL(sub_006D8650); /* 0x006D86E3: call 0x6d8650 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x006D86E8: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x006D86EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8707; /* 0x006D86ED: je 0x6d8707 */

L_006D86EF:
    ecx = MEM32(esi + 0x4); /* 0x006D86EF: mov ecx, dword ptr [esi + 4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x006D86F2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x006D86F2: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x006D86F5: push ecx */
    PUSH32(esp, eax); /* 0x006D86F6: push eax */
    RECOMP_ICALL(MEM32(0x80BFDC)); /* 0x006D86F7: call dword ptr [0x80bfdc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D86FD: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x006D8700: mov dword ptr [esi + 8], 0 */

L_006D8707:
    esi = POP32_VAL(esp); /* 0x006D8707: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006D8708: ret  */

L_006D87C0:
    PUSH32(esp, esi); /* 0x006D87C0: push esi */
    PUSH32(esp, edi); /* 0x006D87C1: push edi */
    esi = ecx; /* 0x006D87C2: mov esi, ecx */
    RECOMP_CALL(sub_006D86E0); /* 0x006D87C4: call 0x6d86e0 */
    RECOMP_FLAGS_IN();
    edi = esi + 0x14; /* 0x006D87C9: lea edi, [esi + 0x14] */
    ecx = edi; /* 0x006D87CC: mov ecx, edi */
    RECOMP_CALL(sub_006D86E0); /* 0x006D87CE: call 0x6d86e0 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006D87D3: mov ecx, edi */
    RECOMP_CALL(sub_006D86E0); /* 0x006D87D5: call 0x6d86e0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D87DA: pop edi */
    ecx = esi; /* 0x006D87DB: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x006D87DD: pop esi */
    RECOMP_BACKEDGE();
    goto L_006D86E0; /* 0x006D87DE: jmp 0x6d86e0 */

L_007828F0:
    ecx = 0x008A7140u; /* 0x007828F0: mov ecx, 0x8a7140 */
    RECOMP_BACKEDGE();
    goto L_006D87C0; /* 0x007828F5: jmp 0x6d87c0 */

}

void sub_00782900(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782900u);

L_00782900:
    ecx = 0x008A7BF8u; /* 0x00782900: mov ecx, 0x8a7bf8 */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00782905: jmp 0x4022c0 */

}

void sub_00782910(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782910u);

L_00782910:
    ecx = 0x008A7E38u; /* 0x00782910: mov ecx, 0x8a7e38 */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00782915: jmp 0x4022c0 */

}

void sub_00782920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782920u);

L_00782920:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782920: ret  */

}

void sub_00782930(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782930u);

    goto L_00782930;

L_006DE3A0:
    eax = MEM32(0x8A85CC); /* 0x006DE3A0: mov eax, dword ptr [0x8a85cc] */
    /* cmp eax, ecx */ /* 0x006DE3A5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DE3B5; /* 0x006DE3A7: jne 0x6de3b5 */

L_006DE3A9:
    eax = MEM32(ecx + 0x124); /* 0x006DE3A9: mov eax, dword ptr [ecx + 0x124] */
    MEM32(0x8A85CC) = eax; /* 0x006DE3AF: mov dword ptr [0x8a85cc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DE3B4: ret  */

L_006DE3B5:
    /* cmp MEM32(eax + 0x124), ecx */ /* 0x006DE3B5: cmp dword ptr [eax + 0x124], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x124)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DE3DC; /* 0x006DE3BB: je 0x6de3dc */

L_006DE3BD:
    ecx = ecx; /* 0x006DE3BD: lea ecx, [ecx] */

L_006DE3C0:
    edx = MEM32(eax + 0x124); /* 0x006DE3C0: mov edx, dword ptr [eax + 0x124] */
    /* test edx, edx */ /* 0x006DE3C6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DE3D4; /* 0x006DE3C8: je 0x6de3d4 */

L_006DE3CA:
    eax = edx; /* 0x006DE3CA: mov eax, edx */
    /* cmp MEM32(eax + 0x124), ecx */ /* 0x006DE3CC: cmp dword ptr [eax + 0x124], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x124)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DE3C0; /* 0x006DE3D2: jne 0x6de3c0 */

L_006DE3D4:
    /* cmp MEM32(eax + 0x124), ecx */ /* 0x006DE3D4: cmp dword ptr [eax + 0x124], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x124)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DE3E8; /* 0x006DE3DA: jne 0x6de3e8 */

L_006DE3DC:
    ecx = MEM32(ecx + 0x124); /* 0x006DE3DC: mov ecx, dword ptr [ecx + 0x124] */
    MEM32(eax + 0x124) = ecx; /* 0x006DE3E2: mov dword ptr [eax + 0x124], ecx */

L_006DE3E8:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DE3E8: ret  */

L_00782930:
    ecx = 0x008A85F0u; /* 0x00782930: mov ecx, 0x8a85f0 */
    RECOMP_BACKEDGE();
    goto L_006DE3A0; /* 0x00782935: jmp 0x6de3a0 */

}

void sub_00782940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782940u);

    goto L_00782940;

L_006DE3A0:
    eax = MEM32(0x8A85CC); /* 0x006DE3A0: mov eax, dword ptr [0x8a85cc] */
    /* cmp eax, ecx */ /* 0x006DE3A5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DE3B5; /* 0x006DE3A7: jne 0x6de3b5 */

L_006DE3A9:
    eax = MEM32(ecx + 0x124); /* 0x006DE3A9: mov eax, dword ptr [ecx + 0x124] */
    MEM32(0x8A85CC) = eax; /* 0x006DE3AF: mov dword ptr [0x8a85cc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DE3B4: ret  */

L_006DE3B5:
    /* cmp MEM32(eax + 0x124), ecx */ /* 0x006DE3B5: cmp dword ptr [eax + 0x124], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x124)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DE3DC; /* 0x006DE3BB: je 0x6de3dc */

L_006DE3BD:
    ecx = ecx; /* 0x006DE3BD: lea ecx, [ecx] */

L_006DE3C0:
    edx = MEM32(eax + 0x124); /* 0x006DE3C0: mov edx, dword ptr [eax + 0x124] */
    /* test edx, edx */ /* 0x006DE3C6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DE3D4; /* 0x006DE3C8: je 0x6de3d4 */

L_006DE3CA:
    eax = edx; /* 0x006DE3CA: mov eax, edx */
    /* cmp MEM32(eax + 0x124), ecx */ /* 0x006DE3CC: cmp dword ptr [eax + 0x124], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x124)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DE3C0; /* 0x006DE3D2: jne 0x6de3c0 */

L_006DE3D4:
    /* cmp MEM32(eax + 0x124), ecx */ /* 0x006DE3D4: cmp dword ptr [eax + 0x124], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x124)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DE3E8; /* 0x006DE3DA: jne 0x6de3e8 */

L_006DE3DC:
    ecx = MEM32(ecx + 0x124); /* 0x006DE3DC: mov ecx, dword ptr [ecx + 0x124] */
    MEM32(eax + 0x124) = ecx; /* 0x006DE3E2: mov dword ptr [eax + 0x124], ecx */

L_006DE3E8:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DE3E8: ret  */

L_00782940:
    ecx = 0x008A8738u; /* 0x00782940: mov ecx, 0x8a8738 */
    RECOMP_BACKEDGE();
    goto L_006DE3A0; /* 0x00782945: jmp 0x6de3a0 */

}

void sub_00782950(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782950u);

    goto L_00782950;

L_006DE650:
    PUSH32(esp, ecx); /* 0x006DE650: push ecx */
    MEM32(esp) = ecx; /* 0x006DE651: mov dword ptr [esp], ecx */
    SET_LO8(eax, MEM8(ecx + 0x10)); /* 0x006DE655: mov al, byte ptr [ecx + 0x10] */
    /* test LO8(eax), LO8(eax) */ /* 0x006DE658: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DE6A0; /* 0x006DE65A: je 0x6de6a0 */

L_006DE65C:
    PUSH32(esp, esi); /* 0x006DE65C: push esi */
    { uint64_t _t = __rdtsc(); eax = (uint32_t)_t; edx = (uint32_t)(_t >> 32); } /* 0x006DE65D: rdtsc  */
    edx = MEM32(esp + 0x4); /* 0x006DE65F: mov edx, dword ptr [esp + 4] */
    esi = MEM32(edx + 0xC); /* 0x006DE663: mov esi, dword ptr [edx + 0xc] */
    ecx = MEM32(edx); /* 0x006DE666: mov ecx, dword ptr [edx] */
    edx = MEM32(ecx + 0x110); /* 0x006DE668: mov edx, dword ptr [ecx + 0x110] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006DE66E: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006DE670: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x110) = edx; /* 0x006DE672: mov dword ptr [ecx + 0x110], edx */
    eax = MEM32(esp + 0x4); /* 0x006DE678: mov eax, dword ptr [esp + 4] */
    MEM8(eax + 0x10) = (uint8_t)(0); /* 0x006DE67C: mov byte ptr [eax + 0x10], 0 */
    ecx = MEM32(esp + 0x4); /* 0x006DE680: mov ecx, dword ptr [esp + 4] */
    ecx = MEM32(ecx + 0x4); /* 0x006DE684: mov ecx, dword ptr [ecx + 4] */
    SET_LO8(eax, MEM8(ecx + 0x10)); /* 0x006DE687: mov al, byte ptr [ecx + 0x10] */
    /* test LO8(eax), LO8(eax) */ /* 0x006DE68A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x006DE68C: pop esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DE6AD; /* 0x006DE68D: jne 0x6de6ad */

L_006DE68F:
    MEM32(0x80F09C) = ecx; /* 0x006DE68F: mov dword ptr [0x80f09c], ecx */
    { uint64_t _t = __rdtsc(); eax = (uint32_t)_t; edx = (uint32_t)(_t >> 32); } /* 0x006DE695: rdtsc  */
    MEM32(ecx + 0xC) = eax; /* 0x006DE697: mov dword ptr [ecx + 0xc], eax */
    MEM8(ecx + 0x10) = (uint8_t)(1); /* 0x006DE69A: mov byte ptr [ecx + 0x10], 1 */
    ecx = POP32_VAL(esp); /* 0x006DE69E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DE69F: ret  */

L_006DE6A0:
    eax = MEM32(ecx + 0x8); /* 0x006DE6A0: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x006DE6A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DE6AD; /* 0x006DE6A5: je 0x6de6ad */

L_006DE6A7:
    edx = MEM32(ecx + 0x4); /* 0x006DE6A7: mov edx, dword ptr [ecx + 4] */
    MEM32(eax + 0x4) = edx; /* 0x006DE6AA: mov dword ptr [eax + 4], edx */

L_006DE6AD:
    ecx = POP32_VAL(esp); /* 0x006DE6AD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DE6AE: ret  */

L_00782950:
    ecx = 0x008A8718u; /* 0x00782950: mov ecx, 0x8a8718 */
    RECOMP_BACKEDGE();
    goto L_006DE650; /* 0x00782955: jmp 0x6de650 */

}

void sub_00782960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782960u);

L_00782960:
    ecx = 0x008AAAD8u; /* 0x00782960: mov ecx, 0x8aaad8 */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00782965: jmp 0x4022c0 */

}

void sub_00782970(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782970u);

    goto L_00782970;

L_006DAE70:
    eax = MEM32(ecx + 0x1C); /* 0x006DAE70: mov eax, dword ptr [ecx + 0x1c] */
    /* test eax, eax */ /* 0x006DAE73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAE83; /* 0x006DAE75: je 0x6dae83 */

L_006DAE77:
    /* cmp MEM32(ecx), 0 */ /* 0x006DAE77: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DAE83; /* 0x006DAE7A: je 0x6dae83 */

L_006DAE7C:
    PUSH32(esp, ecx); /* 0x006DAE7C: push ecx */
    RECOMP_CALL(sub_006DABE0); /* 0x006DAE7D: call 0x6dabe0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006DAE82: pop ecx */

L_006DAE83:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DAE83: ret  */

L_00782970:
    ecx = 0x008AB668u; /* 0x00782970: mov ecx, 0x8ab668 */
    RECOMP_BACKEDGE();
    goto L_006DAE70; /* 0x00782975: jmp 0x6dae70 */

}

void sub_00782980(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782980u);

    goto L_00782980;

L_006DAE70:
    eax = MEM32(ecx + 0x1C); /* 0x006DAE70: mov eax, dword ptr [ecx + 0x1c] */
    /* test eax, eax */ /* 0x006DAE73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAE83; /* 0x006DAE75: je 0x6dae83 */

L_006DAE77:
    /* cmp MEM32(ecx), 0 */ /* 0x006DAE77: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DAE83; /* 0x006DAE7A: je 0x6dae83 */

L_006DAE7C:
    PUSH32(esp, ecx); /* 0x006DAE7C: push ecx */
    RECOMP_CALL(sub_006DABE0); /* 0x006DAE7D: call 0x6dabe0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006DAE82: pop ecx */

L_006DAE83:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006DAE83: ret  */

L_00782980:
    ecx = 0x008AB6B8u; /* 0x00782980: mov ecx, 0x8ab6b8 */
    RECOMP_BACKEDGE();
    goto L_006DAE70; /* 0x00782985: jmp 0x6dae70 */

}

void sub_00782990(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782990u);

L_00782990:
    MEM32(0x8AD618) = 0x007A0358u; /* 0x00782990: mov dword ptr [0x8ad618], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078299A: ret  */

}

void sub_0078299B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078299Bu);

    goto L_0078299B;

L_006F6B35:
    eax = MEM32(ecx); /* 0x006F6B35: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x006F6B37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6B4A; /* 0x006F6B39: je 0x6f6b4a */

L_006F6B3B:
    edx = MEM32(eax); /* 0x006F6B3B: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x006F6B3D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F6B4A; /* 0x006F6B3F: je 0x6f6b4a */

L_006F6B41:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x006F6B41: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006F6B44: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x006F6B46: mov eax, edx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F6B3B; /* 0x006F6B48: jne 0x6f6b3b */

L_006F6B4A:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x006F6B4A: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x006F6B4E: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x006F6B51: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006F6B55: ret  */

L_0078299B:
    ecx = 0x008AD69Cu; /* 0x0078299B: mov ecx, 0x8ad69c */
    RECOMP_BACKEDGE();
    goto L_006F6B35; /* 0x007829A0: jmp 0x6f6b35 */

}

void sub_007829A5(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829A5u);

L_007829A5:
    MEM32(0x8AD74C) = 0x007A0358u; /* 0x007829A5: mov dword ptr [0x8ad74c], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829AF: ret  */

}

void sub_007829B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829B0u);

L_007829B0:
    MEM32(0x8AD7B0) = 0x007A0358u; /* 0x007829B0: mov dword ptr [0x8ad7b0], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829BA: ret  */

}

void sub_007829BB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829BBu);

L_007829BB:
    MEM32(0x8AD7D8) = 0x007A0358u; /* 0x007829BB: mov dword ptr [0x8ad7d8], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829C5: ret  */

}

void sub_007829C6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829C6u);

L_007829C6:
    MEM32(0x8AD710) = 0x007A0358u; /* 0x007829C6: mov dword ptr [0x8ad710], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829D0: ret  */

}

void sub_007829D1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829D1u);

L_007829D1:
    MEM32(0x8AD800) = 0x007A0358u; /* 0x007829D1: mov dword ptr [0x8ad800], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829DB: ret  */

}

void sub_007829DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829DCu);

L_007829DC:
    MEM32(0x8AD760) = 0x007A0358u; /* 0x007829DC: mov dword ptr [0x8ad760], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829E6: ret  */

}

void sub_007829E7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829E7u);

L_007829E7:
    MEM32(0x8AD850) = 0x007A0358u; /* 0x007829E7: mov dword ptr [0x8ad850], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829F1: ret  */

}

void sub_007829F2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829F2u);

L_007829F2:
    MEM32(0x8AD724) = 0x007A0358u; /* 0x007829F2: mov dword ptr [0x8ad724], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007829FC: ret  */

}

void sub_007829FD(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829FDu);

L_007829FD:
    MEM32(0x8AD83C) = 0x007A0358u; /* 0x007829FD: mov dword ptr [0x8ad83c], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A07: ret  */

}

void sub_00782A08(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A08u);

L_00782A08:
    MEM32(0x8AD788) = 0x007A0358u; /* 0x00782A08: mov dword ptr [0x8ad788], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A12: ret  */

}

void sub_00782A13(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A13u);

L_00782A13:
    MEM32(0x8AD814) = 0x007A0358u; /* 0x00782A13: mov dword ptr [0x8ad814], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A1D: ret  */

}

void sub_00782A1E(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A1Eu);

L_00782A1E:
    MEM32(0x8AD8B4) = 0x007A0358u; /* 0x00782A1E: mov dword ptr [0x8ad8b4], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A28: ret  */

}

void sub_00782A29(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A29u);

L_00782A29:
    MEM32(0x8AD904) = 0x007A0358u; /* 0x00782A29: mov dword ptr [0x8ad904], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A33: ret  */

}

void sub_00782A34(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A34u);

L_00782A34:
    MEM32(0x8AD878) = 0x007A0358u; /* 0x00782A34: mov dword ptr [0x8ad878], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A3E: ret  */

}

void sub_00782A3F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A3Fu);

L_00782A3F:
    MEM32(0x8AD864) = 0x007A0358u; /* 0x00782A3F: mov dword ptr [0x8ad864], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A49: ret  */

}

void sub_00782A4A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A4Au);

L_00782A4A:
    MEM32(0x8AD8C8) = 0x007A0358u; /* 0x00782A4A: mov dword ptr [0x8ad8c8], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A54: ret  */

}

void sub_00782A55(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A55u);

L_00782A55:
    MEM32(0x8AD738) = 0x007A0358u; /* 0x00782A55: mov dword ptr [0x8ad738], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A5F: ret  */

}

void sub_00782A60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A60u);

L_00782A60:
    MEM32(0x8AD828) = 0x007A0358u; /* 0x00782A60: mov dword ptr [0x8ad828], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A6A: ret  */

}

void sub_00782A6B(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A6Bu);

L_00782A6B:
    MEM32(0x8AD774) = 0x007A0358u; /* 0x00782A6B: mov dword ptr [0x8ad774], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A75: ret  */

}

void sub_00782A76(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A76u);

L_00782A76:
    MEM32(0x8AD8A0) = 0x007A0358u; /* 0x00782A76: mov dword ptr [0x8ad8a0], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A80: ret  */

}

void sub_00782A81(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A81u);

L_00782A81:
    MEM32(0x8AD8DC) = 0x007A0358u; /* 0x00782A81: mov dword ptr [0x8ad8dc], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A8B: ret  */

}

void sub_00782A8C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A8Cu);

L_00782A8C:
    MEM32(0x8AD8F0) = 0x007A0358u; /* 0x00782A8C: mov dword ptr [0x8ad8f0], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782A96: ret  */

}

void sub_00782A97(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A97u);

L_00782A97:
    MEM32(0x8AD7C4) = 0x007A0358u; /* 0x00782A97: mov dword ptr [0x8ad7c4], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782AA1: ret  */

}

void sub_00782AA2(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AA2u);

L_00782AA2:
    MEM32(0x8AD88C) = 0x007A0358u; /* 0x00782AA2: mov dword ptr [0x8ad88c], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782AAC: ret  */

}

void sub_00782AAD(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AADu);

L_00782AAD:
    MEM32(0x8AD79C) = 0x007A0358u; /* 0x00782AAD: mov dword ptr [0x8ad79c], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782AB7: ret  */

}

void sub_00782AB8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AB8u);

L_00782AB8:
    MEM32(0x8AD7EC) = 0x007A0358u; /* 0x00782AB8: mov dword ptr [0x8ad7ec], 0x7a0358 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782AC2: ret  */

}

void sub_00782AC3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AC3u);

L_00782AC3:
    MEM32(0x8161E8) = 0x007C3508u; /* 0x00782AC3: mov dword ptr [0x8161e8], 0x7c3508 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782ACD: ret  */

}

void sub_00782ACE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782ACEu);

L_00782ACE:
    MEM32(0x8161F8) = 0x00786DBCu; /* 0x00782ACE: mov dword ptr [0x8161f8], 0x786dbc */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782AD8: ret  */

}