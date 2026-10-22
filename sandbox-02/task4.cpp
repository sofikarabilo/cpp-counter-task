#include <iostream>

bool bit_is_set(int value, int n) {
    return ((value >> n) & 1) == 1;
}

int main() {
    std::cout << bit_is_set(6, 0) << ' ' << bit_is_set(6, 1) << ' ' << bit_is_set(6, 2) << '\n';
}