// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt_full.h for the primary calling header

#include "Vntt_full__pch.h"
#include "Vntt_full___024root.h"

void Vntt_full___024root___ico_sequent__TOP__0(Vntt_full___024root* vlSelf);

void Vntt_full___024root___eval_ico(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vntt_full___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vntt_full___024root___ico_sequent__TOP__0(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ ntt_full__DOT__bfu_inst__DOT__mul;
    ntt_full__DOT__bfu_inst__DOT__mul = 0;
    // Body
    if (vlSelf->ext_we) {
        vlSelf->write_addr_out = vlSelf->ext_addr;
        vlSelf->ntt_full__DOT__ram_addr_a = vlSelf->ext_addr;
        vlSelf->ntt_full__DOT__ram_addr_b = 0U;
    } else {
        vlSelf->write_addr_out = ((IData)(vlSelf->ntt_full__DOT__write_b_en)
                                   ? (IData)(vlSelf->ntt_full__DOT__j_plus_len)
                                   : (IData)(vlSelf->ntt_full__DOT__j));
        vlSelf->ntt_full__DOT__ram_addr_a = vlSelf->ntt_full__DOT__j;
        vlSelf->ntt_full__DOT__ram_addr_b = vlSelf->ntt_full__DOT__j_plus_len;
    }
    vlSelf->ext_data_out = vlSelf->ntt_full__DOT__ram_inst__DOT__mem
        [vlSelf->ntt_full__DOT__ram_addr_a];
    ntt_full__DOT__bfu_inst__DOT__mul = VL_MULS_QQQ(64, 
                                                    VL_EXTENDS_QI(64,32, vlSelf->ntt_full__DOT__zeta_data), 
                                                    VL_EXTENDS_QI(64,32, 
                                                                  vlSelf->ntt_full__DOT__ram_inst__DOT__mem
                                                                  [vlSelf->ntt_full__DOT__ram_addr_b]));
    vlSelf->ntt_full__DOT__bfu_inst__DOT__t = (IData)(
                                                      ((ntt_full__DOT__bfu_inst__DOT__mul 
                                                        - 
                                                        VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                                    VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x3802001ULL, ntt_full__DOT__bfu_inst__DOT__mul))))) 
                                                       >> 0x20U));
}

void Vntt_full___024root___eval_triggers__ico(Vntt_full___024root* vlSelf);

