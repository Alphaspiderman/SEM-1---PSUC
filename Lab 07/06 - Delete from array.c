#include <stdio.h>
int main()
{
    int position, c, n, i;
    printf("Enter the number of elements you want to insert - ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter values -\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Position to Delete - ");
    // ITS POSITION NOT INDEX
    scanf("%d", &position);
    if (position >= n + 1)
        printf("Unable to delete\n");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            arr[c] = arr[c + 1];
        printf("After deletion - \n");
        for (c = 0; c < n - 1; c++)
            printf("%d ", arr[c]);
    }
    return 0;
}
