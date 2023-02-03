lui x1, 2149580800; AT
lui x2, 2151677952; BT
lui x3, 2153775104; CT
lui x4, 2155872256; DT
lui x5, 2149580800; AT

addi x8, zero, 7;
addi x9, zero, 0;
addi x10, zero, 0;

loop1:
vle32.v vx1, x3, 1;
vse32.v vx1, x4, 1;
addi x9, x9, 1;
blt x8, x9, label2;
addi x3, x3, 32;
addi x4, x4, 32;
jal x0, loop1;

label2:
lui x4, 2155872256; DT
addi x9, zero, 0;

loop2:
lw x6, 0(x2);
vle32.v vx1, x1, 1;
vle32.v vx2, x4, 1;
vmul.vx vx1, vx1, x6, 1;
vadd.vv vx1, vx1, vx2, 1;
vse32.v vx1, x4, 1;
addi x9, x9, 1;
blt x8, x9, label3;
addi x1, x1, 32;
addi x2, x2, 4;
jal x0, loop2;

label3:
addi x10, x10, 1;
addi x9, zero, 0;
blt x8, x10, label4;
addi x4, x4, 32;
addi x1, x5, 0;
addi x2, x2, 4;
jal x0, loop2;

label4: