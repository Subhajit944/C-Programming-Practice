#include<stdio.h>
#include<string.h>


//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student IT[100];
    IT[0].roll =1127;
    IT[0].cgpa = 9.2;
    
    strcpy(IT[0].name ,"subhajit");

    printf("student name = %s\n", IT[0].name);
    
    


    return 0;
}