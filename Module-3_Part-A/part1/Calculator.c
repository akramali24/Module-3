#include <stdio.h>
int main()
{
    int first, second, add, subtract, multiply, modulo;
    float divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);
    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / second;
    modulo = first % second;   
    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Multiplication = %d\n",multiply);
    printf("Division = %.2f\n",divide);
    printf("Modulo = %d\n",modulo);
    
    return 0;
}