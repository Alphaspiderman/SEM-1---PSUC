#include <stdio.h>

void main()
{
    // Perfect Number
    int i, num, sum;
    printf("Enter a number - ");
    scanf("%d", &num);
    sum = 0;
    printf("Positive divisors are - ");

    for (i = 1; i<num; i++){
        if (num % i == 0){
            sum = sum+i;
            printf(" %d", i);
        }
    }
    if (sum == num){
        printf("\nPerfect Number");
    }
    else{
        printf("\nNot a perfect Number");
    }
}
