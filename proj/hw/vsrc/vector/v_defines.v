`define VLEN            512
`define SEW             64
`define LMUL            1
`define VLMAX           (`VLEN/`SEW) * `LMUL

`define VINST_BUS       31:0
`define SREG_BUS        63:0
`define SREG_ADDR_BUS   4:0

`define VREG_WIDTH      `VLEN
`define VREG_BUS        `VLEN-1 : 0
`define VREG_ADDR_BUS   4  : 0

`define VMEM_ADDR_BUS   63 : 0
`define VMEM_DATA_BUS   `VLEN-1 : 0

`define VRAM_ADDR_BUS   63 : 0
`define VRAM_DATA_BUS   `VLEN-1 : 0

`define ALU_OP_BUS      7  : 0

`define ZERO_WORD       32'h0000_0000

`define VALU_OP_NOP     8'b1000_0000
`define VALU_OP_ADD     8'b1000_0001
`define VALU_OP_MUL     8'b1000_0010
`define VALU_OP_COV     8'b1000_0011
`define VALU_OP_RELU    8'b1000_0100
`define VALU_OP_COMP    8'b1000_0101

`define OPCODE_VL       7'b000_0111 
`define WIDTH_VLE32     3'b110
`define FUNCT6_VLE32    6'b00_0000

`define OPCODE_VS       7'b010_0111 
`define WIDTH_VSE32     3'b110
`define FUNCT6_VSE32    6'b00_0000

`define OPCODE_VV       7'b101_0111 
`define FUNCT3_VV       3'b000
`define FUNCT3_VI       3'b011
`define FUNCT3_VX       3'b100
`define FUNCT3_VR       3'b101
`define OPCODE_COMP     3'b110
`define FUNCT6_VA       6'b00_0000
`define FUNCT6_VM       6'b10_0101
`define FUNCT6_VC       6'b00_0001

