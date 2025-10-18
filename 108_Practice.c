#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main(){
    char str[] = "subhajit";
    char ch = 'j';
    checkChar(str, ch);
    return 0;
}

void checkChar(char str[], char ch) {
    for( int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("character is present!\n");
            return;
        }
    }

    printf(" character is not present \n");
}