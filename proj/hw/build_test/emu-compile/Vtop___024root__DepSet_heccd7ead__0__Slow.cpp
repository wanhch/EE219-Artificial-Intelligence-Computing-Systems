// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
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
    } else if ((0x85U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
        vlSelf->__Vfunc_max4__387__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__390__b = (vlSelf->__Vfunc_max4__387__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__390__a = (0xffU & (vlSelf->__Vfunc_max4__387__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__390__Vfuncout = (((IData)(vlSelf->__Vfunc_max__390__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__390__b))
                                               ? (IData)(vlSelf->__Vfunc_max__390__a)
                                               : (IData)(vlSelf->__Vfunc_max__390__b));
        vlSelf->__Vfunc_max__389__b = vlSelf->__Vfunc_max__390__Vfuncout;
        vlSelf->__Vfunc_max__389__a = (0xffU & (vlSelf->__Vfunc_max4__387__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__389__Vfuncout = (((IData)(vlSelf->__Vfunc_max__389__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__389__b))
                                               ? (IData)(vlSelf->__Vfunc_max__389__a)
                                               : (IData)(vlSelf->__Vfunc_max__389__b));
        vlSelf->__Vfunc_max__388__b = vlSelf->__Vfunc_max__389__Vfuncout;
        vlSelf->__Vfunc_max__388__a = (0xffU & vlSelf->__Vfunc_max4__387__a);
        vlSelf->__Vfunc_max__388__Vfuncout = (((IData)(vlSelf->__Vfunc_max__388__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__388__b))
                                               ? (IData)(vlSelf->__Vfunc_max__388__a)
                                               : (IData)(vlSelf->__Vfunc_max__388__b));
        vlSelf->__Vfunc_max4__387__Vfuncout = vlSelf->__Vfunc_max__388__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__387__Vfuncout;
        vlSelf->__Vfunc_max4__391__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__394__b = (vlSelf->__Vfunc_max4__391__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__394__a = (0xffU & (vlSelf->__Vfunc_max4__391__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__394__Vfuncout = (((IData)(vlSelf->__Vfunc_max__394__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__394__b))
                                               ? (IData)(vlSelf->__Vfunc_max__394__a)
                                               : (IData)(vlSelf->__Vfunc_max__394__b));
        vlSelf->__Vfunc_max__393__b = vlSelf->__Vfunc_max__394__Vfuncout;
        vlSelf->__Vfunc_max__393__a = (0xffU & (vlSelf->__Vfunc_max4__391__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__393__Vfuncout = (((IData)(vlSelf->__Vfunc_max__393__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__393__b))
                                               ? (IData)(vlSelf->__Vfunc_max__393__a)
                                               : (IData)(vlSelf->__Vfunc_max__393__b));
        vlSelf->__Vfunc_max__392__b = vlSelf->__Vfunc_max__393__Vfuncout;
        vlSelf->__Vfunc_max__392__a = (0xffU & vlSelf->__Vfunc_max4__391__a);
        vlSelf->__Vfunc_max__392__Vfuncout = (((IData)(vlSelf->__Vfunc_max__392__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__392__b))
                                               ? (IData)(vlSelf->__Vfunc_max__392__a)
                                               : (IData)(vlSelf->__Vfunc_max__392__b));
        vlSelf->__Vfunc_max4__391__Vfuncout = vlSelf->__Vfunc_max__392__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__391__Vfuncout;
        vlSelf->__Vfunc_max4__395__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__398__b = (vlSelf->__Vfunc_max4__395__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__398__a = (0xffU & (vlSelf->__Vfunc_max4__395__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__398__Vfuncout = (((IData)(vlSelf->__Vfunc_max__398__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__398__b))
                                               ? (IData)(vlSelf->__Vfunc_max__398__a)
                                               : (IData)(vlSelf->__Vfunc_max__398__b));
        vlSelf->__Vfunc_max__397__b = vlSelf->__Vfunc_max__398__Vfuncout;
        vlSelf->__Vfunc_max__397__a = (0xffU & (vlSelf->__Vfunc_max4__395__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__397__Vfuncout = (((IData)(vlSelf->__Vfunc_max__397__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__397__b))
                                               ? (IData)(vlSelf->__Vfunc_max__397__a)
                                               : (IData)(vlSelf->__Vfunc_max__397__b));
        vlSelf->__Vfunc_max__396__b = vlSelf->__Vfunc_max__397__Vfuncout;
        vlSelf->__Vfunc_max__396__a = (0xffU & vlSelf->__Vfunc_max4__395__a);
        vlSelf->__Vfunc_max__396__Vfuncout = (((IData)(vlSelf->__Vfunc_max__396__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__396__b))
                                               ? (IData)(vlSelf->__Vfunc_max__396__a)
                                               : (IData)(vlSelf->__Vfunc_max__396__b));
        vlSelf->__Vfunc_max4__395__Vfuncout = vlSelf->__Vfunc_max__396__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__395__Vfuncout;
        vlSelf->__Vfunc_max4__399__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__402__b = (vlSelf->__Vfunc_max4__399__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__402__a = (0xffU & (vlSelf->__Vfunc_max4__399__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__402__Vfuncout = (((IData)(vlSelf->__Vfunc_max__402__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__402__b))
                                               ? (IData)(vlSelf->__Vfunc_max__402__a)
                                               : (IData)(vlSelf->__Vfunc_max__402__b));
        vlSelf->__Vfunc_max__401__b = vlSelf->__Vfunc_max__402__Vfuncout;
        vlSelf->__Vfunc_max__401__a = (0xffU & (vlSelf->__Vfunc_max4__399__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__401__Vfuncout = (((IData)(vlSelf->__Vfunc_max__401__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__401__b))
                                               ? (IData)(vlSelf->__Vfunc_max__401__a)
                                               : (IData)(vlSelf->__Vfunc_max__401__b));
        vlSelf->__Vfunc_max__400__b = vlSelf->__Vfunc_max__401__Vfuncout;
        vlSelf->__Vfunc_max__400__a = (0xffU & vlSelf->__Vfunc_max4__399__a);
        vlSelf->__Vfunc_max__400__Vfuncout = (((IData)(vlSelf->__Vfunc_max__400__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__400__b))
                                               ? (IData)(vlSelf->__Vfunc_max__400__a)
                                               : (IData)(vlSelf->__Vfunc_max__400__b));
        vlSelf->__Vfunc_max4__399__Vfuncout = vlSelf->__Vfunc_max__400__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__399__Vfuncout;
        vlSelf->__Vfunc_max4__403__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__406__b = (vlSelf->__Vfunc_max4__403__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__406__a = (0xffU & (vlSelf->__Vfunc_max4__403__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__406__Vfuncout = (((IData)(vlSelf->__Vfunc_max__406__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__406__b))
                                               ? (IData)(vlSelf->__Vfunc_max__406__a)
                                               : (IData)(vlSelf->__Vfunc_max__406__b));
        vlSelf->__Vfunc_max__405__b = vlSelf->__Vfunc_max__406__Vfuncout;
        vlSelf->__Vfunc_max__405__a = (0xffU & (vlSelf->__Vfunc_max4__403__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__405__Vfuncout = (((IData)(vlSelf->__Vfunc_max__405__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__405__b))
                                               ? (IData)(vlSelf->__Vfunc_max__405__a)
                                               : (IData)(vlSelf->__Vfunc_max__405__b));
        vlSelf->__Vfunc_max__404__b = vlSelf->__Vfunc_max__405__Vfuncout;
        vlSelf->__Vfunc_max__404__a = (0xffU & vlSelf->__Vfunc_max4__403__a);
        vlSelf->__Vfunc_max__404__Vfuncout = (((IData)(vlSelf->__Vfunc_max__404__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__404__b))
                                               ? (IData)(vlSelf->__Vfunc_max__404__a)
                                               : (IData)(vlSelf->__Vfunc_max__404__b));
        vlSelf->__Vfunc_max4__403__Vfuncout = vlSelf->__Vfunc_max__404__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__403__Vfuncout;
        vlSelf->__Vfunc_max4__407__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__410__b = (vlSelf->__Vfunc_max4__407__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__410__a = (0xffU & (vlSelf->__Vfunc_max4__407__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__410__Vfuncout = (((IData)(vlSelf->__Vfunc_max__410__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__410__b))
                                               ? (IData)(vlSelf->__Vfunc_max__410__a)
                                               : (IData)(vlSelf->__Vfunc_max__410__b));
        vlSelf->__Vfunc_max__409__b = vlSelf->__Vfunc_max__410__Vfuncout;
        vlSelf->__Vfunc_max__409__a = (0xffU & (vlSelf->__Vfunc_max4__407__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__409__Vfuncout = (((IData)(vlSelf->__Vfunc_max__409__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__409__b))
                                               ? (IData)(vlSelf->__Vfunc_max__409__a)
                                               : (IData)(vlSelf->__Vfunc_max__409__b));
        vlSelf->__Vfunc_max__408__b = vlSelf->__Vfunc_max__409__Vfuncout;
        vlSelf->__Vfunc_max__408__a = (0xffU & vlSelf->__Vfunc_max4__407__a);
        vlSelf->__Vfunc_max__408__Vfuncout = (((IData)(vlSelf->__Vfunc_max__408__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__408__b))
                                               ? (IData)(vlSelf->__Vfunc_max__408__a)
                                               : (IData)(vlSelf->__Vfunc_max__408__b));
        vlSelf->__Vfunc_max4__407__Vfuncout = vlSelf->__Vfunc_max__408__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__407__Vfuncout;
        vlSelf->__Vfunc_max4__411__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__414__b = (vlSelf->__Vfunc_max4__411__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__414__a = (0xffU & (vlSelf->__Vfunc_max4__411__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__414__Vfuncout = (((IData)(vlSelf->__Vfunc_max__414__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__414__b))
                                               ? (IData)(vlSelf->__Vfunc_max__414__a)
                                               : (IData)(vlSelf->__Vfunc_max__414__b));
        vlSelf->__Vfunc_max__413__b = vlSelf->__Vfunc_max__414__Vfuncout;
        vlSelf->__Vfunc_max__413__a = (0xffU & (vlSelf->__Vfunc_max4__411__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__413__Vfuncout = (((IData)(vlSelf->__Vfunc_max__413__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__413__b))
                                               ? (IData)(vlSelf->__Vfunc_max__413__a)
                                               : (IData)(vlSelf->__Vfunc_max__413__b));
        vlSelf->__Vfunc_max__412__b = vlSelf->__Vfunc_max__413__Vfuncout;
        vlSelf->__Vfunc_max__412__a = (0xffU & vlSelf->__Vfunc_max4__411__a);
        vlSelf->__Vfunc_max__412__Vfuncout = (((IData)(vlSelf->__Vfunc_max__412__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__412__b))
                                               ? (IData)(vlSelf->__Vfunc_max__412__a)
                                               : (IData)(vlSelf->__Vfunc_max__412__b));
        vlSelf->__Vfunc_max4__411__Vfuncout = vlSelf->__Vfunc_max__412__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__411__Vfuncout;
        vlSelf->__Vfunc_max4__415__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__418__b = (vlSelf->__Vfunc_max4__415__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__418__a = (0xffU & (vlSelf->__Vfunc_max4__415__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__418__Vfuncout = (((IData)(vlSelf->__Vfunc_max__418__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__418__b))
                                               ? (IData)(vlSelf->__Vfunc_max__418__a)
                                               : (IData)(vlSelf->__Vfunc_max__418__b));
        vlSelf->__Vfunc_max__417__b = vlSelf->__Vfunc_max__418__Vfuncout;
        vlSelf->__Vfunc_max__417__a = (0xffU & (vlSelf->__Vfunc_max4__415__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__417__Vfuncout = (((IData)(vlSelf->__Vfunc_max__417__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__417__b))
                                               ? (IData)(vlSelf->__Vfunc_max__417__a)
                                               : (IData)(vlSelf->__Vfunc_max__417__b));
        vlSelf->__Vfunc_max__416__b = vlSelf->__Vfunc_max__417__Vfuncout;
        vlSelf->__Vfunc_max__416__a = (0xffU & vlSelf->__Vfunc_max4__415__a);
        vlSelf->__Vfunc_max__416__Vfuncout = (((IData)(vlSelf->__Vfunc_max__416__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__416__b))
                                               ? (IData)(vlSelf->__Vfunc_max__416__a)
                                               : (IData)(vlSelf->__Vfunc_max__416__b));
        vlSelf->__Vfunc_max4__415__Vfuncout = vlSelf->__Vfunc_max__416__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__415__Vfuncout;
        vlSelf->__Vfunc_max4__419__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__422__b = (vlSelf->__Vfunc_max4__419__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__422__a = (0xffU & (vlSelf->__Vfunc_max4__419__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__422__Vfuncout = (((IData)(vlSelf->__Vfunc_max__422__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__422__b))
                                               ? (IData)(vlSelf->__Vfunc_max__422__a)
                                               : (IData)(vlSelf->__Vfunc_max__422__b));
        vlSelf->__Vfunc_max__421__b = vlSelf->__Vfunc_max__422__Vfuncout;
        vlSelf->__Vfunc_max__421__a = (0xffU & (vlSelf->__Vfunc_max4__419__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__421__Vfuncout = (((IData)(vlSelf->__Vfunc_max__421__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__421__b))
                                               ? (IData)(vlSelf->__Vfunc_max__421__a)
                                               : (IData)(vlSelf->__Vfunc_max__421__b));
        vlSelf->__Vfunc_max__420__b = vlSelf->__Vfunc_max__421__Vfuncout;
        vlSelf->__Vfunc_max__420__a = (0xffU & vlSelf->__Vfunc_max4__419__a);
        vlSelf->__Vfunc_max__420__Vfuncout = (((IData)(vlSelf->__Vfunc_max__420__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__420__b))
                                               ? (IData)(vlSelf->__Vfunc_max__420__a)
                                               : (IData)(vlSelf->__Vfunc_max__420__b));
        vlSelf->__Vfunc_max4__419__Vfuncout = vlSelf->__Vfunc_max__420__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__419__Vfuncout;
        vlSelf->__Vfunc_max4__423__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__426__b = (vlSelf->__Vfunc_max4__423__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__426__a = (0xffU & (vlSelf->__Vfunc_max4__423__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__426__Vfuncout = (((IData)(vlSelf->__Vfunc_max__426__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__426__b))
                                               ? (IData)(vlSelf->__Vfunc_max__426__a)
                                               : (IData)(vlSelf->__Vfunc_max__426__b));
        vlSelf->__Vfunc_max__425__b = vlSelf->__Vfunc_max__426__Vfuncout;
        vlSelf->__Vfunc_max__425__a = (0xffU & (vlSelf->__Vfunc_max4__423__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__425__Vfuncout = (((IData)(vlSelf->__Vfunc_max__425__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__425__b))
                                               ? (IData)(vlSelf->__Vfunc_max__425__a)
                                               : (IData)(vlSelf->__Vfunc_max__425__b));
        vlSelf->__Vfunc_max__424__b = vlSelf->__Vfunc_max__425__Vfuncout;
        vlSelf->__Vfunc_max__424__a = (0xffU & vlSelf->__Vfunc_max4__423__a);
        vlSelf->__Vfunc_max__424__Vfuncout = (((IData)(vlSelf->__Vfunc_max__424__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__424__b))
                                               ? (IData)(vlSelf->__Vfunc_max__424__a)
                                               : (IData)(vlSelf->__Vfunc_max__424__b));
        vlSelf->__Vfunc_max4__423__Vfuncout = vlSelf->__Vfunc_max__424__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__423__Vfuncout;
        vlSelf->__Vfunc_max4__427__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__430__b = (vlSelf->__Vfunc_max4__427__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__430__a = (0xffU & (vlSelf->__Vfunc_max4__427__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__430__Vfuncout = (((IData)(vlSelf->__Vfunc_max__430__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__430__b))
                                               ? (IData)(vlSelf->__Vfunc_max__430__a)
                                               : (IData)(vlSelf->__Vfunc_max__430__b));
        vlSelf->__Vfunc_max__429__b = vlSelf->__Vfunc_max__430__Vfuncout;
        vlSelf->__Vfunc_max__429__a = (0xffU & (vlSelf->__Vfunc_max4__427__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__429__Vfuncout = (((IData)(vlSelf->__Vfunc_max__429__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__429__b))
                                               ? (IData)(vlSelf->__Vfunc_max__429__a)
                                               : (IData)(vlSelf->__Vfunc_max__429__b));
        vlSelf->__Vfunc_max__428__b = vlSelf->__Vfunc_max__429__Vfuncout;
        vlSelf->__Vfunc_max__428__a = (0xffU & vlSelf->__Vfunc_max4__427__a);
        vlSelf->__Vfunc_max__428__Vfuncout = (((IData)(vlSelf->__Vfunc_max__428__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__428__b))
                                               ? (IData)(vlSelf->__Vfunc_max__428__a)
                                               : (IData)(vlSelf->__Vfunc_max__428__b));
        vlSelf->__Vfunc_max4__427__Vfuncout = vlSelf->__Vfunc_max__428__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__427__Vfuncout;
        vlSelf->__Vfunc_max4__431__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__434__b = (vlSelf->__Vfunc_max4__431__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__434__a = (0xffU & (vlSelf->__Vfunc_max4__431__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__434__Vfuncout = (((IData)(vlSelf->__Vfunc_max__434__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__434__b))
                                               ? (IData)(vlSelf->__Vfunc_max__434__a)
                                               : (IData)(vlSelf->__Vfunc_max__434__b));
        vlSelf->__Vfunc_max__433__b = vlSelf->__Vfunc_max__434__Vfuncout;
        vlSelf->__Vfunc_max__433__a = (0xffU & (vlSelf->__Vfunc_max4__431__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__433__Vfuncout = (((IData)(vlSelf->__Vfunc_max__433__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__433__b))
                                               ? (IData)(vlSelf->__Vfunc_max__433__a)
                                               : (IData)(vlSelf->__Vfunc_max__433__b));
        vlSelf->__Vfunc_max__432__b = vlSelf->__Vfunc_max__433__Vfuncout;
        vlSelf->__Vfunc_max__432__a = (0xffU & vlSelf->__Vfunc_max4__431__a);
        vlSelf->__Vfunc_max__432__Vfuncout = (((IData)(vlSelf->__Vfunc_max__432__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__432__b))
                                               ? (IData)(vlSelf->__Vfunc_max__432__a)
                                               : (IData)(vlSelf->__Vfunc_max__432__b));
        vlSelf->__Vfunc_max4__431__Vfuncout = vlSelf->__Vfunc_max__432__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__431__Vfuncout;
        vlSelf->__Vfunc_max4__435__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__438__b = (vlSelf->__Vfunc_max4__435__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__438__a = (0xffU & (vlSelf->__Vfunc_max4__435__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__438__Vfuncout = (((IData)(vlSelf->__Vfunc_max__438__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__438__b))
                                               ? (IData)(vlSelf->__Vfunc_max__438__a)
                                               : (IData)(vlSelf->__Vfunc_max__438__b));
        vlSelf->__Vfunc_max__437__b = vlSelf->__Vfunc_max__438__Vfuncout;
        vlSelf->__Vfunc_max__437__a = (0xffU & (vlSelf->__Vfunc_max4__435__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__437__Vfuncout = (((IData)(vlSelf->__Vfunc_max__437__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__437__b))
                                               ? (IData)(vlSelf->__Vfunc_max__437__a)
                                               : (IData)(vlSelf->__Vfunc_max__437__b));
        vlSelf->__Vfunc_max__436__b = vlSelf->__Vfunc_max__437__Vfuncout;
        vlSelf->__Vfunc_max__436__a = (0xffU & vlSelf->__Vfunc_max4__435__a);
        vlSelf->__Vfunc_max__436__Vfuncout = (((IData)(vlSelf->__Vfunc_max__436__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__436__b))
                                               ? (IData)(vlSelf->__Vfunc_max__436__a)
                                               : (IData)(vlSelf->__Vfunc_max__436__b));
        vlSelf->__Vfunc_max4__435__Vfuncout = vlSelf->__Vfunc_max__436__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__435__Vfuncout;
        vlSelf->__Vfunc_max4__439__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__442__b = (vlSelf->__Vfunc_max4__439__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__442__a = (0xffU & (vlSelf->__Vfunc_max4__439__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__442__Vfuncout = (((IData)(vlSelf->__Vfunc_max__442__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__442__b))
                                               ? (IData)(vlSelf->__Vfunc_max__442__a)
                                               : (IData)(vlSelf->__Vfunc_max__442__b));
        vlSelf->__Vfunc_max__441__b = vlSelf->__Vfunc_max__442__Vfuncout;
        vlSelf->__Vfunc_max__441__a = (0xffU & (vlSelf->__Vfunc_max4__439__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__441__Vfuncout = (((IData)(vlSelf->__Vfunc_max__441__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__441__b))
                                               ? (IData)(vlSelf->__Vfunc_max__441__a)
                                               : (IData)(vlSelf->__Vfunc_max__441__b));
        vlSelf->__Vfunc_max__440__b = vlSelf->__Vfunc_max__441__Vfuncout;
        vlSelf->__Vfunc_max__440__a = (0xffU & vlSelf->__Vfunc_max4__439__a);
        vlSelf->__Vfunc_max__440__Vfuncout = (((IData)(vlSelf->__Vfunc_max__440__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__440__b))
                                               ? (IData)(vlSelf->__Vfunc_max__440__a)
                                               : (IData)(vlSelf->__Vfunc_max__440__b));
        vlSelf->__Vfunc_max4__439__Vfuncout = vlSelf->__Vfunc_max__440__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__439__Vfuncout;
        vlSelf->__Vfunc_max4__443__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__446__b = (vlSelf->__Vfunc_max4__443__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__446__a = (0xffU & (vlSelf->__Vfunc_max4__443__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__446__Vfuncout = (((IData)(vlSelf->__Vfunc_max__446__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__446__b))
                                               ? (IData)(vlSelf->__Vfunc_max__446__a)
                                               : (IData)(vlSelf->__Vfunc_max__446__b));
        vlSelf->__Vfunc_max__445__b = vlSelf->__Vfunc_max__446__Vfuncout;
        vlSelf->__Vfunc_max__445__a = (0xffU & (vlSelf->__Vfunc_max4__443__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__445__Vfuncout = (((IData)(vlSelf->__Vfunc_max__445__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__445__b))
                                               ? (IData)(vlSelf->__Vfunc_max__445__a)
                                               : (IData)(vlSelf->__Vfunc_max__445__b));
        vlSelf->__Vfunc_max__444__b = vlSelf->__Vfunc_max__445__Vfuncout;
        vlSelf->__Vfunc_max__444__a = (0xffU & vlSelf->__Vfunc_max4__443__a);
        vlSelf->__Vfunc_max__444__Vfuncout = (((IData)(vlSelf->__Vfunc_max__444__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__444__b))
                                               ? (IData)(vlSelf->__Vfunc_max__444__a)
                                               : (IData)(vlSelf->__Vfunc_max__444__b));
        vlSelf->__Vfunc_max4__443__Vfuncout = vlSelf->__Vfunc_max__444__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__443__Vfuncout;
        vlSelf->__Vfunc_max4__447__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__450__b = (vlSelf->__Vfunc_max4__447__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__450__a = (0xffU & (vlSelf->__Vfunc_max4__447__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__450__Vfuncout = (((IData)(vlSelf->__Vfunc_max__450__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__450__b))
                                               ? (IData)(vlSelf->__Vfunc_max__450__a)
                                               : (IData)(vlSelf->__Vfunc_max__450__b));
        vlSelf->__Vfunc_max__449__b = vlSelf->__Vfunc_max__450__Vfuncout;
        vlSelf->__Vfunc_max__449__a = (0xffU & (vlSelf->__Vfunc_max4__447__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__449__Vfuncout = (((IData)(vlSelf->__Vfunc_max__449__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__449__b))
                                               ? (IData)(vlSelf->__Vfunc_max__449__a)
                                               : (IData)(vlSelf->__Vfunc_max__449__b));
        vlSelf->__Vfunc_max__448__b = vlSelf->__Vfunc_max__449__Vfuncout;
        vlSelf->__Vfunc_max__448__a = (0xffU & vlSelf->__Vfunc_max4__447__a);
        vlSelf->__Vfunc_max__448__Vfuncout = (((IData)(vlSelf->__Vfunc_max__448__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__448__b))
                                               ? (IData)(vlSelf->__Vfunc_max__448__a)
                                               : (IData)(vlSelf->__Vfunc_max__448__b));
        vlSelf->__Vfunc_max4__447__Vfuncout = vlSelf->__Vfunc_max__448__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__447__Vfuncout;
        vlSelf->__Vfunc_max4__451__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0U];
        vlSelf->__Vfunc_max__454__b = (vlSelf->__Vfunc_max4__451__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__454__a = (0xffU & (vlSelf->__Vfunc_max4__451__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__454__Vfuncout = (((IData)(vlSelf->__Vfunc_max__454__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__454__b))
                                               ? (IData)(vlSelf->__Vfunc_max__454__a)
                                               : (IData)(vlSelf->__Vfunc_max__454__b));
        vlSelf->__Vfunc_max__453__b = vlSelf->__Vfunc_max__454__Vfuncout;
        vlSelf->__Vfunc_max__453__a = (0xffU & (vlSelf->__Vfunc_max4__451__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__453__Vfuncout = (((IData)(vlSelf->__Vfunc_max__453__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__453__b))
                                               ? (IData)(vlSelf->__Vfunc_max__453__a)
                                               : (IData)(vlSelf->__Vfunc_max__453__b));
        vlSelf->__Vfunc_max__452__b = vlSelf->__Vfunc_max__453__Vfuncout;
        vlSelf->__Vfunc_max__452__a = (0xffU & vlSelf->__Vfunc_max4__451__a);
        vlSelf->__Vfunc_max__452__Vfuncout = (((IData)(vlSelf->__Vfunc_max__452__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__452__b))
                                               ? (IData)(vlSelf->__Vfunc_max__452__a)
                                               : (IData)(vlSelf->__Vfunc_max__452__b));
        vlSelf->__Vfunc_max4__451__Vfuncout = vlSelf->__Vfunc_max__452__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0U] 
            = vlSelf->__Vfunc_max4__451__Vfuncout;
        vlSelf->__Vfunc_max4__455__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[1U];
        vlSelf->__Vfunc_max__458__b = (vlSelf->__Vfunc_max4__455__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__458__a = (0xffU & (vlSelf->__Vfunc_max4__455__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__458__Vfuncout = (((IData)(vlSelf->__Vfunc_max__458__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__458__b))
                                               ? (IData)(vlSelf->__Vfunc_max__458__a)
                                               : (IData)(vlSelf->__Vfunc_max__458__b));
        vlSelf->__Vfunc_max__457__b = vlSelf->__Vfunc_max__458__Vfuncout;
        vlSelf->__Vfunc_max__457__a = (0xffU & (vlSelf->__Vfunc_max4__455__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__457__Vfuncout = (((IData)(vlSelf->__Vfunc_max__457__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__457__b))
                                               ? (IData)(vlSelf->__Vfunc_max__457__a)
                                               : (IData)(vlSelf->__Vfunc_max__457__b));
        vlSelf->__Vfunc_max__456__b = vlSelf->__Vfunc_max__457__Vfuncout;
        vlSelf->__Vfunc_max__456__a = (0xffU & vlSelf->__Vfunc_max4__455__a);
        vlSelf->__Vfunc_max__456__Vfuncout = (((IData)(vlSelf->__Vfunc_max__456__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__456__b))
                                               ? (IData)(vlSelf->__Vfunc_max__456__a)
                                               : (IData)(vlSelf->__Vfunc_max__456__b));
        vlSelf->__Vfunc_max4__455__Vfuncout = vlSelf->__Vfunc_max__456__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[1U] 
            = vlSelf->__Vfunc_max4__455__Vfuncout;
        vlSelf->__Vfunc_max4__459__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[2U];
        vlSelf->__Vfunc_max__462__b = (vlSelf->__Vfunc_max4__459__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__462__a = (0xffU & (vlSelf->__Vfunc_max4__459__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__462__Vfuncout = (((IData)(vlSelf->__Vfunc_max__462__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__462__b))
                                               ? (IData)(vlSelf->__Vfunc_max__462__a)
                                               : (IData)(vlSelf->__Vfunc_max__462__b));
        vlSelf->__Vfunc_max__461__b = vlSelf->__Vfunc_max__462__Vfuncout;
        vlSelf->__Vfunc_max__461__a = (0xffU & (vlSelf->__Vfunc_max4__459__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__461__Vfuncout = (((IData)(vlSelf->__Vfunc_max__461__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__461__b))
                                               ? (IData)(vlSelf->__Vfunc_max__461__a)
                                               : (IData)(vlSelf->__Vfunc_max__461__b));
        vlSelf->__Vfunc_max__460__b = vlSelf->__Vfunc_max__461__Vfuncout;
        vlSelf->__Vfunc_max__460__a = (0xffU & vlSelf->__Vfunc_max4__459__a);
        vlSelf->__Vfunc_max__460__Vfuncout = (((IData)(vlSelf->__Vfunc_max__460__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__460__b))
                                               ? (IData)(vlSelf->__Vfunc_max__460__a)
                                               : (IData)(vlSelf->__Vfunc_max__460__b));
        vlSelf->__Vfunc_max4__459__Vfuncout = vlSelf->__Vfunc_max__460__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[2U] 
            = vlSelf->__Vfunc_max4__459__Vfuncout;
        vlSelf->__Vfunc_max4__463__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[3U];
        vlSelf->__Vfunc_max__466__b = (vlSelf->__Vfunc_max4__463__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__466__a = (0xffU & (vlSelf->__Vfunc_max4__463__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__466__Vfuncout = (((IData)(vlSelf->__Vfunc_max__466__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__466__b))
                                               ? (IData)(vlSelf->__Vfunc_max__466__a)
                                               : (IData)(vlSelf->__Vfunc_max__466__b));
        vlSelf->__Vfunc_max__465__b = vlSelf->__Vfunc_max__466__Vfuncout;
        vlSelf->__Vfunc_max__465__a = (0xffU & (vlSelf->__Vfunc_max4__463__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__465__Vfuncout = (((IData)(vlSelf->__Vfunc_max__465__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__465__b))
                                               ? (IData)(vlSelf->__Vfunc_max__465__a)
                                               : (IData)(vlSelf->__Vfunc_max__465__b));
        vlSelf->__Vfunc_max__464__b = vlSelf->__Vfunc_max__465__Vfuncout;
        vlSelf->__Vfunc_max__464__a = (0xffU & vlSelf->__Vfunc_max4__463__a);
        vlSelf->__Vfunc_max__464__Vfuncout = (((IData)(vlSelf->__Vfunc_max__464__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__464__b))
                                               ? (IData)(vlSelf->__Vfunc_max__464__a)
                                               : (IData)(vlSelf->__Vfunc_max__464__b));
        vlSelf->__Vfunc_max4__463__Vfuncout = vlSelf->__Vfunc_max__464__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[3U] 
            = vlSelf->__Vfunc_max4__463__Vfuncout;
        vlSelf->__Vfunc_max4__467__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[4U];
        vlSelf->__Vfunc_max__470__b = (vlSelf->__Vfunc_max4__467__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__470__a = (0xffU & (vlSelf->__Vfunc_max4__467__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__470__Vfuncout = (((IData)(vlSelf->__Vfunc_max__470__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__470__b))
                                               ? (IData)(vlSelf->__Vfunc_max__470__a)
                                               : (IData)(vlSelf->__Vfunc_max__470__b));
        vlSelf->__Vfunc_max__469__b = vlSelf->__Vfunc_max__470__Vfuncout;
        vlSelf->__Vfunc_max__469__a = (0xffU & (vlSelf->__Vfunc_max4__467__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__469__Vfuncout = (((IData)(vlSelf->__Vfunc_max__469__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__469__b))
                                               ? (IData)(vlSelf->__Vfunc_max__469__a)
                                               : (IData)(vlSelf->__Vfunc_max__469__b));
        vlSelf->__Vfunc_max__468__b = vlSelf->__Vfunc_max__469__Vfuncout;
        vlSelf->__Vfunc_max__468__a = (0xffU & vlSelf->__Vfunc_max4__467__a);
        vlSelf->__Vfunc_max__468__Vfuncout = (((IData)(vlSelf->__Vfunc_max__468__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__468__b))
                                               ? (IData)(vlSelf->__Vfunc_max__468__a)
                                               : (IData)(vlSelf->__Vfunc_max__468__b));
        vlSelf->__Vfunc_max4__467__Vfuncout = vlSelf->__Vfunc_max__468__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[4U] 
            = vlSelf->__Vfunc_max4__467__Vfuncout;
        vlSelf->__Vfunc_max4__471__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[5U];
        vlSelf->__Vfunc_max__474__b = (vlSelf->__Vfunc_max4__471__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__474__a = (0xffU & (vlSelf->__Vfunc_max4__471__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__474__Vfuncout = (((IData)(vlSelf->__Vfunc_max__474__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__474__b))
                                               ? (IData)(vlSelf->__Vfunc_max__474__a)
                                               : (IData)(vlSelf->__Vfunc_max__474__b));
        vlSelf->__Vfunc_max__473__b = vlSelf->__Vfunc_max__474__Vfuncout;
        vlSelf->__Vfunc_max__473__a = (0xffU & (vlSelf->__Vfunc_max4__471__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__473__Vfuncout = (((IData)(vlSelf->__Vfunc_max__473__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__473__b))
                                               ? (IData)(vlSelf->__Vfunc_max__473__a)
                                               : (IData)(vlSelf->__Vfunc_max__473__b));
        vlSelf->__Vfunc_max__472__b = vlSelf->__Vfunc_max__473__Vfuncout;
        vlSelf->__Vfunc_max__472__a = (0xffU & vlSelf->__Vfunc_max4__471__a);
        vlSelf->__Vfunc_max__472__Vfuncout = (((IData)(vlSelf->__Vfunc_max__472__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__472__b))
                                               ? (IData)(vlSelf->__Vfunc_max__472__a)
                                               : (IData)(vlSelf->__Vfunc_max__472__b));
        vlSelf->__Vfunc_max4__471__Vfuncout = vlSelf->__Vfunc_max__472__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[5U] 
            = vlSelf->__Vfunc_max4__471__Vfuncout;
        vlSelf->__Vfunc_max4__475__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[6U];
        vlSelf->__Vfunc_max__478__b = (vlSelf->__Vfunc_max4__475__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__478__a = (0xffU & (vlSelf->__Vfunc_max4__475__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__478__Vfuncout = (((IData)(vlSelf->__Vfunc_max__478__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__478__b))
                                               ? (IData)(vlSelf->__Vfunc_max__478__a)
                                               : (IData)(vlSelf->__Vfunc_max__478__b));
        vlSelf->__Vfunc_max__477__b = vlSelf->__Vfunc_max__478__Vfuncout;
        vlSelf->__Vfunc_max__477__a = (0xffU & (vlSelf->__Vfunc_max4__475__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__477__Vfuncout = (((IData)(vlSelf->__Vfunc_max__477__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__477__b))
                                               ? (IData)(vlSelf->__Vfunc_max__477__a)
                                               : (IData)(vlSelf->__Vfunc_max__477__b));
        vlSelf->__Vfunc_max__476__b = vlSelf->__Vfunc_max__477__Vfuncout;
        vlSelf->__Vfunc_max__476__a = (0xffU & vlSelf->__Vfunc_max4__475__a);
        vlSelf->__Vfunc_max__476__Vfuncout = (((IData)(vlSelf->__Vfunc_max__476__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__476__b))
                                               ? (IData)(vlSelf->__Vfunc_max__476__a)
                                               : (IData)(vlSelf->__Vfunc_max__476__b));
        vlSelf->__Vfunc_max4__475__Vfuncout = vlSelf->__Vfunc_max__476__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[6U] 
            = vlSelf->__Vfunc_max4__475__Vfuncout;
        vlSelf->__Vfunc_max4__479__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[7U];
        vlSelf->__Vfunc_max__482__b = (vlSelf->__Vfunc_max4__479__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__482__a = (0xffU & (vlSelf->__Vfunc_max4__479__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__482__Vfuncout = (((IData)(vlSelf->__Vfunc_max__482__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__482__b))
                                               ? (IData)(vlSelf->__Vfunc_max__482__a)
                                               : (IData)(vlSelf->__Vfunc_max__482__b));
        vlSelf->__Vfunc_max__481__b = vlSelf->__Vfunc_max__482__Vfuncout;
        vlSelf->__Vfunc_max__481__a = (0xffU & (vlSelf->__Vfunc_max4__479__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__481__Vfuncout = (((IData)(vlSelf->__Vfunc_max__481__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__481__b))
                                               ? (IData)(vlSelf->__Vfunc_max__481__a)
                                               : (IData)(vlSelf->__Vfunc_max__481__b));
        vlSelf->__Vfunc_max__480__b = vlSelf->__Vfunc_max__481__Vfuncout;
        vlSelf->__Vfunc_max__480__a = (0xffU & vlSelf->__Vfunc_max4__479__a);
        vlSelf->__Vfunc_max__480__Vfuncout = (((IData)(vlSelf->__Vfunc_max__480__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__480__b))
                                               ? (IData)(vlSelf->__Vfunc_max__480__a)
                                               : (IData)(vlSelf->__Vfunc_max__480__b));
        vlSelf->__Vfunc_max4__479__Vfuncout = vlSelf->__Vfunc_max__480__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[7U] 
            = vlSelf->__Vfunc_max4__479__Vfuncout;
        vlSelf->__Vfunc_max4__483__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[8U];
        vlSelf->__Vfunc_max__486__b = (vlSelf->__Vfunc_max4__483__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__486__a = (0xffU & (vlSelf->__Vfunc_max4__483__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__486__Vfuncout = (((IData)(vlSelf->__Vfunc_max__486__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__486__b))
                                               ? (IData)(vlSelf->__Vfunc_max__486__a)
                                               : (IData)(vlSelf->__Vfunc_max__486__b));
        vlSelf->__Vfunc_max__485__b = vlSelf->__Vfunc_max__486__Vfuncout;
        vlSelf->__Vfunc_max__485__a = (0xffU & (vlSelf->__Vfunc_max4__483__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__485__Vfuncout = (((IData)(vlSelf->__Vfunc_max__485__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__485__b))
                                               ? (IData)(vlSelf->__Vfunc_max__485__a)
                                               : (IData)(vlSelf->__Vfunc_max__485__b));
        vlSelf->__Vfunc_max__484__b = vlSelf->__Vfunc_max__485__Vfuncout;
        vlSelf->__Vfunc_max__484__a = (0xffU & vlSelf->__Vfunc_max4__483__a);
        vlSelf->__Vfunc_max__484__Vfuncout = (((IData)(vlSelf->__Vfunc_max__484__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__484__b))
                                               ? (IData)(vlSelf->__Vfunc_max__484__a)
                                               : (IData)(vlSelf->__Vfunc_max__484__b));
        vlSelf->__Vfunc_max4__483__Vfuncout = vlSelf->__Vfunc_max__484__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[8U] 
            = vlSelf->__Vfunc_max4__483__Vfuncout;
        vlSelf->__Vfunc_max4__487__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[9U];
        vlSelf->__Vfunc_max__490__b = (vlSelf->__Vfunc_max4__487__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__490__a = (0xffU & (vlSelf->__Vfunc_max4__487__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__490__Vfuncout = (((IData)(vlSelf->__Vfunc_max__490__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__490__b))
                                               ? (IData)(vlSelf->__Vfunc_max__490__a)
                                               : (IData)(vlSelf->__Vfunc_max__490__b));
        vlSelf->__Vfunc_max__489__b = vlSelf->__Vfunc_max__490__Vfuncout;
        vlSelf->__Vfunc_max__489__a = (0xffU & (vlSelf->__Vfunc_max4__487__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__489__Vfuncout = (((IData)(vlSelf->__Vfunc_max__489__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__489__b))
                                               ? (IData)(vlSelf->__Vfunc_max__489__a)
                                               : (IData)(vlSelf->__Vfunc_max__489__b));
        vlSelf->__Vfunc_max__488__b = vlSelf->__Vfunc_max__489__Vfuncout;
        vlSelf->__Vfunc_max__488__a = (0xffU & vlSelf->__Vfunc_max4__487__a);
        vlSelf->__Vfunc_max__488__Vfuncout = (((IData)(vlSelf->__Vfunc_max__488__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__488__b))
                                               ? (IData)(vlSelf->__Vfunc_max__488__a)
                                               : (IData)(vlSelf->__Vfunc_max__488__b));
        vlSelf->__Vfunc_max4__487__Vfuncout = vlSelf->__Vfunc_max__488__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[9U] 
            = vlSelf->__Vfunc_max4__487__Vfuncout;
        vlSelf->__Vfunc_max4__491__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xaU];
        vlSelf->__Vfunc_max__494__b = (vlSelf->__Vfunc_max4__491__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__494__a = (0xffU & (vlSelf->__Vfunc_max4__491__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__494__Vfuncout = (((IData)(vlSelf->__Vfunc_max__494__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__494__b))
                                               ? (IData)(vlSelf->__Vfunc_max__494__a)
                                               : (IData)(vlSelf->__Vfunc_max__494__b));
        vlSelf->__Vfunc_max__493__b = vlSelf->__Vfunc_max__494__Vfuncout;
        vlSelf->__Vfunc_max__493__a = (0xffU & (vlSelf->__Vfunc_max4__491__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__493__Vfuncout = (((IData)(vlSelf->__Vfunc_max__493__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__493__b))
                                               ? (IData)(vlSelf->__Vfunc_max__493__a)
                                               : (IData)(vlSelf->__Vfunc_max__493__b));
        vlSelf->__Vfunc_max__492__b = vlSelf->__Vfunc_max__493__Vfuncout;
        vlSelf->__Vfunc_max__492__a = (0xffU & vlSelf->__Vfunc_max4__491__a);
        vlSelf->__Vfunc_max__492__Vfuncout = (((IData)(vlSelf->__Vfunc_max__492__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__492__b))
                                               ? (IData)(vlSelf->__Vfunc_max__492__a)
                                               : (IData)(vlSelf->__Vfunc_max__492__b));
        vlSelf->__Vfunc_max4__491__Vfuncout = vlSelf->__Vfunc_max__492__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xaU] 
            = vlSelf->__Vfunc_max4__491__Vfuncout;
        vlSelf->__Vfunc_max4__495__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xbU];
        vlSelf->__Vfunc_max__498__b = (vlSelf->__Vfunc_max4__495__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__498__a = (0xffU & (vlSelf->__Vfunc_max4__495__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__498__Vfuncout = (((IData)(vlSelf->__Vfunc_max__498__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__498__b))
                                               ? (IData)(vlSelf->__Vfunc_max__498__a)
                                               : (IData)(vlSelf->__Vfunc_max__498__b));
        vlSelf->__Vfunc_max__497__b = vlSelf->__Vfunc_max__498__Vfuncout;
        vlSelf->__Vfunc_max__497__a = (0xffU & (vlSelf->__Vfunc_max4__495__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__497__Vfuncout = (((IData)(vlSelf->__Vfunc_max__497__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__497__b))
                                               ? (IData)(vlSelf->__Vfunc_max__497__a)
                                               : (IData)(vlSelf->__Vfunc_max__497__b));
        vlSelf->__Vfunc_max__496__b = vlSelf->__Vfunc_max__497__Vfuncout;
        vlSelf->__Vfunc_max__496__a = (0xffU & vlSelf->__Vfunc_max4__495__a);
        vlSelf->__Vfunc_max__496__Vfuncout = (((IData)(vlSelf->__Vfunc_max__496__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__496__b))
                                               ? (IData)(vlSelf->__Vfunc_max__496__a)
                                               : (IData)(vlSelf->__Vfunc_max__496__b));
        vlSelf->__Vfunc_max4__495__Vfuncout = vlSelf->__Vfunc_max__496__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xbU] 
            = vlSelf->__Vfunc_max4__495__Vfuncout;
        vlSelf->__Vfunc_max4__499__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xcU];
        vlSelf->__Vfunc_max__502__b = (vlSelf->__Vfunc_max4__499__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__502__a = (0xffU & (vlSelf->__Vfunc_max4__499__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__502__Vfuncout = (((IData)(vlSelf->__Vfunc_max__502__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__502__b))
                                               ? (IData)(vlSelf->__Vfunc_max__502__a)
                                               : (IData)(vlSelf->__Vfunc_max__502__b));
        vlSelf->__Vfunc_max__501__b = vlSelf->__Vfunc_max__502__Vfuncout;
        vlSelf->__Vfunc_max__501__a = (0xffU & (vlSelf->__Vfunc_max4__499__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__501__Vfuncout = (((IData)(vlSelf->__Vfunc_max__501__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__501__b))
                                               ? (IData)(vlSelf->__Vfunc_max__501__a)
                                               : (IData)(vlSelf->__Vfunc_max__501__b));
        vlSelf->__Vfunc_max__500__b = vlSelf->__Vfunc_max__501__Vfuncout;
        vlSelf->__Vfunc_max__500__a = (0xffU & vlSelf->__Vfunc_max4__499__a);
        vlSelf->__Vfunc_max__500__Vfuncout = (((IData)(vlSelf->__Vfunc_max__500__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__500__b))
                                               ? (IData)(vlSelf->__Vfunc_max__500__a)
                                               : (IData)(vlSelf->__Vfunc_max__500__b));
        vlSelf->__Vfunc_max4__499__Vfuncout = vlSelf->__Vfunc_max__500__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xcU] 
            = vlSelf->__Vfunc_max4__499__Vfuncout;
        vlSelf->__Vfunc_max4__503__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xdU];
        vlSelf->__Vfunc_max__506__b = (vlSelf->__Vfunc_max4__503__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__506__a = (0xffU & (vlSelf->__Vfunc_max4__503__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__506__Vfuncout = (((IData)(vlSelf->__Vfunc_max__506__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__506__b))
                                               ? (IData)(vlSelf->__Vfunc_max__506__a)
                                               : (IData)(vlSelf->__Vfunc_max__506__b));
        vlSelf->__Vfunc_max__505__b = vlSelf->__Vfunc_max__506__Vfuncout;
        vlSelf->__Vfunc_max__505__a = (0xffU & (vlSelf->__Vfunc_max4__503__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__505__Vfuncout = (((IData)(vlSelf->__Vfunc_max__505__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__505__b))
                                               ? (IData)(vlSelf->__Vfunc_max__505__a)
                                               : (IData)(vlSelf->__Vfunc_max__505__b));
        vlSelf->__Vfunc_max__504__b = vlSelf->__Vfunc_max__505__Vfuncout;
        vlSelf->__Vfunc_max__504__a = (0xffU & vlSelf->__Vfunc_max4__503__a);
        vlSelf->__Vfunc_max__504__Vfuncout = (((IData)(vlSelf->__Vfunc_max__504__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__504__b))
                                               ? (IData)(vlSelf->__Vfunc_max__504__a)
                                               : (IData)(vlSelf->__Vfunc_max__504__b));
        vlSelf->__Vfunc_max4__503__Vfuncout = vlSelf->__Vfunc_max__504__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xdU] 
            = vlSelf->__Vfunc_max4__503__Vfuncout;
        vlSelf->__Vfunc_max4__507__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xeU];
        vlSelf->__Vfunc_max__510__b = (vlSelf->__Vfunc_max4__507__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__510__a = (0xffU & (vlSelf->__Vfunc_max4__507__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__510__Vfuncout = (((IData)(vlSelf->__Vfunc_max__510__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__510__b))
                                               ? (IData)(vlSelf->__Vfunc_max__510__a)
                                               : (IData)(vlSelf->__Vfunc_max__510__b));
        vlSelf->__Vfunc_max__509__b = vlSelf->__Vfunc_max__510__Vfuncout;
        vlSelf->__Vfunc_max__509__a = (0xffU & (vlSelf->__Vfunc_max4__507__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__509__Vfuncout = (((IData)(vlSelf->__Vfunc_max__509__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__509__b))
                                               ? (IData)(vlSelf->__Vfunc_max__509__a)
                                               : (IData)(vlSelf->__Vfunc_max__509__b));
        vlSelf->__Vfunc_max__508__b = vlSelf->__Vfunc_max__509__Vfuncout;
        vlSelf->__Vfunc_max__508__a = (0xffU & vlSelf->__Vfunc_max4__507__a);
        vlSelf->__Vfunc_max__508__Vfuncout = (((IData)(vlSelf->__Vfunc_max__508__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__508__b))
                                               ? (IData)(vlSelf->__Vfunc_max__508__a)
                                               : (IData)(vlSelf->__Vfunc_max__508__b));
        vlSelf->__Vfunc_max4__507__Vfuncout = vlSelf->__Vfunc_max__508__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xeU] 
            = vlSelf->__Vfunc_max4__507__Vfuncout;
        vlSelf->__Vfunc_max4__511__a = vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1[0xfU];
        vlSelf->__Vfunc_max__514__b = (vlSelf->__Vfunc_max4__511__a 
                                       >> 0x18U);
        vlSelf->__Vfunc_max__514__a = (0xffU & (vlSelf->__Vfunc_max4__511__a 
                                                >> 0x10U));
        vlSelf->__Vfunc_max__514__Vfuncout = (((IData)(vlSelf->__Vfunc_max__514__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__514__b))
                                               ? (IData)(vlSelf->__Vfunc_max__514__a)
                                               : (IData)(vlSelf->__Vfunc_max__514__b));
        vlSelf->__Vfunc_max__513__b = vlSelf->__Vfunc_max__514__Vfuncout;
        vlSelf->__Vfunc_max__513__a = (0xffU & (vlSelf->__Vfunc_max4__511__a 
                                                >> 8U));
        vlSelf->__Vfunc_max__513__Vfuncout = (((IData)(vlSelf->__Vfunc_max__513__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__513__b))
                                               ? (IData)(vlSelf->__Vfunc_max__513__a)
                                               : (IData)(vlSelf->__Vfunc_max__513__b));
        vlSelf->__Vfunc_max__512__b = vlSelf->__Vfunc_max__513__Vfuncout;
        vlSelf->__Vfunc_max__512__a = (0xffU & vlSelf->__Vfunc_max4__511__a);
        vlSelf->__Vfunc_max__512__Vfuncout = (((IData)(vlSelf->__Vfunc_max__512__a) 
                                               >= (IData)(vlSelf->__Vfunc_max__512__b))
                                               ? (IData)(vlSelf->__Vfunc_max__512__a)
                                               : (IData)(vlSelf->__Vfunc_max__512__b));
        vlSelf->__Vfunc_max4__511__Vfuncout = vlSelf->__Vfunc_max__512__Vfuncout;
        vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result[0xfU] 
            = vlSelf->__Vfunc_max4__511__Vfuncout;
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
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__3(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ren_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__raddr_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rdata_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ram_r_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__rom_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__vec_rs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__vec_rs1_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__vram_r_data);
    vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV64I__DOT__MrCY1P97 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__stsrseQpu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__wWjUJ9g = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RV64I__DOT__ttyiClU = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV64I__DOT__CP5BekSY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV64I__DOT__cSWijWYsS = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__KzUS4LT1bsC = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vd_w_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs1);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__operand_vs2);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__vexe_result);
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_r_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV_VECTOR__DOT__vwb_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vle32_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vse32_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vmul_vc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vadd_vr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID_Stage__DOT__inst_vcomp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__regs[__Vi0]);
    }
    vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__1__Vfuncout = 0;
    vlSelf->__Vfunc_max4__3__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__3__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__4__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__4__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__4__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__5__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__5__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__5__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__6__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__6__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__6__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__7__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__7__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__8__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__8__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__8__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__9__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__9__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__9__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__10__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__10__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__10__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__11__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__11__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__12__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__12__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__12__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__13__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__13__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__13__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__14__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__14__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__14__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__15__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__15__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__16__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__16__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__16__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__17__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__17__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__17__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__18__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__18__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__18__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__19__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__19__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__20__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__20__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__20__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__21__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__21__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__21__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__22__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__22__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__22__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__23__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__23__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__24__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__24__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__24__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__25__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__25__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__25__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__26__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__26__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__26__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__27__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__27__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__28__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__28__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__28__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__29__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__29__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__29__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__30__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__30__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__30__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__31__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__31__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__32__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__32__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__32__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__33__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__33__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__33__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__34__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__34__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__34__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__35__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__35__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__36__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__36__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__36__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__37__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__37__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__37__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__38__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__38__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__38__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__39__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__39__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__40__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__40__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__40__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__41__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__41__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__41__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__42__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__42__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__42__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__43__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__43__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__44__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__44__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__44__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__45__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__45__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__45__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__46__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__46__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__46__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__47__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__47__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__48__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__48__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__48__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__49__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__49__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__49__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__50__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__50__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__50__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__51__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__51__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__52__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__52__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__52__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__53__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__53__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__53__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__54__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__54__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__54__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__55__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__55__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__56__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__56__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__56__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__57__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__57__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__57__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__58__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__58__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__58__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__59__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__59__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__60__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__60__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__60__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__61__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__61__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__61__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__62__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__62__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__62__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__63__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__63__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__64__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__64__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__64__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__65__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__65__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__65__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__66__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__66__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__66__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__67__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__67__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__68__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__68__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__68__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__69__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__69__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__69__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__70__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__70__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__70__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__71__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__71__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__72__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__72__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__72__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__73__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__73__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__73__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__74__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__74__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__74__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__75__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__75__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__76__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__76__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__76__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__77__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__77__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__77__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__78__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__78__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__78__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__79__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__79__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__80__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__80__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__80__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__81__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__81__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__81__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__82__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__82__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__82__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__83__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__83__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__84__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__84__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__84__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__85__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__85__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__85__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__86__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__86__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__86__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__87__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__87__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__88__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__88__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__88__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__89__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__89__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__89__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__90__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__90__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__90__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__91__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__91__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__92__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__92__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__92__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__93__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__93__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__93__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__94__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__94__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__94__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__95__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__95__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__96__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__96__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__96__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__97__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__97__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__97__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__98__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__98__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__98__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__99__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__99__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__100__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__100__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__100__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__101__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__101__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__101__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__102__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__102__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__102__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__103__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__103__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__104__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__104__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__104__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__105__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__105__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__105__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__106__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__106__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__106__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__107__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__107__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__108__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__108__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__108__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__109__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__109__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__109__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__110__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__110__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__110__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__111__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__111__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__112__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__112__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__112__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__113__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__113__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__113__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__114__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__114__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__114__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__115__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__115__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__116__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__116__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__116__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__117__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__117__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__117__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__118__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__118__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__118__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__119__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__119__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__120__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__120__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__120__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__121__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__121__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__121__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__122__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__122__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__122__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__123__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__123__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__124__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__124__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__124__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__125__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__125__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__125__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__126__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__126__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__126__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__127__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__127__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__128__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__128__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__128__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__129__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__129__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__129__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__130__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__130__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__130__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__131__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__131__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__132__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__132__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__132__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__133__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__133__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__133__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__134__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__134__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__134__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__135__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__135__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__136__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__136__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__136__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__137__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__137__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__137__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__138__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__138__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__138__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__139__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__139__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__140__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__140__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__140__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__141__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__141__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__141__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__142__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__142__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__142__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__143__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__143__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__144__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__144__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__144__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__145__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__145__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__145__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__146__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__146__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__146__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__147__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__147__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__148__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__148__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__148__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__149__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__149__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__149__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__150__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__150__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__150__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__151__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__151__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__152__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__152__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__152__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__153__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__153__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__153__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__154__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__154__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__154__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__155__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__155__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__156__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__156__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__156__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__157__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__157__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__157__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__158__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__158__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__158__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__159__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__159__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__160__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__160__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__160__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__161__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__161__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__161__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__162__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__162__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__162__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__163__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__163__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__164__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__164__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__164__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__165__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__165__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__165__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__166__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__166__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__166__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__167__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__167__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__168__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__168__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__168__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__169__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__169__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__169__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__170__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__170__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__170__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__171__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__171__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__172__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__172__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__172__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__173__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__173__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__173__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__174__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__174__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__174__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__175__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__175__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__176__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__176__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__176__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__177__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__177__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__177__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__178__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__178__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__178__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__179__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__179__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__180__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__180__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__180__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__181__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__181__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__181__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__182__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__182__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__182__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__183__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__183__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__184__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__184__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__184__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__185__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__185__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__185__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__186__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__186__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__186__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__187__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__187__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__188__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__188__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__188__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__189__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__189__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__189__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__190__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__190__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__190__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__191__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__191__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__192__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__192__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__192__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__193__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__193__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__193__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__194__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__194__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__194__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__195__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__195__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__196__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__196__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__196__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__197__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__197__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__197__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__198__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__198__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__198__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__199__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__199__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__200__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__200__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__200__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__201__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__201__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__201__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__202__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__202__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__202__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__203__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__203__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__204__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__204__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__204__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__205__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__205__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__205__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__206__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__206__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__206__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__207__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__207__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__208__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__208__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__208__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__209__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__209__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__209__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__210__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__210__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__210__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__211__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__211__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__212__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__212__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__212__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__213__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__213__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__213__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__214__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__214__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__214__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__215__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__215__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__216__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__216__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__216__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__217__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__217__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__217__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__218__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__218__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__218__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__219__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__219__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__220__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__220__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__220__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__221__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__221__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__221__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__222__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__222__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__222__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__223__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__223__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__224__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__224__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__224__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__225__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__225__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__225__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__226__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__226__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__226__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__227__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__227__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__228__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__228__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__228__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__229__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__229__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__229__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__230__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__230__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__230__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__231__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__231__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__232__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__232__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__232__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__233__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__233__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__233__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__234__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__234__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__234__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__235__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__235__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__236__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__236__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__236__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__237__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__237__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__237__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__238__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__238__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__238__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__239__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__239__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__240__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__240__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__240__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__241__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__241__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__241__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__242__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__242__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__242__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__243__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__243__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__244__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__244__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__244__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__245__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__245__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__245__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__246__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__246__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__246__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__247__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__247__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__248__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__248__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__248__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__249__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__249__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__249__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__250__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__250__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__250__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__251__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__251__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__252__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__252__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__252__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__253__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__253__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__253__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__254__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__254__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__254__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__255__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__255__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__256__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__256__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__256__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__257__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__257__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__257__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__258__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__258__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__258__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__259__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__259__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__260__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__260__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__260__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__261__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__261__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__261__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__262__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__262__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__262__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__263__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__263__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__264__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__264__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__264__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__265__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__265__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__265__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__266__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__266__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__266__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__267__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__267__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__268__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__268__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__268__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__269__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__269__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__269__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__270__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__270__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__270__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__271__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__271__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__272__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__272__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__272__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__273__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__273__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__273__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__274__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__274__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__274__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__275__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__275__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__276__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__276__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__276__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__277__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__277__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__277__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__278__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__278__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__278__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__279__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__279__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__280__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__280__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__280__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__281__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__281__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__281__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__282__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__282__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__282__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__283__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__283__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__284__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__284__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__284__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__285__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__285__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__285__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__286__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__286__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__286__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__287__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__287__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__288__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__288__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__288__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__289__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__289__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__289__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__290__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__290__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__290__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__291__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__291__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__292__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__292__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__292__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__293__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__293__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__293__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__294__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__294__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__294__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__295__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__295__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__296__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__296__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__296__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__297__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__297__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__297__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__298__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__298__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__298__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__299__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__299__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__300__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__300__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__300__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__301__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__301__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__301__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__302__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__302__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__302__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__303__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__303__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__304__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__304__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__304__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__305__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__305__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__305__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__306__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__306__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__306__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__307__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__307__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__308__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__308__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__308__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__309__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__309__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__309__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__310__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__310__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__310__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__311__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__311__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__312__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__312__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__312__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__313__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__313__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__313__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__314__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__314__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__314__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__315__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__315__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__316__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__316__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__316__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__317__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__317__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__317__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__318__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__318__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__318__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__319__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__319__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__320__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__320__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__320__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__321__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__321__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__321__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__322__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__322__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__322__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__323__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__323__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__324__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__324__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__324__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__325__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__325__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__325__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__326__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__326__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__326__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__327__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__327__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__328__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__328__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__328__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__329__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__329__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__329__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__330__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__330__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__330__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__331__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__331__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__332__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__332__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__332__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__333__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__333__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__333__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__334__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__334__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__334__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__335__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__335__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__336__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__336__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__336__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__337__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__337__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__337__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__338__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__338__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__338__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__339__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__339__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__340__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__340__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__340__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__341__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__341__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__341__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__342__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__342__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__342__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__343__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__343__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__344__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__344__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__344__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__345__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__345__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__345__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__346__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__346__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__346__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__347__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__347__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__348__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__348__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__348__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__349__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__349__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__349__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__350__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__350__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__350__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__351__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__351__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__352__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__352__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__352__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__353__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__353__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__353__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__354__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__354__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__354__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__355__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__355__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__356__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__356__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__356__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__357__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__357__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__357__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__358__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__358__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__358__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__359__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__359__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__360__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__360__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__360__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__361__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__361__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__361__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__362__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__362__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__362__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__363__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__363__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__364__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__364__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__364__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__365__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__365__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__365__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__366__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__366__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__366__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__367__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__367__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__368__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__368__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__368__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__369__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__369__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__369__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__370__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__370__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__370__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__371__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__371__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__372__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__372__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__372__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__373__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__373__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__373__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__374__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__374__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__374__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__375__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__375__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__376__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__376__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__376__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__377__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__377__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__377__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__378__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__378__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__378__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__379__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__379__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__380__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__380__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__380__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__381__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__381__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__381__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__382__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__382__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__382__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__383__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__383__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__384__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__384__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__384__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__385__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__385__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__385__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__386__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__386__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__386__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__387__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__387__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__388__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__388__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__388__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__389__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__389__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__389__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__390__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__390__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__390__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__391__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__391__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__392__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__392__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__392__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__393__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__393__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__393__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__394__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__394__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__394__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__395__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__395__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__396__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__396__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__396__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__397__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__397__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__397__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__398__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__398__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__398__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__399__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__399__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__400__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__400__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__400__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__401__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__401__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__401__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__402__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__402__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__402__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__403__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__403__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__404__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__404__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__404__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__405__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__405__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__405__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__406__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__406__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__406__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__407__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__407__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__408__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__408__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__408__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__409__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__409__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__409__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__410__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__410__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__410__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__411__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__411__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__412__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__412__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__412__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__413__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__413__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__413__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__414__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__414__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__414__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__415__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__415__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__416__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__416__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__416__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__417__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__417__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__417__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__418__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__418__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__418__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__419__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__419__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__420__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__420__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__420__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__421__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__421__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__421__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__422__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__422__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__422__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__423__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__423__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__424__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__424__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__424__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__425__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__425__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__425__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__426__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__426__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__426__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__427__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__427__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__428__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__428__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__428__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__429__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__429__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__429__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__430__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__430__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__430__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__431__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__431__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__432__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__432__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__432__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__433__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__433__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__433__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__434__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__434__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__434__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__435__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__435__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__436__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__436__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__436__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__437__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__437__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__437__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__438__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__438__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__438__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__439__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__439__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__440__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__440__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__440__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__441__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__441__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__441__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__442__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__442__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__442__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__443__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__443__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__444__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__444__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__444__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__445__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__445__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__445__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__446__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__446__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__446__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__447__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__447__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__448__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__448__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__448__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__449__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__449__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__449__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__450__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__450__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__450__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__451__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__451__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__452__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__452__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__452__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__453__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__453__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__453__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__454__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__454__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__454__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__455__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__455__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__456__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__456__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__456__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__457__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__457__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__457__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__458__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__458__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__458__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__459__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__459__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__460__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__460__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__460__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__461__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__461__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__461__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__462__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__462__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__462__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__463__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__463__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__464__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__464__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__464__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__465__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__465__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__465__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__466__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__466__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__466__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__467__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__467__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__468__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__468__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__468__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__469__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__469__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__469__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__470__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__470__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__470__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__471__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__471__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__472__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__472__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__472__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__473__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__473__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__473__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__474__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__474__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__474__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__475__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__475__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__476__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__476__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__476__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__477__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__477__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__477__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__478__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__478__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__478__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__479__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__479__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__480__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__480__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__480__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__481__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__481__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__481__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__482__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__482__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__482__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__483__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__483__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__484__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__484__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__484__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__485__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__485__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__485__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__486__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__486__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__486__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__487__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__487__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__488__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__488__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__488__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__489__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__489__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__489__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__490__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__490__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__490__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__491__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__491__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__492__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__492__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__492__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__493__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__493__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__493__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__494__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__494__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__494__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__495__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__495__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__496__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__496__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__496__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__497__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__497__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__497__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__498__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__498__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__498__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__499__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__499__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__500__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__500__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__500__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__501__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__501__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__501__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__502__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__502__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__502__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__503__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__503__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__504__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__504__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__504__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__505__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__505__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__505__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__506__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__506__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__506__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__507__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__507__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__508__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__508__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__508__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__509__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__509__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__509__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__510__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__510__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__510__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__511__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max4__511__a = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_max__512__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__512__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__512__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__513__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__513__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__513__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__514__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__514__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_max__514__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_ram_read_helper__515__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__516__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__517__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__518__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__519__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__520__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__521__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__522__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
