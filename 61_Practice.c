#include<stdio.h>

float squareArea(float side);


int main() {

    float side = 8;
    printf("Area is  :  %f" , squareArea(side));
    return 0;

}

float squareArea(float side) {
    return side * side;

}



