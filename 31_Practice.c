#include<stdio.h>

int main(){

    int marks;

    printf("Enter number(0-100) :  ");
    scanf("%d", &marks);


    marks <= 30 ? printf("FAIL \n") : printf("PASS \n");

    return 0;
}