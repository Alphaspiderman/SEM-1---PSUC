#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float root1, root2, disc, re, im;
    printf("Enter the values for a,b,c of a quadratic equation \n");
    scanf("%d%d%d", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc == 0)
    {
        // Real and equal roots
        re = -b / (2 * a);
        printf("The roots are real and equal \nRoots - %f", re);
    }
    else if (disc > 0)
    {
        // Real and Distinct roots
        root1 = (-b - sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are real and distince \nRoots - %f, %f", root1, root2);
    }
    else
    {
        // Imaginary roots
        printf("The roots are Imaginary\n");
        re = -b / (2 * a);
        im = pow(fabs(disc), 0.5) / (2 * a);
        printf("The roots are - \n%f - %f i and \n%f + %f i", re, im, re, im);
    }
}