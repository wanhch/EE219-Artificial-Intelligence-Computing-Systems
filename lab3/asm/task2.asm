; =======================================
; task2
; =======================================

lui x1, 2148532224; A
lui x12, 2148532224; A
lui x2, 2151677952; BT
lui x3, 2152726528; C
lui x4, 2154823680; D

addi x7, zero, 63;
addi x8, zero, 7;
addi x9, zero, 0;
addi x10, zero, 0;
addi x11, zero, 0;
loop1:
lw x5, 0(x3);
sw x5, 0(x4);
addi x9, x9, 1;
blt x7, x9, label2;
addi x3, x3, 4;
addi x4, x4, 4;
jal x5, loop1;

label2:
lui x4, 2154823680; D
addi x9, zero, 0;

loop2:
lw x5, 0(x1);
lw x6, 0(x2);
mul x5, x5, x6;
lw x6, 0(x4);
add x5, x5, x6;
sw x5, 0(x4);

addi x9, x9, 1;
blt x8, x9, label3;
addi x1, x1, 4;
addi x2, x2, 4;
jal x5, loop2;

label3:
addi x10, x10, 1;
addi x9, zero, 0;
blt x8, x10, label4;
addi x4, x4, 4;
addi x1, x12, 0;
addi x2, x2, 4;
jal x5, loop2;

label4:
addi x11, x11, 1;
addi x10, zero, 0;
blt x8, x11, label5;
addi x4, x4, 4;
addi x12, x1, 4;
addi x1, x12, 0;
lui x2, 2151677952; BT
jal x5, loop2;

label5: