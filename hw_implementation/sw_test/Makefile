VERILATOR = verilator
TOP       = ntt_full

# Paths
HW_DIR = ../hw
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
    $(SW_DIR)/test_ntt_only.c \
    $(SW_DIR)/ntt_hw_verilator.cpp \
    $(SW_DIR)/ntt.c \
    $(SW_DIR)/reduce.c

# Headers
INCLUDES = -I$(SW_DIR) -I$(HW_DIR)

all: obj_dir/V$(TOP)

obj_dir/V$(TOP): $(RTL_SRCS) $(SW_SRCS)
	$(VERILATOR) --cc $(RTL_SRCS) \
		--exe $(SW_SRCS) \
		--top-module $(TOP) \
		-CFLAGS "$(INCLUDES) -O2" \
		-LDFLAGS "-lm"
	make -C obj_dir -f V$(TOP).mk

run: all
	./obj_dir/V$(TOP)

clean:
	rm -rf obj_dir
	