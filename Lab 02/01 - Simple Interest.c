#include <stdio.h>

void main()
{
    float p, r, t, si;

    printf("Enter the Principal - ");
    scanf("%f", &p);
    printf("Enter the Interest Rate - ");
    scanf("%f", &r);
    printf("Enter the Time (in years) - ");
    scanf("%f", &t);
    si = p * t * r / 100;

    printf("The Interest is - %f", si);
}
