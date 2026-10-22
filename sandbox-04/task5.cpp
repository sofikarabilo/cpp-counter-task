#include <iostream>

int main() {
    unsigned i = 10;
    while (true) {
        std::cout << i;
        if (i == 0) break;
        std::cout << ' ';
        --i;
    }
    std::cout << '\n';
}