#include <iostream>

bool is_digit(char c) {
    return c >= '0' && c <= '9';
}

void calc(const char* expr) {
    int i = 0;
    int left = 0;
    while (is_digit(expr[i])) {
        left = left * 10 + (expr[i] - '0');
        ++i;
    }
    char op = expr[i];
    ++i;
    int right = 0;
    while (is_digit(expr[i])) {
        right = right * 10 + (expr[i] - '0');
        ++i;
    }
    if (expr[i] != '\0') {
        std::cout << "error at " << i << '\n';
        return;
    }
    int result = (op == '+') ? left + right : (op == '-') ? left - right : left * right;
    std::cout << result << '\n';
}

int main() {
    calc("12+34");
    calc("7*6x");
}