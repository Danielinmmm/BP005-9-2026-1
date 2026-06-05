#include <stdio.h>

struct Punto {
    int x;
    int y;
};

int main() {
    struct Punto p;

    p.x = 3;
    p.y = 5;

    printf("(%d, %d)\n", p.x, p.y);

    return 0;
}
