#include <iostream>

void caesar(char* s, int shift) {
    for (int i = 0; s[i] != '\0'; ++i) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            s[i] = (char)('a' + (c - 'a' + shift) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            s[i] = (char)('A' + (c - 'A' + shift) % 26);
        }
    }
}

int main() {
    char text[] = "Hello, World!";
    caesar(text, 3);
    std::cout << text << '\n';
}