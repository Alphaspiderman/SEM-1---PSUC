#include <stdio.h>
void main(){
    int r,c, rows ,columns, sum, i;
    printf("Enter the number of rows - ");
    scanf("%d", &r);
    printf("Enter the number of columns - ");
    scanf("%d", &c);
    int mat1[r][c];
    int mat2[c][r];
    int matF[r][r];
    printf("Making a %d x %d Matrix \nEnter Values - \n", r, c);
    // Get values
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            scanf("%d", &mat1[rows][columns]);
        }
    }
    printf("Saved \nMaking a %d x %d Matrix \nEnter values for 2nd Matrix - \n", c, r);
    // Get values for 2nd matrix
    for(rows = 0; rows < c; rows++){
        for(columns = 0; columns < r; columns++){
            scanf("%d", &mat2[rows][columns]);
        }
    }
    printf("Saved\n");
    // Multiplication
    for(rows = 0; rows < r; rows++){
        for(i = 0; i < c; i++){
            sum = 0;
            for(columns = 0; columns < c; columns++){
                sum = sum + (mat1[rows][columns] * mat2[rows][columns]);
            }
            matF[rows][i] = sum;
        }
    }
    // Show Matrix
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            printf("%d ", matF[rows][columns]);
        }
        printf("\n");
    }
}