#include<stdio.h>
#include<string.h>


//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    // S1 student.......
    struct student s1;
    s1.roll =1127;
    s1.cgpa = 9.2;

    strcpy(s1.name ,"subhajit");

    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    //S2  student.......
    struct student s2;
    s2.roll =1128;
    s2.cgpa = 9.2;

    strcpy(s2.name ,"Akanto");

    printf("student name = %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);

    //S3 student.........
    struct student s3;
    s3.roll =1129;
    s3.cgpa = 9.2;

    strcpy(s3.name ,"Annesh");

    printf("student name = %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);


    return 0;
}