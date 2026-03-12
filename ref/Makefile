VERILATOR = verilator
TOP       = ntt_full

# Paths
HW_DIR = ../hw/ntt
SW_DIR = .

# RTL sources
RTL_SRCS = \
    $(HW_DIR)/ntt_full.v \
    $(HW_DIR)/ntt_controller.v \
    $(HW_DIR)/ntt_ram.v \
    $(HW_DIR)/ntt_bfu.v \
    $(HW_DIR)/zetas_rom.v

# Software sources
SW_SRCS = \
    $(SW_DIR)/my_sign_verify.c \
    $(SW_DIR)/sign.c \
    $(SW_DIR)/packing.c \
    $(SW_DIR)/poly.c \
    $(SW_DIR)/polyvec.c \
    $(SW_DIR)/ntt.c \
    $(SW_DIR)/reduce.c \
    $(SW_DIR)/rounding.c \
    $(SW_DIR)/fips202.c \
    $(SW_DIR)/symmetric-shake.c \
    $(SW_DIR)/randombytes.c \
    $(SW_DIR)/ntt_hw_verilator.cpp \
    $(SW_DIR)/keccak_hw_verilator.cpp

# Headers
INCLUDES = -I$(SW_DIR) -I$(HW_DIR)

all: obj_dir/V$(TOP)

obj_dir/V$(TOP): $(RTL_SRCS) $(SW_SRCS)
	$(VERILATOR) --cc $(RTL_SRCS) \
		--exe $(SW_SRCS) \
		--top-module $(TOP) \
		-CFLAGS "$(INCLUDES) -O2 -DNTT_HW" \
		-LDFLAGS "-lm"
	make -C obj_dir -f V$(TOP).mk

run: all
	./obj_dir/V$(TOP)

######################################################################
# Combined Dilithium hardware build (NTT + Keccak)
######################################################################

DIL_NTT_TOP    = ntt_full
DIL_KECCAK_TOP = keccak_f1600
DIL_OBJ_NTT    = obj_dir_dil_ntt
DIL_OBJ_KECCAK = obj_dir_dil_keccak

DIL_NTT_RTL_SRCS = \
    ../hw/ntt/ntt_full.v \
    ../hw/ntt/ntt_controller.v \
    ../hw/ntt/ntt_ram.v \
    ../hw/ntt/ntt_bfu.v \
    ../hw/ntt/zetas_rom.v

DIL_KECCAK_RTL_SRCS = \
    ../hw/hash/keccak-hw/pkg_keccak.sv \
    ../hw/hash/keccak_f1600.sv \
    ../hw/hash/keccak-hw/keccak_round.sv \
    ../hw/hash/keccak-hw/keccak_round_constants_gen.sv

DIL_HW_SW_SRCS = \
    my_sign_verify.c \
    sign.c \
    packing.c \
    poly.c \
    polyvec.c \
    ntt.c \
    reduce.c \
    rounding.c \
    fips202.c \
    symmetric-shake.c \
    randombytes.c \
    ntt_hw_verilator.cpp \
    keccak_hw_verilator.cpp

DIL_HW_INCLUDES = -I. -I../hw/ntt -I../hw/hash -I../hw/hash/keccak-hw

$(DIL_OBJ_KECCAK)/V$(DIL_KECCAK_TOP)__ALL.a: $(DIL_KECCAK_RTL_SRCS)
	$(VERILATOR) --cc $(DIL_KECCAK_RTL_SRCS) \
		--top-module $(DIL_KECCAK_TOP) \
		--Mdir $(DIL_OBJ_KECCAK)
	make -C $(DIL_OBJ_KECCAK) -f V$(DIL_KECCAK_TOP).mk V$(DIL_KECCAK_TOP)__ALL.a

$(DIL_OBJ_NTT)/V$(DIL_NTT_TOP): $(DIL_NTT_RTL_SRCS) $(DIL_HW_SW_SRCS) $(DIL_OBJ_KECCAK)/V$(DIL_KECCAK_TOP)__ALL.a
	$(VERILATOR) --cc $(DIL_NTT_RTL_SRCS) \
		--exe $(DIL_HW_SW_SRCS) \
		--top-module $(DIL_NTT_TOP) \
		--Mdir $(DIL_OBJ_NTT) \
		-CFLAGS "$(DIL_HW_INCLUDES) -I$(abspath $(DIL_OBJ_KECCAK)) -O2 -DNTT_HW -DKECCAK_HW" \
		-LDFLAGS "-lm $(abspath $(DIL_OBJ_KECCAK))/V$(DIL_KECCAK_TOP)__ALL.a"
	make -C $(DIL_OBJ_NTT) -f V$(DIL_NTT_TOP).mk

dilithium_hw: $(DIL_OBJ_NTT)/V$(DIL_NTT_TOP)

run_dilithium_hw: dilithium_hw
	./$(DIL_OBJ_NTT)/V$(DIL_NTT_TOP)

######################################################################
# Keccak hardware build (mirrors NTT build)
######################################################################

KECCAK_HW_DIR = ../hw/hash
KECCAK_TOP    = keccak_f1600

# Keccak RTL sources
KECCAK_RTL_SRCS = \
    $(KECCAK_HW_DIR)/keccak-hw/pkg_keccak.sv \
    $(KECCAK_HW_DIR)/keccak_f1600.sv \
    $(KECCAK_HW_DIR)/keccak-hw/keccak_round.sv \
    $(KECCAK_HW_DIR)/keccak-hw/keccak_round_constants_gen.sv

# Keccak SW sources
KECCAK_SW_SRCS = \
    $(SW_DIR)/fips202.c \
    $(SW_DIR)/keccak_hw_verilator.cpp \
    ../hw/hash/tb_keccak_f1600.cpp

# Headers
KECCAK_INCLUDES = -I$(SW_DIR) -I$(KECCAK_HW_DIR)

obj_dir/V$(KECCAK_TOP): $(KECCAK_RTL_SRCS) $(KECCAK_SW_SRCS)
	$(VERILATOR) --cc $(KECCAK_RTL_SRCS) \
		--exe $(KECCAK_SW_SRCS) \
		--top-module $(KECCAK_TOP) \
		-CFLAGS "$(KECCAK_INCLUDES) -O2 -DKECCAK_HW" \
		-LDFLAGS "-lm"
	make -C obj_dir -f V$(KECCAK_TOP).mk

keccak_hw: obj_dir/V$(KECCAK_TOP)

keccak_hw_run: keccak_hw
	./obj_dir/V$(KECCAK_TOP)

clean:
	rm -rf obj_dir $(DIL_OBJ_NTT) $(DIL_OBJ_KECCAK)
