#include <stdio.h>
void main(){
    int r,c, rows ,columns, temp, r1, r2;
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
    printf("Enter rows to swap - ");
    scanf("%d %d", &r1, &r2);
    // Row position to index
    r1--;
    r2--;
    // Swap
    for(columns = 0; columns < c; columns++){
        temp = mat[r1][columns];
        mat[r1][columns] = mat[r2][columns];
        mat[r2][columns] = temp;
    }
    // Display
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            printf("%d ", mat[rows][columns]);
        }
        printf("\n");
    }
}