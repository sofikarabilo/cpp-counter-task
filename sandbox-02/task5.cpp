#include <iostream>

int times10(int x) {
    return (x << 3) + (x << 1);
}

int main() {
    std::cout << times10(7) << ' ' << times10(25) << '\n';
}