#include <stdio.h>
void main(){
    int r,c, rows ,columns, temp, c1, c2;
    printf("Enter the number of rows - ");
    scanf("%d", &r);
    printf("Enter the number of columns - ");
    scanf("%d", &c);

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
    // Check what to swap
    printf("Enter columns to swap - ");
    scanf("%d %d", &c1, &c2);
    // Row position to index
    c1--;
    c2--;
    // Swap
    for(rows = 0; rows < r; rows++){
        temp = mat[rows][c1];
        mat[rows][c1] = mat[rows][c2];
        mat[rows][c2] = temp;
    }
    // Display
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            printf("%d ", mat[rows][columns]);
        }
        printf("\n");
    }
}