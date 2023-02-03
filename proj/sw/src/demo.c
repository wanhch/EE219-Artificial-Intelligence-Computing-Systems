#include "trap.h"

#define ADDR_A      0x80800000
#define ADDR_B      0x80812600
#define ADDR_C      0x80813000
#define ADDR_D      0x80820000

void vcomp(register int* vd,register int* vs1){
    asm volatile( ".insn r 0x57, 0x6, 0x01, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(0x0) );
}

void vadd_vv(register int* vd,register int* vs1,register int* vs2){
    asm volatile( ".insn r 0x57, 0x0, 0x01, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(vs2) );
}

void vadd_vr(register int* vd,register int* vs1,register int* vs2){
    asm volatile( ".insn r 0x57, 0x5, 0x01, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(vs2) );
}

void vconv_vv(register int* vd,register int* vs1,register int* vs2){
    asm volatile( ".insn r 0x57, 0x0, 0x03, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(vs2) );
}

void vle32(register int* vd,register int* vs1){
    asm volatile( ".insn r 0x7, 0x6, 0x01, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(0x0));
}

void vse32(register int* vd,register int* vs1){
    asm volatile( ".insn r 0x27, 0x6, 0x01, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(0x0));
}

int main() {
    int i,j ;
    int32_t *p_C = (int32_t *)ADDR_C ;
    int8_t *p_D = (int8_t *)ADDR_D ;

    register int *reg_vx1 asm ("x1");
    register int *reg_vx2 asm ("x2");
    register int *reg_vx3 asm ("x3");

    for (long channel = 0; channel < 3; channel++) {
        for (long kernel = 0; kernel < 12; kernel++) {
            vle32(reg_vx2, (int *)(ADDR_B + 32*channel + 32*3*kernel));
            for (long point = 0; point < 28*28/2; point++) {
                vle32(reg_vx1, (int*)(ADDR_A + 64*point + 28*14*64*channel));
                vconv_vv(reg_vx3, reg_vx1, reg_vx2);
                vse32(reg_vx3, (int*)(ADDR_C + 8*point + 28*28*4*kernel + 28*28*12*4*channel));
            }
        }
    }

    for (long point = 0; point < 588; point++) {
        vle32(reg_vx1,(int *) (ADDR_C + 64*point));
        vle32(reg_vx2,(int *) (ADDR_C + 64*point + 28*28*12*4));
        vadd_vv(reg_vx1, reg_vx1, reg_vx2);
        vle32(reg_vx2,(int *) (ADDR_C + 64*point + 28*28*12*4*2));
        vadd_vr(reg_vx1, reg_vx1, reg_vx2);
        vse32(reg_vx1,(int *) (ADDR_C + 64*point));
    }

    for (int kernel = 0; kernel < 12; kernel++) {
        for (i = 0; i < 14; i++) {
            for (j = 0; j < 14; j++) {
                p_D[4*(j+i*14+kernel*14*14)]   = *(p_C+j*2+i*28*2+kernel*28*28);
                p_D[4*(j+i*14+kernel*14*14)+1] = *(p_C+j*2+1+i*28*2+kernel*28*28);
                p_D[4*(j+i*14+kernel*14*14)+2] = *(p_C+j*2+i*28*2+28+kernel*28*28);
                p_D[4*(j+i*14+kernel*14*14)+3] = *(p_C+j*2+1+i*28*2+28+kernel*28*28);
            }
        }
    }

    for (long point = 0; point <147; point++) {
        vle32(reg_vx1,(int *) (ADDR_D + 64*point));
        vcomp(reg_vx2, reg_vx1);
        vse32(reg_vx2,(int *) (ADDR_D + 64*point));
    }
    return 0;
}
