#include <stdio.h>
#include <stdlib.h>
#define Records 3

typedef struct
{
    char name[30];
    int id;
    double salary;
} Employee;

void main(){
    Employee employee_data[Records];
    for(int i = 0; i < Records; i++){
        printf("Enter details of Employee - %d", i);
        
    }
    
}