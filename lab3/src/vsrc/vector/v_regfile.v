`include "defines.v"

module v_regfile(
    input clk,
    input rst,

    input                   w_ena_i,
    input [`VREG_ADDR_BUS]  w_addr_i,
    input [`VREG_BUS]       w_data_i,

    input                   r_ena1_i,
    input [`VREG_ADDR_BUS]  r_addr1_i,
    output reg [`VREG_BUS]  r_data1_o,

    input                   r_ena2_i,
    input [`VREG_ADDR_BUS]  r_addr2_i,
    output reg [`VREG_BUS]  r_data2_o
);
// hint: you can refer to regfile

integer i ;

reg [`VREG_BUS] 	regs	[31 : 0];

always @(posedge clk ) begin
    if( rst == 1'b1 ) begin
        regs[0] <= {8{`ZERO_WORD}} ;

        for(i=1; i<32; i=i+1) begin
            regs[i] <= 256'b0 ;
        end
    end
    else begin
        if( (w_ena_i == 1'b1) && (w_addr_i != 0) ) begin
            regs[w_addr_i] <= w_data_i ;
        end
    end
end

always @( * ) begin
    if( rst == 1'b1 ) begin
        r_data1_o = {8{`ZERO_WORD}} ;
    end
    else if( r_ena1_i ) begin
        r_data1_o = regs[r_addr1_i];
    end
    else begin
        r_data1_o = {8{`ZERO_WORD}};
    end
end

always @(*) begin
    if (rst == 1'b1)
        r_data2_o = {8{`ZERO_WORD}};
    else if (r_ena2_i == 1'b1)
        r_data2_o = regs[r_addr2_i];
    else
        r_data2_o = {8{`ZERO_WORD}};
end


endmodule