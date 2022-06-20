#include<stdio.h>
void main()
{
int g;
printf("Enter your grade\n",g);
scanf("%d",&g);
if(g<100)
{printf("A+\n");}
else if(g<90)
{printf("First class\n");}
else if(g<75)
{printf("Distinction\n");}
else if(g<60)
{printf("Average\n");}
else if(g<45)
{printf("Satisfaction\n");}
else if(g<35)
{printf("FAILED\n");}
printf("Thank you");
}
