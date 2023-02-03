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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<16>/*511:0*/ __Vtemp_h2e55750e__0;
    VlWide<16>/*511:0*/ __Vtemp_h970dd865__0;
    VlWide<16>/*511:0*/ __Vtemp_h92da58c4__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__inst),32);
        tracep->chgQData(oldp+1,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju),64);
        tracep->chgBit(oldp+3,(((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                 ? 1U : 0U)));
        tracep->chgBit(oldp+4,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                 ? 1U : 0U)));
        tracep->chgQData(oldp+5,(vlSelf->top__DOT__rom_rdata),64);
        tracep->chgBit(oldp+7,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                 ? 1U : 0U)));
        tracep->chgBit(oldp+8,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v));
        tracep->chgCData(oldp+9,(vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT),5);
        tracep->chgCData(oldp+10,((0x1fU & ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                               | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj))) 
                                              | ((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))) 
                                             | ((((((((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4) 
                                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)) 
                                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)) 
                                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)) 
                                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)) 
                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)) 
                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)))
                                             ? (0x1fU 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0x14U))
                                             : (((0x6bU 
                                                  == vlSelf->top__DOT__inst) 
                                                 | (0x5007fU 
                                                    == vlSelf->top__DOT__inst))
                                                 ? 0xaU
                                                 : 0U)))),5);
        tracep->chgBit(oldp+11,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5))));
        tracep->chgBit(oldp+12,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                 | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)))));
        tracep->chgQData(oldp+13,(vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z),64);
        tracep->chgBit(oldp+15,(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g));
        tracep->chgQData(oldp+16,((((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst)) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
                                                               >> 0x14U))))) 
                                        << 0x15U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY)))
                                    : 0ULL)),64);
        tracep->chgCData(oldp+18,(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c),3);
        tracep->chgBit(oldp+19,((((((0x37U == (0x7fU 
                                               & vlSelf->top__DOT__inst)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->top__DOT__inst))) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst))) 
                                  | (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)) 
                                      | ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)) 
                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)) 
                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG))) 
                                     | ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)) 
                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)) 
                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)) 
                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)))) 
                                 | ((((((((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)) 
                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)) 
                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)) 
                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)))));
        tracep->chgCData(oldp+20,(vlSelf->top__DOT__RV64I__DOT__ttyiClU),5);
        tracep->chgQData(oldp+21,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db),64);
        tracep->chgIData(oldp+23,((0xfffff000U & vlSelf->top__DOT__inst)),32);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY),21);
        tracep->chgSData(oldp+25,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS),13);
        tracep->chgSData(oldp+26,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe),12);
        tracep->chgSData(oldp+27,((vlSelf->top__DOT__inst 
                                   >> 0x14U)),12);
        tracep->chgCData(oldp+28,((vlSelf->top__DOT__inst 
                                   >> 0x19U)),7);
        tracep->chgCData(oldp+29,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+30,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+31,((7U & (vlSelf->top__DOT__inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+32,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+33,((0x7fU & vlSelf->top__DOT__inst)),7);
        tracep->chgQData(oldp+34,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v),64);
        tracep->chgBit(oldp+36,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->chgBit(oldp+37,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->chgBit(oldp+38,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->chgBit(oldp+39,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
        tracep->chgBit(oldp+40,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd));
        tracep->chgBit(oldp+41,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a));
        tracep->chgBit(oldp+42,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI));
        tracep->chgBit(oldp+43,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg));
        tracep->chgBit(oldp+44,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz));
        tracep->chgBit(oldp+45,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj));
        tracep->chgBit(oldp+46,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy));
        tracep->chgBit(oldp+47,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr));
        tracep->chgBit(oldp+48,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc));
        tracep->chgBit(oldp+49,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt));
        tracep->chgBit(oldp+50,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq));
        tracep->chgBit(oldp+51,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY));
        tracep->chgBit(oldp+52,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no));
        tracep->chgBit(oldp+53,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4));
        tracep->chgBit(oldp+54,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ));
        tracep->chgBit(oldp+55,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2));
        tracep->chgBit(oldp+56,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ));
        tracep->chgBit(oldp+57,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB));
        tracep->chgBit(oldp+58,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt));
        tracep->chgBit(oldp+59,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE));
        tracep->chgBit(oldp+60,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim));
        tracep->chgBit(oldp+61,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V));
        tracep->chgBit(oldp+62,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY));
        tracep->chgBit(oldp+63,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4));
        tracep->chgBit(oldp+64,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt));
        tracep->chgBit(oldp+65,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z));
        tracep->chgBit(oldp+66,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb));
        tracep->chgBit(oldp+67,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1));
        tracep->chgBit(oldp+68,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r));
        tracep->chgBit(oldp+69,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA));
        tracep->chgBit(oldp+70,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ));
        tracep->chgBit(oldp+71,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln));
        tracep->chgBit(oldp+72,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7));
        tracep->chgBit(oldp+73,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I));
        tracep->chgBit(oldp+74,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI));
        tracep->chgBit(oldp+75,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr));
        tracep->chgBit(oldp+76,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49));
        tracep->chgBit(oldp+77,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG));
        tracep->chgBit(oldp+78,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5));
        tracep->chgBit(oldp+79,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg));
        tracep->chgBit(oldp+80,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF));
        tracep->chgBit(oldp+81,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A));
        tracep->chgBit(oldp+82,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9));
        tracep->chgBit(oldp+83,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4));
        tracep->chgBit(oldp+84,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7));
        tracep->chgBit(oldp+85,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
        tracep->chgBit(oldp+86,((0x6bU == vlSelf->top__DOT__inst)));
        tracep->chgBit(oldp+87,((0x5007fU == vlSelf->top__DOT__inst)));
        tracep->chgIData(oldp+88,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H),32);
        tracep->chgQData(oldp+89,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0]),64);
        tracep->chgQData(oldp+91,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1]),64);
        tracep->chgQData(oldp+93,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2]),64);
        tracep->chgQData(oldp+95,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3]),64);
        tracep->chgQData(oldp+97,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4]),64);
        tracep->chgQData(oldp+99,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5]),64);
        tracep->chgQData(oldp+101,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6]),64);
        tracep->chgQData(oldp+103,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7]),64);
        tracep->chgQData(oldp+105,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8]),64);
        tracep->chgQData(oldp+107,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9]),64);
        tracep->chgQData(oldp+109,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[10]),64);
        tracep->chgQData(oldp+111,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[11]),64);
        tracep->chgQData(oldp+113,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[12]),64);
        tracep->chgQData(oldp+115,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[13]),64);
        tracep->chgQData(oldp+117,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[14]),64);
        tracep->chgQData(oldp+119,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[15]),64);
        tracep->chgQData(oldp+121,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[16]),64);
        tracep->chgQData(oldp+123,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[17]),64);
        tracep->chgQData(oldp+125,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[18]),64);
        tracep->chgQData(oldp+127,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[19]),64);
        tracep->chgQData(oldp+129,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[20]),64);
        tracep->chgQData(oldp+131,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[21]),64);
        tracep->chgQData(oldp+133,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[22]),64);
        tracep->chgQData(oldp+135,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[23]),64);
        tracep->chgQData(oldp+137,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[24]),64);
        tracep->chgQData(oldp+139,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[25]),64);
        tracep->chgQData(oldp+141,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[26]),64);
        tracep->chgQData(oldp+143,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[27]),64);
        tracep->chgQData(oldp+145,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[28]),64);
        tracep->chgQData(oldp+147,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[29]),64);
        tracep->chgQData(oldp+149,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[30]),64);
        tracep->chgQData(oldp+151,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[31]),64);
        tracep->chgQData(oldp+153,(((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                     - 0x80000000ULL) 
                                    >> 3U)),64);
        tracep->chgBit(oldp+155,(vlSelf->top__DOT__RV_VECTOR__DOT__vwb_ena));
        tracep->chgBit(oldp+156,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v));
        tracep->chgCData(oldp+157,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vwb_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->chgCData(oldp+158,((vlSelf->top__DOT__inst 
                                    >> 0x1aU)),6);
        tracep->chgBit(oldp+159,((1U & (vlSelf->top__DOT__inst 
                                        >> 0x19U))));
        tracep->chgQData(oldp+160,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU)))))),64);
        tracep->chgBit(oldp+162,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vv));
        tracep->chgBit(oldp+163,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vi));
        tracep->chgBit(oldp+164,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx));
        tracep->chgBit(oldp+165,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vv));
        tracep->chgBit(oldp+166,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vi));
        tracep->chgBit(oldp+167,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx));
        tracep->chgBit(oldp+168,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vc));
        tracep->chgBit(oldp+169,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vr));
        tracep->chgBit(oldp+170,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vcomp));
        tracep->chgIData(oldp+171,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__i),32);
        tracep->chgWData(oldp+172,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[0]),512);
        tracep->chgWData(oldp+188,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[1]),512);
        tracep->chgWData(oldp+204,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[2]),512);
        tracep->chgWData(oldp+220,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[3]),512);
        tracep->chgWData(oldp+236,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[4]),512);
        tracep->chgWData(oldp+252,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[5]),512);
        tracep->chgWData(oldp+268,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[6]),512);
        tracep->chgWData(oldp+284,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[7]),512);
        tracep->chgWData(oldp+300,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[8]),512);
        tracep->chgWData(oldp+316,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[9]),512);
        tracep->chgWData(oldp+332,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[10]),512);
        tracep->chgWData(oldp+348,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[11]),512);
        tracep->chgWData(oldp+364,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[12]),512);
        tracep->chgWData(oldp+380,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[13]),512);
        tracep->chgWData(oldp+396,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[14]),512);
        tracep->chgWData(oldp+412,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[15]),512);
        tracep->chgWData(oldp+428,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[16]),512);
        tracep->chgWData(oldp+444,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[17]),512);
        tracep->chgWData(oldp+460,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[18]),512);
        tracep->chgWData(oldp+476,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[19]),512);
        tracep->chgWData(oldp+492,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[20]),512);
        tracep->chgWData(oldp+508,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[21]),512);
        tracep->chgWData(oldp+524,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[22]),512);
        tracep->chgWData(oldp+540,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[23]),512);
        tracep->chgWData(oldp+556,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[24]),512);
        tracep->chgWData(oldp+572,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[25]),512);
        tracep->chgWData(oldp+588,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[26]),512);
        tracep->chgWData(oldp+604,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[27]),512);
        tracep->chgWData(oldp+620,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[28]),512);
        tracep->chgWData(oldp+636,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[29]),512);
        tracep->chgWData(oldp+652,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[30]),512);
        tracep->chgWData(oldp+668,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[31]),512);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgQData(oldp+684,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                     ? ((0x3fU >= (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv) 
                                                      << 3U)))
                                         ? ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                              ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                              : 0ULL) 
                                            << (0x38U 
                                                & ((IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv) 
                                                   << 3U)))
                                         : 0ULL) : 
                                    ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                      ? ((0x3fU >= 
                                          (0x30U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                     >> 1U)) 
                                            << 4U)))
                                          ? ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                               ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                               : 0ULL) 
                                             << (0x30U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                             >> 1U)) 
                                                    << 4U)))
                                          : 0ULL) : 
                                     ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                       ? ((0x3fU >= 
                                           (0x20U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                      >> 2U)) 
                                             << 5U)))
                                           ? ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                : 0ULL) 
                                              << (0x20U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                              >> 2U)) 
                                                     << 5U)))
                                           : 0ULL) : 
                                      ((7U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                        ? (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                            ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                            : 0ULL)
                                        : 0ULL))))),64);
        tracep->chgCData(oldp+686,(((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgBit(oldp+687,(((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))));
        tracep->chgQData(oldp+688,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                                >> 7U))))) 
                                         << 8U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                     : ((4U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                         ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                         : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                        >> 0xfU))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                 ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C)))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                   ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                    ? vlSelf->top__DOT__ram_r_data
                                                    : 0ULL)))))))),64);
        tracep->chgQData(oldp+690,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                     ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                     : 0ULL)),64);
        tracep->chgQData(oldp+692,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0]),64);
        tracep->chgQData(oldp+694,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1]),64);
        tracep->chgQData(oldp+696,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2]),64);
        tracep->chgQData(oldp+698,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3]),64);
        tracep->chgQData(oldp+700,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4]),64);
        tracep->chgQData(oldp+702,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5]),64);
        tracep->chgQData(oldp+704,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6]),64);
        tracep->chgQData(oldp+706,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7]),64);
        tracep->chgQData(oldp+708,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8]),64);
        tracep->chgQData(oldp+710,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9]),64);
        tracep->chgQData(oldp+712,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[10]),64);
        tracep->chgQData(oldp+714,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[11]),64);
        tracep->chgQData(oldp+716,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[12]),64);
        tracep->chgQData(oldp+718,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[13]),64);
        tracep->chgQData(oldp+720,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[14]),64);
        tracep->chgQData(oldp+722,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[15]),64);
        tracep->chgQData(oldp+724,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[16]),64);
        tracep->chgQData(oldp+726,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[17]),64);
        tracep->chgQData(oldp+728,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[18]),64);
        tracep->chgQData(oldp+730,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[19]),64);
        tracep->chgQData(oldp+732,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[20]),64);
        tracep->chgQData(oldp+734,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[21]),64);
        tracep->chgQData(oldp+736,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[22]),64);
        tracep->chgQData(oldp+738,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[23]),64);
        tracep->chgQData(oldp+740,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[24]),64);
        tracep->chgQData(oldp+742,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[25]),64);
        tracep->chgQData(oldp+744,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[26]),64);
        tracep->chgQData(oldp+746,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[27]),64);
        tracep->chgQData(oldp+748,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[28]),64);
        tracep->chgQData(oldp+750,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[29]),64);
        tracep->chgQData(oldp+752,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[30]),64);
        tracep->chgQData(oldp+754,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[31]),64);
        tracep->chgCData(oldp+756,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgCData(oldp+757,((0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                              & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                                              ? (0x1fU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 0x14U))
                                              : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                  & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 7U))
                                                  : 0U)))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgQData(oldp+758,(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv),64);
        tracep->chgQData(oldp+760,(vlSelf->top__DOT__ram_r_data),64);
        tracep->chgQData(oldp+762,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__KzUS4LT1bsC),64);
        tracep->chgQData(oldp+764,(vlSelf->top__DOT__regs[0]),64);
        tracep->chgQData(oldp+766,(vlSelf->top__DOT__regs[1]),64);
        tracep->chgQData(oldp+768,(vlSelf->top__DOT__regs[2]),64);
        tracep->chgQData(oldp+770,(vlSelf->top__DOT__regs[3]),64);
        tracep->chgQData(oldp+772,(vlSelf->top__DOT__regs[4]),64);
        tracep->chgQData(oldp+774,(vlSelf->top__DOT__regs[5]),64);
        tracep->chgQData(oldp+776,(vlSelf->top__DOT__regs[6]),64);
        tracep->chgQData(oldp+778,(vlSelf->top__DOT__regs[7]),64);
        tracep->chgQData(oldp+780,(vlSelf->top__DOT__regs[8]),64);
        tracep->chgQData(oldp+782,(vlSelf->top__DOT__regs[9]),64);
        tracep->chgQData(oldp+784,(vlSelf->top__DOT__regs[10]),64);
        tracep->chgQData(oldp+786,(vlSelf->top__DOT__regs[11]),64);
        tracep->chgQData(oldp+788,(vlSelf->top__DOT__regs[12]),64);
        tracep->chgQData(oldp+790,(vlSelf->top__DOT__regs[13]),64);
        tracep->chgQData(oldp+792,(vlSelf->top__DOT__regs[14]),64);
        tracep->chgQData(oldp+794,(vlSelf->top__DOT__regs[15]),64);
        tracep->chgQData(oldp+796,(vlSelf->top__DOT__regs[16]),64);
        tracep->chgQData(oldp+798,(vlSelf->top__DOT__regs[17]),64);
        tracep->chgQData(oldp+800,(vlSelf->top__DOT__regs[18]),64);
        tracep->chgQData(oldp+802,(vlSelf->top__DOT__regs[19]),64);
        tracep->chgQData(oldp+804,(vlSelf->top__DOT__regs[20]),64);
        tracep->chgQData(oldp+806,(vlSelf->top__DOT__regs[21]),64);
        tracep->chgQData(oldp+808,(vlSelf->top__DOT__regs[22]),64);
        tracep->chgQData(oldp+810,(vlSelf->top__DOT__regs[23]),64);
        tracep->chgQData(oldp+812,(vlSelf->top__DOT__regs[24]),64);
        tracep->chgQData(oldp+814,(vlSelf->top__DOT__regs[25]),64);
        tracep->chgQData(oldp+816,(vlSelf->top__DOT__regs[26]),64);
        tracep->chgQData(oldp+818,(vlSelf->top__DOT__regs[27]),64);
        tracep->chgQData(oldp+820,(vlSelf->top__DOT__regs[28]),64);
        tracep->chgQData(oldp+822,(vlSelf->top__DOT__regs[29]),64);
        tracep->chgQData(oldp+824,(vlSelf->top__DOT__regs[30]),64);
        tracep->chgQData(oldp+826,(vlSelf->top__DOT__regs[31]),64);
        tracep->chgBit(oldp+828,(vlSelf->top__DOT__vec_rs1_r_ena));
        tracep->chgQData(oldp+829,(vlSelf->top__DOT__vec_rs1_data),64);
        tracep->chgQData(oldp+831,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr),64);
        tracep->chgWData(oldp+833,(vlSelf->top__DOT__vram_r_data),512);
        tracep->chgWData(oldp+849,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2),512);
        tracep->chgQData(oldp+865,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0]),64);
        tracep->chgQData(oldp+867,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1]),64);
        tracep->chgQData(oldp+869,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2]),64);
        tracep->chgQData(oldp+871,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3]),64);
        tracep->chgQData(oldp+873,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4]),64);
        tracep->chgQData(oldp+875,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5]),64);
        tracep->chgQData(oldp+877,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6]),64);
        tracep->chgQData(oldp+879,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7]),64);
        tracep->chgQData(oldp+881,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8]),64);
        tracep->chgQData(oldp+883,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9]),64);
        tracep->chgQData(oldp+885,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[10]),64);
        tracep->chgQData(oldp+887,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[11]),64);
        tracep->chgQData(oldp+889,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[12]),64);
        tracep->chgQData(oldp+891,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[13]),64);
        tracep->chgQData(oldp+893,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[14]),64);
        tracep->chgQData(oldp+895,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[15]),64);
        tracep->chgQData(oldp+897,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[16]),64);
        tracep->chgQData(oldp+899,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[17]),64);
        tracep->chgQData(oldp+901,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[18]),64);
        tracep->chgQData(oldp+903,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[19]),64);
        tracep->chgQData(oldp+905,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[20]),64);
        tracep->chgQData(oldp+907,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[21]),64);
        tracep->chgQData(oldp+909,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[22]),64);
        tracep->chgQData(oldp+911,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[23]),64);
        tracep->chgQData(oldp+913,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[24]),64);
        tracep->chgQData(oldp+915,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[25]),64);
        tracep->chgQData(oldp+917,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[26]),64);
        tracep->chgQData(oldp+919,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[27]),64);
        tracep->chgQData(oldp+921,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[28]),64);
        tracep->chgQData(oldp+923,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[29]),64);
        tracep->chgQData(oldp+925,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[30]),64);
        tracep->chgQData(oldp+927,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[31]),64);
        tracep->chgQData(oldp+929,(vlSelf->top__DOT__RV64I__DOT__epavvrInwBl),64);
        tracep->chgBit(oldp+931,(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk));
        tracep->chgQData(oldp+932,(vlSelf->top__DOT__RV64I__DOT__MrCY1P97),64);
        tracep->chgBit(oldp+934,(vlSelf->top__DOT__RV64I__DOT__stsrseQpu));
        tracep->chgQData(oldp+935,(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw),64);
        tracep->chgQData(oldp+937,(vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v),64);
        tracep->chgCData(oldp+939,(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1),8);
        tracep->chgBit(oldp+940,(vlSelf->top__DOT__RV64I__DOT__CP5BekSY));
        tracep->chgCData(oldp+941,(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w),5);
        tracep->chgQData(oldp+942,(vlSelf->top__DOT__RV64I__DOT__cSWijWYsS),64);
        tracep->chgQData(oldp+944,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx),64);
        tracep->chgBit(oldp+946,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc));
        tracep->chgIData(oldp+947,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C),32);
        tracep->chgSData(oldp+948,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY),16);
        tracep->chgCData(oldp+949,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm),8);
        tracep->chgQData(oldp+950,(((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                   >> 2U)))
                                     ? 0xffffffff00000000ULL
                                     : 0xffffffffULL)),64);
        tracep->chgQData(oldp+952,(((0U == (3U & (IData)(
                                                         (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                          >> 1U))))
                                     ? 0xffffULL : 
                                    ((1U == (3U & (IData)(
                                                          (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                           >> 1U))))
                                      ? 0xffff0000ULL
                                      : ((2U == (3U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                            >> 1U))))
                                          ? 0xffff00000000ULL
                                          : ((3U == 
                                              (3U & (IData)(
                                                            (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                             >> 1U))))
                                              ? 0xffff000000000000ULL
                                              : 0ULL))))),64);
        tracep->chgQData(oldp+954,(((0U == (7U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                     ? 0xffULL : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                   ? 0xff00ULL
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                    ? 0xff0000ULL
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                     ? 0xff000000ULL
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                      ? 0xff00000000ULL
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                       ? 0xff0000000000ULL
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                        ? 0xff000000000000ULL
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                         ? 0xff00000000000000ULL
                                                         : 0ULL))))))))),64);
        tracep->chgQData(oldp+956,(((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                     - 0x80000000ULL) 
                                    >> 3U)),64);
        tracep->chgBit(oldp+958,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena));
        tracep->chgBit(oldp+959,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena));
        tracep->chgCData(oldp+960,(vlSelf->top__DOT__RV_VECTOR__DOT__vd_w_addr),5);
        tracep->chgCData(oldp+961,(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode),8);
        tracep->chgWData(oldp+962,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1),512);
        tracep->chgWData(oldp+978,(vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result),512);
        tracep->chgQData(oldp+994,(((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                     - 0x80000000ULL) 
                                    >> 3U)),64);
        tracep->chgQData(oldp+996,(((vlSelf->top__DOT__vec_rs1_data 
                                     - 0x80000000ULL) 
                                    >> 3U)),64);
    }
    tracep->chgBit(oldp+998,(vlSelf->clock));
    tracep->chgBit(oldp+999,(vlSelf->reset));
    tracep->chgBit(oldp+1000,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->chgQData(oldp+1001,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                             ? vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                            [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                             : 0ULL))),64);
    if (vlSelf->reset) {
        __Vtemp_h2e55750e__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h2e55750e__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h2e55750e__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h2e55750e__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h2e55750e__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h2e55750e__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h2e55750e__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h2e55750e__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h2e55750e__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h2e55750e__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h2e55750e__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h2e55750e__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h2e55750e__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h2e55750e__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h2e55750e__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h2e55750e__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena) {
        __Vtemp_h2e55750e__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0U];
        __Vtemp_h2e55750e__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][1U];
        __Vtemp_h2e55750e__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][2U];
        __Vtemp_h2e55750e__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][3U];
        __Vtemp_h2e55750e__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][4U];
        __Vtemp_h2e55750e__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][5U];
        __Vtemp_h2e55750e__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][6U];
        __Vtemp_h2e55750e__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][7U];
        __Vtemp_h2e55750e__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][8U];
        __Vtemp_h2e55750e__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][9U];
        __Vtemp_h2e55750e__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xaU];
        __Vtemp_h2e55750e__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xbU];
        __Vtemp_h2e55750e__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xcU];
        __Vtemp_h2e55750e__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xdU];
        __Vtemp_h2e55750e__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xeU];
        __Vtemp_h2e55750e__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xfU];
    } else {
        __Vtemp_h2e55750e__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h2e55750e__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h2e55750e__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h2e55750e__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h2e55750e__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h2e55750e__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h2e55750e__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h2e55750e__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h2e55750e__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h2e55750e__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h2e55750e__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h2e55750e__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h2e55750e__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h2e55750e__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h2e55750e__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h2e55750e__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    tracep->chgWData(oldp+1003,(__Vtemp_h2e55750e__0),512);
    if (vlSelf->reset) {
        __Vtemp_h970dd865__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h970dd865__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h970dd865__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h970dd865__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h970dd865__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h970dd865__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h970dd865__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h970dd865__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h970dd865__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h970dd865__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h970dd865__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h970dd865__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h970dd865__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h970dd865__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h970dd865__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h970dd865__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) {
        __Vtemp_h970dd865__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0U];
        __Vtemp_h970dd865__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][1U];
        __Vtemp_h970dd865__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][2U];
        __Vtemp_h970dd865__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][3U];
        __Vtemp_h970dd865__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][4U];
        __Vtemp_h970dd865__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][5U];
        __Vtemp_h970dd865__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][6U];
        __Vtemp_h970dd865__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][7U];
        __Vtemp_h970dd865__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][8U];
        __Vtemp_h970dd865__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][9U];
        __Vtemp_h970dd865__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xaU];
        __Vtemp_h970dd865__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xbU];
        __Vtemp_h970dd865__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xcU];
        __Vtemp_h970dd865__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xdU];
        __Vtemp_h970dd865__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xeU];
        __Vtemp_h970dd865__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xfU];
    } else {
        __Vtemp_h970dd865__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h970dd865__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h970dd865__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h970dd865__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h970dd865__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h970dd865__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h970dd865__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h970dd865__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h970dd865__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h970dd865__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h970dd865__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h970dd865__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h970dd865__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h970dd865__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h970dd865__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h970dd865__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    tracep->chgWData(oldp+1019,(__Vtemp_h970dd865__0),512);
    if (vlSelf->reset) {
        __Vtemp_h92da58c4__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h92da58c4__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h92da58c4__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h92da58c4__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h92da58c4__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h92da58c4__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h92da58c4__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h92da58c4__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h92da58c4__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h92da58c4__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h92da58c4__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h92da58c4__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h92da58c4__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h92da58c4__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h92da58c4__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h92da58c4__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v) {
        if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v) {
            __Vtemp_h92da58c4__0[0U] = vlSelf->top__DOT__vram_r_data[0U];
            __Vtemp_h92da58c4__0[1U] = vlSelf->top__DOT__vram_r_data[1U];
            __Vtemp_h92da58c4__0[2U] = vlSelf->top__DOT__vram_r_data[2U];
            __Vtemp_h92da58c4__0[3U] = vlSelf->top__DOT__vram_r_data[3U];
            __Vtemp_h92da58c4__0[4U] = vlSelf->top__DOT__vram_r_data[4U];
            __Vtemp_h92da58c4__0[5U] = vlSelf->top__DOT__vram_r_data[5U];
            __Vtemp_h92da58c4__0[6U] = vlSelf->top__DOT__vram_r_data[6U];
            __Vtemp_h92da58c4__0[7U] = vlSelf->top__DOT__vram_r_data[7U];
            __Vtemp_h92da58c4__0[8U] = vlSelf->top__DOT__vram_r_data[8U];
            __Vtemp_h92da58c4__0[9U] = vlSelf->top__DOT__vram_r_data[9U];
            __Vtemp_h92da58c4__0[0xaU] = vlSelf->top__DOT__vram_r_data[0xaU];
            __Vtemp_h92da58c4__0[0xbU] = vlSelf->top__DOT__vram_r_data[0xbU];
            __Vtemp_h92da58c4__0[0xcU] = vlSelf->top__DOT__vram_r_data[0xcU];
            __Vtemp_h92da58c4__0[0xdU] = vlSelf->top__DOT__vram_r_data[0xdU];
            __Vtemp_h92da58c4__0[0xeU] = vlSelf->top__DOT__vram_r_data[0xeU];
            __Vtemp_h92da58c4__0[0xfU] = vlSelf->top__DOT__vram_r_data[0xfU];
        } else {
            __Vtemp_h92da58c4__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            __Vtemp_h92da58c4__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_h92da58c4__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_h92da58c4__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_h92da58c4__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_h92da58c4__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_h92da58c4__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_h92da58c4__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_h92da58c4__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_h92da58c4__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_h92da58c4__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_h92da58c4__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_h92da58c4__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_h92da58c4__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_h92da58c4__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_h92da58c4__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else {
        __Vtemp_h92da58c4__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U];
        __Vtemp_h92da58c4__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U];
        __Vtemp_h92da58c4__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U];
        __Vtemp_h92da58c4__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U];
        __Vtemp_h92da58c4__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U];
        __Vtemp_h92da58c4__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U];
        __Vtemp_h92da58c4__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U];
        __Vtemp_h92da58c4__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U];
        __Vtemp_h92da58c4__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U];
        __Vtemp_h92da58c4__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U];
        __Vtemp_h92da58c4__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU];
        __Vtemp_h92da58c4__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU];
        __Vtemp_h92da58c4__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU];
        __Vtemp_h92da58c4__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU];
        __Vtemp_h92da58c4__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU];
        __Vtemp_h92da58c4__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU];
    }
    tracep->chgWData(oldp+1035,(__Vtemp_h92da58c4__0),512);
    tracep->chgBit(oldp+1051,(((IData)(vlSelf->reset)
                                ? 0U : (1U & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vwb_ena)))));
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
