#include <stdio.h>
#include <string.h>
void togglecase(char * str);
void main(){
    char str[1000];
    printf("Enter a string - ");
    gets(str);
    togglecase(str);
    printf("Toggeled - %s", str);

}
void togglecase(char *str){
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    // int i;
    // for(i = 0; s[i]; i++){
    //     if(s[i]>"A" && s[i]<"Z"){
    //         s[i] = s[i] + 32;
    //     }
    //     else if(s[i]>"a" && s[i]<"z"){
    //         s[i] = s[i] - 32;
    //     }
    // }
}