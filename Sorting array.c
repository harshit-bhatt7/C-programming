#include<stdio.h>
void main()
{
int i,j,a[10],n,temp;

printf("Enter numbers\n");
scanf("%d",&n);
printf("Enter %d numbers\n", n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{temp=a[j];
a[j]=a[i];
a[i]=temp;}
}
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);}
}

