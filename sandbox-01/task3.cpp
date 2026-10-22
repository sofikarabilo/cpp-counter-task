#include <iostream>
 
void to_upper(char* s) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (char)(s[i] - ('a' - 'A'));
        }
    }
}
 
int main() {
    char first[] = "hello world 2";
    char second[] = "HAL 9000";
    to_upper(first);
    to_upper(second);
    std::cout << first << '\n';
    std::cout << second << '\n';
}