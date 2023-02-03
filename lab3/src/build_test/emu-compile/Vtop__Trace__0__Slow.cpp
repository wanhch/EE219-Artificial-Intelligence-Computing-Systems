// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+397,"clk", false,-1);
    tracep->declBit(c+398,"rst", false,-1);
    tracep->declBit(c+397,"top clk", false,-1);
    tracep->declBit(c+398,"top rst", false,-1);
    tracep->declBus(c+294,"top inst", false,-1, 31,0);
    tracep->declBus(c+1,"top inst_addr", false,-1, 31,0);
    tracep->declBit(c+399,"top inst_ena", false,-1);
    tracep->declBit(c+399,"top ren_inst", false,-1);
    tracep->declBus(c+1,"top raddr_inst", false,-1, 31,0);
    tracep->declBus(c+294,"top rdata_inst", false,-1, 31,0);
    tracep->declBit(c+295,"top ram_r_ena", false,-1);
    tracep->declBus(c+296,"top ram_r_addr", false,-1, 31,0);
    tracep->declBus(c+297,"top ram_r_data", false,-1, 31,0);
    tracep->declBit(c+298,"top ram_w_ena", false,-1);
    tracep->declBus(c+296,"top ram_w_addr", false,-1, 31,0);
    tracep->declBus(c+299,"top ram_w_data", false,-1, 31,0);
    tracep->declBus(c+428,"top ram_w_mask", false,-1, 31,0);
    tracep->declBit(c+300,"top vram_r_ena", false,-1);
    tracep->declBus(c+301,"top vram_r_addr", false,-1, 31,0);
    tracep->declArray(c+302,"top vram_r_data", false,-1, 255,0);
    tracep->declBit(c+310,"top vram_w_ena", false,-1);
    tracep->declBus(c+311,"top vram_w_addr", false,-1, 31,0);
    tracep->declArray(c+312,"top vram_w_data", false,-1, 255,0);
    tracep->declArray(c+429,"top vram_w_mask", false,-1, 255,0);
    tracep->declBit(c+397,"top RVCPU clk", false,-1);
    tracep->declBit(c+398,"top RVCPU rst", false,-1);
    tracep->declBus(c+294,"top RVCPU inst", false,-1, 31,0);
    tracep->declBit(c+399,"top RVCPU inst_en", false,-1);
    tracep->declBus(c+1,"top RVCPU inst_addr", false,-1, 31,0);
    tracep->declBit(c+295,"top RVCPU ram_r_ena", false,-1);
    tracep->declBus(c+296,"top RVCPU ram_r_addr", false,-1, 31,0);
    tracep->declBus(c+297,"top RVCPU ram_r_data", false,-1, 31,0);
    tracep->declBit(c+298,"top RVCPU ram_w_ena", false,-1);
    tracep->declBus(c+296,"top RVCPU ram_w_addr", false,-1, 31,0);
    tracep->declBus(c+299,"top RVCPU ram_w_data", false,-1, 31,0);
    tracep->declBus(c+428,"top RVCPU ram_w_mask", false,-1, 31,0);
    tracep->declBit(c+300,"top RVCPU vram_r_ena", false,-1);
    tracep->declBus(c+301,"top RVCPU vram_r_addr", false,-1, 31,0);
    tracep->declArray(c+302,"top RVCPU vram_r_data", false,-1, 255,0);
    tracep->declBit(c+310,"top RVCPU vram_w_ena", false,-1);
    tracep->declBus(c+311,"top RVCPU vram_w_addr", false,-1, 31,0);
    tracep->declArray(c+312,"top RVCPU vram_w_data", false,-1, 255,0);
    tracep->declArray(c+429,"top RVCPU vram_w_mask", false,-1, 255,0);
    tracep->declBit(c+320,"top RVCPU transfer_en", false,-1);
    tracep->declBus(c+321,"top RVCPU transfer_pc", false,-1, 31,0);
    tracep->declBus(c+1,"top RVCPU current_pc", false,-1, 31,0);
    tracep->declBus(c+311,"top RVCPU rs1_data", false,-1, 31,0);
    tracep->declBit(c+322,"top RVCPU rs1_r_ena", false,-1);
    tracep->declBus(c+323,"top RVCPU rs1_r_addr", false,-1, 4,0);
    tracep->declBus(c+311,"top RVCPU sca_rs1_data", false,-1, 31,0);
    tracep->declBit(c+324,"top RVCPU sca_rs1_r_ena", false,-1);
    tracep->declBus(c+325,"top RVCPU sca_rs1_r_addr", false,-1, 4,0);
    tracep->declBus(c+299,"top RVCPU rs2_data", false,-1, 31,0);
    tracep->declBit(c+326,"top RVCPU rs2_r_ena", false,-1);
    tracep->declBus(c+327,"top RVCPU rs2_r_addr", false,-1, 4,0);
    tracep->declBus(c+328,"top RVCPU operand_rs1", false,-1, 31,0);
    tracep->declBus(c+329,"top RVCPU operand_rs2", false,-1, 31,0);
    tracep->declBus(c+330,"top RVCPU alu_opcode", false,-1, 7,0);
    tracep->declBus(c+296,"top RVCPU exe_result", false,-1, 31,0);
    tracep->declBit(c+331,"top RVCPU branch_en", false,-1);
    tracep->declBus(c+332,"top RVCPU branch_offset", false,-1, 31,0);
    tracep->declBit(c+333,"top RVCPU jump_en", false,-1);
    tracep->declBus(c+332,"top RVCPU jump_offset", false,-1, 31,0);
    tracep->declBit(c+295,"top RVCPU mem_r_ena", false,-1);
    tracep->declBit(c+298,"top RVCPU mem_w_ena", false,-1);
    tracep->declBus(c+299,"top RVCPU mem_w_data", false,-1, 31,0);
    tracep->declBus(c+297,"top RVCPU mem_r_data", false,-1, 31,0);
    tracep->declBit(c+334,"top RVCPU wb_ena", false,-1);
    tracep->declBit(c+295,"top RVCPU wb_sel", false,-1);
    tracep->declBus(c+335,"top RVCPU wb_addr", false,-1, 4,0);
    tracep->declBit(c+400,"top RVCPU rd_w_ena", false,-1);
    tracep->declBus(c+336,"top RVCPU rd_w_addr", false,-1, 4,0);
    tracep->declBus(c+401,"top RVCPU rd_w_data", false,-1, 31,0);
    tracep->declBus(c+311,"top RVCPU vec_rs1_data", false,-1, 31,0);
    tracep->declBit(c+337,"top RVCPU vec_rs1_r_ena", false,-1);
    tracep->declBus(c+338,"top RVCPU vec_rs1_r_addr", false,-1, 4,0);
    tracep->declArray(c+402,"top RVCPU vs1_data", false,-1, 255,0);
    tracep->declBit(c+339,"top RVCPU vs1_r_ena", false,-1);
    tracep->declBus(c+340,"top RVCPU vs1_r_addr", false,-1, 4,0);
    tracep->declArray(c+410,"top RVCPU vs2_data", false,-1, 255,0);
    tracep->declBit(c+341,"top RVCPU vs2_r_ena", false,-1);
    tracep->declBus(c+342,"top RVCPU vs2_r_addr", false,-1, 4,0);
    tracep->declArray(c+418,"top RVCPU vd_w_data", false,-1, 255,0);
    tracep->declBit(c+426,"top RVCPU vd_w_ena", false,-1);
    tracep->declBus(c+343,"top RVCPU vd_w_addr", false,-1, 4,0);
    tracep->declBus(c+344,"top RVCPU v_alu_opcode", false,-1, 7,0);
    tracep->declArray(c+345,"top RVCPU operand_vs1", false,-1, 255,0);
    tracep->declArray(c+312,"top RVCPU operand_vs2", false,-1, 255,0);
    tracep->declArray(c+353,"top RVCPU vexe_result", false,-1, 255,0);
    tracep->declBit(c+300,"top RVCPU vmem_r_ena", false,-1);
    tracep->declBus(c+301,"top RVCPU vmem_r_addr", false,-1, 31,0);
    tracep->declArray(c+302,"top RVCPU vmem_r_data", false,-1, 255,0);
    tracep->declBit(c+310,"top RVCPU vmem_w_ena", false,-1);
    tracep->declBus(c+311,"top RVCPU vmem_w_addr", false,-1, 31,0);
    tracep->declArray(c+312,"top RVCPU vmem_w_data", false,-1, 255,0);
    tracep->declBit(c+361,"top RVCPU vwb_ena", false,-1);
    tracep->declBit(c+362,"top RVCPU vwb_sel", false,-1);
    tracep->declBus(c+363,"top RVCPU vwb_addr", false,-1, 4,0);
    tracep->declBit(c+397,"top RVCPU IF_Stage clk", false,-1);
    tracep->declBit(c+398,"top RVCPU IF_Stage rst", false,-1);
    tracep->declBit(c+320,"top RVCPU IF_Stage transfer_en_i", false,-1);
    tracep->declBus(c+321,"top RVCPU IF_Stage transfer_pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"top RVCPU IF_Stage current_pc_o", false,-1, 31,0);
    tracep->declBit(c+399,"top RVCPU IF_Stage inst_en_o", false,-1);
    tracep->declBus(c+1,"top RVCPU IF_Stage inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"top RVCPU IF_Stage pc", false,-1, 31,0);
    tracep->declBus(c+1,"top RVCPU IF_Stage addr", false,-1, 31,0);
    tracep->declBit(c+398,"top RVCPU ID_Stage rst", false,-1);
    tracep->declBus(c+294,"top RVCPU ID_Stage inst_i", false,-1, 31,0);
    tracep->declBus(c+311,"top RVCPU ID_Stage rs1_data_i", false,-1, 31,0);
    tracep->declBit(c+324,"top RVCPU ID_Stage rs1_r_ena_o", false,-1);
    tracep->declBus(c+325,"top RVCPU ID_Stage rs1_r_addr_o", false,-1, 4,0);
    tracep->declBus(c+299,"top RVCPU ID_Stage rs2_data_i", false,-1, 31,0);
    tracep->declBit(c+326,"top RVCPU ID_Stage rs2_r_ena_o", false,-1);
    tracep->declBus(c+327,"top RVCPU ID_Stage rs2_r_addr_o", false,-1, 4,0);
    tracep->declBus(c+330,"top RVCPU ID_Stage alu_opcode_o", false,-1, 7,0);
    tracep->declBus(c+328,"top RVCPU ID_Stage operand_rs1_o", false,-1, 31,0);
    tracep->declBus(c+329,"top RVCPU ID_Stage operand_rs2_o", false,-1, 31,0);
    tracep->declBit(c+331,"top RVCPU ID_Stage branch_en_o", false,-1);
    tracep->declBus(c+332,"top RVCPU ID_Stage branch_offset_o", false,-1, 31,0);
    tracep->declBit(c+333,"top RVCPU ID_Stage jump_en_o", false,-1);
    tracep->declBus(c+332,"top RVCPU ID_Stage jump_offset_o", false,-1, 31,0);
    tracep->declBit(c+295,"top RVCPU ID_Stage mem_r_ena_o", false,-1);
    tracep->declBit(c+298,"top RVCPU ID_Stage mem_w_ena_o", false,-1);
    tracep->declBus(c+299,"top RVCPU ID_Stage mem_w_data_o", false,-1, 31,0);
    tracep->declBit(c+334,"top RVCPU ID_Stage wb_ena_o", false,-1);
    tracep->declBit(c+295,"top RVCPU ID_Stage wb_sel_o", false,-1);
    tracep->declBus(c+335,"top RVCPU ID_Stage wb_addr_o", false,-1, 4,0);
    tracep->declBus(c+364,"top RVCPU ID_Stage imm_i", false,-1, 11,0);
    tracep->declBus(c+365,"top RVCPU ID_Stage imm_u", false,-1, 31,0);
    tracep->declBus(c+366,"top RVCPU ID_Stage imm_b", false,-1, 12,0);
    tracep->declBus(c+367,"top RVCPU ID_Stage imm_j", false,-1, 20,0);
    tracep->declBus(c+368,"top RVCPU ID_Stage imm_s", false,-1, 11,0);
    tracep->declBus(c+369,"top RVCPU ID_Stage funct7", false,-1, 6,0);
    tracep->declBus(c+370,"top RVCPU ID_Stage rs2", false,-1, 4,0);
    tracep->declBus(c+371,"top RVCPU ID_Stage rs1", false,-1, 4,0);
    tracep->declBus(c+372,"top RVCPU ID_Stage funct3", false,-1, 2,0);
    tracep->declBus(c+373,"top RVCPU ID_Stage rd", false,-1, 4,0);
    tracep->declBus(c+374,"top RVCPU ID_Stage opcode", false,-1, 6,0);
    tracep->declBit(c+375,"top RVCPU ID_Stage op_imm", false,-1);
    tracep->declBus(c+332,"top RVCPU ID_Stage operand_rs_imm", false,-1, 31,0);
    tracep->declBit(c+376,"top RVCPU ID_Stage inst_mul", false,-1);
    tracep->declBit(c+377,"top RVCPU ID_Stage inst_add", false,-1);
    tracep->declBit(c+378,"top RVCPU ID_Stage inst_and", false,-1);
    tracep->declBit(c+379,"top RVCPU ID_Stage inst_sll", false,-1);
    tracep->declBit(c+380,"top RVCPU ID_Stage inst_addi", false,-1);
    tracep->declBit(c+381,"top RVCPU ID_Stage inst_slti", false,-1);
    tracep->declBit(c+295,"top RVCPU ID_Stage inst_lw", false,-1);
    tracep->declBit(c+298,"top RVCPU ID_Stage inst_sw", false,-1);
    tracep->declBit(c+382,"top RVCPU ID_Stage inst_blt", false,-1);
    tracep->declBit(c+383,"top RVCPU ID_Stage inst_lui", false,-1);
    tracep->declBit(c+384,"top RVCPU ID_Stage inst_jal", false,-1);
    tracep->declBit(c+398,"top RVCPU EXE_Stage rst", false,-1);
    tracep->declBus(c+330,"top RVCPU EXE_Stage alu_opcode_i", false,-1, 7,0);
    tracep->declBus(c+328,"top RVCPU EXE_Stage operand_rs1_i", false,-1, 31,0);
    tracep->declBus(c+329,"top RVCPU EXE_Stage operand_rs2_i", false,-1, 31,0);
    tracep->declBus(c+296,"top RVCPU EXE_Stage exe_result_o", false,-1, 31,0);
    tracep->declBus(c+1,"top RVCPU EXE_Stage current_pc_i", false,-1, 31,0);
    tracep->declBit(c+331,"top RVCPU EXE_Stage branch_en_i", false,-1);
    tracep->declBus(c+332,"top RVCPU EXE_Stage branch_offset_i", false,-1, 31,0);
    tracep->declBit(c+333,"top RVCPU EXE_Stage jump_en_i", false,-1);
    tracep->declBus(c+332,"top RVCPU EXE_Stage jump_offset_i", false,-1, 31,0);
    tracep->declBit(c+320,"top RVCPU EXE_Stage transfer_en_o", false,-1);
    tracep->declBus(c+321,"top RVCPU EXE_Stage transfer_pc_o", false,-1, 31,0);
    tracep->declBus(c+427,"top RVCPU EXE_Stage alu_result", false,-1, 31,0);
    tracep->declBit(c+398,"top RVCPU MEM_Stage rst", false,-1);
    tracep->declBit(c+295,"top RVCPU MEM_Stage mem_r_ena_i", false,-1);
    tracep->declBus(c+296,"top RVCPU MEM_Stage mem_r_addr_i", false,-1, 31,0);
    tracep->declBus(c+297,"top RVCPU MEM_Stage mem_r_data_o", false,-1, 31,0);
    tracep->declBit(c+298,"top RVCPU MEM_Stage mem_w_ena_i", false,-1);
    tracep->declBus(c+296,"top RVCPU MEM_Stage mem_w_addr_i", false,-1, 31,0);
    tracep->declBus(c+299,"top RVCPU MEM_Stage mem_w_data_i", false,-1, 31,0);
    tracep->declBit(c+295,"top RVCPU MEM_Stage ram_r_ena_o", false,-1);
    tracep->declBus(c+297,"top RVCPU MEM_Stage ram_r_data_i", false,-1, 31,0);
    tracep->declBus(c+296,"top RVCPU MEM_Stage ram_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+298,"top RVCPU MEM_Stage ram_w_ena_o", false,-1);
    tracep->declBus(c+296,"top RVCPU MEM_Stage ram_w_addr_o", false,-1, 31,0);
    tracep->declBus(c+299,"top RVCPU MEM_Stage ram_w_data_o", false,-1, 31,0);
    tracep->declBus(c+428,"top RVCPU MEM_Stage ram_w_mask_o", false,-1, 31,0);
    tracep->declBit(c+398,"top RVCPU WB_Stage rst", false,-1);
    tracep->declBit(c+334,"top RVCPU WB_Stage wb_ena_i", false,-1);
    tracep->declBus(c+335,"top RVCPU WB_Stage wb_addr_i", false,-1, 4,0);
    tracep->declBit(c+295,"top RVCPU WB_Stage wb_sel_i", false,-1);
    tracep->declBus(c+296,"top RVCPU WB_Stage exe_data_i", false,-1, 31,0);
    tracep->declBus(c+297,"top RVCPU WB_Stage mem_data_i", false,-1, 31,0);
    tracep->declBit(c+400,"top RVCPU WB_Stage wb_ena_o", false,-1);
    tracep->declBus(c+336,"top RVCPU WB_Stage wb_addr_o", false,-1, 4,0);
    tracep->declBus(c+401,"top RVCPU WB_Stage wb_data_o", false,-1, 31,0);
    tracep->declBit(c+397,"top RVCPU REGFILE clk", false,-1);
    tracep->declBit(c+398,"top RVCPU REGFILE rst", false,-1);
    tracep->declBus(c+336,"top RVCPU REGFILE w_addr_i", false,-1, 4,0);
    tracep->declBus(c+401,"top RVCPU REGFILE w_data_i", false,-1, 31,0);
    tracep->declBit(c+400,"top RVCPU REGFILE w_ena_i", false,-1);
    tracep->declBit(c+322,"top RVCPU REGFILE r_ena1_i", false,-1);
    tracep->declBus(c+323,"top RVCPU REGFILE r_addr1_i", false,-1, 4,0);
    tracep->declBus(c+311,"top RVCPU REGFILE r_data1_o", false,-1, 31,0);
    tracep->declBit(c+326,"top RVCPU REGFILE r_ena2_i", false,-1);
    tracep->declBus(c+327,"top RVCPU REGFILE r_addr2_i", false,-1, 4,0);
    tracep->declBus(c+299,"top RVCPU REGFILE r_data2_o", false,-1, 31,0);
    tracep->declBus(c+3,"top RVCPU REGFILE i", false,-1, 31,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declBus(c+4+i*1,"top RVCPU REGFILE regs", true,(i+0), 31,0);}}
    tracep->declBit(c+398,"top RVCPU V_ID_Stage rst", false,-1);
    tracep->declBus(c+294,"top RVCPU V_ID_Stage inst_i", false,-1, 31,0);
    tracep->declBus(c+311,"top RVCPU V_ID_Stage rs1_data_i", false,-1, 31,0);
    tracep->declBit(c+337,"top RVCPU V_ID_Stage rs1_r_ena_o", false,-1);
    tracep->declBus(c+338,"top RVCPU V_ID_Stage rs1_r_addr_o", false,-1, 4,0);
    tracep->declArray(c+402,"top RVCPU V_ID_Stage vs1_data_i", false,-1, 255,0);
    tracep->declBit(c+339,"top RVCPU V_ID_Stage vs1_r_ena_o", false,-1);
    tracep->declBus(c+340,"top RVCPU V_ID_Stage vs1_r_addr_o", false,-1, 4,0);
    tracep->declArray(c+410,"top RVCPU V_ID_Stage vs2_data_i", false,-1, 255,0);
    tracep->declBit(c+341,"top RVCPU V_ID_Stage vs2_r_ena_o", false,-1);
    tracep->declBus(c+342,"top RVCPU V_ID_Stage vs2_r_addr_o", false,-1, 4,0);
    tracep->declBus(c+344,"top RVCPU V_ID_Stage alu_opcode_o", false,-1, 7,0);
    tracep->declArray(c+345,"top RVCPU V_ID_Stage operand_vs1_o", false,-1, 255,0);
    tracep->declArray(c+312,"top RVCPU V_ID_Stage operand_vs2_o", false,-1, 255,0);
    tracep->declBit(c+300,"top RVCPU V_ID_Stage vmem_r_ena_o", false,-1);
    tracep->declBus(c+301,"top RVCPU V_ID_Stage vmem_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+310,"top RVCPU V_ID_Stage vmem_w_ena_o", false,-1);
    tracep->declArray(c+312,"top RVCPU V_ID_Stage vmem_w_data_o", false,-1, 255,0);
    tracep->declBus(c+311,"top RVCPU V_ID_Stage vmem_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+361,"top RVCPU V_ID_Stage vwb_ena_o", false,-1);
    tracep->declBit(c+362,"top RVCPU V_ID_Stage vwb_sel_o", false,-1);
    tracep->declBus(c+363,"top RVCPU V_ID_Stage vwb_addr_o", false,-1, 4,0);
    tracep->declBus(c+385,"top RVCPU V_ID_Stage funct6", false,-1, 5,0);
    tracep->declBit(c+386,"top RVCPU V_ID_Stage vm", false,-1);
    tracep->declBus(c+370,"top RVCPU V_ID_Stage rs2", false,-1, 4,0);
    tracep->declBus(c+371,"top RVCPU V_ID_Stage imm", false,-1, 4,0);
    tracep->declBus(c+371,"top RVCPU V_ID_Stage rs1", false,-1, 4,0);
    tracep->declBus(c+372,"top RVCPU V_ID_Stage funct3", false,-1, 2,0);
    tracep->declBus(c+373,"top RVCPU V_ID_Stage vd", false,-1, 4,0);
    tracep->declBus(c+374,"top RVCPU V_ID_Stage opcode", false,-1, 6,0);
    tracep->declBus(c+387,"top RVCPU V_ID_Stage imm_ext", false,-1, 31,0);
    tracep->declBit(c+362,"top RVCPU V_ID_Stage inst_vle32_v", false,-1);
    tracep->declBit(c+310,"top RVCPU V_ID_Stage inst_vse32_v", false,-1);
    tracep->declBit(c+388,"top RVCPU V_ID_Stage inst_vadd_vv", false,-1);
    tracep->declBit(c+389,"top RVCPU V_ID_Stage inst_vadd_vi", false,-1);
    tracep->declBit(c+390,"top RVCPU V_ID_Stage inst_vadd_vx", false,-1);
    tracep->declBit(c+391,"top RVCPU V_ID_Stage inst_vmul_vv", false,-1);
    tracep->declBit(c+392,"top RVCPU V_ID_Stage inst_vmul_vi", false,-1);
    tracep->declBit(c+393,"top RVCPU V_ID_Stage inst_vmul_vx", false,-1);
    tracep->declBit(c+398,"top RVCPU V_EXE_Stage rst", false,-1);
    tracep->declBus(c+344,"top RVCPU V_EXE_Stage alu_opcode_i", false,-1, 7,0);
    tracep->declArray(c+345,"top RVCPU V_EXE_Stage operand_vs1_i", false,-1, 255,0);
    tracep->declArray(c+312,"top RVCPU V_EXE_Stage operand_vs2_i", false,-1, 255,0);
    tracep->declArray(c+353,"top RVCPU V_EXE_Stage vexe_result_o", false,-1, 255,0);
    tracep->declBit(c+398,"top RVCPU V_MEM_Stage rst", false,-1);
    tracep->declBit(c+300,"top RVCPU V_MEM_Stage vmem_r_ena_i", false,-1);
    tracep->declBus(c+301,"top RVCPU V_MEM_Stage vmem_r_addr_i", false,-1, 31,0);
    tracep->declArray(c+302,"top RVCPU V_MEM_Stage vmem_r_data_o", false,-1, 255,0);
    tracep->declBit(c+310,"top RVCPU V_MEM_Stage vmem_w_ena_i", false,-1);
    tracep->declBus(c+311,"top RVCPU V_MEM_Stage vmem_w_addr_i", false,-1, 31,0);
    tracep->declArray(c+312,"top RVCPU V_MEM_Stage vmem_w_data_i", false,-1, 255,0);
    tracep->declBit(c+300,"top RVCPU V_MEM_Stage vram_r_ena_o", false,-1);
    tracep->declArray(c+302,"top RVCPU V_MEM_Stage vram_r_data_i", false,-1, 255,0);
    tracep->declBus(c+301,"top RVCPU V_MEM_Stage vram_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+310,"top RVCPU V_MEM_Stage vram_w_ena_o", false,-1);
    tracep->declBus(c+311,"top RVCPU V_MEM_Stage vram_w_addr_o", false,-1, 31,0);
    tracep->declArray(c+312,"top RVCPU V_MEM_Stage vram_w_data_o", false,-1, 255,0);
    tracep->declArray(c+429,"top RVCPU V_MEM_Stage vram_w_mask_o", false,-1, 255,0);
    tracep->declBit(c+398,"top RVCPU V_WB_Stage rst", false,-1);
    tracep->declBit(c+361,"top RVCPU V_WB_Stage vwb_ena_i", false,-1);
    tracep->declBus(c+363,"top RVCPU V_WB_Stage vwb_addr_i", false,-1, 4,0);
    tracep->declBit(c+362,"top RVCPU V_WB_Stage vwb_sel_i", false,-1);
    tracep->declArray(c+353,"top RVCPU V_WB_Stage vexe_data_i", false,-1, 255,0);
    tracep->declArray(c+302,"top RVCPU V_WB_Stage vmem_data_i", false,-1, 255,0);
    tracep->declBit(c+426,"top RVCPU V_WB_Stage vwb_ena_o", false,-1);
    tracep->declBus(c+343,"top RVCPU V_WB_Stage vwb_addr_o", false,-1, 4,0);
    tracep->declArray(c+418,"top RVCPU V_WB_Stage vwb_data_o", false,-1, 255,0);
    tracep->declBit(c+397,"top RVCPU V_REGFILE clk", false,-1);
    tracep->declBit(c+398,"top RVCPU V_REGFILE rst", false,-1);
    tracep->declBit(c+426,"top RVCPU V_REGFILE w_ena_i", false,-1);
    tracep->declBus(c+343,"top RVCPU V_REGFILE w_addr_i", false,-1, 4,0);
    tracep->declArray(c+418,"top RVCPU V_REGFILE w_data_i", false,-1, 255,0);
    tracep->declBit(c+339,"top RVCPU V_REGFILE r_ena1_i", false,-1);
    tracep->declBus(c+340,"top RVCPU V_REGFILE r_addr1_i", false,-1, 4,0);
    tracep->declArray(c+402,"top RVCPU V_REGFILE r_data1_o", false,-1, 255,0);
    tracep->declBit(c+341,"top RVCPU V_REGFILE r_ena2_i", false,-1);
    tracep->declBus(c+342,"top RVCPU V_REGFILE r_addr2_i", false,-1, 4,0);
    tracep->declArray(c+410,"top RVCPU V_REGFILE r_data2_o", false,-1, 255,0);
    tracep->declBus(c+36,"top RVCPU V_REGFILE i", false,-1, 31,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declArray(c+37+i*8,"top RVCPU V_REGFILE regs", true,(i+0), 255,0);}}
    tracep->declBit(c+397,"top INST_RAMHelper clk", false,-1);
    tracep->declBit(c+399,"top INST_RAMHelper ren", false,-1);
    tracep->declBus(c+293,"top INST_RAMHelper raddr", false,-1, 31,0);
    tracep->declBus(c+294,"top INST_RAMHelper rdata", false,-1, 31,0);
    tracep->declBit(c+397,"top SCALAR_RAMHelper clk", false,-1);
    tracep->declBit(c+295,"top SCALAR_RAMHelper ren", false,-1);
    tracep->declBus(c+394,"top SCALAR_RAMHelper raddr", false,-1, 31,0);
    tracep->declBus(c+297,"top SCALAR_RAMHelper rdata", false,-1, 31,0);
    tracep->declBit(c+298,"top SCALAR_RAMHelper wen", false,-1);
    tracep->declBus(c+394,"top SCALAR_RAMHelper waddr", false,-1, 31,0);
    tracep->declBus(c+299,"top SCALAR_RAMHelper wdata", false,-1, 31,0);
    tracep->declBus(c+428,"top SCALAR_RAMHelper wmask", false,-1, 31,0);
    tracep->declBit(c+397,"top VECTOR_RAMHelper clk", false,-1);
    tracep->declBit(c+300,"top VECTOR_RAMHelper ren", false,-1);
    tracep->declBus(c+395,"top VECTOR_RAMHelper raddr", false,-1, 31,0);
    tracep->declArray(c+302,"top VECTOR_RAMHelper rdata", false,-1, 255,0);
    tracep->declBit(c+310,"top VECTOR_RAMHelper wen", false,-1);
    tracep->declBus(c+396,"top VECTOR_RAMHelper waddr", false,-1, 31,0);
    tracep->declArray(c+312,"top VECTOR_RAMHelper wdata", false,-1, 255,0);
    tracep->declArray(c+429,"top VECTOR_RAMHelper wmask", false,-1, 255,0);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;
extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h5b979007_0;

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_h79ba5789__0;
    VlWide<8>/*255:0*/ __Vtemp_h4d01f640__0;
    VlWide<8>/*255:0*/ __Vtemp_h7f9ba7b0__0;
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__pc),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__i),32);
    tracep->fullIData(oldp+4,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0]),32);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[1]),32);
    tracep->fullIData(oldp+6,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[2]),32);
    tracep->fullIData(oldp+7,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[3]),32);
    tracep->fullIData(oldp+8,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[4]),32);
    tracep->fullIData(oldp+9,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[5]),32);
    tracep->fullIData(oldp+10,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[6]),32);
    tracep->fullIData(oldp+11,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[7]),32);
    tracep->fullIData(oldp+12,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[8]),32);
    tracep->fullIData(oldp+13,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[9]),32);
    tracep->fullIData(oldp+14,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[10]),32);
    tracep->fullIData(oldp+15,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[11]),32);
    tracep->fullIData(oldp+16,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[12]),32);
    tracep->fullIData(oldp+17,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[13]),32);
    tracep->fullIData(oldp+18,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[14]),32);
    tracep->fullIData(oldp+19,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[15]),32);
    tracep->fullIData(oldp+20,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[16]),32);
    tracep->fullIData(oldp+21,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[17]),32);
    tracep->fullIData(oldp+22,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[18]),32);
    tracep->fullIData(oldp+23,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[19]),32);
    tracep->fullIData(oldp+24,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[20]),32);
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[21]),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[22]),32);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[23]),32);
    tracep->fullIData(oldp+28,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[24]),32);
    tracep->fullIData(oldp+29,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[25]),32);
    tracep->fullIData(oldp+30,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[26]),32);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[27]),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[28]),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[29]),32);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[30]),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[31]),32);
    tracep->fullIData(oldp+36,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__i),32);
    tracep->fullWData(oldp+37,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[0]),256);
    tracep->fullWData(oldp+45,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[1]),256);
    tracep->fullWData(oldp+53,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[2]),256);
    tracep->fullWData(oldp+61,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[3]),256);
    tracep->fullWData(oldp+69,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[4]),256);
    tracep->fullWData(oldp+77,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[5]),256);
    tracep->fullWData(oldp+85,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[6]),256);
    tracep->fullWData(oldp+93,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[7]),256);
    tracep->fullWData(oldp+101,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[8]),256);
    tracep->fullWData(oldp+109,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[9]),256);
    tracep->fullWData(oldp+117,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[10]),256);
    tracep->fullWData(oldp+125,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[11]),256);
    tracep->fullWData(oldp+133,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[12]),256);
    tracep->fullWData(oldp+141,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[13]),256);
    tracep->fullWData(oldp+149,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[14]),256);
    tracep->fullWData(oldp+157,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[15]),256);
    tracep->fullWData(oldp+165,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[16]),256);
    tracep->fullWData(oldp+173,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[17]),256);
    tracep->fullWData(oldp+181,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[18]),256);
    tracep->fullWData(oldp+189,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[19]),256);
    tracep->fullWData(oldp+197,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[20]),256);
    tracep->fullWData(oldp+205,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[21]),256);
    tracep->fullWData(oldp+213,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[22]),256);
    tracep->fullWData(oldp+221,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[23]),256);
    tracep->fullWData(oldp+229,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[24]),256);
    tracep->fullWData(oldp+237,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[25]),256);
    tracep->fullWData(oldp+245,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[26]),256);
    tracep->fullWData(oldp+253,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[27]),256);
    tracep->fullWData(oldp+261,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[28]),256);
    tracep->fullWData(oldp+269,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[29]),256);
    tracep->fullWData(oldp+277,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[30]),256);
    tracep->fullWData(oldp+285,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[31]),256);
    tracep->fullIData(oldp+293,((vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr 
                                 >> 2U)),32);
    tracep->fullIData(oldp+294,(vlSelf->top__DOT__rdata_inst),32);
    tracep->fullBit(oldp+295,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw));
    tracep->fullIData(oldp+296,(vlSelf->top__DOT__RVCPU__DOT__exe_result),32);
    tracep->fullIData(oldp+297,(vlSelf->top__DOT__ram_r_data),32);
    tracep->fullBit(oldp+298,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw));
    tracep->fullIData(oldp+299,(vlSelf->top__DOT__RVCPU__DOT__rs2_data),32);
    tracep->fullBit(oldp+300,(((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                ? 1U : 0U)));
    tracep->fullIData(oldp+301,(vlSelf->top__DOT__RVCPU__DOT__vmem_r_addr),32);
    tracep->fullWData(oldp+302,(vlSelf->top__DOT__vram_r_data),256);
    tracep->fullBit(oldp+310,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v));
    tracep->fullIData(oldp+311,(vlSelf->top__DOT__RVCPU__DOT__rs1_data),32);
    tracep->fullWData(oldp+312,(vlSelf->top__DOT__RVCPU__DOT__operand_vs2),256);
    tracep->fullBit(oldp+320,(((IData)(vlSelf->top__DOT__RVCPU__DOT__jump_en) 
                               | (IData)(vlSelf->top__DOT__RVCPU__DOT__branch_en))));
    tracep->fullIData(oldp+321,(vlSelf->top__DOT__RVCPU__DOT__transfer_pc),32);
    tracep->fullBit(oldp+322,(((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena) 
                               | (IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena))));
    tracep->fullCData(oldp+323,((0x1fU & ((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                           ? ((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__rdata_inst 
                                                     >> 0xfU))
                                               : 0U)
                                           : ((IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena)
                                               ? ((IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 0xfU))
                                                   : 0U)
                                               : 0U)))),5);
    tracep->fullBit(oldp+324,(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena));
    tracep->fullCData(oldp+325,(((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                              >> 0xfU))
                                  : 0U)),5);
    tracep->fullBit(oldp+326,(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena));
    tracep->fullCData(oldp+327,(((IData)(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                              >> 0x14U))
                                  : 0U)),5);
    tracep->fullIData(oldp+328,(vlSelf->top__DOT__RVCPU__DOT__operand_rs1),32);
    tracep->fullIData(oldp+329,(vlSelf->top__DOT__RVCPU__DOT__operand_rs2),32);
    tracep->fullCData(oldp+330,(vlSelf->top__DOT__RVCPU__DOT__alu_opcode),8);
    tracep->fullBit(oldp+331,(vlSelf->top__DOT__RVCPU__DOT__branch_en));
    tracep->fullIData(oldp+332,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__operand_rs_imm),32);
    tracep->fullBit(oldp+333,(vlSelf->top__DOT__RVCPU__DOT__jump_en));
    tracep->fullBit(oldp+334,(vlSelf->top__DOT__RVCPU__DOT__wb_ena));
    tracep->fullCData(oldp+335,(((IData)(vlSelf->top__DOT__RVCPU__DOT__wb_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                              >> 7U))
                                  : 0U)),5);
    tracep->fullCData(oldp+336,(vlSelf->top__DOT__RVCPU__DOT__rd_w_addr),5);
    tracep->fullBit(oldp+337,(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena));
    tracep->fullCData(oldp+338,(((IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                              >> 0xfU))
                                  : 0U)),5);
    tracep->fullBit(oldp+339,(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena));
    tracep->fullCData(oldp+340,(((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                              >> 0xfU))
                                  : 0U)),5);
    tracep->fullBit(oldp+341,(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena));
    tracep->fullCData(oldp+342,((0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                           & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                           ? (0x1fU 
                                              & (vlSelf->top__DOT__rdata_inst 
                                                 >> 0x14U))
                                           : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                               & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__rdata_inst 
                                                     >> 7U))
                                               : 0U)))),5);
    tracep->fullCData(oldp+343,(vlSelf->top__DOT__RVCPU__DOT__vd_w_addr),5);
    tracep->fullCData(oldp+344,(vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode),8);
    tracep->fullWData(oldp+345,(vlSelf->top__DOT__RVCPU__DOT__operand_vs1),256);
    tracep->fullWData(oldp+353,(vlSelf->top__DOT__RVCPU__DOT__vexe_result),256);
    tracep->fullBit(oldp+361,(vlSelf->top__DOT__RVCPU__DOT__vwb_ena));
    tracep->fullBit(oldp+362,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v));
    tracep->fullCData(oldp+363,(((IData)(vlSelf->top__DOT__RVCPU__DOT__vwb_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                              >> 7U))
                                  : 0U)),5);
    tracep->fullSData(oldp+364,((vlSelf->top__DOT__rdata_inst 
                                 >> 0x14U)),12);
    tracep->fullIData(oldp+365,((0xfffff000U & vlSelf->top__DOT__rdata_inst)),32);
    tracep->fullSData(oldp+366,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_b),13);
    tracep->fullIData(oldp+367,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_j),21);
    tracep->fullSData(oldp+368,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_s),12);
    tracep->fullCData(oldp+369,((vlSelf->top__DOT__rdata_inst 
                                 >> 0x19U)),7);
    tracep->fullCData(oldp+370,((0x1fU & (vlSelf->top__DOT__rdata_inst 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+371,((0x1fU & (vlSelf->top__DOT__rdata_inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+372,((7U & (vlSelf->top__DOT__rdata_inst 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+373,((0x1fU & (vlSelf->top__DOT__rdata_inst 
                                          >> 7U))),5);
    tracep->fullCData(oldp+374,((0x7fU & vlSelf->top__DOT__rdata_inst)),7);
    tracep->fullBit(oldp+375,((((((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi) 
                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti)) 
                                 | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)) 
                                | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw)) 
                               | (0x37U == (0x7fU & vlSelf->top__DOT__rdata_inst)))));
    tracep->fullBit(oldp+376,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul));
    tracep->fullBit(oldp+377,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add));
    tracep->fullBit(oldp+378,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and));
    tracep->fullBit(oldp+379,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll));
    tracep->fullBit(oldp+380,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi));
    tracep->fullBit(oldp+381,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti));
    tracep->fullBit(oldp+382,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt));
    tracep->fullBit(oldp+383,((0x37U == (0x7fU & vlSelf->top__DOT__rdata_inst))));
    tracep->fullBit(oldp+384,((0x6fU == (0x7fU & vlSelf->top__DOT__rdata_inst))));
    tracep->fullCData(oldp+385,((vlSelf->top__DOT__rdata_inst 
                                 >> 0x1aU)),6);
    tracep->fullBit(oldp+386,((1U & (vlSelf->top__DOT__rdata_inst 
                                     >> 0x19U))));
    tracep->fullIData(oldp+387,((((- (IData)((1U & 
                                              (vlSelf->top__DOT__rdata_inst 
                                               >> 0x13U)))) 
                                  << 5U) | (0x1fU & 
                                            (vlSelf->top__DOT__rdata_inst 
                                             >> 0xfU)))),32);
    tracep->fullBit(oldp+388,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv));
    tracep->fullBit(oldp+389,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi));
    tracep->fullBit(oldp+390,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx));
    tracep->fullBit(oldp+391,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv));
    tracep->fullBit(oldp+392,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi));
    tracep->fullBit(oldp+393,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx));
    tracep->fullIData(oldp+394,((vlSelf->top__DOT__RVCPU__DOT__exe_result 
                                 >> 2U)),32);
    tracep->fullIData(oldp+395,((vlSelf->top__DOT__RVCPU__DOT__vmem_r_addr 
                                 >> 2U)),32);
    tracep->fullIData(oldp+396,((vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                 >> 2U)),32);
    tracep->fullBit(oldp+397,(vlSelf->clk));
    tracep->fullBit(oldp+398,(vlSelf->rst));
    tracep->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->rst)))));
    tracep->fullBit(oldp+400,(((IData)(vlSelf->rst)
                                ? 0U : (1U & (IData)(vlSelf->top__DOT__RVCPU__DOT__wb_ena)))));
    tracep->fullIData(oldp+401,(((IData)(vlSelf->rst)
                                  ? 0U : ((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)
                                           ? vlSelf->top__DOT__ram_r_data
                                           : vlSelf->top__DOT__RVCPU__DOT__exe_result))),32);
    if (vlSelf->rst) {
        __Vtemp_h79ba5789__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h79ba5789__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h79ba5789__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h79ba5789__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h79ba5789__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h79ba5789__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h79ba5789__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h79ba5789__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    } else if (vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena) {
        __Vtemp_h79ba5789__0[0U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][0U];
        __Vtemp_h79ba5789__0[1U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][1U];
        __Vtemp_h79ba5789__0[2U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][2U];
        __Vtemp_h79ba5789__0[3U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][3U];
        __Vtemp_h79ba5789__0[4U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][4U];
        __Vtemp_h79ba5789__0[5U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][5U];
        __Vtemp_h79ba5789__0[6U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][6U];
        __Vtemp_h79ba5789__0[7U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                           >> 0xfU)) : 0U)][7U];
    } else {
        __Vtemp_h79ba5789__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h79ba5789__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h79ba5789__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h79ba5789__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h79ba5789__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h79ba5789__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h79ba5789__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h79ba5789__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    }
    tracep->fullWData(oldp+402,(__Vtemp_h79ba5789__0),256);
    if (vlSelf->rst) {
        __Vtemp_h4d01f640__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h4d01f640__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h4d01f640__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h4d01f640__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h4d01f640__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h4d01f640__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h4d01f640__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h4d01f640__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    } else if (vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) {
        __Vtemp_h4d01f640__0[0U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][0U];
        __Vtemp_h4d01f640__0[1U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][1U];
        __Vtemp_h4d01f640__0[2U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][2U];
        __Vtemp_h4d01f640__0[3U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][3U];
        __Vtemp_h4d01f640__0[4U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][4U];
        __Vtemp_h4d01f640__0[5U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][5U];
        __Vtemp_h4d01f640__0[6U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][6U];
        __Vtemp_h4d01f640__0[7U] = vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 7U))
                                                   : 0U)))][7U];
    } else {
        __Vtemp_h4d01f640__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h4d01f640__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h4d01f640__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h4d01f640__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h4d01f640__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h4d01f640__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h4d01f640__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h4d01f640__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    }
    tracep->fullWData(oldp+410,(__Vtemp_h4d01f640__0),256);
    if (vlSelf->rst) {
        __Vtemp_h7f9ba7b0__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h7f9ba7b0__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h7f9ba7b0__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h7f9ba7b0__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h7f9ba7b0__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h7f9ba7b0__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h7f9ba7b0__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h7f9ba7b0__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    } else if (vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v) {
        if (vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v) {
            __Vtemp_h7f9ba7b0__0[0U] = vlSelf->top__DOT__vram_r_data[0U];
            __Vtemp_h7f9ba7b0__0[1U] = vlSelf->top__DOT__vram_r_data[1U];
            __Vtemp_h7f9ba7b0__0[2U] = vlSelf->top__DOT__vram_r_data[2U];
            __Vtemp_h7f9ba7b0__0[3U] = vlSelf->top__DOT__vram_r_data[3U];
            __Vtemp_h7f9ba7b0__0[4U] = vlSelf->top__DOT__vram_r_data[4U];
            __Vtemp_h7f9ba7b0__0[5U] = vlSelf->top__DOT__vram_r_data[5U];
            __Vtemp_h7f9ba7b0__0[6U] = vlSelf->top__DOT__vram_r_data[6U];
            __Vtemp_h7f9ba7b0__0[7U] = vlSelf->top__DOT__vram_r_data[7U];
        } else {
            __Vtemp_h7f9ba7b0__0[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
            __Vtemp_h7f9ba7b0__0[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
            __Vtemp_h7f9ba7b0__0[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
            __Vtemp_h7f9ba7b0__0[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
            __Vtemp_h7f9ba7b0__0[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
            __Vtemp_h7f9ba7b0__0[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
            __Vtemp_h7f9ba7b0__0[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
            __Vtemp_h7f9ba7b0__0[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        __Vtemp_h7f9ba7b0__0[0U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[0U];
        __Vtemp_h7f9ba7b0__0[1U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[1U];
        __Vtemp_h7f9ba7b0__0[2U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[2U];
        __Vtemp_h7f9ba7b0__0[3U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[3U];
        __Vtemp_h7f9ba7b0__0[4U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[4U];
        __Vtemp_h7f9ba7b0__0[5U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[5U];
        __Vtemp_h7f9ba7b0__0[6U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[6U];
        __Vtemp_h7f9ba7b0__0[7U] = vlSelf->top__DOT__RVCPU__DOT__vexe_result[7U];
    }
    tracep->fullWData(oldp+418,(__Vtemp_h7f9ba7b0__0),256);
    tracep->fullBit(oldp+426,(((IData)(vlSelf->rst)
                                ? 0U : (1U & (IData)(vlSelf->top__DOT__RVCPU__DOT__vwb_ena)))));
    tracep->fullIData(oldp+427,(((IData)(vlSelf->rst)
                                  ? 0U : ((1U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                           ? (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                              + vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                           : ((2U == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                               ? (VL_LTS_III(32, vlSelf->top__DOT__RVCPU__DOT__operand_rs1, vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                                   ? 1U
                                                   : 0U)
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                                   ? 
                                                  (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                                   * vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                                    & vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->top__DOT__RVCPU__DOT__alu_opcode))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                                      ? 
                                                     (vlSelf->top__DOT__RVCPU__DOT__operand_rs1 
                                                      << vlSelf->top__DOT__RVCPU__DOT__operand_rs2)
                                                      : 0U)
                                                     : 0U))))))),32);
    tracep->fullIData(oldp+428,(0xffffffffU),32);
    tracep->fullWData(oldp+429,(Vtop__ConstPool__CONST_h5b979007_0),256);
}
