#include <iostream>

int digit_value(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    return c - 'A' + 10;
}

int hex_value(const char* s) {
    int result = 0;
    for (int i = 2; s[i] != '\0'; ++i) {
        result = result * 16 + digit_value(s[i]);
    }
    return result;
}

int main() {
    std::cout << hex_value("0x41") << ' ' << hex_value("0xff") << ' ' << hex_value("0x1A2") << '\n';
}