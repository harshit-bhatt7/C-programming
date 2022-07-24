#include<stdio.h>
void main()
{
    int i,n,k=0,oddB,a[10],b[10],c[10];
    printf("Enter N:\n");
    scanf("%d",&n);

    printf("Enter N nos for A:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter N nos for B:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i+=2)
    {
        oddB=(i==n-1)?1:b[i+1];
        c[k++]=a[i]*oddB;
    }
    printf("Even of A * oddB is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",c[i]);
    }
    }
