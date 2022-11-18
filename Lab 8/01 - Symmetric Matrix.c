#include <stdio.h>
void main(){
    int r,c, rows ,columns, check = 0;
    printf("Enter the number of rows - ");
    scanf("%d", &r);
    printf("Enter the number of columns - ");
    scanf("%d", &c);
    int mat[r][c];
    int matT[r][c];
    printf("Making a %d x %d Matrix", r, c);
    printf("Enter values - \n");
    // Get values
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            scanf("%d", &mat[rows][columns]);
        }
    }
    printf("Saved\n");
    // Transpose
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            matT[columns][rows] = mat[rows][columns];
        }
    }
    // Check for Symmetric
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            if(mat[rows][columns] != matT[columns][rows]){
                check = 1;
            }
        }
    }
    if(check == 1){
        printf("Not Symmetric");
    }
    else{
        printf("Symmetric");
    }
}