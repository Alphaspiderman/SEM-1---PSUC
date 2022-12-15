#include <stdio.h>

void main()
{
    // Check if Palindrome
    int num, reverse = 0, working, ld;
    printf("Enter a number - ");
    scanf("%d", &num);

    for (working = num; working > 0;working = working / 10){
        ld = working % 10;
        reverse = reverse * 10;
        reverse = reverse + ld;
    }

    if (reverse == num){
        printf("%d is a palindrome", num);
    }
    else{
        printf("%d is NOT a palindrome", num);
    }
}