#include <stdio.h>

int main() {
    
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %f + %f = %f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f - %f = %f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f * %f = %f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %f / %f = %f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        case '%':
          
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Result: %d %% %d = %.2f\n", (int)num1, (int)num2, result);
            } else {
                printf("Error: Modulo by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
