#include <iostream>

bool is_sep(char c) {
    return c == ' ' || c == ',' || c == '\t';
}

int count_words(const char* s) {
    int words = 0;
    bool inside = false;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (is_sep(s[i])) {
            inside = false;
        } else if (!inside) {
            inside = true;
            ++words;
        }
    }
    return words;
}

int main() {
    std::cout << count_words("one,two three") << ' ' << count_words("  a,,b ") << '\n';
}