bool Vntt_full___024root___eval_phase__ico(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vntt_full___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vntt_full___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vntt_full___024root___eval_act(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_act\n"); );
}

void Vntt_full___024root___nba_sequent__TOP__0(Vntt_full___024root* vlSelf);
void Vntt_full___024root___nba_sequent__TOP__1(Vntt_full___024root* vlSelf);
void Vntt_full___024root___nba_sequent__TOP__2(Vntt_full___024root* vlSelf);
void Vntt_full___024root___nba_comb__TOP__0(Vntt_full___024root* vlSelf);

void Vntt_full___024root___eval_nba(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vntt_full___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vntt_full___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vntt_full___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vntt_full___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vntt_full___024root___nba_sequent__TOP__0(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__k_idx 
        = vlSelf->ntt_full__DOT__ctrl_inst__DOT__k_idx;
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx 
        = vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx;
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__start_idx 
        = vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx;
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state 
        = vlSelf->ntt_full__DOT__ctrl_inst__DOT__state;
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__len_exp 
        = vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp;
}

VL_INLINE_OPT void Vntt_full___024root___nba_sequent__TOP__1(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__ntt_full__DOT__ram_inst__DOT__mem__v0;
    __Vdlyvdim0__ntt_full__DOT__ram_inst__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ntt_full__DOT__ram_inst__DOT__mem__v0;
    __Vdlyvval__ntt_full__DOT__ram_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ntt_full__DOT__ram_inst__DOT__mem__v0;
    __Vdlyvset__ntt_full__DOT__ram_inst__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__ntt_full__DOT__ram_inst__DOT__mem__v0 = 0U;
    if (((IData)(vlSelf->ext_we) | ((IData)(vlSelf->ntt_full__DOT__write_b_en) 
                                    | (IData)(vlSelf->ntt_full__DOT__write_en)))) {
        __Vdlyvval__ntt_full__DOT__ram_inst__DOT__mem__v0 
            = ((IData)(vlSelf->ext_we) ? vlSelf->ext_data_in
                : ((IData)(vlSelf->ntt_full__DOT__write_b_en)
                    ? vlSelf->ntt_full__DOT__bfu_b_out_reg
                    : vlSelf->ntt_full__DOT__bfu_a_out_reg));
        __Vdlyvset__ntt_full__DOT__ram_inst__DOT__mem__v0 = 1U;
        __Vdlyvdim0__ntt_full__DOT__ram_inst__DOT__mem__v0 
            = vlSelf->write_addr_out;
    }
    if (vlSelf->rst) {
        vlSelf->ntt_full__DOT__j_reg_debug = 0U;
        vlSelf->ntt_full__DOT__j_plus_len_reg_debug = 0U;
        vlSelf->ntt_full__DOT__bfu_b_out_reg = 0U;
        vlSelf->ntt_full__DOT__bfu_a_out_reg = 0U;
    } else {
        vlSelf->ntt_full__DOT__j_reg_debug = vlSelf->ntt_full__DOT__j;
        vlSelf->ntt_full__DOT__j_plus_len_reg_debug 
            = vlSelf->ntt_full__DOT__j_plus_len;
        if (vlSelf->ntt_full__DOT__bfu_valid) {
            vlSelf->ntt_full__DOT__bfu_b_out_reg = 
                (vlSelf->ntt_full__DOT__ram_inst__DOT__mem
                 [vlSelf->ntt_full__DOT__ram_addr_a] 
                 - vlSelf->ntt_full__DOT__bfu_inst__DOT__t);
            vlSelf->ntt_full__DOT__bfu_a_out_reg = 
                (vlSelf->ntt_full__DOT__ram_inst__DOT__mem
                 [vlSelf->ntt_full__DOT__ram_addr_a] 
                 + vlSelf->ntt_full__DOT__bfu_inst__DOT__t);
        }
    }
    vlSelf->j_reg_out = vlSelf->ntt_full__DOT__j_reg_debug;
    vlSelf->j_plus_len_reg_out = vlSelf->ntt_full__DOT__j_plus_len_reg_debug;
    if (__Vdlyvset__ntt_full__DOT__ram_inst__DOT__mem__v0) {
        vlSelf->ntt_full__DOT__ram_inst__DOT__mem[__Vdlyvdim0__ntt_full__DOT__ram_inst__DOT__mem__v0] 
            = __Vdlyvval__ntt_full__DOT__ram_inst__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vntt_full___024root___nba_sequent__TOP__2(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout;
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx;
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx = 0;
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 0U;
        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__len_exp = 0U;
        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__start_idx = 0U;
        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx = 0U;
        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__k_idx = 1U;
        vlSelf->ntt_full__DOT__k = 1U;
        vlSelf->ntt_full__DOT__j = 0U;
        vlSelf->ntt_full__DOT__j_plus_len = 0x80U;
        vlSelf->ntt_full__DOT__bfu_valid = 0U;
        vlSelf->ntt_full__DOT__write_en = 0U;
        vlSelf->ntt_full__DOT__write_b_en = 0U;
        vlSelf->done = 0U;
    } else {
        vlSelf->ntt_full__DOT__k = vlSelf->ntt_full__DOT__ctrl_inst__DOT__k_idx;
        vlSelf->ntt_full__DOT__j = vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx;
        vlSelf->ntt_full__DOT__j_plus_len = (0xffU 
                                             & ((IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx) 
                                                + (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val)));
        vlSelf->state_out = vlSelf->ntt_full__DOT__ctrl_inst__DOT__state;
        vlSelf->len_exp_out = vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp;
        vlSelf->start_idx_out = vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx;
        vlSelf->j_idx_out = vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx;
        vlSelf->k_out = vlSelf->ntt_full__DOT__ctrl_inst__DOT__k_idx;
        if ((4U & (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__state))) {
            if ((2U & (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__state))) {
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__state))) {
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 0U;
            } else {
                vlSelf->done = 1U;
                vlSelf->ntt_full__DOT__bfu_valid = 0U;
                vlSelf->ntt_full__DOT__write_en = 0U;
                vlSelf->ntt_full__DOT__write_b_en = 0U;
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__state))) {
            if ((1U & (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__state))) {
                vlSelf->ntt_full__DOT__write_en = 0U;
                vlSelf->ntt_full__DOT__write_b_en = 1U;
                vlSelf->ntt_full__DOT__bfu_valid = 0U;
                if ((((IData)(1U) + (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx)) 
                     == ((IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx) 
                         + (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val)))) {
                    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__k_idx 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__k_idx)));
                    if ((0x100U > ((IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx) 
                                   + VL_SHIFTL_III(32,32,32, (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val), 1U)))) {
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__start_idx 
                            = (0xffU & ((IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx) 
                                        + VL_SHIFTL_III(8,32,32, (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val), 1U)));
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx 
                            = (0xffU & ((IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx) 
                                        + VL_SHIFTL_III(8,32,32, (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val), 1U)));
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 1U;
                    } else if ((7U > (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp))) {
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__len_exp 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp)));
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__start_idx = 0U;
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx = 0U;
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 4U;
                    }
                } else {
                    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx)));
                    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 1U;
                }
            } else {
                vlSelf->ntt_full__DOT__write_en = 1U;
                vlSelf->ntt_full__DOT__bfu_valid = 0U;
                vlSelf->ntt_full__DOT__write_b_en = 0U;
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__state))) {
            vlSelf->ntt_full__DOT__bfu_valid = 1U;
            vlSelf->ntt_full__DOT__write_en = 0U;
            vlSelf->ntt_full__DOT__write_b_en = 0U;
            vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 2U;
        } else {
            vlSelf->ntt_full__DOT__bfu_valid = 0U;
            vlSelf->ntt_full__DOT__write_en = 0U;
            vlSelf->ntt_full__DOT__write_b_en = 0U;
            vlSelf->done = 0U;
            if (((~ (IData)(vlSelf->ext_we)) & (IData)(vlSelf->start))) {
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = 1U;
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__len_exp = 0U;
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__start_idx = 0U;
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx = 0U;
                vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__k_idx = 1U;
            }
        }
    }
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__state = vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state;
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx 
        = vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__start_idx;
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx = vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx;
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__k_idx = vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__k_idx;
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp 
        = vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__len_exp;
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val 
        = (0xffU & (0x80U >> (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp)));
    vlSelf->bfu_valid_out = vlSelf->ntt_full__DOT__bfu_valid;
    vlSelf->write_en_out = vlSelf->ntt_full__DOT__write_en;
    vlSelf->write_b_en_out = vlSelf->ntt_full__DOT__write_b_en;
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx 
        = vlSelf->ntt_full__DOT__k;
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout 
        = ((0x100U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
            ? 0x1e29ceU : ((0x80U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                            ? ((0x40U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                ? ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1e29ceU
                                                     : 0xfff316b6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x155e68U
                                                     : 0x3c15caU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeb36dfU
                                                     : 0xffff434eU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3bcf2cU
                                                     : 0xfff78a50U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9e5a9U
                                                     : 0x189c2aU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff11805U
                                                     : 0x2cc93U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdd1d09U
                                                     : 0xfff993ddU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdde1afU
                                                     : 0xffd32764U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc57fdbU
                                                     : 0xfffc05daU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffef2633U
                                                     : 0xffe68e98U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1d2668U
                                                     : 0xffe47caeU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1a4cd0U
                                                     : 0xfff97d45U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x7340eU
                                                     : 0x1a35e7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff11bf4U
                                                     : 0x21c4f7U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x41dc0U
                                                     : 0x3b0115U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x35c539U
                                                     : 0xffd1a13cU)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe48c3dU
                                                     : 0xffc7a167U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x19379aU
                                                     : 0xc5ca5U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x2dfd71U
                                                     : 0x18aa08U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x27c1cU
                                                     : 0xffcf6cbeU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffed93a7U
                                                     : 0x2d4bbU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x336898U
                                                     : 0x1ddd98U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffd7c8fU
                                                     : 0x2573b7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x251d8bU
                                                     : 0xffe14658U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc65e1fU
                                                     : 0x910d8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc72c12U
                                                     : 0xffd8911bU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe3d157U
                                                     : 0xffe67ff8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd4ca0cU
                                                     : 0xfff7b934U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x33f8cfU
                                                     : 0x221de8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xbdbe7U
                                                     : 0x16e405U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeb05adU
                                                     : 0xffd92578U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1d4099U
                                                     : 0xffec7953U))))))
                                : ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe20d6eU
                                                     : 0x327283U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1406c7U
                                                     : 0xfff91de4U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffea2d2fU
                                                     : 0xffcd5e3eU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x12e11bU
                                                     : 0xffeba8beU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeff6a6U
                                                     : 0x1d0b4bU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1c853fU
                                                     : 0xffd25089U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9db90U
                                                     : 0x283891U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1314beU
                                                     : 0xffc68518U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x185a46U
                                                     : 0x25f051U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x130984U
                                                     : 0x3de11cU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x134d71U
                                                     : 0xffd87a3aU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x291199U
                                                     : 0x2b5ee5U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x31924U
                                                     : 0x1a7cc7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcd003bU
                                                     : 0x3472e7U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3eb01bU
                                                     : 0xffdacd41U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x4610cU
                                                     : 0x53919U)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc921c2U
                                                     : 0xfff44592U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff7fcd6U
                                                     : 0xffc9b97dU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x30ef86U
                                                     : 0x1f0084U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd05af6U
                                                     : 0xfff60021U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff806fcU
                                                     : 0xffff5704U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe7628aU
                                                     : 0x78f83U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xc7f5aU
                                                     : 0xde0e6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1c5e1aU
                                                     : 0xdbe5eU))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcf45deU
                                                     : 0xffedbb56U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc6a2fcU
                                                     : 0xffca48a0U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x359b5dU
                                                     : 0xffed24f0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x252587U
                                                     : 0x412f5U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9a422U
                                                     : 0xffdaab9fU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x223dfbU
                                                     : 0xffccff72U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3a41f8U
                                                     : 0x2358d4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x33ff5aU
                                                     : 0x1fea93U)))))))
                            : ((0x40U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                ? ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3a97d9U
                                                     : 0xffc8a057U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc4c79cU
                                                     : 0xffd1eea2U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffea0802U
                                                     : 0xfff39944U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe7d0e0U
                                                     : 0x139e25U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x147792U
                                                     : 0x141305U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffd4ae0U
                                                     : 0xffdb3c93U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe3bff6U
                                                     : 0x3036c2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9c808U
                                                     : 0x2e46cU))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffebe808U
                                                     : 0xb98a1U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffcc7dfU
                                                     : 0x24756cU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffce69c0U
                                                     : 0x193948U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffffde7eU
                                                     : 0xffc72bcaU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3c675aU
                                                     : 0xdcd44U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffef36beU
                                                     : 0xad00U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x2f4588U
                                                     : 0x7c417U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x40af0U
                                                     : 0xffccfbe9U)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffea2c62U
                                                     : 0x1c4563U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1495d4U
                                                     : 0xfffa2bddU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffec09f7U
                                                     : 0xffffa63bU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffed4113U
                                                     : 0xfff5c282U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffda3409U
                                                     : 0xfff9ba6dU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc7a44bU
                                                     : 0xffd2b7a3U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x296e9fU
                                                     : 0x20c638U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff0fe85U
                                                     : 0x3410f2U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1efcaU
                                                     : 0xffc890e0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcfd2aeU
                                                     : 0xffcf5280U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff0bcf6U
                                                     : 0xffc1b072U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1d9772U
                                                     : 0xffeccf75U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe7cfbbU
                                                     : 0x2135c7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3509eeU
                                                     : 0xffe9d65dU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd19819U
                                                     : 0xffc7e1cfU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe8ac81U
                                                     : 0xffc406e5U))))))
                                : ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd54f2dU
                                                     : 0x1f9d54U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd8fc30U
                                                     : 0x3b8534U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3b3853U
                                                     : 0xe8f76U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x81b9aU
                                                     : 0xc63a8U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x38738cU
                                                     : 0xffe7945cU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdf5617U
                                                     : 0x35843fU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc5af59U
                                                     : 0x357e1eU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe6ead6U
                                                     : 0xffe6123dU))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff7c55dU
                                                     : 0x23d69cU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffb6a4dU
                                                     : 0x360400U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd43e41U
                                                     : 0x368a96U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd18e7cU
                                                     : 0xffc51585U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3bbeafU
                                                     : 0xffd947d4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9302cU
                                                     : 0xffe6a503U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x35dec5U
                                                     : 0x2ef4cdU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x17620U
                                                     : 0x294a67U)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x445c5U
                                                     : 0x3d3201U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffffb422U
                                                     : 0x1ad035U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcdfc98U
                                                     : 0xffeaa4f7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc51ae7U
                                                     : 0xffdfadd6U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdfd37bU
                                                     : 0x27f968U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeeeaa0U
                                                     : 0xfff79d90U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x36b788U
                                                     : 0xffef85a4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfa070U
                                                     : 0x299658U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x28e527U
                                                     : 0x2f7a49U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd3fb09U
                                                     : 0x2f9a75U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe0147fU
                                                     : 0xfffa84adU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x23e92bU
                                                     : 0x1bde2bU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x71e24U
                                                     : 0xfff2a128U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff42118U
                                                     : 0x39e44U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff81503U
                                                     : 0xffd83102U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x64f7U
                                                     : 0U)))))))));
    vlSelf->ntt_full__DOT__zeta_data = __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout;
    vlSelf->j_comb_out = vlSelf->ntt_full__DOT__j;
    if (vlSelf->ext_we) {
        vlSelf->ntt_full__DOT__ram_addr_a = vlSelf->ext_addr;
        vlSelf->write_addr_out = vlSelf->ext_addr;
        vlSelf->ntt_full__DOT__ram_addr_b = 0U;
    } else {
        vlSelf->ntt_full__DOT__ram_addr_a = vlSelf->ntt_full__DOT__j;
        vlSelf->write_addr_out = ((IData)(vlSelf->ntt_full__DOT__write_b_en)
                                   ? (IData)(vlSelf->ntt_full__DOT__j_plus_len)
                                   : (IData)(vlSelf->ntt_full__DOT__j));
        vlSelf->ntt_full__DOT__ram_addr_b = vlSelf->ntt_full__DOT__j_plus_len;
    }
    vlSelf->j_plus_len_comb_out = vlSelf->ntt_full__DOT__j_plus_len;
}

