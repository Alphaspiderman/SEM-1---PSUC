#include <stdio.h>

void main()
{
    int x;
    printf("Enter a number - ");
    scanf("%d", &x);
    if (x == 0)
    {
        printf("y = 0");
    }
    else
    {
        if (x > 0)
        {
            printf("y = 1");
        }
        else
        {
            printf("y = -1");
        }
    }
}