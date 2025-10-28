#ifndef FMEA_HPP
#define FMEA_HPP
#include <cstdint>

// Fast Modular Exponentiation Algorithm
uint64_t fastModExp(uint64_t base, uint64_t exp, uint64_t mod) {
    uint64_t result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;
        exp >>= 1;
        base = (base * base) % mod;
    }
    return result;
}

#endif
