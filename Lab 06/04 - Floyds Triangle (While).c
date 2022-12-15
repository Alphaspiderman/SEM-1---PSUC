#include <stdio.h>

void main()
{
    // Floyd's Triangle
    // Via FOR
    int n, a=1, i, j;
    printf("Enter number of rows to print - ");
    scanf("%d", &n);

    i = 1;
    while(i<=n){
        j = 1;
        while(j<=i){
            printf("%4d", a);
            a++;
            j++;
        }
        i++;
        printf("\n");
    }
}