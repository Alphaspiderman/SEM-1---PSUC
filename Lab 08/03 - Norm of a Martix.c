#include <stdio.h>
#include <math.h>
void main(){
    int r,c, rows ,columns;
    float norm = 0;
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
    for(rows = 0; rows < r; rows++){
        for(columns = 0; columns < c; columns++){
            norm = norm + pow(mat[rows][columns], 2);
        }
    }
    norm = sqrt(norm);
    printf("Norm of Matrix = %.2f", norm);
}