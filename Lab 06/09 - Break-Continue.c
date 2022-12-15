#include <stdio.h>

void main()
{
    // Break-Continue
    printf("In a Loop of 1 to 10\nWe will break before printing 9 and continue before printing 5\n");
    int i;
    for (i = 1; i <= 10; i++){
        if (i == 5){continue;}
        if (i == 9){break;}
        printf("%d \n", i);
    }
    printf("Loop has ended");
}