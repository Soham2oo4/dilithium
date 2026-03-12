#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include "api.h"

/* Fake firmware image */
uint8_t firmware[] = {
    0x13, 0x05, 0x00, 0x00,
    0x93, 0x85, 0x15, 0x00,
    0x73, 0x00, 0x00, 0x00
};

/* Utility function to print bytes in hex */
void print_hex(const char *label, const uint8_t *data, size_t len) {
    printf("%s [%zu bytes]:\n", label, len);
    for (size_t i = 0; i < len; ++i) {
        printf("%02X", data[i]);
        if ((i+1) % 32 == 0) printf("\n");
    }
    if (len % 32 != 0) printf("\n");
}

int main(void) {
    uint8_t pk[pqcrystals_dilithium2_PUBLICKEYBYTES];
    uint8_t sk[pqcrystals_dilithium2_SECRETKEYBYTES];
    uint8_t sig[pqcrystals_dilithium2_BYTES];
    size_t siglen;

    size_t fw_len = sizeof(firmware);

    printf("=== SECURE BOOT DEMO (DILITHIUM) ===\n");

    /* 1️⃣ Vendor generates keys (offline) */
    pqcrystals_dilithium2_ref_keypair(pk, sk);
    print_hex("Public Key", pk, pqcrystals_dilithium2_PUBLICKEYBYTES);
    print_hex("Secret Key", sk, pqcrystals_dilithium2_SECRETKEYBYTES);

    /* 2️⃣ Vendor signs firmware */
    pqcrystals_dilithium2_ref_signature(
        sig, &siglen,
        firmware, fw_len,
        NULL, 0,
        sk
    );
    print_hex("Signature", sig, siglen);

    /* 3️⃣ Boot ROM verification (original firmware) */
    int ret = pqcrystals_dilithium2_ref_verify(
        sig, siglen,
        firmware, fw_len,
        NULL, 0,
        pk
    );

    if (ret == 0)
        printf("Boot OK: firmware accepted ✅\n");
    else
        printf("Boot FAIL \n");

    /* 4️⃣ Attacker tampers with firmware */
    printf("\n*** Firmware tampered! ***\n");
    firmware[4] ^= 0xFF;   // flip one byte

    /* 5️⃣ Boot ROM verification (tampered firmware) */
    ret = pqcrystals_dilithium2_ref_verify(
        sig, siglen,
        firmware, fw_len,
        NULL, 0,
        pk
    );

    if (ret == 0)
        printf("Boot OK  (THIS IS BAD)\n");
    else
        printf("Boot FAIL: tampered firmware rejected \n");

    return 0;
}
