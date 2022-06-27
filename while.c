#include<stdio.h>
void main()
{
int num,i;
printf("Enter the number\n",num);
scanf("%d",&num);
i=0;
while(i<=10)
{
printf("%d*%d=%d\n",num,i,num*i);
i=i+1;}
printf("Thank you");}
