#include <stdio.h>

void main()
{
    // Generic Roots
    int num, sum, reminder;
    printf("Please Enter any number = ");
    scanf("%d", &num);
    while (num >= 10)
    {
        for (sum = 0; num > 0; num = num / 10){
            reminder = num % 10;
            sum = sum + reminder;
        }
        if (sum >= 10){
            num = sum;
        }
        else{
            printf("Generic Root = %d", sum);
            break;
        }
    }
}
