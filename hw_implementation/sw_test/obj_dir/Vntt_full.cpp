// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vntt_full__pch.h"

//============================================================
// Constructors

Vntt_full::Vntt_full(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vntt_full__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , ext_addr{vlSymsp->TOP.ext_addr}
    , ext_we{vlSymsp->TOP.ext_we}
    , state_out{vlSymsp->TOP.state_out}
    , len_exp_out{vlSymsp->TOP.len_exp_out}
    , start_idx_out{vlSymsp->TOP.start_idx_out}
    , j_idx_out{vlSymsp->TOP.j_idx_out}
    , write_addr_out{vlSymsp->TOP.write_addr_out}
    , write_en_out{vlSymsp->TOP.write_en_out}
    , write_b_en_out{vlSymsp->TOP.write_b_en_out}
    , j_reg_out{vlSymsp->TOP.j_reg_out}
    , j_plus_len_reg_out{vlSymsp->TOP.j_plus_len_reg_out}
    , bfu_valid_out{vlSymsp->TOP.bfu_valid_out}
    , j_comb_out{vlSymsp->TOP.j_comb_out}
    , j_plus_len_comb_out{vlSymsp->TOP.j_plus_len_comb_out}
    , k_out{vlSymsp->TOP.k_out}
    , ext_data_out{vlSymsp->TOP.ext_data_out}
    , ext_data_in{vlSymsp->TOP.ext_data_in}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vntt_full::Vntt_full(const char* _vcname__)
    : Vntt_full(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vntt_full::~Vntt_full() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vntt_full___024root___eval_debug_assertions(Vntt_full___024root* vlSelf);
#endif  // VL_DEBUG
void Vntt_full___024root___eval_static(Vntt_full___024root* vlSelf);
void Vntt_full___024root___eval_initial(Vntt_full___024root* vlSelf);
void Vntt_full___024root___eval_settle(Vntt_full___024root* vlSelf);
void Vntt_full___024root___eval(Vntt_full___024root* vlSelf);

void Vntt_full::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vntt_full::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vntt_full___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vntt_full___024root___eval_static(&(vlSymsp->TOP));
        Vntt_full___024root___eval_initial(&(vlSymsp->TOP));
        Vntt_full___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vntt_full___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vntt_full::eventsPending() { return false; }

uint64_t Vntt_full::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vntt_full::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vntt_full___024root___eval_final(Vntt_full___024root* vlSelf);

VL_ATTR_COLD void Vntt_full::final() {
    Vntt_full___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vntt_full::hierName() const { return vlSymsp->name(); }
const char* Vntt_full::modelName() const { return "Vntt_full"; }
unsigned Vntt_full::threads() const { return 1; }
void Vntt_full::prepareClone() const { contextp()->prepareClone(); }
void Vntt_full::atClone() const {
    contextp()->threadPoolpOnClone();
}
