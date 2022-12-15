#include <stdio.h>

void main()
{
    float inc, cm;
    printf("Enter the length in inches \n");
    scanf("%f", &inc);
    cm = inc * 2.54;
    printf("The length in cm is - %f", cm);
}