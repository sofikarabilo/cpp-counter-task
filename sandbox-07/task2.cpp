#include <iostream>

int fib(int n) {
    int prev = 0;
    int cur = 1;
    if (n == 0) return 0;
    for (int i = 1; i < n; ++i) {
        int next = prev + cur;
        prev = cur;
        cur = next;
    }
    return cur;
}

int main() {
    std::cout << fib(10) << ' ' << fib(40) << '\n';
}