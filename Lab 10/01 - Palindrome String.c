#include <stdio.h>
#include <string.h>
int check_palindrome(char *);
void main()
{
    char string[1000];
    printf("Enter string to check - ");
    gets(string);
    int check = check_palindrome(string);
    if (check == 0){
        printf("Is not a plaindrome");
    }
    else{
        printf("Is a Palindrome");
    }
}

int check_palindrome(char *s){
    int len = strlen(s), i, flag = 1;
    for(i = 0; i < len; i++){
        if(s[i] != s[len-i-1]){
            flag = 0;
        }
    }
    return flag;
}