#include <stdio.h>

void main()
{
    int n1;
    printf("Enter a number - ");
    scanf("%d", &n1);
    if (n1 % 2 == 1)
    {
        printf("ODD");
    }
    else
    {
        printf("EVEN");
    }
    return 0;
}