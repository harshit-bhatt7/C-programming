#include<stdio.h>
void main()
{char ch='*';
int i,j,r,k;
printf("Enter number of rows\n");
scanf("%d",&r);

for(i=1;i<=r;i++)
{
for(j=1;j<=r-i;j++)
{
printf(" ");
}
for(k=1;k<=(2*i-1);k++)
{
printf("%c",ch);
}
printf("\n");
}
}
