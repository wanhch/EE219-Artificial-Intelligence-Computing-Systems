
`timescale 1ns / 1ps

`define ZERO_WORD       32'h0000_0000

`define PC_START        32'h8000_0000

`define INST_WIDTH      32
`define INST_ADDR_BUS   31 : 0 
`define INST_BUS        31 : 0

`define REG_WIDTH       32
`define REG_BUS         31 : 0
`define REG_ADDR_BUS    4  : 0

`define MEM_ADDR_BUS    31 : 0
`define MEM_DATA_BUS    31 : 0

`define RAM_ADDR_BUS    31 : 0
`define RAM_DATA_BUS    31 : 0

`define VLEN            256
`define SEW             32
`define LMUL            1
`define VLMAX           (`VLEN/`SEW) * `LMUL

`define VREG_WIDTH      `VLEN
`define VREG_BUS        `VLEN-1 : 0
`define VREG_ADDR_BUS   4  : 0

`define VMEM_ADDR_BUS   31 : 0
`define VMEM_DATA_BUS   `VLEN-1 : 0

`define VRAM_ADDR_BUS   31 : 0
`define VRAM_DATA_BUS   `VLEN-1 : 0

`define ALU_OP_BUS      7  : 0

// -------------------------------------------------
// ALU_OP
// -------------------------------------------------
`define ALU_OP_NOP      8'b0000_0000
`define ALU_OP_ADD      8'b0000_0001
`define ALU_OP_SLTI     8'b0000_0010
`define ALU_OP_MUL      8'b0000_0011
`define ALU_OP_AND      8'b0000_0100
`define ALU_OP_SLL      8'b0000_0101
// hint: add more

`define VALU_OP_NOP     8'b1000_0000
`define VALU_OP_ADD     8'b1000_0001
`define VALU_OP_MUL     8'b1000_0010
// hint: add more

// -------------------------------------------------
// Instruction OPCODE
// -------------------------------------------------
`define OPCODE_MUL      7'b011_0011
`define FUNCT3_MUL      3'b000
`define FUNCT7_MUL      7'b000_0001

`define OPCODE_ADD      7'b011_0011
`define FUNCT3_ADD      3'b000
`define FUNCT7_ADD      7'b000_0000

`define OPCODE_AND      7'b011_0011
`define FUNCT3_AND      3'b111
`define FUNCT7_AND      7'b000_0000

`define OPCODE_SLL      7'b011_0011
`define FUNCT3_SLL      3'b001
`define FUNCT7_SLL      7'b000_0000

`define OPCODE_ADDI     7'b001_0011
`define FUNCT3_ADDI     3'b000

`define OPCODE_SLTI     7'b001_0011
`define FUNCT3_SLTI     3'b010

`define OPCODE_LW       7'b000_0011
`define FUNCT3_LW       3'b010

`define OPCODE_SW       7'b010_0011
`define FUNCT3_SW       3'b010

`define OPCODE_BLT      7'b110_0011
`define FUNCT3_BLT      3'b100

`define OPCODE_LUI      7'b011_0111

`define OPCODE_JAL      7'b110_1111

// hint: add more

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
`define FUNCT6_VA       6'b00_0000
`define FUNCT6_VM       6'b10_0101
// hint: add more