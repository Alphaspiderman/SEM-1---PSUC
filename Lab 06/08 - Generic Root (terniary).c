#include <stdio.h>
int main(){
    int num, x;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Generic root: %d", (x = num % 9) ? x : 9);
    return 0;
}
