#include<stdio.h>
//area of square
int main(){

    int side;

    printf("enter side");
    scanf("%d", &side);

    int area = side * side;
    printf("area is : %d", area);
    
    return 0;
}