#include<stdio.h>

int countEven(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", *(arr+2) );
    printf("%d\n", *(arr+4) );
    return 0;
}

