#include <iostream>

struct Vec {
    int x, y;
};

Vec add(Vec a, Vec b) {
    return Vec{a.x + b.x, a.y + b.y};
}

void scale(Vec* v, int k) {
    v->x *= k;
    v->y *= k;
}

int main() {
    Vec v = add(Vec{1, 2}, Vec{3, 4});
    std::cout << v.x << ' ' << v.y << '\n';
    scale(&v, 2);
    std::cout << v.x << ' ' << v.y << '\n';
}