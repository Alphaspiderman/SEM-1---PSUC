#include <stdio.h>

void main()
{
    // Floyd's Triangle
    // Via FOR
    int n, a=1, i, j;
    printf("Enter number of rows to print - ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%3d", a);
            a++;
        }
        printf("\n");
    }
}