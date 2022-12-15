#include <stdio.h>
int main()
{
    int i, n, find, freq = 0;
    printf("Enter number of elements - ");
    scanf("%d", &n);
    int a[n];
    printf("Enter values -\n");
    for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
    printf("Saved \nEnter value to check frequency of - ");
    scanf("%d", &find);
    for (i = 0; i < n; i++)
        {
            if(a[i] == find){
                freq++;
            }
        }
    printf("%d was found %d times in array", find, freq);
    return 0;
}