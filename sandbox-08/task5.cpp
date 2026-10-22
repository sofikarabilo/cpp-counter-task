#include <iostream>

int digit_value(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    return c - 'A' + 10;
}

bool check_nmea(const char* s) {
    int sum = 0;
    int i = 1;
    while (s[i] != '*') {
        sum ^= s[i];
        ++i;
    }
    int expected = digit_value(s[i + 1]) * 16 + digit_value(s[i + 2]);
    return sum == expected;
}

int main() {
    std::cout << check_nmea("$GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47") << ' '
              << check_nmea("$GPGGA,123519,4807.039,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47") << '\n';
}