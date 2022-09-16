#include <stdio.h>

void main()
{
    int num1, num2;

    printf("Enter the 1st Number - ");
    scanf("%d", &num1);
    printf("Enter the 2nd Number - ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("The largest Number is %d", num1);
    }
    else
    {
        printf("The largest number is %d", num2);
    }
}
