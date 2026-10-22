#include <cstdint>
#include <iostream>

const std::uint8_t UP = 1u << 0, DOWN = 1u << 1, LEFT = 1u << 2, RIGHT = 1u << 3;
const std::uint8_t BTN_A = 1u << 4, BTN_B = 1u << 5;

void print_pad(std::uint8_t pad) {
    const char* names[] = {"UP", "DOWN", "LEFT", "RIGHT", "A", "B"};
    std::uint8_t buttons[] = {UP, DOWN, LEFT, RIGHT, BTN_A, BTN_B};
    bool first = true;
    for (int i = 0; i < 6; ++i) {
        if ((pad & buttons[i]) != 0) {
            if (!first) std::cout << ' ';
            std::cout << names[i];
            first = false;
        }
    }
    std::cout << '\n';
}

int main() {
    print_pad(0x19);
    print_pad(0x22);
}