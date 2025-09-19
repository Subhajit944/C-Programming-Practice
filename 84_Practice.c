#include<stdio.h>

int main(){
    int age = 22;
    int _age = 22;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %udifference = %u\n", ptr, _ptr, ptr - _ptr);
    _ptr = &age;
    
    printf("comoarison = %u\n", ptr == _ptr);
    return 0;

}