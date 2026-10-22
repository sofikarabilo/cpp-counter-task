#include <iostream>

bool divides(int a, int b) {
    return b != 0 && a % b == 0;
}

int main() {
    std::cout << divides(10, 5) << ' ' << divides(10, 3) << ' ' << divides(10, 0) << '\n';
}