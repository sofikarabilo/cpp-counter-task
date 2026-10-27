#include <cstdint>
#include <iostream>
 
std::int16_t saturate(int v) {
    if (v > 32767) return 32767;
    if (v < -32768) return -32768;
    return (std::int16_t)v;
}
 
int main() {
    std::cout << saturate(40000) << ' ' << saturate(-40000) << ' ' << saturate(100) << '\n';
}