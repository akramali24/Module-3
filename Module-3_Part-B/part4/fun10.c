#include <stdio.h>

union Number {
    int integer;
    float floatingPoint;
};

int main() {
    union Number num;

    num.integer = 42;

    printf("Integer: %d\n", num.integer);
    printf("Floating Point: %f\n", num.floatingPoint); 
    printf("Size of Number union: %lu bytes\n", sizeof(union Number));

    return 0;
}
