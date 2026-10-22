#include <cstdint>
#include <iostream>

struct Pair {
    std::uint8_t lo;
    std::uint8_t hi;
};

std::uint16_t join(Pair p) {
    return (std::uint16_t)(p.lo | (p.hi << 8));
}

int main() {
    std::cout << join(Pair{0x34, 0x12}) << ' ' << join(Pair{0x2C, 0x01}) << '\n';
}