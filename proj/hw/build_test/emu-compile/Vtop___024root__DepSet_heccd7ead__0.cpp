// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
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
    } else if ((0x85U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__v_alu_opcode))) {
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
    }
}

void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
