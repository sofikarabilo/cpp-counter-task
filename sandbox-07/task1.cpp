#include <iostream>

int main() {
    int n = 1;
    long long f = 1;
    while (f * (n + 1) <= 2147483647LL) {
        ++n;
        f *= n;
    }
    std::cout << n << '\n';
}