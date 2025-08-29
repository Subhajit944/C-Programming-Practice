#include<stdio.h>
#include<math.h>

int main(){

    int height, base, area;
    printf("Enter the valu of height :  ");
    scanf("%d", &height);
    printf("Enter the valu of base :  ");
    scanf("%d", &base);
    area = .5 * height * base;

    printf("the area of tringle :%d" , area);

    return 0;

}