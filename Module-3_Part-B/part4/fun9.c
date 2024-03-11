#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    
    struct Point p;

    p.x = 10;
    p.y = 20;

    printf("Point coordinates: (%d, %d)\n", p.x, p.y);

    printf("Size of Point structure: %lu bytes\n", sizeof(struct Point));

    return 0;
}
