#include <stdio.h>

main()
{
    int num1, num2, t;

    printf("Enter the 1st Number - ");
    scanf("%d", &num1);
    printf("Enter the 2nd Number - ");
    scanf("%d", &num2);
    t = num1;
    num1 = num2;
    num2 = t;
    printf("Swapped values are first - %d and second - %d", num1, num2);
}
