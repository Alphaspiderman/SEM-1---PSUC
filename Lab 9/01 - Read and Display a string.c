#include <stdio.h>
#include <string.h>

void main()
{
    char str[500];
    printf("Enter a string - ");
    scanf("%[^\n]s", str);
    printf("Entered string - %s", str);
}