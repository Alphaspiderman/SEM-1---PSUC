#include <stdio.h>

void main()
{
    // Strong Number
    int i, num, working, ld, sum = 0;
    long fact;

    /* Input a number from user */
    printf("Enter a number - ");
    scanf("%d", &num);

    /* Find sum of factorial of digits */
    for (working = num; working > 0; working = working / 10)
    {
        /* Get last digit of num */
        ld = working % 10;

        /* Find factorial of last digit */
        fact = 1;
        for (i = 1; i <= ld; i++)
        {
            fact = fact * i;
        }

        /* Add factorial to sum */
        sum = sum + fact;
    }

    if (sum == num)
    {
        printf("%d is a strong number", num);
    }
    else
    {
        printf("%d is NOT a strong number", num);
    }
}