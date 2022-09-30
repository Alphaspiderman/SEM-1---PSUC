#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter first number - ");
    scanf("%d", &num1);
    printf("Enter second number - ");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("The values after swapping are - %d %d", num1, num2);
}