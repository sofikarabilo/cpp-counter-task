#include <iostream>
 
bool bit_is_set(int value, int n) {
    return ((value >> n) & 1) == 1;
}
 
int main() {
    int value = 6;
    for (int n = 0; n <= 2; ++n) {
        std::cout << bit_is_set(value, n) << (n < 2 ? " " : "\n");
    }
}