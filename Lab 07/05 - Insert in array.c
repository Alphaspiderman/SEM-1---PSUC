#include <stdio.h>

int main()
{
    int element, n, i, location;
    printf("Enter the number of elements you want to insert - ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter values -\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to be inserted - ");
    scanf("%d", &element);

    printf("\nEnter the location - ");
    scanf("%d", &location);

    // Create space at the specified location
    for (i = n; i >= location; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[location - 1] = element;



    // Print out the result of insertion
    for (i = 0; i < n+1; i++)
        printf(" %d", arr[i]);

    return (0);
}
