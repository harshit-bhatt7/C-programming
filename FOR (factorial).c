#include<stdio.h>
void main()
{
int n,fact=1,i;
printf("Enter the number\n");
scanf("%d",&n);
for(i=n;i>1;i--)
{
fact*=i;
}
printf("%d\n",fact);
printf("THANK YOU");
}
