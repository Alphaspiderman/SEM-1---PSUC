#include <stdio.h>

void main()
{
    // Evaluate Sine Series till n terms
    int i, j, n, fact, sign = -1;
    float x, sum = 0, numerator, radian;
    printf("Enter value of x (in Degrees) - ");
    scanf("%f", &x);
    printf("Enter value of n - ");
    scanf("%d", &n);

    radian = x * 3.14 / 180;

    for (i = 1; i<=n; i+=2){
        fact = 1;
        numerator = 1;
        for (j=1; j<=i; j++){
            numerator = numerator * radian;
            fact = fact * j;
        }
        sign = -1 * sign;
        sum += (numerator/fact)*sign;
    }
    printf("Value of sin(%.2f) = %f", x, sum);
}