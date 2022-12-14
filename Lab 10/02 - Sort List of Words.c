#include <stdio.h>
#include <string.h>
void sort_string(char [][100], int);
void main(){
    int i, n;
    char str[100][100];
    printf("Enter number of names - ");
    scanf("%d", &n);
    printf("Enter names in any order - ");
    for (i = 0; i < n; i++){
        scanf("%s", str[i]);
    }
    sort_string(str, n);
    printf("Sorted string - \n");
    for(i = 0; i<n; i++){
        printf("%s\n", str[i]);
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