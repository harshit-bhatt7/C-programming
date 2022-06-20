#include<stdio.h>
void main()
{
int a;
printf("Enter your age\n",a);
scanf("%d",&a);
if(a<18)
{printf("Teen toddler\n");}
else if(a<25)
{printf("Studing Adult\n");}
else if(a<40)
{printf("Working Adult\n");}
else if(a<60)
{printf("Aged Adult\n");}
else if(a<100)
{printf("Senior citizen\n");}

else
{
    printf("INVALID AGE\n");}
printf("Thank you");}
