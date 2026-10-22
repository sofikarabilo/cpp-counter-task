#include <iostream>

int sum(const int* begin, const int* end) {
    int total = 0;
    while (begin != end) {
        total += *begin;
        ++begin;
    }
    return total;
}

int main() {
    int a[] = {1, 2, 3};
    std::cout << sum(a, a + 3) << ' ' << sum(a, a) << '\n';
}