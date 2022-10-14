#include <stdio.h>
#include <math.h>
void main()
{
    // roots of Quadratic
    // using switch
    int a, b, c;
    float root1, root2, disc, re, im;
    printf("Enter the values for a,b,c for a quadratic equation of the form aX^2 + bX + c = 0\n");
    scanf("%d%d%d", &a, &b, &c);
    disc = (b * b) - (4 * a * c);

    switch (disc > 0)
    {
    case 1:
        // +ve disc
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are real and distince \nRoots - %f, %f", root1, root2);
        break;
    case 0:
        // 0 or -ve
        switch (disc < 0)
        {
        case 1:
            // -ve
            printf("The roots are Imaginary\n");
            re = -b / (2 * a);
            im = sqrt(fabs(disc)) / (2 * a);
            printf("The roots are - \n%f - %f i and \n%f + %f i", re, im, re, im);
            break;
        case 0:
            // is 0
            re = -b / (2 * a);
            printf("The roots are real and equal \nRoots - %f", re);
            break;
        }
    }
    return;
}