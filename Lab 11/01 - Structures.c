#include <stdio.h>
struct student
{
    int sub1;
    int sub2;
    int sub3;
    float total;
};

struct highest
{
    int sub1_s;
    int m_sub1;
    int sub2_s;
    int m_sub2;
    int sub3_s;
    int m_sub3;
    int max_s;
    float m_max;
};


void main(){
    struct student s[10];
    struct highest toppers;
    
    int i, n;
    float total;
    toppers.max_s = 0;
    toppers.sub1_s = 0;
    toppers.sub2_s = 0;
    toppers.sub3_s = 0;
    printf("Enter number of students to add (max 10) - ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        total = 0;
        printf("\nEnter Marks in Three Subjects - ");
        scanf("%d %d %d", &s[i].sub1, &s[i].sub2, &s[i].sub3);
        total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].total = total;
    }
    toppers.m_max = s[toppers.max_s].total;
    toppers.m_sub1 = s[toppers.sub1_s].sub1;
    toppers.m_sub2 = s[toppers.sub2_s].sub2;
    toppers.m_sub3 = s[toppers.sub3_s].sub3;
    for(i = 0; i<n;  i++){
        printf("\nTotal marks of Student %d - %.2f", i+1, s[i].total);
        if (toppers.m_max < s[i].total){
            toppers.m_max = s[i].total;
            toppers.max_s = i;
        }
        if(toppers.m_sub1 < s[i].sub1){
            toppers.m_sub1 = s[i].sub1;
            toppers.sub1_s = i;
        }
        if(toppers.m_sub2 < s[i].sub2){
            toppers.m_sub2 = s[i].sub2;
            toppers.sub2_s = i;
        }
        if(toppers.m_sub3 < s[i].sub3){
            toppers.m_sub3 = s[i].sub3;
            toppers.sub3_s = i;
        }
    }  
    printf("\nHighest Total Marks (of Student %d) - %f", toppers.max_s, toppers.m_max);
    printf("\nHighest Marks in Sub1 (of Student %d) - %d", toppers.sub1_s, toppers.m_sub1);
    printf("\nHighest Marks in Sub2 (of Student %d) - %d", toppers.sub2_s, toppers.m_sub2);
    printf("\nHighest Marks in Sub3 (of Student %d) - %d", toppers.sub3_s, toppers.m_sub3);


}