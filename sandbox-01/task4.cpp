#include <cmath>
#include <iostream>
 
int celsius(int f) {
    double c = (f - 32) * 5.0 / 9.0;
    return (int)std::lround(c);
}
 
int main() {
    std::cout << celsius(100) << ' ' << celsius(0) << ' ' << celsius(212) << '\n';
}