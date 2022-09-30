#include <stdio.h>

void main()
{
    int a = 30, b = 10, c = 5, d = 15;
    float eval1, eval2, eval3, eval4;
    eval1 = (a + b) * c / d;
    eval2 = ((a + b) * c) / d;
    eval3 = a + (b * c) / d;
    eval4 = (a + b) * (c / d);
    printf("The value of the evaluated expression (first) is - %f \n", eval1);
    printf("The value of the evaluated expression (second) is - %f \n", eval2);
    printf("The value of the evaluated expression (third) is - %f \n", eval3);
    printf("The value of the evaluated expression (fourth) is - %f \n", eval4);
}