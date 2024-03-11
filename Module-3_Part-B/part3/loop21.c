#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    printf("%d is %s\n", num1, isPalindrome(num1) ? "a palindrome" : "not a palindrome");
    printf("%d is %s\n", num2, isPalindrome(num2) ? "a palindrome" : "not a palindrome");
    printf("%d is %s\n", num3, isPalindrome(num3) ? "a palindrome" : "not a palindrome");

    return 0;
}
