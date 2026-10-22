#include <iostream>

const int* max_ptr(const int* a, int n) {
    const int* best = a;
    for (const int* p = a + 1; p != a + n; ++p) {
        if (*p > *best) best = p;
    }
    return best;
}

int main() {
    int a[] = {3, 9, 2, 9, 5};
    const int* p = max_ptr(a, 5);
    std::cout << *p << ' ' << (p - a) << '\n';
}