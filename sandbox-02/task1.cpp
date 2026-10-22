#include <cstdint>
#include <iostream>

bool parity(std::uint8_t b) {
    int ones = 0;
    while (b != 0) {
        ones += b & 1;
        b = (std::uint8_t)(b >> 1);
    }
    return (ones & 1) == 1;
}

int main() {
    std::cout << parity(0xA3) << ' ' << parity(0x07) << ' ' << parity(0xFF) << '\n';
}