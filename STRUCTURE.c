#include<stdio.h>

struct student{
    char name[25];
    int age;
    int rollno;
    float marks[3];
    float total;
    float avg;
};
void main()
{   int i;
    struct student s1;
    printf("Enter your name\n");
    scanf("%s",s1.name);
    printf("Enter your age\n");
    scanf("%d",&s1.age);
    printf("Enter your rollno\n");
    scanf("%d",&s1.rollno);
    printf("Enter your marks\n");
    for(i=0;i<3;i++)
    {
    scanf("%f",&s1.marks[i]);
    }

    //calculate total & average
    s1.total = 0;
    for(i=0; i<3; i++){
        s1.total = s1.total + s1.marks[i];
    }

    s1.avg = s1.total/3;

    printf("Enter student details\n");
    printf("%s\n%d\n%d\n",s1.name,s1.age,s1.rollno);
    for(i=0;i<3;i++)
    {
        printf("%.2f\n",s1.marks[i]);
    }

    printf("Total: %.2f \n Average: %.2f\n", s1.total, s1.avg);
    printf("THANK YOU");
}
