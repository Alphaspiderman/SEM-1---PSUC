#include <stdio.h>
void main(){
    int r,c, rows ,columns, trace = 0;
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
            if(rows == columns){
                trace = trace + mat[rows][columns];
            }
        }
    }
    printf("Trace of Matrix = %d", trace);
}
