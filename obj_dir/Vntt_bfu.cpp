// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vntt_bfu__pch.h"

//============================================================
// Constructors

Vntt_bfu::Vntt_bfu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vntt_bfu__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vntt_bfu::Vntt_bfu(const char* _vcname__)
    : Vntt_bfu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vntt_bfu::~Vntt_bfu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vntt_bfu___024root___eval_debug_assertions(Vntt_bfu___024root* vlSelf);
#endif  // VL_DEBUG
void Vntt_bfu___024root___eval_static(Vntt_bfu___024root* vlSelf);
void Vntt_bfu___024root___eval_initial(Vntt_bfu___024root* vlSelf);
void Vntt_bfu___024root___eval_settle(Vntt_bfu___024root* vlSelf);
void Vntt_bfu___024root___eval(Vntt_bfu___024root* vlSelf);

void Vntt_bfu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vntt_bfu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vntt_bfu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vntt_bfu___024root___eval_static(&(vlSymsp->TOP));
        Vntt_bfu___024root___eval_initial(&(vlSymsp->TOP));
        Vntt_bfu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vntt_bfu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vntt_bfu::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vntt_bfu::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vntt_bfu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vntt_bfu___024root___eval_final(Vntt_bfu___024root* vlSelf);

VL_ATTR_COLD void Vntt_bfu::final() {
    Vntt_bfu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vntt_bfu::hierName() const { return vlSymsp->name(); }
const char* Vntt_bfu::modelName() const { return "Vntt_bfu"; }
unsigned Vntt_bfu::threads() const { return 1; }
void Vntt_bfu::prepareClone() const { contextp()->prepareClone(); }
void Vntt_bfu::atClone() const {
    contextp()->threadPoolpOnClone();
}
