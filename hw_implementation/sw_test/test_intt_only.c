#include <stdio.h>
#include <stdint.h>
#include "ntt_hw.h"
#include "ntt.h"
#include "reduce.h"

int main() {
    int32_t ip[N];
    int32_t op[N];
    for(int i=0;i<256;i++){
        ip[i] = i + 1;
        op[i] = i + 1;
    }

    /* convert to Montgomery domain */
    printf("INPUT \n");
    for(int i=0;i<256;i++){
        printf("ip[%i]: %i \n", i, ip[i]);
    }

    // printf("CONVERTING TO MONTGOMERY DOMAIN \n");
    // for(int i=0;i<N;i++)
    //     op[i] = montgomery_reduce((int64_t)op[i] << 32);

    printf("SOFTWARE NTT OUTPUT \n");
    ntt(op);
    for(int i=0;i<256;i++){
        printf("op[%i]: %i \n", i, op[i]);
    }

    printf("SOFTWARE INTT OUTPUT \n");
    invntt_tomont(op);

    printf("CONVERTING TO MONTGOMERY DOMAIN \n");
    for(int i=0;i<N;i++)
        op[i] = montgomery_reduce((int64_t)op[i]);

    for(int i=0;i<256;i++){
        printf("op[%i]: %i \n", i, op[i]);
    }


    return 0;
}
