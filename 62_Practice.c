#include<stdio.h>

float circleArea(float red);

int main() {

    float red = 7;
    printf("Ares is :  %f", circleArea(red));
    return 0;

}

float circleArea(float red) {
    return 3.14 * red * red;

}