#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    int rno;
    char name;
    float marks;
};
int main()
{
    struct student s1, s2, s3;

    printf("Enter First Student   Roll NO., Name, Marks\n");
    scanf("%d %c %f ", &s1.rno, &s1.name, &s1.marks);
    printf("Enter Second Student Roll NO., Name, Marks\n");
    scanf("%d %c %f ", &s2.rno, &s2.name, &s2.marks);
    printf("Enter Third Student Roll NO., Name, Marks\n");
    scanf("%d %c %f ", &s3.rno, &s3.name, &s3.marks);
    printf("First student Roll NO. is %d\n, Name %c\n, Marks %f\n", s1.rno, s1.name, s1.marks);
    printf("Second student Roll NO. is %d\n, Name %c\n, Marks %f\n", s2.rno, s2.name, s2.marks);
    printf("Third student Roll NO. is %d\n, Name %c\n, Marks %f\n", s3.rno, s3.name, s3.marks);
    return 0;
}