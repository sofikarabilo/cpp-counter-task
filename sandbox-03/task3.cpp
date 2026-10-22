#include <iostream>

void reverse(int* a, int n) {
    int* left = a;
    int* right = a + n - 1;
    while (left < right) {
        int t = *left;
        *left = *right;
        *right = t;
        ++left;
        --right;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    reverse(a, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout << a[i] << (i < 4 ? ' ' : '\n');
    }
}