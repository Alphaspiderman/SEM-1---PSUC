#include <stdio.h>
void main(){
    int r,c, rows ,columns, temp;
    printf("Enter the number of rows - ");
    scanf("%d", &r);
    printf("Enter the number of columns - ");
    scanf("%d", &c);
    if(r != c){
        printf("Not a square Matrix");
        return;
    }
    int mat[r][c];
    printf("Making a %d x %d Matrix", r, c);
    printf("Enter values - \n");
    // Get values
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            scanf("%d", &mat[rows][columns]);
        }
    }
    printf("Saved\n");
    // Swap
    for(rows = 0; rows < r; rows++){
        temp = mat[rows][rows];
        mat[rows][rows] = mat[rows][r - rows - 1];
        mat[rows][r - rows - 1] = temp;
    }
    // Display
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            printf("%d ", mat[rows][columns]);
        }
        printf("\n");
    }
}