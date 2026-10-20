
#include <cstdint>
#include <iostream>

int main() {
    std::uint16_t trip = 65000;
    unsigned int km = 0;

    do {
        trip = static_cast<std::uint16_t>(trip + 1);
        ++km;
    } while (trip != 0);

    std::cout << km << '\n';

    return 0;
}
