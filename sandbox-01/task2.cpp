#include <iomanip>
#include <iostream>
 
void show(int tenths) {
    int total_seconds = tenths / 10;
    int hours = total_seconds / 3600;
    int minutes = total_seconds / 60 % 60;
    int seconds = total_seconds % 60;
    std::cout << hours << ':'
              << std::setw(2) << std::setfill('0') << minutes << ':'
              << std::setw(2) << std::setfill('0') << seconds << '\n';
}
 
int main() {
    show(3600000);
    show(12345);
}