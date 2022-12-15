#include <stdio.h>
#include <math.h>
void main()
{
    // Formula of Compound Interst -> P *(1 + r/100)^t
    float p, r, t, temp, ci;
    printf("Enter principle - ");
    scanf("%f", &p);

    printf("Enter time - ");
    scanf("%f", &t);

    printf("Enter rate - ");
    scanf("%f", &r);

    /* Calculate compound interest */
    ci = p * (pow((1 + r / 100), t));

    /* Print the resultant CI */
    printf("Compound Interest = %f", ci);
}