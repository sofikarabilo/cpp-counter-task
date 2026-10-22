#include <cstdint>
#include <iostream>

std::uint8_t pack(const bool b[8]) {
    int result = 0;
    for (int i = 0; i < 8; ++i) {
        if (b[i]) result |= 1 << i;
    }
    return (std::uint8_t)result;
}

int main() {
    bool bits[8] = {true, false, false, true, true, false, false, false};
    std::uint8_t packed = pack(bits);
    std::cout << (int)packed << '\n';
    for (int i = 0; i < 8; ++i) {
        std::cout << ((packed >> i) & 1) << (i < 7 ? ' ' : '\n');
    }
}