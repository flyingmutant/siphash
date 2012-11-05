#include "siphash.h"
#include <stdio.h>


int main(void)
{
        uint64_t k0 = 0x0706050403020100ull;
        uint64_t k1 = 0x0f0e0d0c0b0a0908ull;

        uint8_t msg[] = {0x00, 0x01, 0x02, 0x03, 0x04,
                         0x05, 0x06, 0x07, 0x08, 0x09,
                         0x0a, 0x0b, 0x0c, 0x0d, 0x0e};

        uint64_t s = siphash24(k0, k1, msg, sizeof(msg));

        printf("SipHash-2-4 test: 0x%016llx (expected 0x%016llx)\n", s, 0xa129ca6149be45e5ull);

        return 0;
}

