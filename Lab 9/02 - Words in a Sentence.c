#include <stdio.h>
#include <string.h>
int wordcounter(char * str);
void main()
{
    char str[500];
    int words;
    printf("Enter a string - ");
    gets(str);
    words = wordcounter(str);
    printf("Number of Words = %d", words);
    
}
int wordcounter(char *s){
    int words = 0, i;
    for(i = 0; s[i]; i++){
        if(s[i] == 32){
            words++;
        }
    }
    if(i > 0){
        words++;
    }
    return words;
}