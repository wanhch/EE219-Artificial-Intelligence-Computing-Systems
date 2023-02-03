// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_inst_helper__Vfuncrtn);
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
void Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0U] 
        = vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
        [0U];
    Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit(1U, 
                                                                ((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout);
    vlSelf->top__DOT__rom_rdata = vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout;
    vlSelf->top__DOT__inst = ((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                             >> 2U)))
                               ? (IData)((vlSelf->top__DOT__rom_rdata 
                                          >> 0x20U))
                               : (IData)(vlSelf->top__DOT__rom_rdata));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vcomp 
        = (IData)((0x6057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vi 
        = (IData)((0x3057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vi 
        = (IData)((0x94003057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vv 
        = (IData)((0x57U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vv 
        = (IData)((0x94000057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vc 
        = (IData)((0x4000057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vr 
        = (IData)((0x5057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v 
        = (IData)((0x6007U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v 
        = (IData)((0x6027U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx 
        = (IData)((0x4057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx 
        = (IData)((0x94004057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS 
        = ((0x1000U & (vlSelf->top__DOT__inst >> 0x13U)) 
           | ((0x800U & (vlSelf->top__DOT__inst << 4U)) 
              | ((0x7e0U & (vlSelf->top__DOT__inst 
                            >> 0x14U)) | (0x1eU & (vlSelf->top__DOT__inst 
                                                   >> 7U)))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe 
        = ((0xfe0U & (vlSelf->top__DOT__inst >> 0x14U)) 
           | (0x1fU & (vlSelf->top__DOT__inst >> 7U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
        = ((0x100000U & (vlSelf->top__DOT__inst >> 0xbU)) 
           | ((0xff000U & vlSelf->top__DOT__inst) | 
              ((0x800U & (vlSelf->top__DOT__inst >> 9U)) 
               | (0x7feU & (vlSelf->top__DOT__inst 
                            >> 0x14U)))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2 
        = (IData)((0x2013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ 
        = (IData)((0x3013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB 
        = (IData)((0x4013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt 
        = (IData)((0x6013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE 
        = (IData)((0x7013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V 
        = (IData)((0x5013U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY 
        = (IData)((0x40005013U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI 
        = (IData)((0x6003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr 
        = (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG 
        = (IData)((0x1bU == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5 
        = (IData)((0x101bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg 
        = (IData)((0x501bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF 
        = (IData)((0x4000501bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt 
        = (IData)((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA 
        = (IData)((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ 
        = (IData)((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I 
        = (IData)((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A 
        = (IData)((0x3bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9 
        = (IData)((0x4000003bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4 
        = (IData)((0x103bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd 
        = (IData)((0x63U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a 
        = (IData)((0x1063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg 
        = (IData)((0x5063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz 
        = (IData)((0x6063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj 
        = (IData)((0x7063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7 
        = (IData)((0x503bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW 
        = (IData)((0x4000503bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY 
        = (IData)((0x23U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no 
        = (IData)((0x1023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49 
        = (IData)((0x3023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vv) 
                                                         | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vc)) 
                                                       | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vr)) 
                                                      | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vcomp)));
    vlSelf->top__DOT__RV_VECTOR__DOT__vwb_ena = (((
                                                   (((((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v) 
                                                         | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx)) 
                                                      | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                     | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                    | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                   | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vc)) 
                                                  | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vr)) 
                                                 | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vcomp));
    vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode 
        = ((IData)(vlSelf->reset) ? 0x80U : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                              ? 0x80U
                                              : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)
                                                  ? 0x80U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vv)
                                                   ? 0x81U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vi)
                                                    ? 0x81U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx)
                                                     ? 0x81U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vv)
                                                      ? 0x82U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vi)
                                                       ? 0x82U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx)
                                                        ? 0x82U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vc)
                                                         ? 0x83U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vr)
                                                          ? 0x84U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vcomp)
                                                           ? 0x85U
                                                           : 0x80U))))))))))));
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((((((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v) 
                                                             | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vv)) 
                                                            | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vi)) 
                                                           | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vv)) 
                                                         | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vi)) 
                                                        | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx)) 
                                                       | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vc)) 
                                                      | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vr)));
    vlSelf->top__DOT__vec_rs1_r_ena = ((~ (IData)(vlSelf->reset)) 
                                       & ((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v) 
                                            | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)) 
                                           | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx)) 
                                          | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx)));
    vlSelf->top__DOT__RV64I__DOT__wWjUJ9g = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
    vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z = (
                                                   (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                                    | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS) 
                                                                            >> 0xcU))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS)))
                                                    : 0ULL);
    vlSelf->top__DOT__RV64I__DOT__CP5BekSY = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((
                                                   ((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)) 
                                                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)) 
                                                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)) 
                                                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)) 
                                                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)) 
                                                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG)) 
                                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim)) 
                                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)) 
                                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)) 
                                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)) 
                                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)) 
                                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)) 
                                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4)) 
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
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst))) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst))) 
                                                  | (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__inst))));
    vlSelf->top__DOT__RV64I__DOT__ttyiClU = ((((((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst)) 
                                                 | (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
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
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)))
                                              ? (0x1fU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 7U))
                                              : 0U);
    vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c = (
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)
                                                       ? 5U
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4))
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)
                                                         ? 6U
                                                         : 
                                                        (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr) 
                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                          ? 7U
                                                          : 0U)))))));
    vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = ((IData)(vlSelf->reset)
                                                 ? 0U
                                                 : 
                                                ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst))
                                                  ? 0x20U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__inst))
                                                   ? 0x21U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst))
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd)
                                                      ? 0x60U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)
                                                       ? 0x61U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)
                                                        ? 0x62U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)
                                                         ? 0x63U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz)
                                                          ? 0x64U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)
                                                           ? 0x65U
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy)
                                                            ? 0x80U
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)
                                                             ? 0x80U
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)
                                                              ? 0x80U
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)
                                                               ? 0x80U
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)
                                                                ? 0x80U
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY)
                                                                 ? 0x80U
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)
                                                                  ? 0x80U
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)
                                                                   ? 0x80U
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)
                                                                    ? 0x80U
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)
                                                                     ? 0x82U
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)
                                                                      ? 0x83U
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)
                                                                       ? 0x84U
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)
                                                                        ? 0x85U
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)
                                                                         ? 0x86U
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim)
                                                                          ? 0x87U
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)
                                                                           ? 0x88U
                                                                           : 
                                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)
                                                                            ? 0x89U
                                                                            : 
                                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4)
                                                                             ? 0x80U
                                                                             : 
                                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)
                                                                              ? 0x81U
                                                                              : 
                                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)
                                                                               ? 0x87U
                                                                               : 
                                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)
                                                                                ? 0x82U
                                                                                : 
                                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)
                                                                                 ? 0x83U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)
                                                                                 ? 0x84U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)
                                                                                 ? 0x85U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)
                                                                                 ? 0x86U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)
                                                                                 ? 0x8aU
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)
                                                                                 ? 0x81U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((0x6bU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb0U
                                                                                 : 
                                                                                ((0x5007fU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb1U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT = 
        (0x1fU & (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                      | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj))) 
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
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : (((0x6bU 
                                              == vlSelf->top__DOT__inst) 
                                             | (0x5007fU 
                                                == vlSelf->top__DOT__inst))
                                             ? 0xaU
                                             : 0U)));
    vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                                          | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj))) 
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
                                                      | ((0x6bU 
                                                          == vlSelf->top__DOT__inst) 
                                                         | (0x5007fU 
                                                            == vlSelf->top__DOT__inst))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v 
        = (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O) 
                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)) 
                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)) 
                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)) 
               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)) 
              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)) 
             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)) 
            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG))
            ? (((- (QData)((IData)((vlSelf->top__DOT__inst 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->top__DOT__inst 
                                  >> 0x14U)))) : ((
                                                   ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__inst 
                                                                      >> 0x14U))))
                                                   : 
                                                  (((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelf->top__DOT__inst 
                                                                          >> 0x14U))))
                                                    : 
                                                   (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe)))
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
                                                                              >> 0x14U))))) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY)))
                                                      : 
                                                     (((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst)) 
                                                       | (0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__inst)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (0xfffff000U 
                                                                          & vlSelf->top__DOT__inst))))
                                                       : 0ULL))))));
    vlSelf->top__DOT__RV64I__DOT__stsrseQpu = ((~ (IData)(vlSelf->reset)) 
                                               & ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
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
                                                  | ((0x6bU 
                                                      == vlSelf->top__DOT__inst) 
                                                     | (0x5007fU 
                                                        == vlSelf->top__DOT__inst))));
    vlSelf->top__DOT__RV_VECTOR__DOT__vd_w_addr = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vwb_ena)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 7U))
                                                     : 0U));
    if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) {
        if (vlSelf->reset) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xfU];
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = ((IData)(vlSelf->reset)
                                                ? 0U
                                                : (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__ttyiClU)));
    vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw = ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7))
                                                   ? (QData)((IData)(
                                                                     ((IData)(vlSelf->reset)
                                                                       ? 0ULL
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                                        ? 
                                                                       vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                                       [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                                        : 0ULL))))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (((IData)(vlSelf->reset)
                                                                                 ? 0ULL
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                                                 ? 
                                                                                vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                                                [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                                                 : 0ULL)) 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->reset)
                                                                        ? 0ULL
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                                         ? 
                                                                        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                                        [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                                         : 0ULL)))))
                                                    : 
                                                   ((IData)(vlSelf->reset)
                                                     ? 0ULL
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                      ? 
                                                     vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                     [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                      : 0ULL))))
                                                  : 0ULL);
    vlSelf->top__DOT__RV64I__DOT__MrCY1P97 = ((IData)(vlSelf->reset)
                                               ? 0ULL
                                               : ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                  [
                                                  (0x1fU 
                                                   & ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
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
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0x14U))
                                                       : 
                                                      (((0x6bU 
                                                         == vlSelf->top__DOT__inst) 
                                                        | (0x5007fU 
                                                           == vlSelf->top__DOT__inst))
                                                        ? 0xaU
                                                        : 0U)))]
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v = (((
                                                   ((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
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
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF))) 
                                                    | ((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst))) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst)) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst))))
                                                  ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW))
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__MrCY1P97))))
                                                    : vlSelf->top__DOT__RV64I__DOT__MrCY1P97)
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc 
        = ((0x60U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
            ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
               == vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
            : ((0x61U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                   != vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                : ((0x62U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                    : ((0x63U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? VL_GTES_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                        : ((0x64U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                               < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                            : ((0x65U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1)) 
                               & (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                  >= vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = 0x80000000ULL;
    } else {
        vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
            = ((0x80U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                ? ((0x40U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? 0ULL : ((0x20U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                               ? 0ULL : ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                          ? 0ULL : 
                                         ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                           ? ((4U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                               ? 0ULL
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    * vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))
                                           : ((4U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                               ? ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    & vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    | vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    ^ vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   ((vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                     < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 
                                                   (VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                     ? 1ULL
                                                     : 0ULL))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    - vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))))))
                : ((0x40U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? ((0x20U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? 0ULL : ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))))))
                        : ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? 0ULL : ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + 
                                                    (((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
                                                                              >> 0x14U))))) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY)))
                                                      : 0ULL))))))))
                    : ((0x20U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? 0ULL : ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))
                        : 0ULL)));
        vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = 
            ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
              ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
              : ((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc)
                  ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
                  : 0x80000000ULL));
    }
    vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv = ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                                 ? 
                                                (4ULL 
                                                 + vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju)
                                                 : 
                                                ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx)))
                                                  : vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__KzUS4LT1bsC 
        = ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
             ? 1U : 0U) ? ((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                            ? ((0U == (7U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                ? 0xffULL : ((1U == 
                                              (7U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                              ? 0xff00ULL
                                              : ((2U 
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
                                                       : 0ULL))))))))
                            : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                ? ((0U == (3U & (IData)(
                                                        (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                         >> 1U))))
                                    ? 0xffffULL : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                >> 1U))))
                                                    ? 0xffff0000ULL
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                 >> 1U))))
                                                     ? 0xffff00000000ULL
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                  >> 1U))))
                                                      ? 0xffff000000000000ULL
                                                      : 0ULL))))
                                : ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                    ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                      >> 2U)))
                                        ? 0xffffffff00000000ULL
                                        : 0xffffffffULL)
                                    : ((7U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                        ? 0xffffffffffffffffULL
                                        : 0ULL)))) : 0ULL);
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
    vlSelf->top__DOT__ram_r_data = vlSelf->__Vfunc_ram_read_helper__1__Vfuncout;
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
        = ((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                          >> 2U))) ? (IData)((vlSelf->top__DOT__ram_r_data 
                                              >> 0x20U))
            : (IData)(vlSelf->top__DOT__ram_r_data));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY 
        = (0xffffU & ((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                     >> 1U))) ? (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                 >> 0x10U)
                       : vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm 
        = (0xffU & ((1U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv))
                     ? ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                        >> 8U) : (IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)));
    vlSelf->top__DOT__RV64I__DOT__cSWijWYsS = ((IData)(vlSelf->reset)
                                                ? 0ULL
                                                : (
                                                   ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                                     ? 1U
                                                     : 0U)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                      ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                               >> 0xfU))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                                       : 
                                                      ((5U 
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
                                                           : 0ULL)))))))
                                                    : vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv));
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (1U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [1U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (2U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [2U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (3U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [3U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (4U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [4U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (5U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [5U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (6U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [6U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (7U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [7U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (8U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [8U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (9U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [9U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xaU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xaU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xaU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xbU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xbU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xbU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xcU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xcU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xcU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xdU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xdU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xdU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xeU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xeU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xeU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xfU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xfU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xfU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x10U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x10U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x10U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x11U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x11U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x11U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x12U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x12U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x12U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x13U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x13U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x13U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x14U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x14U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x14U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x15U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x15U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x15U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x16U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x16U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x16U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x17U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x17U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x17U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x18U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x18U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x18U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x19U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x19U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x19U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1aU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1aU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1aU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1bU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1bU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1bU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1cU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1cU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1cU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1dU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1dU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1dU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1eU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1eU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1eU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1fU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1fU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1fU]);
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [1U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [2U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [3U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [4U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [5U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [6U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [7U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [8U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [9U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xaU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xaU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xbU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xbU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xcU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xcU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xdU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xdU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xeU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xeU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xfU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xfU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x10U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x10U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x11U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x11U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x12U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x12U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x13U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x13U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x14U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x14U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x15U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x15U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x16U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x16U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x17U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x17U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x18U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x18U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x19U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x19U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1aU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1aU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1bU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1bU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1cU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1cU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1dU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1dU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1eU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1eU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1fU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1fU];
    vlSelf->top__DOT__regs[0U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0U];
    vlSelf->top__DOT__regs[1U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [1U];
    vlSelf->top__DOT__regs[2U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [2U];
    vlSelf->top__DOT__regs[3U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [3U];
    vlSelf->top__DOT__regs[4U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [4U];
    vlSelf->top__DOT__regs[5U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [5U];
    vlSelf->top__DOT__regs[6U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [6U];
    vlSelf->top__DOT__regs[7U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [7U];
    vlSelf->top__DOT__regs[8U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [8U];
    vlSelf->top__DOT__regs[9U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [9U];
    vlSelf->top__DOT__regs[0xaU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xaU];
    vlSelf->top__DOT__regs[0xbU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xbU];
    vlSelf->top__DOT__regs[0xcU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xcU];
    vlSelf->top__DOT__regs[0xdU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xdU];
    vlSelf->top__DOT__regs[0xeU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xeU];
    vlSelf->top__DOT__regs[0xfU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xfU];
    vlSelf->top__DOT__regs[0x10U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x10U];
    vlSelf->top__DOT__regs[0x11U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x11U];
    vlSelf->top__DOT__regs[0x12U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x12U];
    vlSelf->top__DOT__regs[0x13U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x13U];
    vlSelf->top__DOT__regs[0x14U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x14U];
    vlSelf->top__DOT__regs[0x15U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x15U];
    vlSelf->top__DOT__regs[0x16U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x16U];
    vlSelf->top__DOT__regs[0x17U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x17U];
    vlSelf->top__DOT__regs[0x18U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x18U];
    vlSelf->top__DOT__regs[0x19U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x19U];
    vlSelf->top__DOT__regs[0x1aU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1aU];
    vlSelf->top__DOT__regs[0x1bU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1bU];
    vlSelf->top__DOT__regs[0x1cU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1cU];
    vlSelf->top__DOT__regs[0x1dU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1dU];
    vlSelf->top__DOT__regs[0x1eU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1eU];
    vlSelf->top__DOT__regs[0x1fU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1fU];
    vlSelf->top__DOT__vec_rs1_data = ((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                       ? vlSelf->top__DOT__regs
                                      [((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xfU))
                                         : 0U)] : 0ULL);
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr = 
        ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
          ? vlSelf->top__DOT__vec_rs1_data : 0ULL);
    if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena) {
        if (vlSelf->reset) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xfU];
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else if (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vi) 
                | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vi))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
    } else if (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx) 
                | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__515__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__515__Vfuncout);
    vlSelf->top__DOT__vram_r_data[1U] = (IData)((vlSelf->__Vfunc_ram_read_helper__515__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (1ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__516__Vfuncout);
    vlSelf->top__DOT__vram_r_data[2U] = (IData)(vlSelf->__Vfunc_ram_read_helper__516__Vfuncout);
    vlSelf->top__DOT__vram_r_data[3U] = (IData)((vlSelf->__Vfunc_ram_read_helper__516__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (2ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__517__Vfuncout);
    vlSelf->top__DOT__vram_r_data[4U] = (IData)(vlSelf->__Vfunc_ram_read_helper__517__Vfuncout);
    vlSelf->top__DOT__vram_r_data[5U] = (IData)((vlSelf->__Vfunc_ram_read_helper__517__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (3ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__518__Vfuncout);
    vlSelf->top__DOT__vram_r_data[6U] = (IData)(vlSelf->__Vfunc_ram_read_helper__518__Vfuncout);
    vlSelf->top__DOT__vram_r_data[7U] = (IData)((vlSelf->__Vfunc_ram_read_helper__518__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (4ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__519__Vfuncout);
    vlSelf->top__DOT__vram_r_data[8U] = (IData)(vlSelf->__Vfunc_ram_read_helper__519__Vfuncout);
    vlSelf->top__DOT__vram_r_data[9U] = (IData)((vlSelf->__Vfunc_ram_read_helper__519__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (5ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__520__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xaU] = (IData)(vlSelf->__Vfunc_ram_read_helper__520__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xbU] = (IData)((vlSelf->__Vfunc_ram_read_helper__520__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (6ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__521__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xcU] = (IData)(vlSelf->__Vfunc_ram_read_helper__521__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xdU] = (IData)((vlSelf->__Vfunc_ram_read_helper__521__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v)
                                                                  ? 1U
                                                                  : 0U), 
                                                                (7ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__522__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xeU] = (IData)(vlSelf->__Vfunc_ram_read_helper__522__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xfU] = (IData)((vlSelf->__Vfunc_ram_read_helper__522__Vfuncout 
                                                   >> 0x20U));
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
    } else if ((0x80U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
    } else if ((0x83U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                      >> 8U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                     >> 0x10U))), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                 >> 0x18U)), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U])), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                  >> 8U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x10U))), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x18U)), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U])), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                  >> 8U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                 >> 0x10U))), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                             >> 0x18U)), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U])), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                              >> 8U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                             >> 0x10U))), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                         >> 0x18U)), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U])), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                          >> 8U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                         >> 0x10U))), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     >> 0x18U)), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U])), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                      >> 8U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                     >> 0x10U))), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                 >> 0x18U)), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U])), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                    >> 8U))), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                      >> 0x10U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                  >> 0x18U)), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                   >> 8U))), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                  >> 0x10U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                              >> 0x18U)), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U])), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                   >> 8U))), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                  >> 0x10U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                              >> 0x18U)), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (0xffU 
                                                             & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U])), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                               >> 8U))), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                              >> 0x10U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                          >> 0x18U)), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (0xffU 
                                                         & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU])), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                           >> 8U))), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                          >> 0x10U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      >> 0x18U)), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU])), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                       >> 8U))), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                      >> 0x10U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                  >> 0x18U)), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU])), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                   >> 8U))), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                      >> 8U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                     >> 0x10U))), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                 >> 0x18U)), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U])), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                  >> 8U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x10U))), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x18U)), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U])), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                  >> 8U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                 >> 0x10U))), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                             >> 0x18U)), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U])), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                              >> 8U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                             >> 0x10U))), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                         >> 0x18U)), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U])), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                          >> 8U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                         >> 0x10U))), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     >> 0x18U)), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U])), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                      >> 8U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                     >> 0x10U))), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                 >> 0x18U)), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U])), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                    >> 8U))), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                      >> 0x10U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                  >> 0x18U)), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                   >> 8U))), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                  >> 0x10U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                              >> 0x18U)), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U])), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                   >> 8U))), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                  >> 0x10U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                              >> 0x18U)), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (0xffU 
                                                             & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U])), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                               >> 8U))), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                              >> 0x10U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                          >> 0x18U)), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (0xffU 
                                                         & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU])), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                           >> 8U))), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                          >> 0x10U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      >> 0x18U)), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU])), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                       >> 8U))), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                      >> 0x10U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                  >> 0x18U)), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU])), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                   >> 8U))), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                      >> 8U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                     >> 0x10U))), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                 >> 0x18U)), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U])), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                  >> 8U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x10U))), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x18U)), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U])), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                  >> 8U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                 >> 0x10U))), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                             >> 0x18U)), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U])), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                              >> 8U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                             >> 0x10U))), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                         >> 0x18U)), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U])), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                          >> 8U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                         >> 0x10U))), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     >> 0x18U)), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U])), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                      >> 8U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                     >> 0x10U))), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                 >> 0x18U)), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U])), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                    >> 8U))), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                      >> 0x10U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                  >> 0x18U)), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                   >> 8U))), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                  >> 0x10U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                              >> 0x18U)), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U])), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                   >> 8U))), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                  >> 0x10U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                              >> 0x18U)), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (0xffU 
                                                             & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U])), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                               >> 8U))), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                              >> 0x10U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                          >> 0x18U)), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (0xffU 
                                                         & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU])), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                           >> 8U))), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                          >> 0x10U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      >> 0x18U)), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU])), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                       >> 8U))), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                      >> 0x10U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                  >> 0x18U)), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU])), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                   >> 8U))), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                      >> 8U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                     >> 0x10U))), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                 >> 0x18U)), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U])), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                  >> 8U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x10U))), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x18U)), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U])), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                  >> 8U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                 >> 0x10U))), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                             >> 0x18U)), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U])), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                              >> 8U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                             >> 0x10U))), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                         >> 0x18U)), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U])), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                          >> 8U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                         >> 0x10U))), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     >> 0x18U)), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U])), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                      >> 8U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                     >> 0x10U))), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                 >> 0x18U)), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U])), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                    >> 8U))), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                      >> 0x10U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                  >> 0x18U)), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                   >> 8U))), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                  >> 0x10U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                              >> 0x18U)), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U])), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                   >> 8U))), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                  >> 0x10U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                              >> 0x18U)), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (0xffU 
                                                             & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U])), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                               >> 8U))), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                              >> 0x10U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                          >> 0x18U)), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (0xffU 
                                                         & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU])), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                           >> 8U))), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                          >> 0x10U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      >> 0x18U)), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU])), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                       >> 8U))), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                      >> 0x10U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                  >> 0x18U)), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU])), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                   >> 8U))), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                      >> 8U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                     >> 0x10U))), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                 >> 0x18U)), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U])), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                  >> 8U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x10U))), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x18U)), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U])), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                  >> 8U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                 >> 0x10U))), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                             >> 0x18U)), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U])), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                              >> 8U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                             >> 0x10U))), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                         >> 0x18U)), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U])), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                          >> 8U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                         >> 0x10U))), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     >> 0x18U)), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U])), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                      >> 8U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                     >> 0x10U))), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                 >> 0x18U)), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U])), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                    >> 8U))), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                      >> 0x10U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                  >> 0x18U)), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                   >> 8U))), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                  >> 0x10U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                              >> 0x18U)), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U])), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                   >> 8U))), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                  >> 0x10U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                              >> 0x18U)), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (0xffU 
                                                             & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U])), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                               >> 8U))), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                              >> 0x10U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                          >> 0x18U)), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (0xffU 
                                                         & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU])), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                           >> 8U))), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                          >> 0x10U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      >> 0x18U)), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU])), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                       >> 8U))), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                      >> 0x10U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                  >> 0x18U)), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU])), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                   >> 8U))), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                      >> 8U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                     >> 0x10U))), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                                 >> 0x18U)), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U])), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                  >> 8U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x10U))), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                                                 >> 0x18U)), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U])), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                  >> 8U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                                 >> 0x10U))), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                             >> 0x18U)), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U])), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                              >> 8U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                             >> 0x10U))), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                                         >> 0x18U)), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U])), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                          >> 8U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                         >> 0x10U))), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     >> 0x18U)), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U])), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                      >> 8U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                     >> 0x10U))), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                                 >> 0x18U)), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U])), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = ((((((((((((((((((((((((VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                    >> 8U))), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                      >> 0x10U))), 
                                                    VL_EXTENDS_II(32,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                      >> 8U))))) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                                  >> 0x18U)), 
                                                   VL_EXTENDS_II(32,8, 
                                                                 (0xffU 
                                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                     >> 0x10U))))) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U])), 
                                                  VL_EXTENDS_II(32,8, 
                                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U] 
                                                                 >> 0x18U)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                   >> 8U))), 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U])))) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                                  >> 0x10U))), 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                  >> 8U))))) 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                                              >> 0x18U)), 
                                               VL_EXTENDS_II(32,8, 
                                                             (0xffU 
                                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                                 >> 0x10U))))) 
                                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                                (0xffU 
                                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U])), 
                                              VL_EXTENDS_II(32,8, 
                                                            (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U] 
                                                             >> 0x18U)))) 
                               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                   >> 8U))), 
                                             VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                              + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                                  >> 0x10U))), 
                                            VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                              >> 8U))))) 
                             + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                             (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                              >> 0x18U)), 
                                           VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                             >> 0x10U))))) 
                            + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                            (0xffU 
                                                             & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U])), 
                                          VL_EXTENDS_II(32,8, 
                                                        (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U] 
                                                         >> 0x18U)))) 
                           + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                               >> 8U))), 
                                         VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U])))) 
                          + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                          (0xffU 
                                                           & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                              >> 0x10U))), 
                                        VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                          >> 8U))))) 
                         + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                         (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                                          >> 0x18U)), 
                                       VL_EXTENDS_II(32,8, 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                         >> 0x10U))))) 
                        + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                        (0xffU 
                                                         & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU])), 
                                      VL_EXTENDS_II(32,8, 
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U] 
                                                     >> 0x18U)))) 
                       + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                           >> 8U))), 
                                     VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                      + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                          >> 0x10U))), 
                                    VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                      >> 8U))))) 
                     + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      >> 0x18U)), 
                                   VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                     >> 0x10U))))) 
                    + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU])), 
                                  VL_EXTENDS_II(32,8, 
                                                (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U] 
                                                 >> 0x18U)))) 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                       >> 8U))), 
                                 VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U])))) 
                  + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                      >> 0x10U))), 
                                VL_EXTENDS_II(32,8, 
                                              (0xffU 
                                               & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                  >> 8U))))) 
                 + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                 (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                                  >> 0x18U)), 
                               VL_EXTENDS_II(32,8, 
                                             (0xffU 
                                              & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                 >> 0x10U))))) 
                + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU])), 
                              VL_EXTENDS_II(32,8, (
                                                   vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U] 
                                                   >> 0x18U)))) 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               (0xffU 
                                                & (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                   >> 8U))), 
                             VL_EXTENDS_II(32,8, (0xffU 
                                                  & vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))));
    } else if ((0x84U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU]) 
                                   >> 9U)) >> 1U) : 0U);
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (VL_LTS_III(32, 0U, (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))
                ? (((IData)(1U) + ((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]) 
                                   >> 9U)) >> 1U) : 0U);
    } else if ((0x85U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
        vlSelf->__Vfunc_max4__3__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__6__b = (vlSelf->__Vfunc_max4__3__a 
                                     >> 0x18U);
        vlSelf->__Vfunc_max__6__a = (0xffU & (vlSelf->__Vfunc_max4__3__a 
                                              >> 0x10U));
        vlSelf->__Vfunc_max__6__Vfuncout = (((IData)(vlSelf->__Vfunc_max__6__a) 
                                             >= (IData)(vlSelf->__Vfunc_max__6__b))
                                             ? (IData)(vlSelf->__Vfunc_max__6__a)
                                             : (IData)(vlSelf->__Vfunc_max__6__b));
        vlSelf->__Vfunc_max__5__b = vlSelf->__Vfunc_max__6__Vfuncout;
        vlSelf->__Vfunc_max__5__a = (0xffU & (vlSelf->__Vfunc_max4__3__a 
                                              >> 8U));
        vlSelf->__Vfunc_max__5__Vfuncout = (((IData)(vlSelf->__Vfunc_max__5__a) 
                                             >= (IData)(vlSelf->__Vfunc_max__5__b))
                                             ? (IData)(vlSelf->__Vfunc_max__5__a)
                                             : (IData)(vlSelf->__Vfunc_max__5__b));
        vlSelf->__Vfunc_max__4__b = vlSelf->__Vfunc_max__5__Vfuncout;
        vlSelf->__Vfunc_max__4__a = (0xffU & vlSelf->__Vfunc_max4__3__a);
        vlSelf->__Vfunc_max__4__Vfuncout = (((IData)(vlSelf->__Vfunc_max__4__a) 
                                             >= (IData)(vlSelf->__Vfunc_max__4__b))
                                             ? (IData)(vlSelf->__Vfunc_max__4__a)
                                             : (IData)(vlSelf->__Vfunc_max__4__b));
        vlSelf->__Vfunc_max4__3__Vfuncout = vlSelf->__Vfunc_max__4__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__3__Vfuncout;
        vlSelf->__Vfunc_max4__7__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__10__b = (vlSelf->__Vfunc_max4__7__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__10__a = (0xffU & (vlSelf->__Vfunc_max4__7__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__10__Vfuncout = (((IData)(vlSelf->__Vfunc_max__10__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__10__b))
                                              ? (IData)(vlSelf->__Vfunc_max__10__a)
                                              : (IData)(vlSelf->__Vfunc_max__10__b));
        vlSelf->__Vfunc_max__9__b = vlSelf->__Vfunc_max__10__Vfuncout;
        vlSelf->__Vfunc_max__9__a = (0xffU & (vlSelf->__Vfunc_max4__7__a 
                                              >> 8U));
        vlSelf->__Vfunc_max__9__Vfuncout = (((IData)(vlSelf->__Vfunc_max__9__a) 
                                             >= (IData)(vlSelf->__Vfunc_max__9__b))
                                             ? (IData)(vlSelf->__Vfunc_max__9__a)
                                             : (IData)(vlSelf->__Vfunc_max__9__b));
        vlSelf->__Vfunc_max__8__b = vlSelf->__Vfunc_max__9__Vfuncout;
        vlSelf->__Vfunc_max__8__a = (0xffU & vlSelf->__Vfunc_max4__7__a);
        vlSelf->__Vfunc_max__8__Vfuncout = (((IData)(vlSelf->__Vfunc_max__8__a) 
                                             >= (IData)(vlSelf->__Vfunc_max__8__b))
                                             ? (IData)(vlSelf->__Vfunc_max__8__a)
                                             : (IData)(vlSelf->__Vfunc_max__8__b));
        vlSelf->__Vfunc_max4__7__Vfuncout = vlSelf->__Vfunc_max__8__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__7__Vfuncout;
        vlSelf->__Vfunc_max4__11__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__14__b = (vlSelf->__Vfunc_max4__11__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__14__a = (0xffU & (vlSelf->__Vfunc_max4__11__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__14__Vfuncout = (((IData)(vlSelf->__Vfunc_max__14__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__14__b))
                                              ? (IData)(vlSelf->__Vfunc_max__14__a)
                                              : (IData)(vlSelf->__Vfunc_max__14__b));
        vlSelf->__Vfunc_max__13__b = vlSelf->__Vfunc_max__14__Vfuncout;
        vlSelf->__Vfunc_max__13__a = (0xffU & (vlSelf->__Vfunc_max4__11__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__13__Vfuncout = (((IData)(vlSelf->__Vfunc_max__13__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__13__b))
                                              ? (IData)(vlSelf->__Vfunc_max__13__a)
                                              : (IData)(vlSelf->__Vfunc_max__13__b));
        vlSelf->__Vfunc_max__12__b = vlSelf->__Vfunc_max__13__Vfuncout;
        vlSelf->__Vfunc_max__12__a = (0xffU & vlSelf->__Vfunc_max4__11__a);
        vlSelf->__Vfunc_max__12__Vfuncout = (((IData)(vlSelf->__Vfunc_max__12__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__12__b))
                                              ? (IData)(vlSelf->__Vfunc_max__12__a)
                                              : (IData)(vlSelf->__Vfunc_max__12__b));
        vlSelf->__Vfunc_max4__11__Vfuncout = vlSelf->__Vfunc_max__12__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__11__Vfuncout;
        vlSelf->__Vfunc_max4__15__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__18__b = (vlSelf->__Vfunc_max4__15__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__18__a = (0xffU & (vlSelf->__Vfunc_max4__15__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__18__Vfuncout = (((IData)(vlSelf->__Vfunc_max__18__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__18__b))
                                              ? (IData)(vlSelf->__Vfunc_max__18__a)
                                              : (IData)(vlSelf->__Vfunc_max__18__b));
        vlSelf->__Vfunc_max__17__b = vlSelf->__Vfunc_max__18__Vfuncout;
        vlSelf->__Vfunc_max__17__a = (0xffU & (vlSelf->__Vfunc_max4__15__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__17__Vfuncout = (((IData)(vlSelf->__Vfunc_max__17__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__17__b))
                                              ? (IData)(vlSelf->__Vfunc_max__17__a)
                                              : (IData)(vlSelf->__Vfunc_max__17__b));
        vlSelf->__Vfunc_max__16__b = vlSelf->__Vfunc_max__17__Vfuncout;
        vlSelf->__Vfunc_max__16__a = (0xffU & vlSelf->__Vfunc_max4__15__a);
        vlSelf->__Vfunc_max__16__Vfuncout = (((IData)(vlSelf->__Vfunc_max__16__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__16__b))
                                              ? (IData)(vlSelf->__Vfunc_max__16__a)
                                              : (IData)(vlSelf->__Vfunc_max__16__b));
        vlSelf->__Vfunc_max4__15__Vfuncout = vlSelf->__Vfunc_max__16__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__15__Vfuncout;
        vlSelf->__Vfunc_max4__19__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__22__b = (vlSelf->__Vfunc_max4__19__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__22__a = (0xffU & (vlSelf->__Vfunc_max4__19__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__22__Vfuncout = (((IData)(vlSelf->__Vfunc_max__22__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__22__b))
                                              ? (IData)(vlSelf->__Vfunc_max__22__a)
                                              : (IData)(vlSelf->__Vfunc_max__22__b));
        vlSelf->__Vfunc_max__21__b = vlSelf->__Vfunc_max__22__Vfuncout;
        vlSelf->__Vfunc_max__21__a = (0xffU & (vlSelf->__Vfunc_max4__19__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__21__Vfuncout = (((IData)(vlSelf->__Vfunc_max__21__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__21__b))
                                              ? (IData)(vlSelf->__Vfunc_max__21__a)
                                              : (IData)(vlSelf->__Vfunc_max__21__b));
        vlSelf->__Vfunc_max__20__b = vlSelf->__Vfunc_max__21__Vfuncout;
        vlSelf->__Vfunc_max__20__a = (0xffU & vlSelf->__Vfunc_max4__19__a);
        vlSelf->__Vfunc_max__20__Vfuncout = (((IData)(vlSelf->__Vfunc_max__20__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__20__b))
                                              ? (IData)(vlSelf->__Vfunc_max__20__a)
                                              : (IData)(vlSelf->__Vfunc_max__20__b));
        vlSelf->__Vfunc_max4__19__Vfuncout = vlSelf->__Vfunc_max__20__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__19__Vfuncout;
        vlSelf->__Vfunc_max4__23__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__26__b = (vlSelf->__Vfunc_max4__23__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__26__a = (0xffU & (vlSelf->__Vfunc_max4__23__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__26__Vfuncout = (((IData)(vlSelf->__Vfunc_max__26__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__26__b))
                                              ? (IData)(vlSelf->__Vfunc_max__26__a)
                                              : (IData)(vlSelf->__Vfunc_max__26__b));
        vlSelf->__Vfunc_max__25__b = vlSelf->__Vfunc_max__26__Vfuncout;
        vlSelf->__Vfunc_max__25__a = (0xffU & (vlSelf->__Vfunc_max4__23__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__25__Vfuncout = (((IData)(vlSelf->__Vfunc_max__25__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__25__b))
                                              ? (IData)(vlSelf->__Vfunc_max__25__a)
                                              : (IData)(vlSelf->__Vfunc_max__25__b));
        vlSelf->__Vfunc_max__24__b = vlSelf->__Vfunc_max__25__Vfuncout;
        vlSelf->__Vfunc_max__24__a = (0xffU & vlSelf->__Vfunc_max4__23__a);
        vlSelf->__Vfunc_max__24__Vfuncout = (((IData)(vlSelf->__Vfunc_max__24__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__24__b))
                                              ? (IData)(vlSelf->__Vfunc_max__24__a)
                                              : (IData)(vlSelf->__Vfunc_max__24__b));
        vlSelf->__Vfunc_max4__23__Vfuncout = vlSelf->__Vfunc_max__24__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__23__Vfuncout;
        vlSelf->__Vfunc_max4__27__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__30__b = (vlSelf->__Vfunc_max4__27__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__30__a = (0xffU & (vlSelf->__Vfunc_max4__27__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__30__Vfuncout = (((IData)(vlSelf->__Vfunc_max__30__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__30__b))
                                              ? (IData)(vlSelf->__Vfunc_max__30__a)
                                              : (IData)(vlSelf->__Vfunc_max__30__b));
        vlSelf->__Vfunc_max__29__b = vlSelf->__Vfunc_max__30__Vfuncout;
        vlSelf->__Vfunc_max__29__a = (0xffU & (vlSelf->__Vfunc_max4__27__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__29__Vfuncout = (((IData)(vlSelf->__Vfunc_max__29__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__29__b))
                                              ? (IData)(vlSelf->__Vfunc_max__29__a)
                                              : (IData)(vlSelf->__Vfunc_max__29__b));
        vlSelf->__Vfunc_max__28__b = vlSelf->__Vfunc_max__29__Vfuncout;
        vlSelf->__Vfunc_max__28__a = (0xffU & vlSelf->__Vfunc_max4__27__a);
        vlSelf->__Vfunc_max__28__Vfuncout = (((IData)(vlSelf->__Vfunc_max__28__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__28__b))
                                              ? (IData)(vlSelf->__Vfunc_max__28__a)
                                              : (IData)(vlSelf->__Vfunc_max__28__b));
        vlSelf->__Vfunc_max4__27__Vfuncout = vlSelf->__Vfunc_max__28__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__27__Vfuncout;
        vlSelf->__Vfunc_max4__31__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__34__b = (vlSelf->__Vfunc_max4__31__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__34__a = (0xffU & (vlSelf->__Vfunc_max4__31__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__34__Vfuncout = (((IData)(vlSelf->__Vfunc_max__34__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__34__b))
                                              ? (IData)(vlSelf->__Vfunc_max__34__a)
                                              : (IData)(vlSelf->__Vfunc_max__34__b));
        vlSelf->__Vfunc_max__33__b = vlSelf->__Vfunc_max__34__Vfuncout;
        vlSelf->__Vfunc_max__33__a = (0xffU & (vlSelf->__Vfunc_max4__31__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__33__Vfuncout = (((IData)(vlSelf->__Vfunc_max__33__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__33__b))
                                              ? (IData)(vlSelf->__Vfunc_max__33__a)
                                              : (IData)(vlSelf->__Vfunc_max__33__b));
        vlSelf->__Vfunc_max__32__b = vlSelf->__Vfunc_max__33__Vfuncout;
        vlSelf->__Vfunc_max__32__a = (0xffU & vlSelf->__Vfunc_max4__31__a);
        vlSelf->__Vfunc_max__32__Vfuncout = (((IData)(vlSelf->__Vfunc_max__32__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__32__b))
                                              ? (IData)(vlSelf->__Vfunc_max__32__a)
                                              : (IData)(vlSelf->__Vfunc_max__32__b));
        vlSelf->__Vfunc_max4__31__Vfuncout = vlSelf->__Vfunc_max__32__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__31__Vfuncout;
        vlSelf->__Vfunc_max4__35__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__38__b = (vlSelf->__Vfunc_max4__35__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__38__a = (0xffU & (vlSelf->__Vfunc_max4__35__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__38__Vfuncout = (((IData)(vlSelf->__Vfunc_max__38__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__38__b))
                                              ? (IData)(vlSelf->__Vfunc_max__38__a)
                                              : (IData)(vlSelf->__Vfunc_max__38__b));
        vlSelf->__Vfunc_max__37__b = vlSelf->__Vfunc_max__38__Vfuncout;
        vlSelf->__Vfunc_max__37__a = (0xffU & (vlSelf->__Vfunc_max4__35__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__37__Vfuncout = (((IData)(vlSelf->__Vfunc_max__37__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__37__b))
                                              ? (IData)(vlSelf->__Vfunc_max__37__a)
                                              : (IData)(vlSelf->__Vfunc_max__37__b));
        vlSelf->__Vfunc_max__36__b = vlSelf->__Vfunc_max__37__Vfuncout;
        vlSelf->__Vfunc_max__36__a = (0xffU & vlSelf->__Vfunc_max4__35__a);
        vlSelf->__Vfunc_max__36__Vfuncout = (((IData)(vlSelf->__Vfunc_max__36__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__36__b))
                                              ? (IData)(vlSelf->__Vfunc_max__36__a)
                                              : (IData)(vlSelf->__Vfunc_max__36__b));
        vlSelf->__Vfunc_max4__35__Vfuncout = vlSelf->__Vfunc_max__36__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__35__Vfuncout;
        vlSelf->__Vfunc_max4__39__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__42__b = (vlSelf->__Vfunc_max4__39__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__42__a = (0xffU & (vlSelf->__Vfunc_max4__39__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__42__Vfuncout = (((IData)(vlSelf->__Vfunc_max__42__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__42__b))
                                              ? (IData)(vlSelf->__Vfunc_max__42__a)
                                              : (IData)(vlSelf->__Vfunc_max__42__b));
        vlSelf->__Vfunc_max__41__b = vlSelf->__Vfunc_max__42__Vfuncout;
        vlSelf->__Vfunc_max__41__a = (0xffU & (vlSelf->__Vfunc_max4__39__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__41__Vfuncout = (((IData)(vlSelf->__Vfunc_max__41__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__41__b))
                                              ? (IData)(vlSelf->__Vfunc_max__41__a)
                                              : (IData)(vlSelf->__Vfunc_max__41__b));
        vlSelf->__Vfunc_max__40__b = vlSelf->__Vfunc_max__41__Vfuncout;
        vlSelf->__Vfunc_max__40__a = (0xffU & vlSelf->__Vfunc_max4__39__a);
        vlSelf->__Vfunc_max__40__Vfuncout = (((IData)(vlSelf->__Vfunc_max__40__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__40__b))
                                              ? (IData)(vlSelf->__Vfunc_max__40__a)
                                              : (IData)(vlSelf->__Vfunc_max__40__b));
        vlSelf->__Vfunc_max4__39__Vfuncout = vlSelf->__Vfunc_max__40__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__39__Vfuncout;
        vlSelf->__Vfunc_max4__43__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__46__b = (vlSelf->__Vfunc_max4__43__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__46__a = (0xffU & (vlSelf->__Vfunc_max4__43__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__46__Vfuncout = (((IData)(vlSelf->__Vfunc_max__46__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__46__b))
                                              ? (IData)(vlSelf->__Vfunc_max__46__a)
                                              : (IData)(vlSelf->__Vfunc_max__46__b));
        vlSelf->__Vfunc_max__45__b = vlSelf->__Vfunc_max__46__Vfuncout;
        vlSelf->__Vfunc_max__45__a = (0xffU & (vlSelf->__Vfunc_max4__43__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__45__Vfuncout = (((IData)(vlSelf->__Vfunc_max__45__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__45__b))
                                              ? (IData)(vlSelf->__Vfunc_max__45__a)
                                              : (IData)(vlSelf->__Vfunc_max__45__b));
        vlSelf->__Vfunc_max__44__b = vlSelf->__Vfunc_max__45__Vfuncout;
        vlSelf->__Vfunc_max__44__a = (0xffU & vlSelf->__Vfunc_max4__43__a);
        vlSelf->__Vfunc_max__44__Vfuncout = (((IData)(vlSelf->__Vfunc_max__44__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__44__b))
                                              ? (IData)(vlSelf->__Vfunc_max__44__a)
                                              : (IData)(vlSelf->__Vfunc_max__44__b));
        vlSelf->__Vfunc_max4__43__Vfuncout = vlSelf->__Vfunc_max__44__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__43__Vfuncout;
        vlSelf->__Vfunc_max4__47__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__50__b = (vlSelf->__Vfunc_max4__47__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__50__a = (0xffU & (vlSelf->__Vfunc_max4__47__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__50__Vfuncout = (((IData)(vlSelf->__Vfunc_max__50__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__50__b))
                                              ? (IData)(vlSelf->__Vfunc_max__50__a)
                                              : (IData)(vlSelf->__Vfunc_max__50__b));
        vlSelf->__Vfunc_max__49__b = vlSelf->__Vfunc_max__50__Vfuncout;
        vlSelf->__Vfunc_max__49__a = (0xffU & (vlSelf->__Vfunc_max4__47__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__49__Vfuncout = (((IData)(vlSelf->__Vfunc_max__49__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__49__b))
                                              ? (IData)(vlSelf->__Vfunc_max__49__a)
                                              : (IData)(vlSelf->__Vfunc_max__49__b));
        vlSelf->__Vfunc_max__48__b = vlSelf->__Vfunc_max__49__Vfuncout;
        vlSelf->__Vfunc_max__48__a = (0xffU & vlSelf->__Vfunc_max4__47__a);
        vlSelf->__Vfunc_max__48__Vfuncout = (((IData)(vlSelf->__Vfunc_max__48__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__48__b))
                                              ? (IData)(vlSelf->__Vfunc_max__48__a)
                                              : (IData)(vlSelf->__Vfunc_max__48__b));
        vlSelf->__Vfunc_max4__47__Vfuncout = vlSelf->__Vfunc_max__48__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__47__Vfuncout;
        vlSelf->__Vfunc_max4__51__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__54__b = (vlSelf->__Vfunc_max4__51__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__54__a = (0xffU & (vlSelf->__Vfunc_max4__51__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__54__Vfuncout = (((IData)(vlSelf->__Vfunc_max__54__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__54__b))
                                              ? (IData)(vlSelf->__Vfunc_max__54__a)
                                              : (IData)(vlSelf->__Vfunc_max__54__b));
        vlSelf->__Vfunc_max__53__b = vlSelf->__Vfunc_max__54__Vfuncout;
        vlSelf->__Vfunc_max__53__a = (0xffU & (vlSelf->__Vfunc_max4__51__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__53__Vfuncout = (((IData)(vlSelf->__Vfunc_max__53__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__53__b))
                                              ? (IData)(vlSelf->__Vfunc_max__53__a)
                                              : (IData)(vlSelf->__Vfunc_max__53__b));
        vlSelf->__Vfunc_max__52__b = vlSelf->__Vfunc_max__53__Vfuncout;
        vlSelf->__Vfunc_max__52__a = (0xffU & vlSelf->__Vfunc_max4__51__a);
        vlSelf->__Vfunc_max__52__Vfuncout = (((IData)(vlSelf->__Vfunc_max__52__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__52__b))
                                              ? (IData)(vlSelf->__Vfunc_max__52__a)
                                              : (IData)(vlSelf->__Vfunc_max__52__b));
        vlSelf->__Vfunc_max4__51__Vfuncout = vlSelf->__Vfunc_max__52__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__51__Vfuncout;
        vlSelf->__Vfunc_max4__55__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__58__b = (vlSelf->__Vfunc_max4__55__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__58__a = (0xffU & (vlSelf->__Vfunc_max4__55__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__58__Vfuncout = (((IData)(vlSelf->__Vfunc_max__58__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__58__b))
                                              ? (IData)(vlSelf->__Vfunc_max__58__a)
                                              : (IData)(vlSelf->__Vfunc_max__58__b));
        vlSelf->__Vfunc_max__57__b = vlSelf->__Vfunc_max__58__Vfuncout;
        vlSelf->__Vfunc_max__57__a = (0xffU & (vlSelf->__Vfunc_max4__55__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__57__Vfuncout = (((IData)(vlSelf->__Vfunc_max__57__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__57__b))
                                              ? (IData)(vlSelf->__Vfunc_max__57__a)
                                              : (IData)(vlSelf->__Vfunc_max__57__b));
        vlSelf->__Vfunc_max__56__b = vlSelf->__Vfunc_max__57__Vfuncout;
        vlSelf->__Vfunc_max__56__a = (0xffU & vlSelf->__Vfunc_max4__55__a);
        vlSelf->__Vfunc_max__56__Vfuncout = (((IData)(vlSelf->__Vfunc_max__56__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__56__b))
                                              ? (IData)(vlSelf->__Vfunc_max__56__a)
                                              : (IData)(vlSelf->__Vfunc_max__56__b));
        vlSelf->__Vfunc_max4__55__Vfuncout = vlSelf->__Vfunc_max__56__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__55__Vfuncout;
        vlSelf->__Vfunc_max4__59__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__62__b = (vlSelf->__Vfunc_max4__59__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__62__a = (0xffU & (vlSelf->__Vfunc_max4__59__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__62__Vfuncout = (((IData)(vlSelf->__Vfunc_max__62__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__62__b))
                                              ? (IData)(vlSelf->__Vfunc_max__62__a)
                                              : (IData)(vlSelf->__Vfunc_max__62__b));
        vlSelf->__Vfunc_max__61__b = vlSelf->__Vfunc_max__62__Vfuncout;
        vlSelf->__Vfunc_max__61__a = (0xffU & (vlSelf->__Vfunc_max4__59__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__61__Vfuncout = (((IData)(vlSelf->__Vfunc_max__61__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__61__b))
                                              ? (IData)(vlSelf->__Vfunc_max__61__a)
                                              : (IData)(vlSelf->__Vfunc_max__61__b));
        vlSelf->__Vfunc_max__60__b = vlSelf->__Vfunc_max__61__Vfuncout;
        vlSelf->__Vfunc_max__60__a = (0xffU & vlSelf->__Vfunc_max4__59__a);
        vlSelf->__Vfunc_max__60__Vfuncout = (((IData)(vlSelf->__Vfunc_max__60__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__60__b))
                                              ? (IData)(vlSelf->__Vfunc_max__60__a)
                                              : (IData)(vlSelf->__Vfunc_max__60__b));
        vlSelf->__Vfunc_max4__59__Vfuncout = vlSelf->__Vfunc_max__60__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__59__Vfuncout;
        vlSelf->__Vfunc_max4__63__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__66__b = (vlSelf->__Vfunc_max4__63__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__66__a = (0xffU & (vlSelf->__Vfunc_max4__63__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__66__Vfuncout = (((IData)(vlSelf->__Vfunc_max__66__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__66__b))
                                              ? (IData)(vlSelf->__Vfunc_max__66__a)
                                              : (IData)(vlSelf->__Vfunc_max__66__b));
        vlSelf->__Vfunc_max__65__b = vlSelf->__Vfunc_max__66__Vfuncout;
        vlSelf->__Vfunc_max__65__a = (0xffU & (vlSelf->__Vfunc_max4__63__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__65__Vfuncout = (((IData)(vlSelf->__Vfunc_max__65__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__65__b))
                                              ? (IData)(vlSelf->__Vfunc_max__65__a)
                                              : (IData)(vlSelf->__Vfunc_max__65__b));
        vlSelf->__Vfunc_max__64__b = vlSelf->__Vfunc_max__65__Vfuncout;
        vlSelf->__Vfunc_max__64__a = (0xffU & vlSelf->__Vfunc_max4__63__a);
        vlSelf->__Vfunc_max__64__Vfuncout = (((IData)(vlSelf->__Vfunc_max__64__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__64__b))
                                              ? (IData)(vlSelf->__Vfunc_max__64__a)
                                              : (IData)(vlSelf->__Vfunc_max__64__b));
        vlSelf->__Vfunc_max4__63__Vfuncout = vlSelf->__Vfunc_max__64__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__63__Vfuncout;
        vlSelf->__Vfunc_max4__67__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__70__b = (vlSelf->__Vfunc_max4__67__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__70__a = (0xffU & (vlSelf->__Vfunc_max4__67__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__70__Vfuncout = (((IData)(vlSelf->__Vfunc_max__70__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__70__b))
                                              ? (IData)(vlSelf->__Vfunc_max__70__a)
                                              : (IData)(vlSelf->__Vfunc_max__70__b));
        vlSelf->__Vfunc_max__69__b = vlSelf->__Vfunc_max__70__Vfuncout;
        vlSelf->__Vfunc_max__69__a = (0xffU & (vlSelf->__Vfunc_max4__67__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__69__Vfuncout = (((IData)(vlSelf->__Vfunc_max__69__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__69__b))
                                              ? (IData)(vlSelf->__Vfunc_max__69__a)
                                              : (IData)(vlSelf->__Vfunc_max__69__b));
        vlSelf->__Vfunc_max__68__b = vlSelf->__Vfunc_max__69__Vfuncout;
        vlSelf->__Vfunc_max__68__a = (0xffU & vlSelf->__Vfunc_max4__67__a);
        vlSelf->__Vfunc_max__68__Vfuncout = (((IData)(vlSelf->__Vfunc_max__68__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__68__b))
                                              ? (IData)(vlSelf->__Vfunc_max__68__a)
                                              : (IData)(vlSelf->__Vfunc_max__68__b));
        vlSelf->__Vfunc_max4__67__Vfuncout = vlSelf->__Vfunc_max__68__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__67__Vfuncout;
        vlSelf->__Vfunc_max4__71__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__74__b = (vlSelf->__Vfunc_max4__71__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__74__a = (0xffU & (vlSelf->__Vfunc_max4__71__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__74__Vfuncout = (((IData)(vlSelf->__Vfunc_max__74__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__74__b))
                                              ? (IData)(vlSelf->__Vfunc_max__74__a)
                                              : (IData)(vlSelf->__Vfunc_max__74__b));
        vlSelf->__Vfunc_max__73__b = vlSelf->__Vfunc_max__74__Vfuncout;
        vlSelf->__Vfunc_max__73__a = (0xffU & (vlSelf->__Vfunc_max4__71__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__73__Vfuncout = (((IData)(vlSelf->__Vfunc_max__73__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__73__b))
                                              ? (IData)(vlSelf->__Vfunc_max__73__a)
                                              : (IData)(vlSelf->__Vfunc_max__73__b));
        vlSelf->__Vfunc_max__72__b = vlSelf->__Vfunc_max__73__Vfuncout;
        vlSelf->__Vfunc_max__72__a = (0xffU & vlSelf->__Vfunc_max4__71__a);
        vlSelf->__Vfunc_max__72__Vfuncout = (((IData)(vlSelf->__Vfunc_max__72__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__72__b))
                                              ? (IData)(vlSelf->__Vfunc_max__72__a)
                                              : (IData)(vlSelf->__Vfunc_max__72__b));
        vlSelf->__Vfunc_max4__71__Vfuncout = vlSelf->__Vfunc_max__72__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__71__Vfuncout;
        vlSelf->__Vfunc_max4__75__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__78__b = (vlSelf->__Vfunc_max4__75__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__78__a = (0xffU & (vlSelf->__Vfunc_max4__75__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__78__Vfuncout = (((IData)(vlSelf->__Vfunc_max__78__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__78__b))
                                              ? (IData)(vlSelf->__Vfunc_max__78__a)
                                              : (IData)(vlSelf->__Vfunc_max__78__b));
        vlSelf->__Vfunc_max__77__b = vlSelf->__Vfunc_max__78__Vfuncout;
        vlSelf->__Vfunc_max__77__a = (0xffU & (vlSelf->__Vfunc_max4__75__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__77__Vfuncout = (((IData)(vlSelf->__Vfunc_max__77__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__77__b))
                                              ? (IData)(vlSelf->__Vfunc_max__77__a)
                                              : (IData)(vlSelf->__Vfunc_max__77__b));
        vlSelf->__Vfunc_max__76__b = vlSelf->__Vfunc_max__77__Vfuncout;
        vlSelf->__Vfunc_max__76__a = (0xffU & vlSelf->__Vfunc_max4__75__a);
        vlSelf->__Vfunc_max__76__Vfuncout = (((IData)(vlSelf->__Vfunc_max__76__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__76__b))
                                              ? (IData)(vlSelf->__Vfunc_max__76__a)
                                              : (IData)(vlSelf->__Vfunc_max__76__b));
        vlSelf->__Vfunc_max4__75__Vfuncout = vlSelf->__Vfunc_max__76__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__75__Vfuncout;
        vlSelf->__Vfunc_max4__79__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__82__b = (vlSelf->__Vfunc_max4__79__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__82__a = (0xffU & (vlSelf->__Vfunc_max4__79__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__82__Vfuncout = (((IData)(vlSelf->__Vfunc_max__82__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__82__b))
                                              ? (IData)(vlSelf->__Vfunc_max__82__a)
                                              : (IData)(vlSelf->__Vfunc_max__82__b));
        vlSelf->__Vfunc_max__81__b = vlSelf->__Vfunc_max__82__Vfuncout;
        vlSelf->__Vfunc_max__81__a = (0xffU & (vlSelf->__Vfunc_max4__79__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__81__Vfuncout = (((IData)(vlSelf->__Vfunc_max__81__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__81__b))
                                              ? (IData)(vlSelf->__Vfunc_max__81__a)
                                              : (IData)(vlSelf->__Vfunc_max__81__b));
        vlSelf->__Vfunc_max__80__b = vlSelf->__Vfunc_max__81__Vfuncout;
        vlSelf->__Vfunc_max__80__a = (0xffU & vlSelf->__Vfunc_max4__79__a);
        vlSelf->__Vfunc_max__80__Vfuncout = (((IData)(vlSelf->__Vfunc_max__80__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__80__b))
                                              ? (IData)(vlSelf->__Vfunc_max__80__a)
                                              : (IData)(vlSelf->__Vfunc_max__80__b));
        vlSelf->__Vfunc_max4__79__Vfuncout = vlSelf->__Vfunc_max__80__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__79__Vfuncout;
        vlSelf->__Vfunc_max4__83__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__86__b = (vlSelf->__Vfunc_max4__83__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__86__a = (0xffU & (vlSelf->__Vfunc_max4__83__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__86__Vfuncout = (((IData)(vlSelf->__Vfunc_max__86__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__86__b))
                                              ? (IData)(vlSelf->__Vfunc_max__86__a)
                                              : (IData)(vlSelf->__Vfunc_max__86__b));
        vlSelf->__Vfunc_max__85__b = vlSelf->__Vfunc_max__86__Vfuncout;
        vlSelf->__Vfunc_max__85__a = (0xffU & (vlSelf->__Vfunc_max4__83__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__85__Vfuncout = (((IData)(vlSelf->__Vfunc_max__85__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__85__b))
                                              ? (IData)(vlSelf->__Vfunc_max__85__a)
                                              : (IData)(vlSelf->__Vfunc_max__85__b));
        vlSelf->__Vfunc_max__84__b = vlSelf->__Vfunc_max__85__Vfuncout;
        vlSelf->__Vfunc_max__84__a = (0xffU & vlSelf->__Vfunc_max4__83__a);
        vlSelf->__Vfunc_max__84__Vfuncout = (((IData)(vlSelf->__Vfunc_max__84__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__84__b))
                                              ? (IData)(vlSelf->__Vfunc_max__84__a)
                                              : (IData)(vlSelf->__Vfunc_max__84__b));
        vlSelf->__Vfunc_max4__83__Vfuncout = vlSelf->__Vfunc_max__84__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__83__Vfuncout;
        vlSelf->__Vfunc_max4__87__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__90__b = (vlSelf->__Vfunc_max4__87__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__90__a = (0xffU & (vlSelf->__Vfunc_max4__87__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__90__Vfuncout = (((IData)(vlSelf->__Vfunc_max__90__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__90__b))
                                              ? (IData)(vlSelf->__Vfunc_max__90__a)
                                              : (IData)(vlSelf->__Vfunc_max__90__b));
        vlSelf->__Vfunc_max__89__b = vlSelf->__Vfunc_max__90__Vfuncout;
        vlSelf->__Vfunc_max__89__a = (0xffU & (vlSelf->__Vfunc_max4__87__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__89__Vfuncout = (((IData)(vlSelf->__Vfunc_max__89__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__89__b))
                                              ? (IData)(vlSelf->__Vfunc_max__89__a)
                                              : (IData)(vlSelf->__Vfunc_max__89__b));
        vlSelf->__Vfunc_max__88__b = vlSelf->__Vfunc_max__89__Vfuncout;
        vlSelf->__Vfunc_max__88__a = (0xffU & vlSelf->__Vfunc_max4__87__a);
        vlSelf->__Vfunc_max__88__Vfuncout = (((IData)(vlSelf->__Vfunc_max__88__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__88__b))
                                              ? (IData)(vlSelf->__Vfunc_max__88__a)
                                              : (IData)(vlSelf->__Vfunc_max__88__b));
        vlSelf->__Vfunc_max4__87__Vfuncout = vlSelf->__Vfunc_max__88__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__87__Vfuncout;
        vlSelf->__Vfunc_max4__91__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__94__b = (vlSelf->__Vfunc_max4__91__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__94__a = (0xffU & (vlSelf->__Vfunc_max4__91__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__94__Vfuncout = (((IData)(vlSelf->__Vfunc_max__94__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__94__b))
                                              ? (IData)(vlSelf->__Vfunc_max__94__a)
                                              : (IData)(vlSelf->__Vfunc_max__94__b));
        vlSelf->__Vfunc_max__93__b = vlSelf->__Vfunc_max__94__Vfuncout;
        vlSelf->__Vfunc_max__93__a = (0xffU & (vlSelf->__Vfunc_max4__91__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__93__Vfuncout = (((IData)(vlSelf->__Vfunc_max__93__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__93__b))
                                              ? (IData)(vlSelf->__Vfunc_max__93__a)
                                              : (IData)(vlSelf->__Vfunc_max__93__b));
        vlSelf->__Vfunc_max__92__b = vlSelf->__Vfunc_max__93__Vfuncout;
        vlSelf->__Vfunc_max__92__a = (0xffU & vlSelf->__Vfunc_max4__91__a);
        vlSelf->__Vfunc_max__92__Vfuncout = (((IData)(vlSelf->__Vfunc_max__92__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__92__b))
                                              ? (IData)(vlSelf->__Vfunc_max__92__a)
                                              : (IData)(vlSelf->__Vfunc_max__92__b));
        vlSelf->__Vfunc_max4__91__Vfuncout = vlSelf->__Vfunc_max__92__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__91__Vfuncout;
        vlSelf->__Vfunc_max4__95__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__98__b = (vlSelf->__Vfunc_max4__95__a 
                                      >> 0x18U);
        vlSelf->__Vfunc_max__98__a = (0xffU & (vlSelf->__Vfunc_max4__95__a 
                                               >> 0x10U));
        vlSelf->__Vfunc_max__98__Vfuncout = (((IData)(vlSelf->__Vfunc_max__98__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__98__b))
                                              ? (IData)(vlSelf->__Vfunc_max__98__a)
                                              : (IData)(vlSelf->__Vfunc_max__98__b));
        vlSelf->__Vfunc_max__97__b = vlSelf->__Vfunc_max__98__Vfuncout;
        vlSelf->__Vfunc_max__97__a = (0xffU & (vlSelf->__Vfunc_max4__95__a 
                                               >> 8U));
        vlSelf->__Vfunc_max__97__Vfuncout = (((IData)(vlSelf->__Vfunc_max__97__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__97__b))
                                              ? (IData)(vlSelf->__Vfunc_max__97__a)
                                              : (IData)(vlSelf->__Vfunc_max__97__b));
        vlSelf->__Vfunc_max__96__b = vlSelf->__Vfunc_max__97__Vfuncout;
        vlSelf->__Vfunc_max__96__a = (0xffU & vlSelf->__Vfunc_max4__95__a);
        vlSelf->__Vfunc_max__96__Vfuncout = (((IData)(vlSelf->__Vfunc_max__96__a) 
                                              >= (IData)(vlSelf->__Vfunc_max__96__b))
                                              ? (IData)(vlSelf->__Vfunc_max__96__a)
                                              : (IData)(vlSelf->__Vfunc_max__96__b));
        vlSelf->__Vfunc_max4__95__Vfuncout = vlSelf->__Vfunc_max__96__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__95__Vfuncout;
        vlSelf->__Vfunc_max4__99__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__102__b = (vlSelf->__Vfunc_max4__99__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__102__a = (0xffU & (vlSelf->__Vfunc_max4__99__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__102__Vfuncout = (((IData)(vlSelf->__Vfunc_max__102__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__102__b))
                                               ? (IData)(vlSelf->__Vfunc_max__102__a)
                                               : (IData)(vlSelf->__Vfunc_max__102__b));
        vlSelf->__Vfunc_max__101__b = vlSelf->__Vfunc_max__102__Vfuncout;
        vlSelf->__Vfunc_max__101__a = (0xffU & (vlSelf->__Vfunc_max4__99__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__101__Vfuncout = (((IData)(vlSelf->__Vfunc_max__101__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__101__b))
                                               ? (IData)(vlSelf->__Vfunc_max__101__a)
                                               : (IData)(vlSelf->__Vfunc_max__101__b));
        vlSelf->__Vfunc_max__100__b = vlSelf->__Vfunc_max__101__Vfuncout;
        vlSelf->__Vfunc_max__100__a = (0xffU & vlSelf->__Vfunc_max4__99__a);
        vlSelf->__Vfunc_max__100__Vfuncout = (((IData)(vlSelf->__Vfunc_max__100__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__100__b))
                                               ? (IData)(vlSelf->__Vfunc_max__100__a)
                                               : (IData)(vlSelf->__Vfunc_max__100__b));
        vlSelf->__Vfunc_max4__99__Vfuncout = vlSelf->__Vfunc_max__100__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__99__Vfuncout;
        vlSelf->__Vfunc_max4__103__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__106__b = (vlSelf->__Vfunc_max4__103__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__106__a = (0xffU & (vlSelf->__Vfunc_max4__103__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__106__Vfuncout = (((IData)(vlSelf->__Vfunc_max__106__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__106__b))
                                               ? (IData)(vlSelf->__Vfunc_max__106__a)
                                               : (IData)(vlSelf->__Vfunc_max__106__b));
        vlSelf->__Vfunc_max__105__b = vlSelf->__Vfunc_max__106__Vfuncout;
        vlSelf->__Vfunc_max__105__a = (0xffU & (vlSelf->__Vfunc_max4__103__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__105__Vfuncout = (((IData)(vlSelf->__Vfunc_max__105__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__105__b))
                                               ? (IData)(vlSelf->__Vfunc_max__105__a)
                                               : (IData)(vlSelf->__Vfunc_max__105__b));
        vlSelf->__Vfunc_max__104__b = vlSelf->__Vfunc_max__105__Vfuncout;
        vlSelf->__Vfunc_max__104__a = (0xffU & vlSelf->__Vfunc_max4__103__a);
        vlSelf->__Vfunc_max__104__Vfuncout = (((IData)(vlSelf->__Vfunc_max__104__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__104__b))
                                               ? (IData)(vlSelf->__Vfunc_max__104__a)
                                               : (IData)(vlSelf->__Vfunc_max__104__b));
        vlSelf->__Vfunc_max4__103__Vfuncout = vlSelf->__Vfunc_max__104__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__103__Vfuncout;
        vlSelf->__Vfunc_max4__107__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__110__b = (vlSelf->__Vfunc_max4__107__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__110__a = (0xffU & (vlSelf->__Vfunc_max4__107__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__110__Vfuncout = (((IData)(vlSelf->__Vfunc_max__110__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__110__b))
                                               ? (IData)(vlSelf->__Vfunc_max__110__a)
                                               : (IData)(vlSelf->__Vfunc_max__110__b));
        vlSelf->__Vfunc_max__109__b = vlSelf->__Vfunc_max__110__Vfuncout;
        vlSelf->__Vfunc_max__109__a = (0xffU & (vlSelf->__Vfunc_max4__107__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__109__Vfuncout = (((IData)(vlSelf->__Vfunc_max__109__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__109__b))
                                               ? (IData)(vlSelf->__Vfunc_max__109__a)
                                               : (IData)(vlSelf->__Vfunc_max__109__b));
        vlSelf->__Vfunc_max__108__b = vlSelf->__Vfunc_max__109__Vfuncout;
        vlSelf->__Vfunc_max__108__a = (0xffU & vlSelf->__Vfunc_max4__107__a);
        vlSelf->__Vfunc_max__108__Vfuncout = (((IData)(vlSelf->__Vfunc_max__108__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__108__b))
                                               ? (IData)(vlSelf->__Vfunc_max__108__a)
                                               : (IData)(vlSelf->__Vfunc_max__108__b));
        vlSelf->__Vfunc_max4__107__Vfuncout = vlSelf->__Vfunc_max__108__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__107__Vfuncout;
        vlSelf->__Vfunc_max4__111__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__114__b = (vlSelf->__Vfunc_max4__111__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__114__a = (0xffU & (vlSelf->__Vfunc_max4__111__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__114__Vfuncout = (((IData)(vlSelf->__Vfunc_max__114__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__114__b))
                                               ? (IData)(vlSelf->__Vfunc_max__114__a)
                                               : (IData)(vlSelf->__Vfunc_max__114__b));
        vlSelf->__Vfunc_max__113__b = vlSelf->__Vfunc_max__114__Vfuncout;
        vlSelf->__Vfunc_max__113__a = (0xffU & (vlSelf->__Vfunc_max4__111__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__113__Vfuncout = (((IData)(vlSelf->__Vfunc_max__113__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__113__b))
                                               ? (IData)(vlSelf->__Vfunc_max__113__a)
                                               : (IData)(vlSelf->__Vfunc_max__113__b));
        vlSelf->__Vfunc_max__112__b = vlSelf->__Vfunc_max__113__Vfuncout;
        vlSelf->__Vfunc_max__112__a = (0xffU & vlSelf->__Vfunc_max4__111__a);
        vlSelf->__Vfunc_max__112__Vfuncout = (((IData)(vlSelf->__Vfunc_max__112__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__112__b))
                                               ? (IData)(vlSelf->__Vfunc_max__112__a)
                                               : (IData)(vlSelf->__Vfunc_max__112__b));
        vlSelf->__Vfunc_max4__111__Vfuncout = vlSelf->__Vfunc_max__112__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__111__Vfuncout;
        vlSelf->__Vfunc_max4__115__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__118__b = (vlSelf->__Vfunc_max4__115__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__118__a = (0xffU & (vlSelf->__Vfunc_max4__115__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__118__Vfuncout = (((IData)(vlSelf->__Vfunc_max__118__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__118__b))
                                               ? (IData)(vlSelf->__Vfunc_max__118__a)
                                               : (IData)(vlSelf->__Vfunc_max__118__b));
        vlSelf->__Vfunc_max__117__b = vlSelf->__Vfunc_max__118__Vfuncout;
        vlSelf->__Vfunc_max__117__a = (0xffU & (vlSelf->__Vfunc_max4__115__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__117__Vfuncout = (((IData)(vlSelf->__Vfunc_max__117__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__117__b))
                                               ? (IData)(vlSelf->__Vfunc_max__117__a)
                                               : (IData)(vlSelf->__Vfunc_max__117__b));
        vlSelf->__Vfunc_max__116__b = vlSelf->__Vfunc_max__117__Vfuncout;
        vlSelf->__Vfunc_max__116__a = (0xffU & vlSelf->__Vfunc_max4__115__a);
        vlSelf->__Vfunc_max__116__Vfuncout = (((IData)(vlSelf->__Vfunc_max__116__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__116__b))
                                               ? (IData)(vlSelf->__Vfunc_max__116__a)
                                               : (IData)(vlSelf->__Vfunc_max__116__b));
        vlSelf->__Vfunc_max4__115__Vfuncout = vlSelf->__Vfunc_max__116__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__115__Vfuncout;
        vlSelf->__Vfunc_max4__119__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__122__b = (vlSelf->__Vfunc_max4__119__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__122__a = (0xffU & (vlSelf->__Vfunc_max4__119__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__122__Vfuncout = (((IData)(vlSelf->__Vfunc_max__122__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__122__b))
                                               ? (IData)(vlSelf->__Vfunc_max__122__a)
                                               : (IData)(vlSelf->__Vfunc_max__122__b));
        vlSelf->__Vfunc_max__121__b = vlSelf->__Vfunc_max__122__Vfuncout;
        vlSelf->__Vfunc_max__121__a = (0xffU & (vlSelf->__Vfunc_max4__119__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__121__Vfuncout = (((IData)(vlSelf->__Vfunc_max__121__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__121__b))
                                               ? (IData)(vlSelf->__Vfunc_max__121__a)
                                               : (IData)(vlSelf->__Vfunc_max__121__b));
        vlSelf->__Vfunc_max__120__b = vlSelf->__Vfunc_max__121__Vfuncout;
        vlSelf->__Vfunc_max__120__a = (0xffU & vlSelf->__Vfunc_max4__119__a);
        vlSelf->__Vfunc_max__120__Vfuncout = (((IData)(vlSelf->__Vfunc_max__120__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__120__b))
                                               ? (IData)(vlSelf->__Vfunc_max__120__a)
                                               : (IData)(vlSelf->__Vfunc_max__120__b));
        vlSelf->__Vfunc_max4__119__Vfuncout = vlSelf->__Vfunc_max__120__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__119__Vfuncout;
        vlSelf->__Vfunc_max4__123__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__126__b = (vlSelf->__Vfunc_max4__123__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__126__a = (0xffU & (vlSelf->__Vfunc_max4__123__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__126__Vfuncout = (((IData)(vlSelf->__Vfunc_max__126__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__126__b))
                                               ? (IData)(vlSelf->__Vfunc_max__126__a)
                                               : (IData)(vlSelf->__Vfunc_max__126__b));
        vlSelf->__Vfunc_max__125__b = vlSelf->__Vfunc_max__126__Vfuncout;
        vlSelf->__Vfunc_max__125__a = (0xffU & (vlSelf->__Vfunc_max4__123__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__125__Vfuncout = (((IData)(vlSelf->__Vfunc_max__125__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__125__b))
                                               ? (IData)(vlSelf->__Vfunc_max__125__a)
                                               : (IData)(vlSelf->__Vfunc_max__125__b));
        vlSelf->__Vfunc_max__124__b = vlSelf->__Vfunc_max__125__Vfuncout;
        vlSelf->__Vfunc_max__124__a = (0xffU & vlSelf->__Vfunc_max4__123__a);
        vlSelf->__Vfunc_max__124__Vfuncout = (((IData)(vlSelf->__Vfunc_max__124__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__124__b))
                                               ? (IData)(vlSelf->__Vfunc_max__124__a)
                                               : (IData)(vlSelf->__Vfunc_max__124__b));
        vlSelf->__Vfunc_max4__123__Vfuncout = vlSelf->__Vfunc_max__124__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__123__Vfuncout;
        vlSelf->__Vfunc_max4__127__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__130__b = (vlSelf->__Vfunc_max4__127__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__130__a = (0xffU & (vlSelf->__Vfunc_max4__127__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__130__Vfuncout = (((IData)(vlSelf->__Vfunc_max__130__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__130__b))
                                               ? (IData)(vlSelf->__Vfunc_max__130__a)
                                               : (IData)(vlSelf->__Vfunc_max__130__b));
        vlSelf->__Vfunc_max__129__b = vlSelf->__Vfunc_max__130__Vfuncout;
        vlSelf->__Vfunc_max__129__a = (0xffU & (vlSelf->__Vfunc_max4__127__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__129__Vfuncout = (((IData)(vlSelf->__Vfunc_max__129__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__129__b))
                                               ? (IData)(vlSelf->__Vfunc_max__129__a)
                                               : (IData)(vlSelf->__Vfunc_max__129__b));
        vlSelf->__Vfunc_max__128__b = vlSelf->__Vfunc_max__129__Vfuncout;
        vlSelf->__Vfunc_max__128__a = (0xffU & vlSelf->__Vfunc_max4__127__a);
        vlSelf->__Vfunc_max__128__Vfuncout = (((IData)(vlSelf->__Vfunc_max__128__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__128__b))
                                               ? (IData)(vlSelf->__Vfunc_max__128__a)
                                               : (IData)(vlSelf->__Vfunc_max__128__b));
        vlSelf->__Vfunc_max4__127__Vfuncout = vlSelf->__Vfunc_max__128__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__127__Vfuncout;
        vlSelf->__Vfunc_max4__131__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__134__b = (vlSelf->__Vfunc_max4__131__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__134__a = (0xffU & (vlSelf->__Vfunc_max4__131__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__134__Vfuncout = (((IData)(vlSelf->__Vfunc_max__134__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__134__b))
                                               ? (IData)(vlSelf->__Vfunc_max__134__a)
                                               : (IData)(vlSelf->__Vfunc_max__134__b));
        vlSelf->__Vfunc_max__133__b = vlSelf->__Vfunc_max__134__Vfuncout;
        vlSelf->__Vfunc_max__133__a = (0xffU & (vlSelf->__Vfunc_max4__131__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__133__Vfuncout = (((IData)(vlSelf->__Vfunc_max__133__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__133__b))
                                               ? (IData)(vlSelf->__Vfunc_max__133__a)
                                               : (IData)(vlSelf->__Vfunc_max__133__b));
        vlSelf->__Vfunc_max__132__b = vlSelf->__Vfunc_max__133__Vfuncout;
        vlSelf->__Vfunc_max__132__a = (0xffU & vlSelf->__Vfunc_max4__131__a);
        vlSelf->__Vfunc_max__132__Vfuncout = (((IData)(vlSelf->__Vfunc_max__132__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__132__b))
                                               ? (IData)(vlSelf->__Vfunc_max__132__a)
                                               : (IData)(vlSelf->__Vfunc_max__132__b));
        vlSelf->__Vfunc_max4__131__Vfuncout = vlSelf->__Vfunc_max__132__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__131__Vfuncout;
        vlSelf->__Vfunc_max4__135__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__138__b = (vlSelf->__Vfunc_max4__135__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__138__a = (0xffU & (vlSelf->__Vfunc_max4__135__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__138__Vfuncout = (((IData)(vlSelf->__Vfunc_max__138__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__138__b))
                                               ? (IData)(vlSelf->__Vfunc_max__138__a)
                                               : (IData)(vlSelf->__Vfunc_max__138__b));
        vlSelf->__Vfunc_max__137__b = vlSelf->__Vfunc_max__138__Vfuncout;
        vlSelf->__Vfunc_max__137__a = (0xffU & (vlSelf->__Vfunc_max4__135__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__137__Vfuncout = (((IData)(vlSelf->__Vfunc_max__137__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__137__b))
                                               ? (IData)(vlSelf->__Vfunc_max__137__a)
                                               : (IData)(vlSelf->__Vfunc_max__137__b));
        vlSelf->__Vfunc_max__136__b = vlSelf->__Vfunc_max__137__Vfuncout;
        vlSelf->__Vfunc_max__136__a = (0xffU & vlSelf->__Vfunc_max4__135__a);
        vlSelf->__Vfunc_max__136__Vfuncout = (((IData)(vlSelf->__Vfunc_max__136__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__136__b))
                                               ? (IData)(vlSelf->__Vfunc_max__136__a)
                                               : (IData)(vlSelf->__Vfunc_max__136__b));
        vlSelf->__Vfunc_max4__135__Vfuncout = vlSelf->__Vfunc_max__136__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__135__Vfuncout;
        vlSelf->__Vfunc_max4__139__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__142__b = (vlSelf->__Vfunc_max4__139__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__142__a = (0xffU & (vlSelf->__Vfunc_max4__139__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__142__Vfuncout = (((IData)(vlSelf->__Vfunc_max__142__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__142__b))
                                               ? (IData)(vlSelf->__Vfunc_max__142__a)
                                               : (IData)(vlSelf->__Vfunc_max__142__b));
        vlSelf->__Vfunc_max__141__b = vlSelf->__Vfunc_max__142__Vfuncout;
        vlSelf->__Vfunc_max__141__a = (0xffU & (vlSelf->__Vfunc_max4__139__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__141__Vfuncout = (((IData)(vlSelf->__Vfunc_max__141__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__141__b))
                                               ? (IData)(vlSelf->__Vfunc_max__141__a)
                                               : (IData)(vlSelf->__Vfunc_max__141__b));
        vlSelf->__Vfunc_max__140__b = vlSelf->__Vfunc_max__141__Vfuncout;
        vlSelf->__Vfunc_max__140__a = (0xffU & vlSelf->__Vfunc_max4__139__a);
        vlSelf->__Vfunc_max__140__Vfuncout = (((IData)(vlSelf->__Vfunc_max__140__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__140__b))
                                               ? (IData)(vlSelf->__Vfunc_max__140__a)
                                               : (IData)(vlSelf->__Vfunc_max__140__b));
        vlSelf->__Vfunc_max4__139__Vfuncout = vlSelf->__Vfunc_max__140__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__139__Vfuncout;
        vlSelf->__Vfunc_max4__143__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__146__b = (vlSelf->__Vfunc_max4__143__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__146__a = (0xffU & (vlSelf->__Vfunc_max4__143__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__146__Vfuncout = (((IData)(vlSelf->__Vfunc_max__146__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__146__b))
                                               ? (IData)(vlSelf->__Vfunc_max__146__a)
                                               : (IData)(vlSelf->__Vfunc_max__146__b));
        vlSelf->__Vfunc_max__145__b = vlSelf->__Vfunc_max__146__Vfuncout;
        vlSelf->__Vfunc_max__145__a = (0xffU & (vlSelf->__Vfunc_max4__143__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__145__Vfuncout = (((IData)(vlSelf->__Vfunc_max__145__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__145__b))
                                               ? (IData)(vlSelf->__Vfunc_max__145__a)
                                               : (IData)(vlSelf->__Vfunc_max__145__b));
        vlSelf->__Vfunc_max__144__b = vlSelf->__Vfunc_max__145__Vfuncout;
        vlSelf->__Vfunc_max__144__a = (0xffU & vlSelf->__Vfunc_max4__143__a);
        vlSelf->__Vfunc_max__144__Vfuncout = (((IData)(vlSelf->__Vfunc_max__144__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__144__b))
                                               ? (IData)(vlSelf->__Vfunc_max__144__a)
                                               : (IData)(vlSelf->__Vfunc_max__144__b));
        vlSelf->__Vfunc_max4__143__Vfuncout = vlSelf->__Vfunc_max__144__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__143__Vfuncout;
        vlSelf->__Vfunc_max4__147__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__150__b = (vlSelf->__Vfunc_max4__147__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__150__a = (0xffU & (vlSelf->__Vfunc_max4__147__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__150__Vfuncout = (((IData)(vlSelf->__Vfunc_max__150__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__150__b))
                                               ? (IData)(vlSelf->__Vfunc_max__150__a)
                                               : (IData)(vlSelf->__Vfunc_max__150__b));
        vlSelf->__Vfunc_max__149__b = vlSelf->__Vfunc_max__150__Vfuncout;
        vlSelf->__Vfunc_max__149__a = (0xffU & (vlSelf->__Vfunc_max4__147__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__149__Vfuncout = (((IData)(vlSelf->__Vfunc_max__149__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__149__b))
                                               ? (IData)(vlSelf->__Vfunc_max__149__a)
                                               : (IData)(vlSelf->__Vfunc_max__149__b));
        vlSelf->__Vfunc_max__148__b = vlSelf->__Vfunc_max__149__Vfuncout;
        vlSelf->__Vfunc_max__148__a = (0xffU & vlSelf->__Vfunc_max4__147__a);
        vlSelf->__Vfunc_max__148__Vfuncout = (((IData)(vlSelf->__Vfunc_max__148__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__148__b))
                                               ? (IData)(vlSelf->__Vfunc_max__148__a)
                                               : (IData)(vlSelf->__Vfunc_max__148__b));
        vlSelf->__Vfunc_max4__147__Vfuncout = vlSelf->__Vfunc_max__148__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__147__Vfuncout;
        vlSelf->__Vfunc_max4__151__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__154__b = (vlSelf->__Vfunc_max4__151__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__154__a = (0xffU & (vlSelf->__Vfunc_max4__151__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__154__Vfuncout = (((IData)(vlSelf->__Vfunc_max__154__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__154__b))
                                               ? (IData)(vlSelf->__Vfunc_max__154__a)
                                               : (IData)(vlSelf->__Vfunc_max__154__b));
        vlSelf->__Vfunc_max__153__b = vlSelf->__Vfunc_max__154__Vfuncout;
        vlSelf->__Vfunc_max__153__a = (0xffU & (vlSelf->__Vfunc_max4__151__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__153__Vfuncout = (((IData)(vlSelf->__Vfunc_max__153__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__153__b))
                                               ? (IData)(vlSelf->__Vfunc_max__153__a)
                                               : (IData)(vlSelf->__Vfunc_max__153__b));
        vlSelf->__Vfunc_max__152__b = vlSelf->__Vfunc_max__153__Vfuncout;
        vlSelf->__Vfunc_max__152__a = (0xffU & vlSelf->__Vfunc_max4__151__a);
        vlSelf->__Vfunc_max__152__Vfuncout = (((IData)(vlSelf->__Vfunc_max__152__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__152__b))
                                               ? (IData)(vlSelf->__Vfunc_max__152__a)
                                               : (IData)(vlSelf->__Vfunc_max__152__b));
        vlSelf->__Vfunc_max4__151__Vfuncout = vlSelf->__Vfunc_max__152__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__151__Vfuncout;
        vlSelf->__Vfunc_max4__155__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__158__b = (vlSelf->__Vfunc_max4__155__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__158__a = (0xffU & (vlSelf->__Vfunc_max4__155__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__158__Vfuncout = (((IData)(vlSelf->__Vfunc_max__158__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__158__b))
                                               ? (IData)(vlSelf->__Vfunc_max__158__a)
                                               : (IData)(vlSelf->__Vfunc_max__158__b));
        vlSelf->__Vfunc_max__157__b = vlSelf->__Vfunc_max__158__Vfuncout;
        vlSelf->__Vfunc_max__157__a = (0xffU & (vlSelf->__Vfunc_max4__155__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__157__Vfuncout = (((IData)(vlSelf->__Vfunc_max__157__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__157__b))
                                               ? (IData)(vlSelf->__Vfunc_max__157__a)
                                               : (IData)(vlSelf->__Vfunc_max__157__b));
        vlSelf->__Vfunc_max__156__b = vlSelf->__Vfunc_max__157__Vfuncout;
        vlSelf->__Vfunc_max__156__a = (0xffU & vlSelf->__Vfunc_max4__155__a);
        vlSelf->__Vfunc_max__156__Vfuncout = (((IData)(vlSelf->__Vfunc_max__156__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__156__b))
                                               ? (IData)(vlSelf->__Vfunc_max__156__a)
                                               : (IData)(vlSelf->__Vfunc_max__156__b));
        vlSelf->__Vfunc_max4__155__Vfuncout = vlSelf->__Vfunc_max__156__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__155__Vfuncout;
        vlSelf->__Vfunc_max4__159__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__162__b = (vlSelf->__Vfunc_max4__159__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__162__a = (0xffU & (vlSelf->__Vfunc_max4__159__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__162__Vfuncout = (((IData)(vlSelf->__Vfunc_max__162__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__162__b))
                                               ? (IData)(vlSelf->__Vfunc_max__162__a)
                                               : (IData)(vlSelf->__Vfunc_max__162__b));
        vlSelf->__Vfunc_max__161__b = vlSelf->__Vfunc_max__162__Vfuncout;
        vlSelf->__Vfunc_max__161__a = (0xffU & (vlSelf->__Vfunc_max4__159__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__161__Vfuncout = (((IData)(vlSelf->__Vfunc_max__161__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__161__b))
                                               ? (IData)(vlSelf->__Vfunc_max__161__a)
                                               : (IData)(vlSelf->__Vfunc_max__161__b));
        vlSelf->__Vfunc_max__160__b = vlSelf->__Vfunc_max__161__Vfuncout;
        vlSelf->__Vfunc_max__160__a = (0xffU & vlSelf->__Vfunc_max4__159__a);
        vlSelf->__Vfunc_max__160__Vfuncout = (((IData)(vlSelf->__Vfunc_max__160__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__160__b))
                                               ? (IData)(vlSelf->__Vfunc_max__160__a)
                                               : (IData)(vlSelf->__Vfunc_max__160__b));
        vlSelf->__Vfunc_max4__159__Vfuncout = vlSelf->__Vfunc_max__160__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__159__Vfuncout;
        vlSelf->__Vfunc_max4__163__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__166__b = (vlSelf->__Vfunc_max4__163__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__166__a = (0xffU & (vlSelf->__Vfunc_max4__163__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__166__Vfuncout = (((IData)(vlSelf->__Vfunc_max__166__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__166__b))
                                               ? (IData)(vlSelf->__Vfunc_max__166__a)
                                               : (IData)(vlSelf->__Vfunc_max__166__b));
        vlSelf->__Vfunc_max__165__b = vlSelf->__Vfunc_max__166__Vfuncout;
        vlSelf->__Vfunc_max__165__a = (0xffU & (vlSelf->__Vfunc_max4__163__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__165__Vfuncout = (((IData)(vlSelf->__Vfunc_max__165__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__165__b))
                                               ? (IData)(vlSelf->__Vfunc_max__165__a)
                                               : (IData)(vlSelf->__Vfunc_max__165__b));
        vlSelf->__Vfunc_max__164__b = vlSelf->__Vfunc_max__165__Vfuncout;
        vlSelf->__Vfunc_max__164__a = (0xffU & vlSelf->__Vfunc_max4__163__a);
        vlSelf->__Vfunc_max__164__Vfuncout = (((IData)(vlSelf->__Vfunc_max__164__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__164__b))
                                               ? (IData)(vlSelf->__Vfunc_max__164__a)
                                               : (IData)(vlSelf->__Vfunc_max__164__b));
        vlSelf->__Vfunc_max4__163__Vfuncout = vlSelf->__Vfunc_max__164__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__163__Vfuncout;
        vlSelf->__Vfunc_max4__167__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__170__b = (vlSelf->__Vfunc_max4__167__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__170__a = (0xffU & (vlSelf->__Vfunc_max4__167__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__170__Vfuncout = (((IData)(vlSelf->__Vfunc_max__170__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__170__b))
                                               ? (IData)(vlSelf->__Vfunc_max__170__a)
                                               : (IData)(vlSelf->__Vfunc_max__170__b));
        vlSelf->__Vfunc_max__169__b = vlSelf->__Vfunc_max__170__Vfuncout;
        vlSelf->__Vfunc_max__169__a = (0xffU & (vlSelf->__Vfunc_max4__167__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__169__Vfuncout = (((IData)(vlSelf->__Vfunc_max__169__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__169__b))
                                               ? (IData)(vlSelf->__Vfunc_max__169__a)
                                               : (IData)(vlSelf->__Vfunc_max__169__b));
        vlSelf->__Vfunc_max__168__b = vlSelf->__Vfunc_max__169__Vfuncout;
        vlSelf->__Vfunc_max__168__a = (0xffU & vlSelf->__Vfunc_max4__167__a);
        vlSelf->__Vfunc_max__168__Vfuncout = (((IData)(vlSelf->__Vfunc_max__168__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__168__b))
                                               ? (IData)(vlSelf->__Vfunc_max__168__a)
                                               : (IData)(vlSelf->__Vfunc_max__168__b));
        vlSelf->__Vfunc_max4__167__Vfuncout = vlSelf->__Vfunc_max__168__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__167__Vfuncout;
        vlSelf->__Vfunc_max4__171__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__174__b = (vlSelf->__Vfunc_max4__171__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__174__a = (0xffU & (vlSelf->__Vfunc_max4__171__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__174__Vfuncout = (((IData)(vlSelf->__Vfunc_max__174__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__174__b))
                                               ? (IData)(vlSelf->__Vfunc_max__174__a)
                                               : (IData)(vlSelf->__Vfunc_max__174__b));
        vlSelf->__Vfunc_max__173__b = vlSelf->__Vfunc_max__174__Vfuncout;
        vlSelf->__Vfunc_max__173__a = (0xffU & (vlSelf->__Vfunc_max4__171__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__173__Vfuncout = (((IData)(vlSelf->__Vfunc_max__173__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__173__b))
                                               ? (IData)(vlSelf->__Vfunc_max__173__a)
                                               : (IData)(vlSelf->__Vfunc_max__173__b));
        vlSelf->__Vfunc_max__172__b = vlSelf->__Vfunc_max__173__Vfuncout;
        vlSelf->__Vfunc_max__172__a = (0xffU & vlSelf->__Vfunc_max4__171__a);
        vlSelf->__Vfunc_max__172__Vfuncout = (((IData)(vlSelf->__Vfunc_max__172__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__172__b))
                                               ? (IData)(vlSelf->__Vfunc_max__172__a)
                                               : (IData)(vlSelf->__Vfunc_max__172__b));
        vlSelf->__Vfunc_max4__171__Vfuncout = vlSelf->__Vfunc_max__172__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__171__Vfuncout;
        vlSelf->__Vfunc_max4__175__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__178__b = (vlSelf->__Vfunc_max4__175__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__178__a = (0xffU & (vlSelf->__Vfunc_max4__175__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__178__Vfuncout = (((IData)(vlSelf->__Vfunc_max__178__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__178__b))
                                               ? (IData)(vlSelf->__Vfunc_max__178__a)
                                               : (IData)(vlSelf->__Vfunc_max__178__b));
        vlSelf->__Vfunc_max__177__b = vlSelf->__Vfunc_max__178__Vfuncout;
        vlSelf->__Vfunc_max__177__a = (0xffU & (vlSelf->__Vfunc_max4__175__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__177__Vfuncout = (((IData)(vlSelf->__Vfunc_max__177__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__177__b))
                                               ? (IData)(vlSelf->__Vfunc_max__177__a)
                                               : (IData)(vlSelf->__Vfunc_max__177__b));
        vlSelf->__Vfunc_max__176__b = vlSelf->__Vfunc_max__177__Vfuncout;
        vlSelf->__Vfunc_max__176__a = (0xffU & vlSelf->__Vfunc_max4__175__a);
        vlSelf->__Vfunc_max__176__Vfuncout = (((IData)(vlSelf->__Vfunc_max__176__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__176__b))
                                               ? (IData)(vlSelf->__Vfunc_max__176__a)
                                               : (IData)(vlSelf->__Vfunc_max__176__b));
        vlSelf->__Vfunc_max4__175__Vfuncout = vlSelf->__Vfunc_max__176__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__175__Vfuncout;
        vlSelf->__Vfunc_max4__179__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__182__b = (vlSelf->__Vfunc_max4__179__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__182__a = (0xffU & (vlSelf->__Vfunc_max4__179__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__182__Vfuncout = (((IData)(vlSelf->__Vfunc_max__182__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__182__b))
                                               ? (IData)(vlSelf->__Vfunc_max__182__a)
                                               : (IData)(vlSelf->__Vfunc_max__182__b));
        vlSelf->__Vfunc_max__181__b = vlSelf->__Vfunc_max__182__Vfuncout;
        vlSelf->__Vfunc_max__181__a = (0xffU & (vlSelf->__Vfunc_max4__179__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__181__Vfuncout = (((IData)(vlSelf->__Vfunc_max__181__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__181__b))
                                               ? (IData)(vlSelf->__Vfunc_max__181__a)
                                               : (IData)(vlSelf->__Vfunc_max__181__b));
        vlSelf->__Vfunc_max__180__b = vlSelf->__Vfunc_max__181__Vfuncout;
        vlSelf->__Vfunc_max__180__a = (0xffU & vlSelf->__Vfunc_max4__179__a);
        vlSelf->__Vfunc_max__180__Vfuncout = (((IData)(vlSelf->__Vfunc_max__180__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__180__b))
                                               ? (IData)(vlSelf->__Vfunc_max__180__a)
                                               : (IData)(vlSelf->__Vfunc_max__180__b));
        vlSelf->__Vfunc_max4__179__Vfuncout = vlSelf->__Vfunc_max__180__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__179__Vfuncout;
        vlSelf->__Vfunc_max4__183__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__186__b = (vlSelf->__Vfunc_max4__183__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__186__a = (0xffU & (vlSelf->__Vfunc_max4__183__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__186__Vfuncout = (((IData)(vlSelf->__Vfunc_max__186__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__186__b))
                                               ? (IData)(vlSelf->__Vfunc_max__186__a)
                                               : (IData)(vlSelf->__Vfunc_max__186__b));
        vlSelf->__Vfunc_max__185__b = vlSelf->__Vfunc_max__186__Vfuncout;
        vlSelf->__Vfunc_max__185__a = (0xffU & (vlSelf->__Vfunc_max4__183__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__185__Vfuncout = (((IData)(vlSelf->__Vfunc_max__185__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__185__b))
                                               ? (IData)(vlSelf->__Vfunc_max__185__a)
                                               : (IData)(vlSelf->__Vfunc_max__185__b));
        vlSelf->__Vfunc_max__184__b = vlSelf->__Vfunc_max__185__Vfuncout;
        vlSelf->__Vfunc_max__184__a = (0xffU & vlSelf->__Vfunc_max4__183__a);
        vlSelf->__Vfunc_max__184__Vfuncout = (((IData)(vlSelf->__Vfunc_max__184__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__184__b))
                                               ? (IData)(vlSelf->__Vfunc_max__184__a)
                                               : (IData)(vlSelf->__Vfunc_max__184__b));
        vlSelf->__Vfunc_max4__183__Vfuncout = vlSelf->__Vfunc_max__184__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__183__Vfuncout;
        vlSelf->__Vfunc_max4__187__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__190__b = (vlSelf->__Vfunc_max4__187__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__190__a = (0xffU & (vlSelf->__Vfunc_max4__187__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__190__Vfuncout = (((IData)(vlSelf->__Vfunc_max__190__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__190__b))
                                               ? (IData)(vlSelf->__Vfunc_max__190__a)
                                               : (IData)(vlSelf->__Vfunc_max__190__b));
        vlSelf->__Vfunc_max__189__b = vlSelf->__Vfunc_max__190__Vfuncout;
        vlSelf->__Vfunc_max__189__a = (0xffU & (vlSelf->__Vfunc_max4__187__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__189__Vfuncout = (((IData)(vlSelf->__Vfunc_max__189__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__189__b))
                                               ? (IData)(vlSelf->__Vfunc_max__189__a)
                                               : (IData)(vlSelf->__Vfunc_max__189__b));
        vlSelf->__Vfunc_max__188__b = vlSelf->__Vfunc_max__189__Vfuncout;
        vlSelf->__Vfunc_max__188__a = (0xffU & vlSelf->__Vfunc_max4__187__a);
        vlSelf->__Vfunc_max__188__Vfuncout = (((IData)(vlSelf->__Vfunc_max__188__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__188__b))
                                               ? (IData)(vlSelf->__Vfunc_max__188__a)
                                               : (IData)(vlSelf->__Vfunc_max__188__b));
        vlSelf->__Vfunc_max4__187__Vfuncout = vlSelf->__Vfunc_max__188__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__187__Vfuncout;
        vlSelf->__Vfunc_max4__191__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__194__b = (vlSelf->__Vfunc_max4__191__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__194__a = (0xffU & (vlSelf->__Vfunc_max4__191__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__194__Vfuncout = (((IData)(vlSelf->__Vfunc_max__194__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__194__b))
                                               ? (IData)(vlSelf->__Vfunc_max__194__a)
                                               : (IData)(vlSelf->__Vfunc_max__194__b));
        vlSelf->__Vfunc_max__193__b = vlSelf->__Vfunc_max__194__Vfuncout;
        vlSelf->__Vfunc_max__193__a = (0xffU & (vlSelf->__Vfunc_max4__191__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__193__Vfuncout = (((IData)(vlSelf->__Vfunc_max__193__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__193__b))
                                               ? (IData)(vlSelf->__Vfunc_max__193__a)
                                               : (IData)(vlSelf->__Vfunc_max__193__b));
        vlSelf->__Vfunc_max__192__b = vlSelf->__Vfunc_max__193__Vfuncout;
        vlSelf->__Vfunc_max__192__a = (0xffU & vlSelf->__Vfunc_max4__191__a);
        vlSelf->__Vfunc_max__192__Vfuncout = (((IData)(vlSelf->__Vfunc_max__192__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__192__b))
                                               ? (IData)(vlSelf->__Vfunc_max__192__a)
                                               : (IData)(vlSelf->__Vfunc_max__192__b));
        vlSelf->__Vfunc_max4__191__Vfuncout = vlSelf->__Vfunc_max__192__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__191__Vfuncout;
        vlSelf->__Vfunc_max4__195__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__198__b = (vlSelf->__Vfunc_max4__195__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__198__a = (0xffU & (vlSelf->__Vfunc_max4__195__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__198__Vfuncout = (((IData)(vlSelf->__Vfunc_max__198__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__198__b))
                                               ? (IData)(vlSelf->__Vfunc_max__198__a)
                                               : (IData)(vlSelf->__Vfunc_max__198__b));
        vlSelf->__Vfunc_max__197__b = vlSelf->__Vfunc_max__198__Vfuncout;
        vlSelf->__Vfunc_max__197__a = (0xffU & (vlSelf->__Vfunc_max4__195__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__197__Vfuncout = (((IData)(vlSelf->__Vfunc_max__197__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__197__b))
                                               ? (IData)(vlSelf->__Vfunc_max__197__a)
                                               : (IData)(vlSelf->__Vfunc_max__197__b));
        vlSelf->__Vfunc_max__196__b = vlSelf->__Vfunc_max__197__Vfuncout;
        vlSelf->__Vfunc_max__196__a = (0xffU & vlSelf->__Vfunc_max4__195__a);
        vlSelf->__Vfunc_max__196__Vfuncout = (((IData)(vlSelf->__Vfunc_max__196__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__196__b))
                                               ? (IData)(vlSelf->__Vfunc_max__196__a)
                                               : (IData)(vlSelf->__Vfunc_max__196__b));
        vlSelf->__Vfunc_max4__195__Vfuncout = vlSelf->__Vfunc_max__196__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__195__Vfuncout;
        vlSelf->__Vfunc_max4__199__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__202__b = (vlSelf->__Vfunc_max4__199__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__202__a = (0xffU & (vlSelf->__Vfunc_max4__199__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__202__Vfuncout = (((IData)(vlSelf->__Vfunc_max__202__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__202__b))
                                               ? (IData)(vlSelf->__Vfunc_max__202__a)
                                               : (IData)(vlSelf->__Vfunc_max__202__b));
        vlSelf->__Vfunc_max__201__b = vlSelf->__Vfunc_max__202__Vfuncout;
        vlSelf->__Vfunc_max__201__a = (0xffU & (vlSelf->__Vfunc_max4__199__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__201__Vfuncout = (((IData)(vlSelf->__Vfunc_max__201__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__201__b))
                                               ? (IData)(vlSelf->__Vfunc_max__201__a)
                                               : (IData)(vlSelf->__Vfunc_max__201__b));
        vlSelf->__Vfunc_max__200__b = vlSelf->__Vfunc_max__201__Vfuncout;
        vlSelf->__Vfunc_max__200__a = (0xffU & vlSelf->__Vfunc_max4__199__a);
        vlSelf->__Vfunc_max__200__Vfuncout = (((IData)(vlSelf->__Vfunc_max__200__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__200__b))
                                               ? (IData)(vlSelf->__Vfunc_max__200__a)
                                               : (IData)(vlSelf->__Vfunc_max__200__b));
        vlSelf->__Vfunc_max4__199__Vfuncout = vlSelf->__Vfunc_max__200__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__199__Vfuncout;
        vlSelf->__Vfunc_max4__203__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__206__b = (vlSelf->__Vfunc_max4__203__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__206__a = (0xffU & (vlSelf->__Vfunc_max4__203__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__206__Vfuncout = (((IData)(vlSelf->__Vfunc_max__206__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__206__b))
                                               ? (IData)(vlSelf->__Vfunc_max__206__a)
                                               : (IData)(vlSelf->__Vfunc_max__206__b));
        vlSelf->__Vfunc_max__205__b = vlSelf->__Vfunc_max__206__Vfuncout;
        vlSelf->__Vfunc_max__205__a = (0xffU & (vlSelf->__Vfunc_max4__203__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__205__Vfuncout = (((IData)(vlSelf->__Vfunc_max__205__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__205__b))
                                               ? (IData)(vlSelf->__Vfunc_max__205__a)
                                               : (IData)(vlSelf->__Vfunc_max__205__b));
        vlSelf->__Vfunc_max__204__b = vlSelf->__Vfunc_max__205__Vfuncout;
        vlSelf->__Vfunc_max__204__a = (0xffU & vlSelf->__Vfunc_max4__203__a);
        vlSelf->__Vfunc_max__204__Vfuncout = (((IData)(vlSelf->__Vfunc_max__204__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__204__b))
                                               ? (IData)(vlSelf->__Vfunc_max__204__a)
                                               : (IData)(vlSelf->__Vfunc_max__204__b));
        vlSelf->__Vfunc_max4__203__Vfuncout = vlSelf->__Vfunc_max__204__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__203__Vfuncout;
        vlSelf->__Vfunc_max4__207__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__210__b = (vlSelf->__Vfunc_max4__207__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__210__a = (0xffU & (vlSelf->__Vfunc_max4__207__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__210__Vfuncout = (((IData)(vlSelf->__Vfunc_max__210__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__210__b))
                                               ? (IData)(vlSelf->__Vfunc_max__210__a)
                                               : (IData)(vlSelf->__Vfunc_max__210__b));
        vlSelf->__Vfunc_max__209__b = vlSelf->__Vfunc_max__210__Vfuncout;
        vlSelf->__Vfunc_max__209__a = (0xffU & (vlSelf->__Vfunc_max4__207__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__209__Vfuncout = (((IData)(vlSelf->__Vfunc_max__209__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__209__b))
                                               ? (IData)(vlSelf->__Vfunc_max__209__a)
                                               : (IData)(vlSelf->__Vfunc_max__209__b));
        vlSelf->__Vfunc_max__208__b = vlSelf->__Vfunc_max__209__Vfuncout;
        vlSelf->__Vfunc_max__208__a = (0xffU & vlSelf->__Vfunc_max4__207__a);
        vlSelf->__Vfunc_max__208__Vfuncout = (((IData)(vlSelf->__Vfunc_max__208__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__208__b))
                                               ? (IData)(vlSelf->__Vfunc_max__208__a)
                                               : (IData)(vlSelf->__Vfunc_max__208__b));
        vlSelf->__Vfunc_max4__207__Vfuncout = vlSelf->__Vfunc_max__208__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__207__Vfuncout;
        vlSelf->__Vfunc_max4__211__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__214__b = (vlSelf->__Vfunc_max4__211__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__214__a = (0xffU & (vlSelf->__Vfunc_max4__211__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__214__Vfuncout = (((IData)(vlSelf->__Vfunc_max__214__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__214__b))
                                               ? (IData)(vlSelf->__Vfunc_max__214__a)
                                               : (IData)(vlSelf->__Vfunc_max__214__b));
        vlSelf->__Vfunc_max__213__b = vlSelf->__Vfunc_max__214__Vfuncout;
        vlSelf->__Vfunc_max__213__a = (0xffU & (vlSelf->__Vfunc_max4__211__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__213__Vfuncout = (((IData)(vlSelf->__Vfunc_max__213__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__213__b))
                                               ? (IData)(vlSelf->__Vfunc_max__213__a)
                                               : (IData)(vlSelf->__Vfunc_max__213__b));
        vlSelf->__Vfunc_max__212__b = vlSelf->__Vfunc_max__213__Vfuncout;
        vlSelf->__Vfunc_max__212__a = (0xffU & vlSelf->__Vfunc_max4__211__a);
        vlSelf->__Vfunc_max__212__Vfuncout = (((IData)(vlSelf->__Vfunc_max__212__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__212__b))
                                               ? (IData)(vlSelf->__Vfunc_max__212__a)
                                               : (IData)(vlSelf->__Vfunc_max__212__b));
        vlSelf->__Vfunc_max4__211__Vfuncout = vlSelf->__Vfunc_max__212__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__211__Vfuncout;
        vlSelf->__Vfunc_max4__215__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__218__b = (vlSelf->__Vfunc_max4__215__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__218__a = (0xffU & (vlSelf->__Vfunc_max4__215__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__218__Vfuncout = (((IData)(vlSelf->__Vfunc_max__218__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__218__b))
                                               ? (IData)(vlSelf->__Vfunc_max__218__a)
                                               : (IData)(vlSelf->__Vfunc_max__218__b));
        vlSelf->__Vfunc_max__217__b = vlSelf->__Vfunc_max__218__Vfuncout;
        vlSelf->__Vfunc_max__217__a = (0xffU & (vlSelf->__Vfunc_max4__215__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__217__Vfuncout = (((IData)(vlSelf->__Vfunc_max__217__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__217__b))
                                               ? (IData)(vlSelf->__Vfunc_max__217__a)
                                               : (IData)(vlSelf->__Vfunc_max__217__b));
        vlSelf->__Vfunc_max__216__b = vlSelf->__Vfunc_max__217__Vfuncout;
        vlSelf->__Vfunc_max__216__a = (0xffU & vlSelf->__Vfunc_max4__215__a);
        vlSelf->__Vfunc_max__216__Vfuncout = (((IData)(vlSelf->__Vfunc_max__216__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__216__b))
                                               ? (IData)(vlSelf->__Vfunc_max__216__a)
                                               : (IData)(vlSelf->__Vfunc_max__216__b));
        vlSelf->__Vfunc_max4__215__Vfuncout = vlSelf->__Vfunc_max__216__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__215__Vfuncout;
        vlSelf->__Vfunc_max4__219__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__222__b = (vlSelf->__Vfunc_max4__219__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__222__a = (0xffU & (vlSelf->__Vfunc_max4__219__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__222__Vfuncout = (((IData)(vlSelf->__Vfunc_max__222__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__222__b))
                                               ? (IData)(vlSelf->__Vfunc_max__222__a)
                                               : (IData)(vlSelf->__Vfunc_max__222__b));
        vlSelf->__Vfunc_max__221__b = vlSelf->__Vfunc_max__222__Vfuncout;
        vlSelf->__Vfunc_max__221__a = (0xffU & (vlSelf->__Vfunc_max4__219__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__221__Vfuncout = (((IData)(vlSelf->__Vfunc_max__221__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__221__b))
                                               ? (IData)(vlSelf->__Vfunc_max__221__a)
                                               : (IData)(vlSelf->__Vfunc_max__221__b));
        vlSelf->__Vfunc_max__220__b = vlSelf->__Vfunc_max__221__Vfuncout;
        vlSelf->__Vfunc_max__220__a = (0xffU & vlSelf->__Vfunc_max4__219__a);
        vlSelf->__Vfunc_max__220__Vfuncout = (((IData)(vlSelf->__Vfunc_max__220__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__220__b))
                                               ? (IData)(vlSelf->__Vfunc_max__220__a)
                                               : (IData)(vlSelf->__Vfunc_max__220__b));
        vlSelf->__Vfunc_max4__219__Vfuncout = vlSelf->__Vfunc_max__220__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__219__Vfuncout;
        vlSelf->__Vfunc_max4__223__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__226__b = (vlSelf->__Vfunc_max4__223__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__226__a = (0xffU & (vlSelf->__Vfunc_max4__223__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__226__Vfuncout = (((IData)(vlSelf->__Vfunc_max__226__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__226__b))
                                               ? (IData)(vlSelf->__Vfunc_max__226__a)
                                               : (IData)(vlSelf->__Vfunc_max__226__b));
        vlSelf->__Vfunc_max__225__b = vlSelf->__Vfunc_max__226__Vfuncout;
        vlSelf->__Vfunc_max__225__a = (0xffU & (vlSelf->__Vfunc_max4__223__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__225__Vfuncout = (((IData)(vlSelf->__Vfunc_max__225__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__225__b))
                                               ? (IData)(vlSelf->__Vfunc_max__225__a)
                                               : (IData)(vlSelf->__Vfunc_max__225__b));
        vlSelf->__Vfunc_max__224__b = vlSelf->__Vfunc_max__225__Vfuncout;
        vlSelf->__Vfunc_max__224__a = (0xffU & vlSelf->__Vfunc_max4__223__a);
        vlSelf->__Vfunc_max__224__Vfuncout = (((IData)(vlSelf->__Vfunc_max__224__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__224__b))
                                               ? (IData)(vlSelf->__Vfunc_max__224__a)
                                               : (IData)(vlSelf->__Vfunc_max__224__b));
        vlSelf->__Vfunc_max4__223__Vfuncout = vlSelf->__Vfunc_max__224__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__223__Vfuncout;
        vlSelf->__Vfunc_max4__227__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__230__b = (vlSelf->__Vfunc_max4__227__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__230__a = (0xffU & (vlSelf->__Vfunc_max4__227__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__230__Vfuncout = (((IData)(vlSelf->__Vfunc_max__230__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__230__b))
                                               ? (IData)(vlSelf->__Vfunc_max__230__a)
                                               : (IData)(vlSelf->__Vfunc_max__230__b));
        vlSelf->__Vfunc_max__229__b = vlSelf->__Vfunc_max__230__Vfuncout;
        vlSelf->__Vfunc_max__229__a = (0xffU & (vlSelf->__Vfunc_max4__227__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__229__Vfuncout = (((IData)(vlSelf->__Vfunc_max__229__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__229__b))
                                               ? (IData)(vlSelf->__Vfunc_max__229__a)
                                               : (IData)(vlSelf->__Vfunc_max__229__b));
        vlSelf->__Vfunc_max__228__b = vlSelf->__Vfunc_max__229__Vfuncout;
        vlSelf->__Vfunc_max__228__a = (0xffU & vlSelf->__Vfunc_max4__227__a);
        vlSelf->__Vfunc_max__228__Vfuncout = (((IData)(vlSelf->__Vfunc_max__228__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__228__b))
                                               ? (IData)(vlSelf->__Vfunc_max__228__a)
                                               : (IData)(vlSelf->__Vfunc_max__228__b));
        vlSelf->__Vfunc_max4__227__Vfuncout = vlSelf->__Vfunc_max__228__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__227__Vfuncout;
        vlSelf->__Vfunc_max4__231__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__234__b = (vlSelf->__Vfunc_max4__231__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__234__a = (0xffU & (vlSelf->__Vfunc_max4__231__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__234__Vfuncout = (((IData)(vlSelf->__Vfunc_max__234__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__234__b))
                                               ? (IData)(vlSelf->__Vfunc_max__234__a)
                                               : (IData)(vlSelf->__Vfunc_max__234__b));
        vlSelf->__Vfunc_max__233__b = vlSelf->__Vfunc_max__234__Vfuncout;
        vlSelf->__Vfunc_max__233__a = (0xffU & (vlSelf->__Vfunc_max4__231__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__233__Vfuncout = (((IData)(vlSelf->__Vfunc_max__233__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__233__b))
                                               ? (IData)(vlSelf->__Vfunc_max__233__a)
                                               : (IData)(vlSelf->__Vfunc_max__233__b));
        vlSelf->__Vfunc_max__232__b = vlSelf->__Vfunc_max__233__Vfuncout;
        vlSelf->__Vfunc_max__232__a = (0xffU & vlSelf->__Vfunc_max4__231__a);
        vlSelf->__Vfunc_max__232__Vfuncout = (((IData)(vlSelf->__Vfunc_max__232__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__232__b))
                                               ? (IData)(vlSelf->__Vfunc_max__232__a)
                                               : (IData)(vlSelf->__Vfunc_max__232__b));
        vlSelf->__Vfunc_max4__231__Vfuncout = vlSelf->__Vfunc_max__232__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__231__Vfuncout;
        vlSelf->__Vfunc_max4__235__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__238__b = (vlSelf->__Vfunc_max4__235__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__238__a = (0xffU & (vlSelf->__Vfunc_max4__235__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__238__Vfuncout = (((IData)(vlSelf->__Vfunc_max__238__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__238__b))
                                               ? (IData)(vlSelf->__Vfunc_max__238__a)
                                               : (IData)(vlSelf->__Vfunc_max__238__b));
        vlSelf->__Vfunc_max__237__b = vlSelf->__Vfunc_max__238__Vfuncout;
        vlSelf->__Vfunc_max__237__a = (0xffU & (vlSelf->__Vfunc_max4__235__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__237__Vfuncout = (((IData)(vlSelf->__Vfunc_max__237__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__237__b))
                                               ? (IData)(vlSelf->__Vfunc_max__237__a)
                                               : (IData)(vlSelf->__Vfunc_max__237__b));
        vlSelf->__Vfunc_max__236__b = vlSelf->__Vfunc_max__237__Vfuncout;
        vlSelf->__Vfunc_max__236__a = (0xffU & vlSelf->__Vfunc_max4__235__a);
        vlSelf->__Vfunc_max__236__Vfuncout = (((IData)(vlSelf->__Vfunc_max__236__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__236__b))
                                               ? (IData)(vlSelf->__Vfunc_max__236__a)
                                               : (IData)(vlSelf->__Vfunc_max__236__b));
        vlSelf->__Vfunc_max4__235__Vfuncout = vlSelf->__Vfunc_max__236__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__235__Vfuncout;
        vlSelf->__Vfunc_max4__239__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__242__b = (vlSelf->__Vfunc_max4__239__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__242__a = (0xffU & (vlSelf->__Vfunc_max4__239__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__242__Vfuncout = (((IData)(vlSelf->__Vfunc_max__242__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__242__b))
                                               ? (IData)(vlSelf->__Vfunc_max__242__a)
                                               : (IData)(vlSelf->__Vfunc_max__242__b));
        vlSelf->__Vfunc_max__241__b = vlSelf->__Vfunc_max__242__Vfuncout;
        vlSelf->__Vfunc_max__241__a = (0xffU & (vlSelf->__Vfunc_max4__239__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__241__Vfuncout = (((IData)(vlSelf->__Vfunc_max__241__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__241__b))
                                               ? (IData)(vlSelf->__Vfunc_max__241__a)
                                               : (IData)(vlSelf->__Vfunc_max__241__b));
        vlSelf->__Vfunc_max__240__b = vlSelf->__Vfunc_max__241__Vfuncout;
        vlSelf->__Vfunc_max__240__a = (0xffU & vlSelf->__Vfunc_max4__239__a);
        vlSelf->__Vfunc_max__240__Vfuncout = (((IData)(vlSelf->__Vfunc_max__240__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__240__b))
                                               ? (IData)(vlSelf->__Vfunc_max__240__a)
                                               : (IData)(vlSelf->__Vfunc_max__240__b));
        vlSelf->__Vfunc_max4__239__Vfuncout = vlSelf->__Vfunc_max__240__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__239__Vfuncout;
        vlSelf->__Vfunc_max4__243__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__246__b = (vlSelf->__Vfunc_max4__243__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__246__a = (0xffU & (vlSelf->__Vfunc_max4__243__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__246__Vfuncout = (((IData)(vlSelf->__Vfunc_max__246__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__246__b))
                                               ? (IData)(vlSelf->__Vfunc_max__246__a)
                                               : (IData)(vlSelf->__Vfunc_max__246__b));
        vlSelf->__Vfunc_max__245__b = vlSelf->__Vfunc_max__246__Vfuncout;
        vlSelf->__Vfunc_max__245__a = (0xffU & (vlSelf->__Vfunc_max4__243__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__245__Vfuncout = (((IData)(vlSelf->__Vfunc_max__245__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__245__b))
                                               ? (IData)(vlSelf->__Vfunc_max__245__a)
                                               : (IData)(vlSelf->__Vfunc_max__245__b));
        vlSelf->__Vfunc_max__244__b = vlSelf->__Vfunc_max__245__Vfuncout;
        vlSelf->__Vfunc_max__244__a = (0xffU & vlSelf->__Vfunc_max4__243__a);
        vlSelf->__Vfunc_max__244__Vfuncout = (((IData)(vlSelf->__Vfunc_max__244__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__244__b))
                                               ? (IData)(vlSelf->__Vfunc_max__244__a)
                                               : (IData)(vlSelf->__Vfunc_max__244__b));
        vlSelf->__Vfunc_max4__243__Vfuncout = vlSelf->__Vfunc_max__244__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__243__Vfuncout;
        vlSelf->__Vfunc_max4__247__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__250__b = (vlSelf->__Vfunc_max4__247__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__250__a = (0xffU & (vlSelf->__Vfunc_max4__247__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__250__Vfuncout = (((IData)(vlSelf->__Vfunc_max__250__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__250__b))
                                               ? (IData)(vlSelf->__Vfunc_max__250__a)
                                               : (IData)(vlSelf->__Vfunc_max__250__b));
        vlSelf->__Vfunc_max__249__b = vlSelf->__Vfunc_max__250__Vfuncout;
        vlSelf->__Vfunc_max__249__a = (0xffU & (vlSelf->__Vfunc_max4__247__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__249__Vfuncout = (((IData)(vlSelf->__Vfunc_max__249__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__249__b))
                                               ? (IData)(vlSelf->__Vfunc_max__249__a)
                                               : (IData)(vlSelf->__Vfunc_max__249__b));
        vlSelf->__Vfunc_max__248__b = vlSelf->__Vfunc_max__249__Vfuncout;
        vlSelf->__Vfunc_max__248__a = (0xffU & vlSelf->__Vfunc_max4__247__a);
        vlSelf->__Vfunc_max__248__Vfuncout = (((IData)(vlSelf->__Vfunc_max__248__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__248__b))
                                               ? (IData)(vlSelf->__Vfunc_max__248__a)
                                               : (IData)(vlSelf->__Vfunc_max__248__b));
        vlSelf->__Vfunc_max4__247__Vfuncout = vlSelf->__Vfunc_max__248__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__247__Vfuncout;
        vlSelf->__Vfunc_max4__251__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__254__b = (vlSelf->__Vfunc_max4__251__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__254__a = (0xffU & (vlSelf->__Vfunc_max4__251__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__254__Vfuncout = (((IData)(vlSelf->__Vfunc_max__254__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__254__b))
                                               ? (IData)(vlSelf->__Vfunc_max__254__a)
                                               : (IData)(vlSelf->__Vfunc_max__254__b));
        vlSelf->__Vfunc_max__253__b = vlSelf->__Vfunc_max__254__Vfuncout;
        vlSelf->__Vfunc_max__253__a = (0xffU & (vlSelf->__Vfunc_max4__251__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__253__Vfuncout = (((IData)(vlSelf->__Vfunc_max__253__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__253__b))
                                               ? (IData)(vlSelf->__Vfunc_max__253__a)
                                               : (IData)(vlSelf->__Vfunc_max__253__b));
        vlSelf->__Vfunc_max__252__b = vlSelf->__Vfunc_max__253__Vfuncout;
        vlSelf->__Vfunc_max__252__a = (0xffU & vlSelf->__Vfunc_max4__251__a);
        vlSelf->__Vfunc_max__252__Vfuncout = (((IData)(vlSelf->__Vfunc_max__252__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__252__b))
                                               ? (IData)(vlSelf->__Vfunc_max__252__a)
                                               : (IData)(vlSelf->__Vfunc_max__252__b));
        vlSelf->__Vfunc_max4__251__Vfuncout = vlSelf->__Vfunc_max__252__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__251__Vfuncout;
        vlSelf->__Vfunc_max4__255__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__258__b = (vlSelf->__Vfunc_max4__255__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__258__a = (0xffU & (vlSelf->__Vfunc_max4__255__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__258__Vfuncout = (((IData)(vlSelf->__Vfunc_max__258__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__258__b))
                                               ? (IData)(vlSelf->__Vfunc_max__258__a)
                                               : (IData)(vlSelf->__Vfunc_max__258__b));
        vlSelf->__Vfunc_max__257__b = vlSelf->__Vfunc_max__258__Vfuncout;
        vlSelf->__Vfunc_max__257__a = (0xffU & (vlSelf->__Vfunc_max4__255__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__257__Vfuncout = (((IData)(vlSelf->__Vfunc_max__257__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__257__b))
                                               ? (IData)(vlSelf->__Vfunc_max__257__a)
                                               : (IData)(vlSelf->__Vfunc_max__257__b));
        vlSelf->__Vfunc_max__256__b = vlSelf->__Vfunc_max__257__Vfuncout;
        vlSelf->__Vfunc_max__256__a = (0xffU & vlSelf->__Vfunc_max4__255__a);
        vlSelf->__Vfunc_max__256__Vfuncout = (((IData)(vlSelf->__Vfunc_max__256__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__256__b))
                                               ? (IData)(vlSelf->__Vfunc_max__256__a)
                                               : (IData)(vlSelf->__Vfunc_max__256__b));
        vlSelf->__Vfunc_max4__255__Vfuncout = vlSelf->__Vfunc_max__256__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__255__Vfuncout;
        vlSelf->__Vfunc_max4__259__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__262__b = (vlSelf->__Vfunc_max4__259__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__262__a = (0xffU & (vlSelf->__Vfunc_max4__259__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__262__Vfuncout = (((IData)(vlSelf->__Vfunc_max__262__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__262__b))
                                               ? (IData)(vlSelf->__Vfunc_max__262__a)
                                               : (IData)(vlSelf->__Vfunc_max__262__b));
        vlSelf->__Vfunc_max__261__b = vlSelf->__Vfunc_max__262__Vfuncout;
        vlSelf->__Vfunc_max__261__a = (0xffU & (vlSelf->__Vfunc_max4__259__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__261__Vfuncout = (((IData)(vlSelf->__Vfunc_max__261__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__261__b))
                                               ? (IData)(vlSelf->__Vfunc_max__261__a)
                                               : (IData)(vlSelf->__Vfunc_max__261__b));
        vlSelf->__Vfunc_max__260__b = vlSelf->__Vfunc_max__261__Vfuncout;
        vlSelf->__Vfunc_max__260__a = (0xffU & vlSelf->__Vfunc_max4__259__a);
        vlSelf->__Vfunc_max__260__Vfuncout = (((IData)(vlSelf->__Vfunc_max__260__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__260__b))
                                               ? (IData)(vlSelf->__Vfunc_max__260__a)
                                               : (IData)(vlSelf->__Vfunc_max__260__b));
        vlSelf->__Vfunc_max4__259__Vfuncout = vlSelf->__Vfunc_max__260__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__259__Vfuncout;
        vlSelf->__Vfunc_max4__263__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__266__b = (vlSelf->__Vfunc_max4__263__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__266__a = (0xffU & (vlSelf->__Vfunc_max4__263__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__266__Vfuncout = (((IData)(vlSelf->__Vfunc_max__266__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__266__b))
                                               ? (IData)(vlSelf->__Vfunc_max__266__a)
                                               : (IData)(vlSelf->__Vfunc_max__266__b));
        vlSelf->__Vfunc_max__265__b = vlSelf->__Vfunc_max__266__Vfuncout;
        vlSelf->__Vfunc_max__265__a = (0xffU & (vlSelf->__Vfunc_max4__263__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__265__Vfuncout = (((IData)(vlSelf->__Vfunc_max__265__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__265__b))
                                               ? (IData)(vlSelf->__Vfunc_max__265__a)
                                               : (IData)(vlSelf->__Vfunc_max__265__b));
        vlSelf->__Vfunc_max__264__b = vlSelf->__Vfunc_max__265__Vfuncout;
        vlSelf->__Vfunc_max__264__a = (0xffU & vlSelf->__Vfunc_max4__263__a);
        vlSelf->__Vfunc_max__264__Vfuncout = (((IData)(vlSelf->__Vfunc_max__264__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__264__b))
                                               ? (IData)(vlSelf->__Vfunc_max__264__a)
                                               : (IData)(vlSelf->__Vfunc_max__264__b));
        vlSelf->__Vfunc_max4__263__Vfuncout = vlSelf->__Vfunc_max__264__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__263__Vfuncout;
        vlSelf->__Vfunc_max4__267__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__270__b = (vlSelf->__Vfunc_max4__267__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__270__a = (0xffU & (vlSelf->__Vfunc_max4__267__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__270__Vfuncout = (((IData)(vlSelf->__Vfunc_max__270__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__270__b))
                                               ? (IData)(vlSelf->__Vfunc_max__270__a)
                                               : (IData)(vlSelf->__Vfunc_max__270__b));
        vlSelf->__Vfunc_max__269__b = vlSelf->__Vfunc_max__270__Vfuncout;
        vlSelf->__Vfunc_max__269__a = (0xffU & (vlSelf->__Vfunc_max4__267__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__269__Vfuncout = (((IData)(vlSelf->__Vfunc_max__269__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__269__b))
                                               ? (IData)(vlSelf->__Vfunc_max__269__a)
                                               : (IData)(vlSelf->__Vfunc_max__269__b));
        vlSelf->__Vfunc_max__268__b = vlSelf->__Vfunc_max__269__Vfuncout;
        vlSelf->__Vfunc_max__268__a = (0xffU & vlSelf->__Vfunc_max4__267__a);
        vlSelf->__Vfunc_max__268__Vfuncout = (((IData)(vlSelf->__Vfunc_max__268__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__268__b))
                                               ? (IData)(vlSelf->__Vfunc_max__268__a)
                                               : (IData)(vlSelf->__Vfunc_max__268__b));
        vlSelf->__Vfunc_max4__267__Vfuncout = vlSelf->__Vfunc_max__268__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__267__Vfuncout;
        vlSelf->__Vfunc_max4__271__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__274__b = (vlSelf->__Vfunc_max4__271__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__274__a = (0xffU & (vlSelf->__Vfunc_max4__271__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__274__Vfuncout = (((IData)(vlSelf->__Vfunc_max__274__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__274__b))
                                               ? (IData)(vlSelf->__Vfunc_max__274__a)
                                               : (IData)(vlSelf->__Vfunc_max__274__b));
        vlSelf->__Vfunc_max__273__b = vlSelf->__Vfunc_max__274__Vfuncout;
        vlSelf->__Vfunc_max__273__a = (0xffU & (vlSelf->__Vfunc_max4__271__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__273__Vfuncout = (((IData)(vlSelf->__Vfunc_max__273__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__273__b))
                                               ? (IData)(vlSelf->__Vfunc_max__273__a)
                                               : (IData)(vlSelf->__Vfunc_max__273__b));
        vlSelf->__Vfunc_max__272__b = vlSelf->__Vfunc_max__273__Vfuncout;
        vlSelf->__Vfunc_max__272__a = (0xffU & vlSelf->__Vfunc_max4__271__a);
        vlSelf->__Vfunc_max__272__Vfuncout = (((IData)(vlSelf->__Vfunc_max__272__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__272__b))
                                               ? (IData)(vlSelf->__Vfunc_max__272__a)
                                               : (IData)(vlSelf->__Vfunc_max__272__b));
        vlSelf->__Vfunc_max4__271__Vfuncout = vlSelf->__Vfunc_max__272__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__271__Vfuncout;
        vlSelf->__Vfunc_max4__275__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__278__b = (vlSelf->__Vfunc_max4__275__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__278__a = (0xffU & (vlSelf->__Vfunc_max4__275__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__278__Vfuncout = (((IData)(vlSelf->__Vfunc_max__278__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__278__b))
                                               ? (IData)(vlSelf->__Vfunc_max__278__a)
                                               : (IData)(vlSelf->__Vfunc_max__278__b));
        vlSelf->__Vfunc_max__277__b = vlSelf->__Vfunc_max__278__Vfuncout;
        vlSelf->__Vfunc_max__277__a = (0xffU & (vlSelf->__Vfunc_max4__275__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__277__Vfuncout = (((IData)(vlSelf->__Vfunc_max__277__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__277__b))
                                               ? (IData)(vlSelf->__Vfunc_max__277__a)
                                               : (IData)(vlSelf->__Vfunc_max__277__b));
        vlSelf->__Vfunc_max__276__b = vlSelf->__Vfunc_max__277__Vfuncout;
        vlSelf->__Vfunc_max__276__a = (0xffU & vlSelf->__Vfunc_max4__275__a);
        vlSelf->__Vfunc_max__276__Vfuncout = (((IData)(vlSelf->__Vfunc_max__276__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__276__b))
                                               ? (IData)(vlSelf->__Vfunc_max__276__a)
                                               : (IData)(vlSelf->__Vfunc_max__276__b));
        vlSelf->__Vfunc_max4__275__Vfuncout = vlSelf->__Vfunc_max__276__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__275__Vfuncout;
        vlSelf->__Vfunc_max4__279__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__282__b = (vlSelf->__Vfunc_max4__279__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__282__a = (0xffU & (vlSelf->__Vfunc_max4__279__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__282__Vfuncout = (((IData)(vlSelf->__Vfunc_max__282__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__282__b))
                                               ? (IData)(vlSelf->__Vfunc_max__282__a)
                                               : (IData)(vlSelf->__Vfunc_max__282__b));
        vlSelf->__Vfunc_max__281__b = vlSelf->__Vfunc_max__282__Vfuncout;
        vlSelf->__Vfunc_max__281__a = (0xffU & (vlSelf->__Vfunc_max4__279__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__281__Vfuncout = (((IData)(vlSelf->__Vfunc_max__281__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__281__b))
                                               ? (IData)(vlSelf->__Vfunc_max__281__a)
                                               : (IData)(vlSelf->__Vfunc_max__281__b));
        vlSelf->__Vfunc_max__280__b = vlSelf->__Vfunc_max__281__Vfuncout;
        vlSelf->__Vfunc_max__280__a = (0xffU & vlSelf->__Vfunc_max4__279__a);
        vlSelf->__Vfunc_max__280__Vfuncout = (((IData)(vlSelf->__Vfunc_max__280__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__280__b))
                                               ? (IData)(vlSelf->__Vfunc_max__280__a)
                                               : (IData)(vlSelf->__Vfunc_max__280__b));
        vlSelf->__Vfunc_max4__279__Vfuncout = vlSelf->__Vfunc_max__280__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__279__Vfuncout;
        vlSelf->__Vfunc_max4__283__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__286__b = (vlSelf->__Vfunc_max4__283__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__286__a = (0xffU & (vlSelf->__Vfunc_max4__283__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__286__Vfuncout = (((IData)(vlSelf->__Vfunc_max__286__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__286__b))
                                               ? (IData)(vlSelf->__Vfunc_max__286__a)
                                               : (IData)(vlSelf->__Vfunc_max__286__b));
        vlSelf->__Vfunc_max__285__b = vlSelf->__Vfunc_max__286__Vfuncout;
        vlSelf->__Vfunc_max__285__a = (0xffU & (vlSelf->__Vfunc_max4__283__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__285__Vfuncout = (((IData)(vlSelf->__Vfunc_max__285__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__285__b))
                                               ? (IData)(vlSelf->__Vfunc_max__285__a)
                                               : (IData)(vlSelf->__Vfunc_max__285__b));
        vlSelf->__Vfunc_max__284__b = vlSelf->__Vfunc_max__285__Vfuncout;
        vlSelf->__Vfunc_max__284__a = (0xffU & vlSelf->__Vfunc_max4__283__a);
        vlSelf->__Vfunc_max__284__Vfuncout = (((IData)(vlSelf->__Vfunc_max__284__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__284__b))
                                               ? (IData)(vlSelf->__Vfunc_max__284__a)
                                               : (IData)(vlSelf->__Vfunc_max__284__b));
        vlSelf->__Vfunc_max4__283__Vfuncout = vlSelf->__Vfunc_max__284__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__283__Vfuncout;
        vlSelf->__Vfunc_max4__287__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__290__b = (vlSelf->__Vfunc_max4__287__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__290__a = (0xffU & (vlSelf->__Vfunc_max4__287__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__290__Vfuncout = (((IData)(vlSelf->__Vfunc_max__290__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__290__b))
                                               ? (IData)(vlSelf->__Vfunc_max__290__a)
                                               : (IData)(vlSelf->__Vfunc_max__290__b));
        vlSelf->__Vfunc_max__289__b = vlSelf->__Vfunc_max__290__Vfuncout;
        vlSelf->__Vfunc_max__289__a = (0xffU & (vlSelf->__Vfunc_max4__287__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__289__Vfuncout = (((IData)(vlSelf->__Vfunc_max__289__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__289__b))
                                               ? (IData)(vlSelf->__Vfunc_max__289__a)
                                               : (IData)(vlSelf->__Vfunc_max__289__b));
        vlSelf->__Vfunc_max__288__b = vlSelf->__Vfunc_max__289__Vfuncout;
        vlSelf->__Vfunc_max__288__a = (0xffU & vlSelf->__Vfunc_max4__287__a);
        vlSelf->__Vfunc_max__288__Vfuncout = (((IData)(vlSelf->__Vfunc_max__288__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__288__b))
                                               ? (IData)(vlSelf->__Vfunc_max__288__a)
                                               : (IData)(vlSelf->__Vfunc_max__288__b));
        vlSelf->__Vfunc_max4__287__Vfuncout = vlSelf->__Vfunc_max__288__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__287__Vfuncout;
        vlSelf->__Vfunc_max4__291__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__294__b = (vlSelf->__Vfunc_max4__291__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__294__a = (0xffU & (vlSelf->__Vfunc_max4__291__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__294__Vfuncout = (((IData)(vlSelf->__Vfunc_max__294__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__294__b))
                                               ? (IData)(vlSelf->__Vfunc_max__294__a)
                                               : (IData)(vlSelf->__Vfunc_max__294__b));
        vlSelf->__Vfunc_max__293__b = vlSelf->__Vfunc_max__294__Vfuncout;
        vlSelf->__Vfunc_max__293__a = (0xffU & (vlSelf->__Vfunc_max4__291__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__293__Vfuncout = (((IData)(vlSelf->__Vfunc_max__293__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__293__b))
                                               ? (IData)(vlSelf->__Vfunc_max__293__a)
                                               : (IData)(vlSelf->__Vfunc_max__293__b));
        vlSelf->__Vfunc_max__292__b = vlSelf->__Vfunc_max__293__Vfuncout;
        vlSelf->__Vfunc_max__292__a = (0xffU & vlSelf->__Vfunc_max4__291__a);
        vlSelf->__Vfunc_max__292__Vfuncout = (((IData)(vlSelf->__Vfunc_max__292__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__292__b))
                                               ? (IData)(vlSelf->__Vfunc_max__292__a)
                                               : (IData)(vlSelf->__Vfunc_max__292__b));
        vlSelf->__Vfunc_max4__291__Vfuncout = vlSelf->__Vfunc_max__292__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__291__Vfuncout;
        vlSelf->__Vfunc_max4__295__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__298__b = (vlSelf->__Vfunc_max4__295__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__298__a = (0xffU & (vlSelf->__Vfunc_max4__295__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__298__Vfuncout = (((IData)(vlSelf->__Vfunc_max__298__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__298__b))
                                               ? (IData)(vlSelf->__Vfunc_max__298__a)
                                               : (IData)(vlSelf->__Vfunc_max__298__b));
        vlSelf->__Vfunc_max__297__b = vlSelf->__Vfunc_max__298__Vfuncout;
        vlSelf->__Vfunc_max__297__a = (0xffU & (vlSelf->__Vfunc_max4__295__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__297__Vfuncout = (((IData)(vlSelf->__Vfunc_max__297__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__297__b))
                                               ? (IData)(vlSelf->__Vfunc_max__297__a)
                                               : (IData)(vlSelf->__Vfunc_max__297__b));
        vlSelf->__Vfunc_max__296__b = vlSelf->__Vfunc_max__297__Vfuncout;
        vlSelf->__Vfunc_max__296__a = (0xffU & vlSelf->__Vfunc_max4__295__a);
        vlSelf->__Vfunc_max__296__Vfuncout = (((IData)(vlSelf->__Vfunc_max__296__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__296__b))
                                               ? (IData)(vlSelf->__Vfunc_max__296__a)
                                               : (IData)(vlSelf->__Vfunc_max__296__b));
        vlSelf->__Vfunc_max4__295__Vfuncout = vlSelf->__Vfunc_max__296__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__295__Vfuncout;
        vlSelf->__Vfunc_max4__299__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__302__b = (vlSelf->__Vfunc_max4__299__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__302__a = (0xffU & (vlSelf->__Vfunc_max4__299__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__302__Vfuncout = (((IData)(vlSelf->__Vfunc_max__302__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__302__b))
                                               ? (IData)(vlSelf->__Vfunc_max__302__a)
                                               : (IData)(vlSelf->__Vfunc_max__302__b));
        vlSelf->__Vfunc_max__301__b = vlSelf->__Vfunc_max__302__Vfuncout;
        vlSelf->__Vfunc_max__301__a = (0xffU & (vlSelf->__Vfunc_max4__299__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__301__Vfuncout = (((IData)(vlSelf->__Vfunc_max__301__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__301__b))
                                               ? (IData)(vlSelf->__Vfunc_max__301__a)
                                               : (IData)(vlSelf->__Vfunc_max__301__b));
        vlSelf->__Vfunc_max__300__b = vlSelf->__Vfunc_max__301__Vfuncout;
        vlSelf->__Vfunc_max__300__a = (0xffU & vlSelf->__Vfunc_max4__299__a);
        vlSelf->__Vfunc_max__300__Vfuncout = (((IData)(vlSelf->__Vfunc_max__300__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__300__b))
                                               ? (IData)(vlSelf->__Vfunc_max__300__a)
                                               : (IData)(vlSelf->__Vfunc_max__300__b));
        vlSelf->__Vfunc_max4__299__Vfuncout = vlSelf->__Vfunc_max__300__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__299__Vfuncout;
        vlSelf->__Vfunc_max4__303__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__306__b = (vlSelf->__Vfunc_max4__303__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__306__a = (0xffU & (vlSelf->__Vfunc_max4__303__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__306__Vfuncout = (((IData)(vlSelf->__Vfunc_max__306__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__306__b))
                                               ? (IData)(vlSelf->__Vfunc_max__306__a)
                                               : (IData)(vlSelf->__Vfunc_max__306__b));
        vlSelf->__Vfunc_max__305__b = vlSelf->__Vfunc_max__306__Vfuncout;
        vlSelf->__Vfunc_max__305__a = (0xffU & (vlSelf->__Vfunc_max4__303__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__305__Vfuncout = (((IData)(vlSelf->__Vfunc_max__305__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__305__b))
                                               ? (IData)(vlSelf->__Vfunc_max__305__a)
                                               : (IData)(vlSelf->__Vfunc_max__305__b));
        vlSelf->__Vfunc_max__304__b = vlSelf->__Vfunc_max__305__Vfuncout;
        vlSelf->__Vfunc_max__304__a = (0xffU & vlSelf->__Vfunc_max4__303__a);
        vlSelf->__Vfunc_max__304__Vfuncout = (((IData)(vlSelf->__Vfunc_max__304__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__304__b))
                                               ? (IData)(vlSelf->__Vfunc_max__304__a)
                                               : (IData)(vlSelf->__Vfunc_max__304__b));
        vlSelf->__Vfunc_max4__303__Vfuncout = vlSelf->__Vfunc_max__304__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__303__Vfuncout;
        vlSelf->__Vfunc_max4__307__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__310__b = (vlSelf->__Vfunc_max4__307__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__310__a = (0xffU & (vlSelf->__Vfunc_max4__307__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__310__Vfuncout = (((IData)(vlSelf->__Vfunc_max__310__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__310__b))
                                               ? (IData)(vlSelf->__Vfunc_max__310__a)
                                               : (IData)(vlSelf->__Vfunc_max__310__b));
        vlSelf->__Vfunc_max__309__b = vlSelf->__Vfunc_max__310__Vfuncout;
        vlSelf->__Vfunc_max__309__a = (0xffU & (vlSelf->__Vfunc_max4__307__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__309__Vfuncout = (((IData)(vlSelf->__Vfunc_max__309__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__309__b))
                                               ? (IData)(vlSelf->__Vfunc_max__309__a)
                                               : (IData)(vlSelf->__Vfunc_max__309__b));
        vlSelf->__Vfunc_max__308__b = vlSelf->__Vfunc_max__309__Vfuncout;
        vlSelf->__Vfunc_max__308__a = (0xffU & vlSelf->__Vfunc_max4__307__a);
        vlSelf->__Vfunc_max__308__Vfuncout = (((IData)(vlSelf->__Vfunc_max__308__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__308__b))
                                               ? (IData)(vlSelf->__Vfunc_max__308__a)
                                               : (IData)(vlSelf->__Vfunc_max__308__b));
        vlSelf->__Vfunc_max4__307__Vfuncout = vlSelf->__Vfunc_max__308__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__307__Vfuncout;
        vlSelf->__Vfunc_max4__311__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__314__b = (vlSelf->__Vfunc_max4__311__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__314__a = (0xffU & (vlSelf->__Vfunc_max4__311__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__314__Vfuncout = (((IData)(vlSelf->__Vfunc_max__314__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__314__b))
                                               ? (IData)(vlSelf->__Vfunc_max__314__a)
                                               : (IData)(vlSelf->__Vfunc_max__314__b));
        vlSelf->__Vfunc_max__313__b = vlSelf->__Vfunc_max__314__Vfuncout;
        vlSelf->__Vfunc_max__313__a = (0xffU & (vlSelf->__Vfunc_max4__311__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__313__Vfuncout = (((IData)(vlSelf->__Vfunc_max__313__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__313__b))
                                               ? (IData)(vlSelf->__Vfunc_max__313__a)
                                               : (IData)(vlSelf->__Vfunc_max__313__b));
        vlSelf->__Vfunc_max__312__b = vlSelf->__Vfunc_max__313__Vfuncout;
        vlSelf->__Vfunc_max__312__a = (0xffU & vlSelf->__Vfunc_max4__311__a);
        vlSelf->__Vfunc_max__312__Vfuncout = (((IData)(vlSelf->__Vfunc_max__312__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__312__b))
                                               ? (IData)(vlSelf->__Vfunc_max__312__a)
                                               : (IData)(vlSelf->__Vfunc_max__312__b));
        vlSelf->__Vfunc_max4__311__Vfuncout = vlSelf->__Vfunc_max__312__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__311__Vfuncout;
        vlSelf->__Vfunc_max4__315__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__318__b = (vlSelf->__Vfunc_max4__315__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__318__a = (0xffU & (vlSelf->__Vfunc_max4__315__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__318__Vfuncout = (((IData)(vlSelf->__Vfunc_max__318__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__318__b))
                                               ? (IData)(vlSelf->__Vfunc_max__318__a)
                                               : (IData)(vlSelf->__Vfunc_max__318__b));
        vlSelf->__Vfunc_max__317__b = vlSelf->__Vfunc_max__318__Vfuncout;
        vlSelf->__Vfunc_max__317__a = (0xffU & (vlSelf->__Vfunc_max4__315__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__317__Vfuncout = (((IData)(vlSelf->__Vfunc_max__317__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__317__b))
                                               ? (IData)(vlSelf->__Vfunc_max__317__a)
                                               : (IData)(vlSelf->__Vfunc_max__317__b));
        vlSelf->__Vfunc_max__316__b = vlSelf->__Vfunc_max__317__Vfuncout;
        vlSelf->__Vfunc_max__316__a = (0xffU & vlSelf->__Vfunc_max4__315__a);
        vlSelf->__Vfunc_max__316__Vfuncout = (((IData)(vlSelf->__Vfunc_max__316__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__316__b))
                                               ? (IData)(vlSelf->__Vfunc_max__316__a)
                                               : (IData)(vlSelf->__Vfunc_max__316__b));
        vlSelf->__Vfunc_max4__315__Vfuncout = vlSelf->__Vfunc_max__316__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__315__Vfuncout;
        vlSelf->__Vfunc_max4__319__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__322__b = (vlSelf->__Vfunc_max4__319__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__322__a = (0xffU & (vlSelf->__Vfunc_max4__319__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__322__Vfuncout = (((IData)(vlSelf->__Vfunc_max__322__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__322__b))
                                               ? (IData)(vlSelf->__Vfunc_max__322__a)
                                               : (IData)(vlSelf->__Vfunc_max__322__b));
        vlSelf->__Vfunc_max__321__b = vlSelf->__Vfunc_max__322__Vfuncout;
        vlSelf->__Vfunc_max__321__a = (0xffU & (vlSelf->__Vfunc_max4__319__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__321__Vfuncout = (((IData)(vlSelf->__Vfunc_max__321__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__321__b))
                                               ? (IData)(vlSelf->__Vfunc_max__321__a)
                                               : (IData)(vlSelf->__Vfunc_max__321__b));
        vlSelf->__Vfunc_max__320__b = vlSelf->__Vfunc_max__321__Vfuncout;
        vlSelf->__Vfunc_max__320__a = (0xffU & vlSelf->__Vfunc_max4__319__a);
        vlSelf->__Vfunc_max__320__Vfuncout = (((IData)(vlSelf->__Vfunc_max__320__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__320__b))
                                               ? (IData)(vlSelf->__Vfunc_max__320__a)
                                               : (IData)(vlSelf->__Vfunc_max__320__b));
        vlSelf->__Vfunc_max4__319__Vfuncout = vlSelf->__Vfunc_max__320__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__319__Vfuncout;
        vlSelf->__Vfunc_max4__323__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__326__b = (vlSelf->__Vfunc_max4__323__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__326__a = (0xffU & (vlSelf->__Vfunc_max4__323__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__326__Vfuncout = (((IData)(vlSelf->__Vfunc_max__326__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__326__b))
                                               ? (IData)(vlSelf->__Vfunc_max__326__a)
                                               : (IData)(vlSelf->__Vfunc_max__326__b));
        vlSelf->__Vfunc_max__325__b = vlSelf->__Vfunc_max__326__Vfuncout;
        vlSelf->__Vfunc_max__325__a = (0xffU & (vlSelf->__Vfunc_max4__323__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__325__Vfuncout = (((IData)(vlSelf->__Vfunc_max__325__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__325__b))
                                               ? (IData)(vlSelf->__Vfunc_max__325__a)
                                               : (IData)(vlSelf->__Vfunc_max__325__b));
        vlSelf->__Vfunc_max__324__b = vlSelf->__Vfunc_max__325__Vfuncout;
        vlSelf->__Vfunc_max__324__a = (0xffU & vlSelf->__Vfunc_max4__323__a);
        vlSelf->__Vfunc_max__324__Vfuncout = (((IData)(vlSelf->__Vfunc_max__324__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__324__b))
                                               ? (IData)(vlSelf->__Vfunc_max__324__a)
                                               : (IData)(vlSelf->__Vfunc_max__324__b));
        vlSelf->__Vfunc_max4__323__Vfuncout = vlSelf->__Vfunc_max__324__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__323__Vfuncout;
        vlSelf->__Vfunc_max4__327__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__330__b = (vlSelf->__Vfunc_max4__327__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__330__a = (0xffU & (vlSelf->__Vfunc_max4__327__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__330__Vfuncout = (((IData)(vlSelf->__Vfunc_max__330__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__330__b))
                                               ? (IData)(vlSelf->__Vfunc_max__330__a)
                                               : (IData)(vlSelf->__Vfunc_max__330__b));
        vlSelf->__Vfunc_max__329__b = vlSelf->__Vfunc_max__330__Vfuncout;
        vlSelf->__Vfunc_max__329__a = (0xffU & (vlSelf->__Vfunc_max4__327__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__329__Vfuncout = (((IData)(vlSelf->__Vfunc_max__329__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__329__b))
                                               ? (IData)(vlSelf->__Vfunc_max__329__a)
                                               : (IData)(vlSelf->__Vfunc_max__329__b));
        vlSelf->__Vfunc_max__328__b = vlSelf->__Vfunc_max__329__Vfuncout;
        vlSelf->__Vfunc_max__328__a = (0xffU & vlSelf->__Vfunc_max4__327__a);
        vlSelf->__Vfunc_max__328__Vfuncout = (((IData)(vlSelf->__Vfunc_max__328__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__328__b))
                                               ? (IData)(vlSelf->__Vfunc_max__328__a)
                                               : (IData)(vlSelf->__Vfunc_max__328__b));
        vlSelf->__Vfunc_max4__327__Vfuncout = vlSelf->__Vfunc_max__328__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__327__Vfuncout;
        vlSelf->__Vfunc_max4__331__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__334__b = (vlSelf->__Vfunc_max4__331__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__334__a = (0xffU & (vlSelf->__Vfunc_max4__331__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__334__Vfuncout = (((IData)(vlSelf->__Vfunc_max__334__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__334__b))
                                               ? (IData)(vlSelf->__Vfunc_max__334__a)
                                               : (IData)(vlSelf->__Vfunc_max__334__b));
        vlSelf->__Vfunc_max__333__b = vlSelf->__Vfunc_max__334__Vfuncout;
        vlSelf->__Vfunc_max__333__a = (0xffU & (vlSelf->__Vfunc_max4__331__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__333__Vfuncout = (((IData)(vlSelf->__Vfunc_max__333__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__333__b))
                                               ? (IData)(vlSelf->__Vfunc_max__333__a)
                                               : (IData)(vlSelf->__Vfunc_max__333__b));
        vlSelf->__Vfunc_max__332__b = vlSelf->__Vfunc_max__333__Vfuncout;
        vlSelf->__Vfunc_max__332__a = (0xffU & vlSelf->__Vfunc_max4__331__a);
        vlSelf->__Vfunc_max__332__Vfuncout = (((IData)(vlSelf->__Vfunc_max__332__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__332__b))
                                               ? (IData)(vlSelf->__Vfunc_max__332__a)
                                               : (IData)(vlSelf->__Vfunc_max__332__b));
        vlSelf->__Vfunc_max4__331__Vfuncout = vlSelf->__Vfunc_max__332__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__331__Vfuncout;
        vlSelf->__Vfunc_max4__335__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__338__b = (vlSelf->__Vfunc_max4__335__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__338__a = (0xffU & (vlSelf->__Vfunc_max4__335__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__338__Vfuncout = (((IData)(vlSelf->__Vfunc_max__338__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__338__b))
                                               ? (IData)(vlSelf->__Vfunc_max__338__a)
                                               : (IData)(vlSelf->__Vfunc_max__338__b));
        vlSelf->__Vfunc_max__337__b = vlSelf->__Vfunc_max__338__Vfuncout;
        vlSelf->__Vfunc_max__337__a = (0xffU & (vlSelf->__Vfunc_max4__335__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__337__Vfuncout = (((IData)(vlSelf->__Vfunc_max__337__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__337__b))
                                               ? (IData)(vlSelf->__Vfunc_max__337__a)
                                               : (IData)(vlSelf->__Vfunc_max__337__b));
        vlSelf->__Vfunc_max__336__b = vlSelf->__Vfunc_max__337__Vfuncout;
        vlSelf->__Vfunc_max__336__a = (0xffU & vlSelf->__Vfunc_max4__335__a);
        vlSelf->__Vfunc_max__336__Vfuncout = (((IData)(vlSelf->__Vfunc_max__336__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__336__b))
                                               ? (IData)(vlSelf->__Vfunc_max__336__a)
                                               : (IData)(vlSelf->__Vfunc_max__336__b));
        vlSelf->__Vfunc_max4__335__Vfuncout = vlSelf->__Vfunc_max__336__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__335__Vfuncout;
        vlSelf->__Vfunc_max4__339__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__342__b = (vlSelf->__Vfunc_max4__339__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__342__a = (0xffU & (vlSelf->__Vfunc_max4__339__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__342__Vfuncout = (((IData)(vlSelf->__Vfunc_max__342__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__342__b))
                                               ? (IData)(vlSelf->__Vfunc_max__342__a)
                                               : (IData)(vlSelf->__Vfunc_max__342__b));
        vlSelf->__Vfunc_max__341__b = vlSelf->__Vfunc_max__342__Vfuncout;
        vlSelf->__Vfunc_max__341__a = (0xffU & (vlSelf->__Vfunc_max4__339__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__341__Vfuncout = (((IData)(vlSelf->__Vfunc_max__341__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__341__b))
                                               ? (IData)(vlSelf->__Vfunc_max__341__a)
                                               : (IData)(vlSelf->__Vfunc_max__341__b));
        vlSelf->__Vfunc_max__340__b = vlSelf->__Vfunc_max__341__Vfuncout;
        vlSelf->__Vfunc_max__340__a = (0xffU & vlSelf->__Vfunc_max4__339__a);
        vlSelf->__Vfunc_max__340__Vfuncout = (((IData)(vlSelf->__Vfunc_max__340__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__340__b))
                                               ? (IData)(vlSelf->__Vfunc_max__340__a)
                                               : (IData)(vlSelf->__Vfunc_max__340__b));
        vlSelf->__Vfunc_max4__339__Vfuncout = vlSelf->__Vfunc_max__340__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__339__Vfuncout;
        vlSelf->__Vfunc_max4__343__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__346__b = (vlSelf->__Vfunc_max4__343__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__346__a = (0xffU & (vlSelf->__Vfunc_max4__343__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__346__Vfuncout = (((IData)(vlSelf->__Vfunc_max__346__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__346__b))
                                               ? (IData)(vlSelf->__Vfunc_max__346__a)
                                               : (IData)(vlSelf->__Vfunc_max__346__b));
        vlSelf->__Vfunc_max__345__b = vlSelf->__Vfunc_max__346__Vfuncout;
        vlSelf->__Vfunc_max__345__a = (0xffU & (vlSelf->__Vfunc_max4__343__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__345__Vfuncout = (((IData)(vlSelf->__Vfunc_max__345__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__345__b))
                                               ? (IData)(vlSelf->__Vfunc_max__345__a)
                                               : (IData)(vlSelf->__Vfunc_max__345__b));
        vlSelf->__Vfunc_max__344__b = vlSelf->__Vfunc_max__345__Vfuncout;
        vlSelf->__Vfunc_max__344__a = (0xffU & vlSelf->__Vfunc_max4__343__a);
        vlSelf->__Vfunc_max__344__Vfuncout = (((IData)(vlSelf->__Vfunc_max__344__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__344__b))
                                               ? (IData)(vlSelf->__Vfunc_max__344__a)
                                               : (IData)(vlSelf->__Vfunc_max__344__b));
        vlSelf->__Vfunc_max4__343__Vfuncout = vlSelf->__Vfunc_max__344__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__343__Vfuncout;
        vlSelf->__Vfunc_max4__347__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__350__b = (vlSelf->__Vfunc_max4__347__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__350__a = (0xffU & (vlSelf->__Vfunc_max4__347__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__350__Vfuncout = (((IData)(vlSelf->__Vfunc_max__350__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__350__b))
                                               ? (IData)(vlSelf->__Vfunc_max__350__a)
                                               : (IData)(vlSelf->__Vfunc_max__350__b));
        vlSelf->__Vfunc_max__349__b = vlSelf->__Vfunc_max__350__Vfuncout;
        vlSelf->__Vfunc_max__349__a = (0xffU & (vlSelf->__Vfunc_max4__347__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__349__Vfuncout = (((IData)(vlSelf->__Vfunc_max__349__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__349__b))
                                               ? (IData)(vlSelf->__Vfunc_max__349__a)
                                               : (IData)(vlSelf->__Vfunc_max__349__b));
        vlSelf->__Vfunc_max__348__b = vlSelf->__Vfunc_max__349__Vfuncout;
        vlSelf->__Vfunc_max__348__a = (0xffU & vlSelf->__Vfunc_max4__347__a);
        vlSelf->__Vfunc_max__348__Vfuncout = (((IData)(vlSelf->__Vfunc_max__348__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__348__b))
                                               ? (IData)(vlSelf->__Vfunc_max__348__a)
                                               : (IData)(vlSelf->__Vfunc_max__348__b));
        vlSelf->__Vfunc_max4__347__Vfuncout = vlSelf->__Vfunc_max__348__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__347__Vfuncout;
        vlSelf->__Vfunc_max4__351__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__354__b = (vlSelf->__Vfunc_max4__351__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__354__a = (0xffU & (vlSelf->__Vfunc_max4__351__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__354__Vfuncout = (((IData)(vlSelf->__Vfunc_max__354__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__354__b))
                                               ? (IData)(vlSelf->__Vfunc_max__354__a)
                                               : (IData)(vlSelf->__Vfunc_max__354__b));
        vlSelf->__Vfunc_max__353__b = vlSelf->__Vfunc_max__354__Vfuncout;
        vlSelf->__Vfunc_max__353__a = (0xffU & (vlSelf->__Vfunc_max4__351__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__353__Vfuncout = (((IData)(vlSelf->__Vfunc_max__353__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__353__b))
                                               ? (IData)(vlSelf->__Vfunc_max__353__a)
                                               : (IData)(vlSelf->__Vfunc_max__353__b));
        vlSelf->__Vfunc_max__352__b = vlSelf->__Vfunc_max__353__Vfuncout;
        vlSelf->__Vfunc_max__352__a = (0xffU & vlSelf->__Vfunc_max4__351__a);
        vlSelf->__Vfunc_max__352__Vfuncout = (((IData)(vlSelf->__Vfunc_max__352__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__352__b))
                                               ? (IData)(vlSelf->__Vfunc_max__352__a)
                                               : (IData)(vlSelf->__Vfunc_max__352__b));
        vlSelf->__Vfunc_max4__351__Vfuncout = vlSelf->__Vfunc_max__352__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__351__Vfuncout;
        vlSelf->__Vfunc_max4__355__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__358__b = (vlSelf->__Vfunc_max4__355__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__358__a = (0xffU & (vlSelf->__Vfunc_max4__355__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__358__Vfuncout = (((IData)(vlSelf->__Vfunc_max__358__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__358__b))
                                               ? (IData)(vlSelf->__Vfunc_max__358__a)
                                               : (IData)(vlSelf->__Vfunc_max__358__b));
        vlSelf->__Vfunc_max__357__b = vlSelf->__Vfunc_max__358__Vfuncout;
        vlSelf->__Vfunc_max__357__a = (0xffU & (vlSelf->__Vfunc_max4__355__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__357__Vfuncout = (((IData)(vlSelf->__Vfunc_max__357__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__357__b))
                                               ? (IData)(vlSelf->__Vfunc_max__357__a)
                                               : (IData)(vlSelf->__Vfunc_max__357__b));
        vlSelf->__Vfunc_max__356__b = vlSelf->__Vfunc_max__357__Vfuncout;
        vlSelf->__Vfunc_max__356__a = (0xffU & vlSelf->__Vfunc_max4__355__a);
        vlSelf->__Vfunc_max__356__Vfuncout = (((IData)(vlSelf->__Vfunc_max__356__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__356__b))
                                               ? (IData)(vlSelf->__Vfunc_max__356__a)
                                               : (IData)(vlSelf->__Vfunc_max__356__b));
        vlSelf->__Vfunc_max4__355__Vfuncout = vlSelf->__Vfunc_max__356__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__355__Vfuncout;
        vlSelf->__Vfunc_max4__359__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__362__b = (vlSelf->__Vfunc_max4__359__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__362__a = (0xffU & (vlSelf->__Vfunc_max4__359__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__362__Vfuncout = (((IData)(vlSelf->__Vfunc_max__362__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__362__b))
                                               ? (IData)(vlSelf->__Vfunc_max__362__a)
                                               : (IData)(vlSelf->__Vfunc_max__362__b));
        vlSelf->__Vfunc_max__361__b = vlSelf->__Vfunc_max__362__Vfuncout;
        vlSelf->__Vfunc_max__361__a = (0xffU & (vlSelf->__Vfunc_max4__359__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__361__Vfuncout = (((IData)(vlSelf->__Vfunc_max__361__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__361__b))
                                               ? (IData)(vlSelf->__Vfunc_max__361__a)
                                               : (IData)(vlSelf->__Vfunc_max__361__b));
        vlSelf->__Vfunc_max__360__b = vlSelf->__Vfunc_max__361__Vfuncout;
        vlSelf->__Vfunc_max__360__a = (0xffU & vlSelf->__Vfunc_max4__359__a);
        vlSelf->__Vfunc_max__360__Vfuncout = (((IData)(vlSelf->__Vfunc_max__360__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__360__b))
                                               ? (IData)(vlSelf->__Vfunc_max__360__a)
                                               : (IData)(vlSelf->__Vfunc_max__360__b));
        vlSelf->__Vfunc_max4__359__Vfuncout = vlSelf->__Vfunc_max__360__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__359__Vfuncout;
        vlSelf->__Vfunc_max4__363__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__366__b = (vlSelf->__Vfunc_max4__363__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__366__a = (0xffU & (vlSelf->__Vfunc_max4__363__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__366__Vfuncout = (((IData)(vlSelf->__Vfunc_max__366__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__366__b))
                                               ? (IData)(vlSelf->__Vfunc_max__366__a)
                                               : (IData)(vlSelf->__Vfunc_max__366__b));
        vlSelf->__Vfunc_max__365__b = vlSelf->__Vfunc_max__366__Vfuncout;
        vlSelf->__Vfunc_max__365__a = (0xffU & (vlSelf->__Vfunc_max4__363__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__365__Vfuncout = (((IData)(vlSelf->__Vfunc_max__365__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__365__b))
                                               ? (IData)(vlSelf->__Vfunc_max__365__a)
                                               : (IData)(vlSelf->__Vfunc_max__365__b));
        vlSelf->__Vfunc_max__364__b = vlSelf->__Vfunc_max__365__Vfuncout;
        vlSelf->__Vfunc_max__364__a = (0xffU & vlSelf->__Vfunc_max4__363__a);
        vlSelf->__Vfunc_max__364__Vfuncout = (((IData)(vlSelf->__Vfunc_max__364__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__364__b))
                                               ? (IData)(vlSelf->__Vfunc_max__364__a)
                                               : (IData)(vlSelf->__Vfunc_max__364__b));
        vlSelf->__Vfunc_max4__363__Vfuncout = vlSelf->__Vfunc_max__364__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__363__Vfuncout;
        vlSelf->__Vfunc_max4__367__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__370__b = (vlSelf->__Vfunc_max4__367__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__370__a = (0xffU & (vlSelf->__Vfunc_max4__367__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__370__Vfuncout = (((IData)(vlSelf->__Vfunc_max__370__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__370__b))
                                               ? (IData)(vlSelf->__Vfunc_max__370__a)
                                               : (IData)(vlSelf->__Vfunc_max__370__b));
        vlSelf->__Vfunc_max__369__b = vlSelf->__Vfunc_max__370__Vfuncout;
        vlSelf->__Vfunc_max__369__a = (0xffU & (vlSelf->__Vfunc_max4__367__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__369__Vfuncout = (((IData)(vlSelf->__Vfunc_max__369__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__369__b))
                                               ? (IData)(vlSelf->__Vfunc_max__369__a)
                                               : (IData)(vlSelf->__Vfunc_max__369__b));
        vlSelf->__Vfunc_max__368__b = vlSelf->__Vfunc_max__369__Vfuncout;
        vlSelf->__Vfunc_max__368__a = (0xffU & vlSelf->__Vfunc_max4__367__a);
        vlSelf->__Vfunc_max__368__Vfuncout = (((IData)(vlSelf->__Vfunc_max__368__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__368__b))
                                               ? (IData)(vlSelf->__Vfunc_max__368__a)
                                               : (IData)(vlSelf->__Vfunc_max__368__b));
        vlSelf->__Vfunc_max4__367__Vfuncout = vlSelf->__Vfunc_max__368__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__367__Vfuncout;
        vlSelf->__Vfunc_max4__371__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__374__b = (vlSelf->__Vfunc_max4__371__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__374__a = (0xffU & (vlSelf->__Vfunc_max4__371__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__374__Vfuncout = (((IData)(vlSelf->__Vfunc_max__374__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__374__b))
                                               ? (IData)(vlSelf->__Vfunc_max__374__a)
                                               : (IData)(vlSelf->__Vfunc_max__374__b));
        vlSelf->__Vfunc_max__373__b = vlSelf->__Vfunc_max__374__Vfuncout;
        vlSelf->__Vfunc_max__373__a = (0xffU & (vlSelf->__Vfunc_max4__371__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__373__Vfuncout = (((IData)(vlSelf->__Vfunc_max__373__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__373__b))
                                               ? (IData)(vlSelf->__Vfunc_max__373__a)
                                               : (IData)(vlSelf->__Vfunc_max__373__b));
        vlSelf->__Vfunc_max__372__b = vlSelf->__Vfunc_max__373__Vfuncout;
        vlSelf->__Vfunc_max__372__a = (0xffU & vlSelf->__Vfunc_max4__371__a);
        vlSelf->__Vfunc_max__372__Vfuncout = (((IData)(vlSelf->__Vfunc_max__372__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__372__b))
                                               ? (IData)(vlSelf->__Vfunc_max__372__a)
                                               : (IData)(vlSelf->__Vfunc_max__372__b));
        vlSelf->__Vfunc_max4__371__Vfuncout = vlSelf->__Vfunc_max__372__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__371__Vfuncout;
        vlSelf->__Vfunc_max4__375__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__378__b = (vlSelf->__Vfunc_max4__375__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__378__a = (0xffU & (vlSelf->__Vfunc_max4__375__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__378__Vfuncout = (((IData)(vlSelf->__Vfunc_max__378__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__378__b))
                                               ? (IData)(vlSelf->__Vfunc_max__378__a)
                                               : (IData)(vlSelf->__Vfunc_max__378__b));
        vlSelf->__Vfunc_max__377__b = vlSelf->__Vfunc_max__378__Vfuncout;
        vlSelf->__Vfunc_max__377__a = (0xffU & (vlSelf->__Vfunc_max4__375__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__377__Vfuncout = (((IData)(vlSelf->__Vfunc_max__377__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__377__b))
                                               ? (IData)(vlSelf->__Vfunc_max__377__a)
                                               : (IData)(vlSelf->__Vfunc_max__377__b));
        vlSelf->__Vfunc_max__376__b = vlSelf->__Vfunc_max__377__Vfuncout;
        vlSelf->__Vfunc_max__376__a = (0xffU & vlSelf->__Vfunc_max4__375__a);
        vlSelf->__Vfunc_max__376__Vfuncout = (((IData)(vlSelf->__Vfunc_max__376__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__376__b))
                                               ? (IData)(vlSelf->__Vfunc_max__376__a)
                                               : (IData)(vlSelf->__Vfunc_max__376__b));
        vlSelf->__Vfunc_max4__375__Vfuncout = vlSelf->__Vfunc_max__376__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__375__Vfuncout;
        vlSelf->__Vfunc_max4__379__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__382__b = (vlSelf->__Vfunc_max4__379__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__382__a = (0xffU & (vlSelf->__Vfunc_max4__379__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__382__Vfuncout = (((IData)(vlSelf->__Vfunc_max__382__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__382__b))
                                               ? (IData)(vlSelf->__Vfunc_max__382__a)
                                               : (IData)(vlSelf->__Vfunc_max__382__b));
        vlSelf->__Vfunc_max__381__b = vlSelf->__Vfunc_max__382__Vfuncout;
        vlSelf->__Vfunc_max__381__a = (0xffU & (vlSelf->__Vfunc_max4__379__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__381__Vfuncout = (((IData)(vlSelf->__Vfunc_max__381__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__381__b))
                                               ? (IData)(vlSelf->__Vfunc_max__381__a)
                                               : (IData)(vlSelf->__Vfunc_max__381__b));
        vlSelf->__Vfunc_max__380__b = vlSelf->__Vfunc_max__381__Vfuncout;
        vlSelf->__Vfunc_max__380__a = (0xffU & vlSelf->__Vfunc_max4__379__a);
        vlSelf->__Vfunc_max__380__Vfuncout = (((IData)(vlSelf->__Vfunc_max__380__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__380__b))
                                               ? (IData)(vlSelf->__Vfunc_max__380__a)
                                               : (IData)(vlSelf->__Vfunc_max__380__b));
        vlSelf->__Vfunc_max4__379__Vfuncout = vlSelf->__Vfunc_max__380__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__379__Vfuncout;
        vlSelf->__Vfunc_max4__383__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__386__b = (vlSelf->__Vfunc_max4__383__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__386__a = (0xffU & (vlSelf->__Vfunc_max4__383__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__386__Vfuncout = (((IData)(vlSelf->__Vfunc_max__386__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__386__b))
                                               ? (IData)(vlSelf->__Vfunc_max__386__a)
                                               : (IData)(vlSelf->__Vfunc_max__386__b));
        vlSelf->__Vfunc_max__385__b = vlSelf->__Vfunc_max__386__Vfuncout;
        vlSelf->__Vfunc_max__385__a = (0xffU & (vlSelf->__Vfunc_max4__383__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__385__Vfuncout = (((IData)(vlSelf->__Vfunc_max__385__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__385__b))
                                               ? (IData)(vlSelf->__Vfunc_max__385__a)
                                               : (IData)(vlSelf->__Vfunc_max__385__b));
        vlSelf->__Vfunc_max__384__b = vlSelf->__Vfunc_max__385__Vfuncout;
        vlSelf->__Vfunc_max__384__a = (0xffU & vlSelf->__Vfunc_max4__383__a);
        vlSelf->__Vfunc_max__384__Vfuncout = (((IData)(vlSelf->__Vfunc_max__384__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__384__b))
                                               ? (IData)(vlSelf->__Vfunc_max__384__a)
                                               : (IData)(vlSelf->__Vfunc_max__384__b));
        vlSelf->__Vfunc_max4__383__Vfuncout = vlSelf->__Vfunc_max__384__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__383__Vfuncout;
    } else if ((0x81U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
    } else if ((0x82U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2[0xeU])))) 
                       >> 0x20U));
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] = 0U;
    }
}
