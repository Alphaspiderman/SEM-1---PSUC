#include <stdio.h>
void main()
{
    // Smallest of 3 via conditional / ternary
    int a, b, c;
    printf("Enter value of a - ");
    scanf("%d", &a);
    printf("Enter value of b - ");
    scanf("%d", &b);
    printf("Enter value of c - ");
    scanf("%d", &c);

    ((a < b) && (a < c)) ? printf("Smallest is a") : (b < c) ? printf("Smallest is b")
                                                             : printf("Smallest is c");
    return;
}