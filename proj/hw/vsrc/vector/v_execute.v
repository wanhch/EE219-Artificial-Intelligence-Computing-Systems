`include "v_defines.v"

function [7:0] max;
input[7:0] a, b;
begin
    if (a >= b) max = a;
    else max = b;
end
endfunction

function [7:0] max4;
input[31:0] a;
begin
    max4 = max(a[7:0], max(a[15:8], max(a[23:16], a[31:24])));
end
endfunction

module v_execute(
    input                   rst,
    input [`ALU_OP_BUS]     alu_opcode_i,
    input [`VREG_BUS]       operand_vs1_i,
    input [`VREG_BUS]       operand_vs2_i,
    output reg [`VREG_BUS]  vexe_result_o
);

genvar i ;

for(i=0; i < `VLMAX; i=i+1)begin
    always @(*) begin
        if(rst) begin
            vexe_result_o = 0 ;
        end
        else begin
            case( alu_opcode_i ) 
                `VALU_OP_NOP: begin 
                    vexe_result_o = 0 ;
                end 
                `VALU_OP_COV: begin
                    vexe_result_o[31 :  0] = $signed(operand_vs1_i[7  :  0]) * $signed(operand_vs2_i[7  :  0])
                                           + $signed(operand_vs1_i[15 :  8]) * $signed(operand_vs2_i[15 :  8])
                                           + $signed(operand_vs1_i[23 : 16]) * $signed(operand_vs2_i[23 : 16])
                                           + $signed(operand_vs1_i[31 : 24]) * $signed(operand_vs2_i[31 : 24])
                                           + $signed(operand_vs1_i[39 : 32]) * $signed(operand_vs2_i[39 : 32])
                                           + $signed(operand_vs1_i[47 : 40]) * $signed(operand_vs2_i[47 : 40])
                                           + $signed(operand_vs1_i[55 : 48]) * $signed(operand_vs2_i[55 : 48])
                                           + $signed(operand_vs1_i[63 : 56]) * $signed(operand_vs2_i[63 : 56])
                                           + $signed(operand_vs1_i[71 : 64]) * $signed(operand_vs2_i[71 : 64])
                                           + $signed(operand_vs1_i[79 : 72]) * $signed(operand_vs2_i[79 : 72])
                                           + $signed(operand_vs1_i[87 : 80]) * $signed(operand_vs2_i[87 : 80])
                                           + $signed(operand_vs1_i[95 : 88]) * $signed(operand_vs2_i[95 : 88])
                                           + $signed(operand_vs1_i[103: 96]) * $signed(operand_vs2_i[103: 96])
                                           + $signed(operand_vs1_i[111:104]) * $signed(operand_vs2_i[111:104])
                                           + $signed(operand_vs1_i[119:112]) * $signed(operand_vs2_i[119:112])
                                           + $signed(operand_vs1_i[127:120]) * $signed(operand_vs2_i[127:120])
                                           + $signed(operand_vs1_i[135:128]) * $signed(operand_vs2_i[135:128])
                                           + $signed(operand_vs1_i[143:136]) * $signed(operand_vs2_i[143:136])
                                           + $signed(operand_vs1_i[151:144]) * $signed(operand_vs2_i[151:144])
                                           + $signed(operand_vs1_i[159:152]) * $signed(operand_vs2_i[159:152])
                                           + $signed(operand_vs1_i[167:160]) * $signed(operand_vs2_i[167:160])
                                           + $signed(operand_vs1_i[175:168]) * $signed(operand_vs2_i[175:168])
                                           + $signed(operand_vs1_i[183:176]) * $signed(operand_vs2_i[183:176])
                                           + $signed(operand_vs1_i[191:184]) * $signed(operand_vs2_i[191:184])
                                           + $signed(operand_vs1_i[199:192]) * $signed(operand_vs2_i[199:192]);

                    vexe_result_o[63 : 32] = $signed(operand_vs1_i[207:200]) * $signed(operand_vs2_i[7  :  0])
                                           + $signed(operand_vs1_i[215:208]) * $signed(operand_vs2_i[15 :  8])
                                           + $signed(operand_vs1_i[223:216]) * $signed(operand_vs2_i[23 : 16])
                                           + $signed(operand_vs1_i[231:224]) * $signed(operand_vs2_i[31 : 24])
                                           + $signed(operand_vs1_i[239:232]) * $signed(operand_vs2_i[39 : 32])
                                           + $signed(operand_vs1_i[247:240]) * $signed(operand_vs2_i[47 : 40])
                                           + $signed(operand_vs1_i[255:248]) * $signed(operand_vs2_i[55 : 48])
                                           + $signed(operand_vs1_i[263:256]) * $signed(operand_vs2_i[63 : 56])
                                           + $signed(operand_vs1_i[271:264]) * $signed(operand_vs2_i[71 : 64])
                                           + $signed(operand_vs1_i[279:272]) * $signed(operand_vs2_i[79 : 72])
                                           + $signed(operand_vs1_i[287:280]) * $signed(operand_vs2_i[87 : 80])
                                           + $signed(operand_vs1_i[295:288]) * $signed(operand_vs2_i[95 : 88])
                                           + $signed(operand_vs1_i[303:296]) * $signed(operand_vs2_i[103: 96])
                                           + $signed(operand_vs1_i[311:304]) * $signed(operand_vs2_i[111:104])
                                           + $signed(operand_vs1_i[319:312]) * $signed(operand_vs2_i[119:112])
                                           + $signed(operand_vs1_i[327:320]) * $signed(operand_vs2_i[127:120])
                                           + $signed(operand_vs1_i[335:328]) * $signed(operand_vs2_i[135:128])
                                           + $signed(operand_vs1_i[343:336]) * $signed(operand_vs2_i[143:136])
                                           + $signed(operand_vs1_i[351:344]) * $signed(operand_vs2_i[151:144])
                                           + $signed(operand_vs1_i[359:352]) * $signed(operand_vs2_i[159:152])
                                           + $signed(operand_vs1_i[367:360]) * $signed(operand_vs2_i[167:160])
                                           + $signed(operand_vs1_i[375:368]) * $signed(operand_vs2_i[175:168])
                                           + $signed(operand_vs1_i[383:376]) * $signed(operand_vs2_i[183:176])
                                           + $signed(operand_vs1_i[391:384]) * $signed(operand_vs2_i[191:184])
                                           + $signed(operand_vs1_i[399:392]) * $signed(operand_vs2_i[199:192]);
                end
                `VALU_OP_RELU: begin
                    vexe_result_o[31 :  0] = ($signed(operand_vs1_i[31 :  0] + operand_vs2_i[31 :  0])>0) ? (((operand_vs1_i[31 :  0] + operand_vs2_i[31 :  0])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[63 : 32] = ($signed(operand_vs1_i[63 : 32] + operand_vs2_i[63 : 32])>0) ? (((operand_vs1_i[63 : 32] + operand_vs2_i[63 : 32])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[95 : 64] = ($signed(operand_vs1_i[95 : 64] + operand_vs2_i[95 : 64])>0) ? (((operand_vs1_i[95 : 64] + operand_vs2_i[95 : 64])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[127: 96] = ($signed(operand_vs1_i[127: 96] + operand_vs2_i[127: 96])>0) ? (((operand_vs1_i[127: 96] + operand_vs2_i[127: 96])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[159:128] = ($signed(operand_vs1_i[159:128] + operand_vs2_i[159:128])>0) ? (((operand_vs1_i[159:128] + operand_vs2_i[159:128])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[191:160] = ($signed(operand_vs1_i[191:160] + operand_vs2_i[191:160])>0) ? (((operand_vs1_i[191:160] + operand_vs2_i[191:160])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[223:192] = ($signed(operand_vs1_i[223:192] + operand_vs2_i[223:192])>0) ? (((operand_vs1_i[223:192] + operand_vs2_i[223:192])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[255:224] = ($signed(operand_vs1_i[255:224] + operand_vs2_i[255:224])>0) ? (((operand_vs1_i[255:224] + operand_vs2_i[255:224])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[287:256] = ($signed(operand_vs1_i[287:256] + operand_vs2_i[287:256])>0) ? (((operand_vs1_i[287:256] + operand_vs2_i[287:256])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[319:288] = ($signed(operand_vs1_i[319:288] + operand_vs2_i[319:288])>0) ? (((operand_vs1_i[319:288] + operand_vs2_i[319:288])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[351:320] = ($signed(operand_vs1_i[351:320] + operand_vs2_i[351:320])>0) ? (((operand_vs1_i[351:320] + operand_vs2_i[351:320])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[383:352] = ($signed(operand_vs1_i[383:352] + operand_vs2_i[383:352])>0) ? (((operand_vs1_i[383:352] + operand_vs2_i[383:352])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[415:384] = ($signed(operand_vs1_i[415:384] + operand_vs2_i[415:384])>0) ? (((operand_vs1_i[415:384] + operand_vs2_i[415:384])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[447:416] = ($signed(operand_vs1_i[447:416] + operand_vs2_i[447:416])>0) ? (((operand_vs1_i[447:416] + operand_vs2_i[447:416])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[479:448] = ($signed(operand_vs1_i[479:448] + operand_vs2_i[479:448])>0) ? (((operand_vs1_i[479:448] + operand_vs2_i[479:448])>>>9) + 1)>>>1 : 0;
                    vexe_result_o[511:480] = ($signed(operand_vs1_i[511:480] + operand_vs2_i[511:480])>0) ? (((operand_vs1_i[511:480] + operand_vs2_i[511:480])>>>9) + 1)>>>1 : 0;
                end
                `VALU_OP_COMP: begin
                    vexe_result_o[31 :  0] = {24'b0, max4(operand_vs1_i[31 :  0])};
                    vexe_result_o[63 : 32] = {24'b0, max4(operand_vs1_i[63 : 32])};
                    vexe_result_o[95 : 64] = {24'b0, max4(operand_vs1_i[95 : 64])};
                    vexe_result_o[127: 96] = {24'b0, max4(operand_vs1_i[127: 96])};
                    vexe_result_o[159:128] = {24'b0, max4(operand_vs1_i[159:128])};
                    vexe_result_o[191:160] = {24'b0, max4(operand_vs1_i[191:160])};
                    vexe_result_o[223:192] = {24'b0, max4(operand_vs1_i[223:192])};
                    vexe_result_o[255:224] = {24'b0, max4(operand_vs1_i[255:224])};
                    vexe_result_o[287:256] = {24'b0, max4(operand_vs1_i[287:256])};
                    vexe_result_o[319:288] = {24'b0, max4(operand_vs1_i[319:288])};
                    vexe_result_o[351:320] = {24'b0, max4(operand_vs1_i[351:320])};
                    vexe_result_o[383:352] = {24'b0, max4(operand_vs1_i[383:352])};
                    vexe_result_o[415:384] = {24'b0, max4(operand_vs1_i[415:384])};
                    vexe_result_o[447:416] = {24'b0, max4(operand_vs1_i[447:416])};
                    vexe_result_o[479:448] = {24'b0, max4(operand_vs1_i[479:448])};
                    vexe_result_o[511:480] = {24'b0, max4(operand_vs1_i[511:480])};
                end
                `VALU_OP_ADD: begin
                    vexe_result_o[31 :  0] = operand_vs1_i[31 :  0] + operand_vs2_i[31 :  0];
                    vexe_result_o[63 : 32] = operand_vs1_i[63 : 32] + operand_vs2_i[63 : 32];
                    vexe_result_o[95 : 64] = operand_vs1_i[95 : 64] + operand_vs2_i[95 : 64];
                    vexe_result_o[127: 96] = operand_vs1_i[127: 96] + operand_vs2_i[127: 96];
                    vexe_result_o[159:128] = operand_vs1_i[159:128] + operand_vs2_i[159:128];
                    vexe_result_o[191:160] = operand_vs1_i[191:160] + operand_vs2_i[191:160];
                    vexe_result_o[223:192] = operand_vs1_i[223:192] + operand_vs2_i[223:192];
                    vexe_result_o[255:224] = operand_vs1_i[255:224] + operand_vs2_i[255:224];
                    vexe_result_o[287:256] = operand_vs1_i[287:256] + operand_vs2_i[287:256];
                    vexe_result_o[319:288] = operand_vs1_i[319:288] + operand_vs2_i[319:288];
                    vexe_result_o[351:320] = operand_vs1_i[351:320] + operand_vs2_i[351:320];
                    vexe_result_o[383:352] = operand_vs1_i[383:352] + operand_vs2_i[383:352];
                    vexe_result_o[415:384] = operand_vs1_i[415:384] + operand_vs2_i[415:384];
                    vexe_result_o[447:416] = operand_vs1_i[447:416] + operand_vs2_i[447:416];
                    vexe_result_o[479:448] = operand_vs1_i[479:448] + operand_vs2_i[479:448];
                    vexe_result_o[511:480] = operand_vs1_i[511:480] + operand_vs2_i[511:480];
                end

                `VALU_OP_MUL: begin
                    vexe_result_o[31 :  0] = operand_vs1_i[31 :  0] * operand_vs2_i[31 :  0];
                    vexe_result_o[63 : 32] = operand_vs1_i[63 : 32] * operand_vs2_i[63 : 32];
                    vexe_result_o[95 : 64] = operand_vs1_i[95 : 64] * operand_vs2_i[95 : 64];
                    vexe_result_o[127: 96] = operand_vs1_i[127: 96] * operand_vs2_i[127: 96];
                    vexe_result_o[159:128] = operand_vs1_i[159:128] * operand_vs2_i[159:128];
                    vexe_result_o[191:160] = operand_vs1_i[191:160] * operand_vs2_i[191:160];
                    vexe_result_o[223:192] = operand_vs1_i[223:192] * operand_vs2_i[223:192];
                    vexe_result_o[255:224] = operand_vs1_i[255:224] * operand_vs2_i[255:224];
                    vexe_result_o[287:256] = operand_vs1_i[287:256] * operand_vs2_i[287:256];
                    vexe_result_o[319:288] = operand_vs1_i[319:288] * operand_vs2_i[319:288];
                    vexe_result_o[351:320] = operand_vs1_i[351:320] * operand_vs2_i[351:320];
                    vexe_result_o[383:352] = operand_vs1_i[383:352] * operand_vs2_i[383:352];
                    vexe_result_o[415:384] = operand_vs1_i[415:384] * operand_vs2_i[415:384];
                    vexe_result_o[447:416] = operand_vs1_i[447:416] * operand_vs2_i[447:416];
                    vexe_result_o[479:448] = operand_vs1_i[479:448] * operand_vs2_i[479:448];
                    vexe_result_o[511:480] = operand_vs1_i[511:480] * operand_vs2_i[511:480];
                end
                default: begin
                    vexe_result_o = 0 ;
                end
            endcase
        end
    end
end


endmodule