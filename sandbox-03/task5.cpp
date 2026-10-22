#include <cstdint>
#include <cstring>
#include <iostream>

void show(float f) {
    std::uint32_t bits = 0;
    std::memcpy(&bits, &f, sizeof(bits));
    std::uint32_t sign = bits >> 31;
    std::uint32_t exponent = (bits >> 23) & 0xFF;
    std::cout << sign << ' ' << exponent << '\n';
}

int main() {
    show(-2.5f);
    show(1.0f);
}