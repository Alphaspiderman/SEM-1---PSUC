#include <stdio.h>

void main()
{
    // Multiplication table
    // Using WHILE
    int n,k,i,j;

    printf("Enter number of columns and rows to print - ");
    scanf("%d%d", &n,&k);
    i = 1;
    while(i<=n){
        j = 1;
        while(j<=k){
            printf("%4d", i*j);
            j++;
        }
        // printf("%d", i);
        i++;
        printf("\n");
    }
}