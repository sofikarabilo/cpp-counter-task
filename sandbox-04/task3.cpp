#include <iostream>

int days_in_month(int m) {
    switch (m) {
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return 28;
    default:
        return 31;
    }
}

int main() {
    std::cout << days_in_month(2) << ' ' << days_in_month(4) << ' ' << days_in_month(12) << '\n';
}