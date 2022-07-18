#include<stdio.h>
void main()
{
int num[10],i;
printf("Enter 10 nos\n");
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<10;i++)
{
if(num[i]% 2==0)
{printf("%d\n",num[i]);}
}
}