VL_INLINE_OPT void Vntt_full___024root___nba_comb__TOP__0(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___nba_comb__TOP__0\n"); );
    // Init
    QData/*63:0*/ ntt_full__DOT__bfu_inst__DOT__mul;
    ntt_full__DOT__bfu_inst__DOT__mul = 0;
    // Body
    vlSelf->ext_data_out = vlSelf->ntt_full__DOT__ram_inst__DOT__mem
        [vlSelf->ntt_full__DOT__ram_addr_a];
    ntt_full__DOT__bfu_inst__DOT__mul = VL_MULS_QQQ(64, 
                                                    VL_EXTENDS_QI(64,32, vlSelf->ntt_full__DOT__zeta_data), 
                                                    VL_EXTENDS_QI(64,32, 
                                                                  vlSelf->ntt_full__DOT__ram_inst__DOT__mem
                                                                  [vlSelf->ntt_full__DOT__ram_addr_b]));
    vlSelf->ntt_full__DOT__bfu_inst__DOT__t = (IData)(
                                                      ((ntt_full__DOT__bfu_inst__DOT__mul 
                                                        - 
                                                        VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                                    VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x3802001ULL, ntt_full__DOT__bfu_inst__DOT__mul))))) 
                                                       >> 0x20U));
}

void Vntt_full___024root___eval_triggers__act(Vntt_full___024root* vlSelf);

bool Vntt_full___024root___eval_phase__act(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vntt_full___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vntt_full___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vntt_full___024root___eval_phase__nba(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vntt_full___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__ico(Vntt_full___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__nba(Vntt_full___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__act(Vntt_full___024root* vlSelf);
#endif  // VL_DEBUG

void Vntt_full___024root___eval(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vntt_full___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../hw/ntt/ntt_full.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vntt_full___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vntt_full___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../hw/ntt/ntt_full.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vntt_full___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../hw/ntt/ntt_full.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vntt_full___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vntt_full___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vntt_full___024root___eval_debug_assertions(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->ext_we & 0xfeU))) {
        Verilated::overWidthError("ext_we");}
}
#endif  // VL_DEBUG
