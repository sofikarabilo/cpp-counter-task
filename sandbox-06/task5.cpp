#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point* pts = new Point[3]{};
    for (int i = 0; i < 3; ++i) {
        pts[i].x = i + 1;
    }
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += pts[i].x;
    }
    std::cout << sum << '\n';
    delete[] pts;
    pts = nullptr;
}