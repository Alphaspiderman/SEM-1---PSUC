#include <stdio.h>
struct student
{
    int sub1;
    int sub2;
    int sub3;
};

void main(){
    struct student s[10];
    int i, n, total = 0;
    int total_marks[10];
    printf("Enter number of students to add (max 10) - ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter Marks in Three Subjects -");
        scanf("%d %d %d", &s[i].sub1, &s[i].sub2, &s[i].sub3);
        total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        printf("Total marks of Student %d - %d", i+1, total);
        total_marks[i] = total;
    }
    for(i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (total_marks[i] < total_marks[j]){
                int temp = total_marks[j];
                total_marks[j] = total_marks[i];
                total_marks[i] = temp;
            }
        }
    }

    printf("Total Marks in Descending Order - ");
    for(i = 0; i < n; i++){
        printf("\n%d", total_marks[i]);
    }
    

}