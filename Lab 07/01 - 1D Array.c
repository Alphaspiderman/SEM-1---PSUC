#include <stdio.h>
int main()
{
    int a[10], i, n;
    printf("Enter number of elements - ");
    scanf("%d", &n);
    printf("Enter values -\n");
    for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
    printf("\nNumbers entered are -\n");
    for (i = 0; i < n; i++)
        {
            printf("  %d", a[i]);
        }
    return 0;
}
