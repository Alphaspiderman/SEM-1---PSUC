#include <stdio.h>

struct student_struct{
    int roll;
    char name[50];
    double marks;
};

void main(){
    struct student_struct student;
    printf("Enter information of a student\n");
    printf("Enter name - ");
    scanf("%s", student.name);
    printf("Enter Roll Number - ");
    scanf("%d", &student.roll);
    printf("Enter Total marks of Student - ");
    scanf("%lf", &student.marks);
    printf("Saved\n");
    printf("Displaying Entered Information  - \nRoll - %d \nName - %s \nTotal Marks - %.3lf", student.roll, student.name, student.marks);
}