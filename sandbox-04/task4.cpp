#include <iostream>

bool every_third() {
    static int calls = 0;
    ++calls;
    return calls % 3 == 0;
}

int main() {
    for (int i = 0; i < 7; ++i) {
        std::cout << every_third() << (i < 6 ? ' ' : '\n');
    }
}