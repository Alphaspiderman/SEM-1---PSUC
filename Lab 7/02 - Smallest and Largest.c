#include <stdio.h>
int main()
{
    int n, i, small, large;
    printf("Enter the number of elements you want to insert - ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values -\n");
    for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    small = arr[0];
    large = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
            {
                small = arr[i];
            }
        if (arr[i] > large)
            {
                large = arr[i];
            }
    }
    printf("\nLargest element is - %d", large);
    printf("\nSmallest element is - %d", small);
    return 0;
}