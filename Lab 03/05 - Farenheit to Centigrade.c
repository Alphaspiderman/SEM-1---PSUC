#include <stdio.h>

void main()
{
    float f, c;
    printf("Enter the temperature in Farenheit - ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("The temperature in Celcius is - %f", c);
}