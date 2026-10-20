#include <cstdint>
#include <iostream>

int main() {
    std::uint8_t trip = 0;

    for (int km = 0; km < 300; ++km) {
        trip = static_cast<std::uint8_t>(trip + 1);
    }

    std::cout << "Part 1 - trip: "
              << static_cast<int>(trip) << '\n';

    int week = 1023;
    week = (week + 1) % 1024;

    std::cout << "GPS week: " << week << '\n';

    std::uint16_t trip16 = 65000;
    unsigned int km16 = 0;

    do {
        trip16 = static_cast<std::uint16_t>(trip16 + 1);
        ++km16;
    } while (trip16 != 0);

    std::cout << "Part 2 - kilometers: " << km16 << '\n';

    return 0;
}

