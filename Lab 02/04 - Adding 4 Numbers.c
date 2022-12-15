#include <stdio.h>

void main()
{
    int num1, num2, num3, num4, sum;

    printf("Enter the 1st Number - ");
    scanf("%d", &num1);
    printf("Enter the 2nd Number - ");
    scanf("%d", &num2);
    printf("Enter the 3rd Number - ");
    scanf("%d", &num3);
    printf("Enter the 4th Number - ");
    scanf("%d", &num4);
    sum = num1 + num2 + num3 + num4;
    printf("The sum of the four numbers is - %d", sum);
}
