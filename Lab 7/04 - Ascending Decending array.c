#include <stdio.h>

int main()
{
    int i, j, b, n, choice_val;
    printf("Enter the number of elements you want to insert - ");
    scanf("%d", &n);
    int number[n];
    printf("Enter values -\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    while (1)
    {
        printf("\n1 - Ascending Order\n2 - Decending Order \n3 - Quit \nEnter Your Choice:\n");
        scanf("%d", &choice_val);
        switch (choice_val)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (number[i] > number[j])
                    {
                        b = number[i];
                        number[i] = number[j];
                        number[j] = b;
                    }
                }
            }
            printf("\nAscending order is given below\n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", number[i]);
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (number[i] < number[j])
                    {
                        b = number[i];
                        number[i] = number[j];
                        number[j] = b;
                    }
                }
            }
            printf("\nDescending order is given below\n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", number[i]);
            }
            break;
        case 3:
            break;
        default:
            printf("\nInvalid Choice\n");
            break;
        }
    }
    return 0;
}
