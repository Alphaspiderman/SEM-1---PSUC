#include <stdio.h>

void main()
{
    int n1, n2;
    float sum, diff, prod, qout;
    printf("Enter first number - ");
    scanf("%d", &n1);
    printf("Enter second number - ");
    scanf("%d", &n2);
    sum = n1 + n2;
    diff = n1 - n2;
    prod = n1 * n2;
    qout = n1 / n2;
    printf("The sum of two numbers is - %f \n", sum);
    printf("The difference of two numbers is - %f \n", diff);
    printf("The product of two numbers is - %f \n", prod);
    printf("The quotient of two numbers is - %f \n", qout);
}