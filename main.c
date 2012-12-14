#include "siphash.h"
#include <stdio.h>


int main(void)
{
        uint8_t key[16];
        uint8_t msg[15];

        for (size_t i = 0; i < 15; ++i) {
                key[i] = i;
                msg[i] = i;
        }
        key[15] = 15;

        uint8_t res[8] = {0};
        siphash24(key, msg, sizeof(msg), res);

        printf("SipHash-2-4 test: ");
        for (size_t i = 0; i < 8; ++i) {
                printf("0x%02x ", res[i]);
        }
        printf("(expected 0xa129ca6149be45e5 in LE form)\n");

        return 0;
}

