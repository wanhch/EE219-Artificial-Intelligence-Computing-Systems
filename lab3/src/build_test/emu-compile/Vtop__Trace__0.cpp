// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_h79ba5789__0;
    VlWide<8>/*255:0*/ __Vtemp_h4d01f640__0;
    VlWide<8>/*255:0*/ __Vtemp_h7f9ba7b0__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__pc),32);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__i),32);
        tracep->chgIData(oldp+3,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[0]),32);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[1]),32);
        tracep->chgIData(oldp+5,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[2]),32);
        tracep->chgIData(oldp+6,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[3]),32);
        tracep->chgIData(oldp+7,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[4]),32);
        tracep->chgIData(oldp+8,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[5]),32);
        tracep->chgIData(oldp+9,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[6]),32);
        tracep->chgIData(oldp+10,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[7]),32);
        tracep->chgIData(oldp+11,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[8]),32);
        tracep->chgIData(oldp+12,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[9]),32);
        tracep->chgIData(oldp+13,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[10]),32);
        tracep->chgIData(oldp+14,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[11]),32);
        tracep->chgIData(oldp+15,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[12]),32);
        tracep->chgIData(oldp+16,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[13]),32);
        tracep->chgIData(oldp+17,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[14]),32);
        tracep->chgIData(oldp+18,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[15]),32);
        tracep->chgIData(oldp+19,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[16]),32);
        tracep->chgIData(oldp+20,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[17]),32);
        tracep->chgIData(oldp+21,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[18]),32);
        tracep->chgIData(oldp+22,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[19]),32);
        tracep->chgIData(oldp+23,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[20]),32);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[21]),32);
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[22]),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[23]),32);
        tracep->chgIData(oldp+27,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[24]),32);
        tracep->chgIData(oldp+28,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[25]),32);
        tracep->chgIData(oldp+29,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[26]),32);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[27]),32);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[28]),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[29]),32);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[30]),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[31]),32);
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__i),32);
        tracep->chgWData(oldp+36,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[0]),256);
        tracep->chgWData(oldp+44,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[1]),256);
        tracep->chgWData(oldp+52,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[2]),256);
        tracep->chgWData(oldp+60,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[3]),256);
        tracep->chgWData(oldp+68,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[4]),256);
        tracep->chgWData(oldp+76,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[5]),256);
        tracep->chgWData(oldp+84,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[6]),256);
        tracep->chgWData(oldp+92,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[7]),256);
        tracep->chgWData(oldp+100,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[8]),256);
        tracep->chgWData(oldp+108,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[9]),256);
        tracep->chgWData(oldp+116,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[10]),256);
        tracep->chgWData(oldp+124,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[11]),256);
        tracep->chgWData(oldp+132,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[12]),256);
        tracep->chgWData(oldp+140,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[13]),256);
        tracep->chgWData(oldp+148,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[14]),256);
        tracep->chgWData(oldp+156,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[15]),256);
        tracep->chgWData(oldp+164,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[16]),256);
        tracep->chgWData(oldp+172,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[17]),256);
        tracep->chgWData(oldp+180,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[18]),256);
        tracep->chgWData(oldp+188,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[19]),256);
        tracep->chgWData(oldp+196,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[20]),256);
        tracep->chgWData(oldp+204,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[21]),256);
        tracep->chgWData(oldp+212,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[22]),256);
        tracep->chgWData(oldp+220,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[23]),256);
        tracep->chgWData(oldp+228,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[24]),256);
        tracep->chgWData(oldp+236,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[25]),256);
        tracep->chgWData(oldp+244,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[26]),256);
        tracep->chgWData(oldp+252,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[27]),256);
        tracep->chgWData(oldp+260,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[28]),256);
        tracep->chgWData(oldp+268,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[29]),256);
        tracep->chgWData(oldp+276,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[30]),256);
        tracep->chgWData(oldp+284,(vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__regs[31]),256);
        tracep->chgIData(oldp+292,((vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr 
                                    >> 2U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+293,(vlSelf->top__DOT__rdata_inst),32);
        tracep->chgBit(oldp+294,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw));
        tracep->chgIData(oldp+295,(vlSelf->top__DOT__RVCPU__DOT__exe_result),32);
        tracep->chgIData(oldp+296,(vlSelf->top__DOT__ram_r_data),32);
        tracep->chgBit(oldp+297,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw));
        tracep->chgIData(oldp+298,(vlSelf->top__DOT__RVCPU__DOT__rs2_data),32);
        tracep->chgBit(oldp+299,(((IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+300,(vlSelf->top__DOT__RVCPU__DOT__vmem_r_addr),32);
        tracep->chgWData(oldp+301,(vlSelf->top__DOT__vram_r_data),256);
        tracep->chgBit(oldp+309,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v));
        tracep->chgIData(oldp+310,(vlSelf->top__DOT__RVCPU__DOT__rs1_data),32);
        tracep->chgWData(oldp+311,(vlSelf->top__DOT__RVCPU__DOT__operand_vs2),256);
        tracep->chgBit(oldp+319,(((IData)(vlSelf->top__DOT__RVCPU__DOT__jump_en) 
                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__branch_en))));
        tracep->chgIData(oldp+320,(vlSelf->top__DOT__RVCPU__DOT__transfer_pc),32);
        tracep->chgBit(oldp+321,(((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena) 
                                  | (IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena))));
        tracep->chgCData(oldp+322,((0x1fU & ((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                              ? ((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__rdata_inst 
                                                     >> 0xfU))
                                                  : 0U)
                                              : ((IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__rdata_inst 
                                                      >> 0xfU))
                                                   : 0U)
                                                  : 0U)))),5);
        tracep->chgBit(oldp+323,(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena));
        tracep->chgCData(oldp+324,(((IData)(vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgBit(oldp+325,(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena));
        tracep->chgCData(oldp+326,(((IData)(vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                                 >> 0x14U))
                                     : 0U)),5);
        tracep->chgIData(oldp+327,(vlSelf->top__DOT__RVCPU__DOT__operand_rs1),32);
        tracep->chgIData(oldp+328,(vlSelf->top__DOT__RVCPU__DOT__operand_rs2),32);
        tracep->chgCData(oldp+329,(vlSelf->top__DOT__RVCPU__DOT__alu_opcode),8);
        tracep->chgBit(oldp+330,(vlSelf->top__DOT__RVCPU__DOT__branch_en));
        tracep->chgIData(oldp+331,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__operand_rs_imm),32);
        tracep->chgBit(oldp+332,(vlSelf->top__DOT__RVCPU__DOT__jump_en));
        tracep->chgBit(oldp+333,(vlSelf->top__DOT__RVCPU__DOT__wb_ena));
        tracep->chgCData(oldp+334,(((IData)(vlSelf->top__DOT__RVCPU__DOT__wb_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->chgCData(oldp+335,(vlSelf->top__DOT__RVCPU__DOT__rd_w_addr),5);
        tracep->chgBit(oldp+336,(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena));
        tracep->chgCData(oldp+337,(((IData)(vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgBit(oldp+338,(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena));
        tracep->chgCData(oldp+339,(((IData)(vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgBit(oldp+340,(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena));
        tracep->chgCData(oldp+341,((0x1fU & (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                              & (~ (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                              ? (0x1fU 
                                                 & (vlSelf->top__DOT__rdata_inst 
                                                    >> 0x14U))
                                              : (((IData)(vlSelf->top__DOT__RVCPU__DOT__vs2_r_ena) 
                                                  & (IData)(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__rdata_inst 
                                                     >> 7U))
                                                  : 0U)))),5);
        tracep->chgCData(oldp+342,(vlSelf->top__DOT__RVCPU__DOT__vd_w_addr),5);
        tracep->chgCData(oldp+343,(vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode),8);
        tracep->chgWData(oldp+344,(vlSelf->top__DOT__RVCPU__DOT__operand_vs1),256);
        tracep->chgWData(oldp+352,(vlSelf->top__DOT__RVCPU__DOT__vexe_result),256);
        tracep->chgBit(oldp+360,(vlSelf->top__DOT__RVCPU__DOT__vwb_ena));
        tracep->chgBit(oldp+361,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v));
        tracep->chgCData(oldp+362,(((IData)(vlSelf->top__DOT__RVCPU__DOT__vwb_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__rdata_inst 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->chgSData(oldp+363,((vlSelf->top__DOT__rdata_inst 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+364,((0xfffff000U & vlSelf->top__DOT__rdata_inst)),32);
        tracep->chgSData(oldp+365,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_b),13);
        tracep->chgIData(oldp+366,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_j),21);
        tracep->chgSData(oldp+367,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_s),12);
        tracep->chgCData(oldp+368,((vlSelf->top__DOT__rdata_inst 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+369,((0x1fU & (vlSelf->top__DOT__rdata_inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+370,((0x1fU & (vlSelf->top__DOT__rdata_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+371,((7U & (vlSelf->top__DOT__rdata_inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+372,((0x1fU & (vlSelf->top__DOT__rdata_inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+373,((0x7fU & vlSelf->top__DOT__rdata_inst)),7);
        tracep->chgBit(oldp+374,((((((IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi) 
                                     | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti)) 
                                    | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw)) 
                                   | (IData)(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw)) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->top__DOT__rdata_inst)))));
        tracep->chgBit(oldp+375,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul));
        tracep->chgBit(oldp+376,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add));
        tracep->chgBit(oldp+377,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and));
        tracep->chgBit(oldp+378,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll));
        tracep->chgBit(oldp+379,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi));
        tracep->chgBit(oldp+380,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti));
        tracep->chgBit(oldp+381,(vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt));
        tracep->chgBit(oldp+382,((0x37U == (0x7fU & vlSelf->top__DOT__rdata_inst))));
        tracep->chgBit(oldp+383,((0x6fU == (0x7fU & vlSelf->top__DOT__rdata_inst))));
        tracep->chgCData(oldp+384,((vlSelf->top__DOT__rdata_inst 
                                    >> 0x1aU)),6);
        tracep->chgBit(oldp+385,((1U & (vlSelf->top__DOT__rdata_inst 
                                        >> 0x19U))));
        tracep->chgIData(oldp+386,((((- (IData)((1U 
                                                 & (vlSelf->top__DOT__rdata_inst 
                                                    >> 0x13U)))) 
                                     << 5U) | (0x1fU 
                                               & (vlSelf->top__DOT__rdata_inst 
                                                  >> 0xfU)))),32);
        tracep->chgBit(oldp+387,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv));
        tracep->chgBit(oldp+388,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi));
        tracep->chgBit(oldp+389,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx));
        tracep->chgBit(oldp+390,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv));
        tracep->chgBit(oldp+391,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi));
        tracep->chgBit(oldp+392,(vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx));
        tracep->chgIData(oldp+393,((vlSelf->top__DOT__RVCPU__DOT__exe_result 
                                    >> 2U)),32);
        tracep->chgIData(oldp+394,((vlSelf->top__DOT__RVCPU__DOT__vmem_r_addr 
                                    >> 2U)),32);
        tracep->chgIData(oldp+395,((vlSelf->top__DOT__RVCPU__DOT__rs1_data 
                                    >> 2U)),32);
    }
    tracep->chgBit(oldp+396,(vlSelf->clk));
    tracep->chgBit(oldp+397,(vlSelf->rst));
    tracep->chgBit(oldp+398,((1U & (~ (IData)(vlSelf->rst)))));
    tracep->chgBit(oldp+399,(((IData)(vlSelf->rst) ? 0U
                               : (1U & (IData)(vlSelf->top__DOT__RVCPU__DOT__wb_ena)))));
    tracep->chgIData(oldp+400,(((IData)(vlSelf->rst)
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
    tracep->chgWData(oldp+401,(__Vtemp_h79ba5789__0),256);
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
    tracep->chgWData(oldp+409,(__Vtemp_h4d01f640__0),256);
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
    tracep->chgWData(oldp+417,(__Vtemp_h7f9ba7b0__0),256);
    tracep->chgBit(oldp+425,(((IData)(vlSelf->rst) ? 0U
                               : (1U & (IData)(vlSelf->top__DOT__RVCPU__DOT__vwb_ena)))));
    tracep->chgIData(oldp+426,(((IData)(vlSelf->rst)
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
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
