// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintt_full.h for the primary calling header

#ifndef VERILATED_VINTT_FULL___024ROOT_H_
#define VERILATED_VINTT_FULL___024ROOT_H_  // guard

#include "verilated.h"


class Vintt_full__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vintt_full___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    VL_IN8(ext_addr,7,0);
    VL_IN8(ext_we,0,0);
    VL_OUT8(state_out,2,0);
    VL_OUT8(len_exp_out,2,0);
    VL_OUT8(start_idx_out,7,0);
    VL_OUT8(j_idx_out,7,0);
    VL_OUT8(write_addr_out,7,0);
    VL_OUT8(write_en_out,0,0);
    VL_OUT8(write_b_en_out,0,0);
    VL_OUT8(j_reg_out,7,0);
    VL_OUT8(j_plus_len_reg_out,7,0);
    VL_OUT8(bfu_valid_out,0,0);
    VL_OUT8(j_comb_out,7,0);
    VL_OUT8(j_plus_len_comb_out,7,0);
    CData/*7:0*/ intt_full__DOT__j;
    CData/*7:0*/ intt_full__DOT__j_plus_len;
    CData/*0:0*/ intt_full__DOT__bfu_valid;
    CData/*0:0*/ intt_full__DOT__write_en;
    CData/*0:0*/ intt_full__DOT__write_b_en;
    CData/*0:0*/ intt_full__DOT__scale_mode;
    CData/*0:0*/ intt_full__DOT__internal_active;
    CData/*7:0*/ intt_full__DOT__ram_addr_a;
    CData/*7:0*/ intt_full__DOT__ram_addr_b;
    CData/*7:0*/ intt_full__DOT__j_reg_debug;
    CData/*7:0*/ intt_full__DOT__j_plus_len_reg_debug;
    CData/*0:0*/ intt_full__DOT____VdfgRegularize_h8765f855_0_0;
    CData/*2:0*/ intt_full__DOT__ctrl_inst__DOT__state;
    CData/*2:0*/ intt_full__DOT__ctrl_inst__DOT__len_exp;
    CData/*7:0*/ intt_full__DOT__ctrl_inst__DOT__start_idx;
    CData/*7:0*/ intt_full__DOT__ctrl_inst__DOT__j_idx;
    CData/*7:0*/ intt_full__DOT__ctrl_inst__DOT__scale_idx;
    CData/*7:0*/ intt_full__DOT__ctrl_inst__DOT__len_val;
    CData/*2:0*/ __Vdly__intt_full__DOT__ctrl_inst__DOT__state;
    CData/*2:0*/ __Vdly__intt_full__DOT__ctrl_inst__DOT__len_exp;
    CData/*7:0*/ __Vdly__intt_full__DOT__ctrl_inst__DOT__start_idx;
    CData/*7:0*/ __Vdly__intt_full__DOT__ctrl_inst__DOT__j_idx;
    CData/*7:0*/ __Vdly__intt_full__DOT__ctrl_inst__DOT__scale_idx;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(k_out,8,0);
    SData/*8:0*/ intt_full__DOT__k;
    SData/*8:0*/ intt_full__DOT__ctrl_inst__DOT__k_idx;
    SData/*8:0*/ __Vdly__intt_full__DOT__ctrl_inst__DOT__k_idx;
    VL_OUT(ext_data_out,31,0);
    VL_IN(ext_data_in,31,0);
    IData/*31:0*/ intt_full__DOT__bfu_a_out;
    IData/*31:0*/ intt_full__DOT__zeta_data;
    IData/*31:0*/ intt_full__DOT__bfu_a_out_reg;
    IData/*31:0*/ intt_full__DOT__bfu_b_out_reg;
    IData/*31:0*/ intt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ intt_full__DOT__bfu_inst__DOT__mul_bfly;
    QData/*63:0*/ intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0;
    VlUnpacked<IData/*31:0*/, 256> intt_full__DOT__ram_inst__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vintt_full__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vintt_full___024root(Vintt_full__Syms* symsp, const char* v__name);
    ~Vintt_full___024root();
    VL_UNCOPYABLE(Vintt_full___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
