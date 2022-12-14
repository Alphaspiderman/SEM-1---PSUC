#include <stdio.h>
#include <string.h>
void string_to_arr(char *, char *);
void sort_string(char [][100], int);
void main(){
    int i, n;
    char str[1000], bstr[100][100];
    printf("Enter number of names - ");
    scanf("%d", &n);
    gets(str);
    string_to_arr(str, bstr);
    sort_string(bstr, n);
    printf("Sorted string - \n");
    for(i = 0; i<n; i++){
        printf("%s\n", bstr[i]);
    }
}
void sort_string(char arr[][100], int n){
    int i, j;
    char temp[100];
    for(i=0; i<n;i++){
        for(j=i+1; j<n; j++){
            if(strcmp(arr[i], arr[j]) > 0){
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
void string_to_arr(char *arr, char *brokenarr){
    
}