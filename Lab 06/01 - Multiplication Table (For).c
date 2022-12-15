#include <stdio.h>

void main()
{
    // Multiplication table
    // Using FOR
    int n,k,i,j;

    printf("Enter number of columns and rows to print - ");
    scanf("%d%d", &n,&k);

    for (i = 1; i <= n; i++){
        for (j = 1; j<= k; j++){
            printf("%4d", i*j);
        }
        printf("\n");
    }
}