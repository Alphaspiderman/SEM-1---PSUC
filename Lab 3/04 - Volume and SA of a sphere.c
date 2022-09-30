#include <stdio.h>
#include <math.h>

void main()
{
    int rad;
    float vol, sa;
    printf("Enter the radius - ");
    scanf("%d", &rad);
    vol = 4 * 3.14 * (pow(rad, 3)) / 3;
    sa = 4 * 3.14 * (pow(rad, 2));
    printf("The volume is - %f \n", vol);
    printf("The surface area is - %f \n", sa);
}