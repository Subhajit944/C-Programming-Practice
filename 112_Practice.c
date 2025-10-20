#include<stdio.h>
#include<string.h>


//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student S1 = {1127, 9.2, " subhajit"};
    printf("student roll = %d\n", S1.roll);

    return 0;
}