#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter first number - ");
    scanf("%d", &num1);
    printf("Enter second number - ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d is larger", num1);
    }
    else
    {
        printf("%d is larger", num2);
    }
}