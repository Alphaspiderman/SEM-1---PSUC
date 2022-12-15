#include <stdio.h>

void main()
{
    // Armstrong
    int num, working, ld, sum = 0;

    /* Input a number from user */
    printf("Enter a number - ");
    scanf("%d", &num);

    /* Find sum of factorial of digits */
    for (working = num; working > 0; working = working / 10)
    {
        /* Get last digit of num */
        ld = working % 10;

        /* Add factorial to sum */
        sum = sum + (ld * ld * ld);
    }

    if (sum == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is NOT an armstrong number", num);
    }
}