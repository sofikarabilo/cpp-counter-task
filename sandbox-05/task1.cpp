#include <cstring>
#include <iostream>

char lower(char c) {
    if (c >= 'A' && c <= 'Z') return (char)(c + ('a' - 'A'));
    return c;
}

bool is_palindrome(const char* s) {
    int n = (int)std::strlen(s);
    for (int i = 0; i < n / 2; ++i) {
        if (lower(s[i]) != lower(s[n - 1 - i])) return false;
    }
    return true;
}

int main() {
    std::cout << is_palindrome("Level") << ' ' << is_palindrome("Radar") << ' '
              << is_palindrome("hello") << '\n';
}