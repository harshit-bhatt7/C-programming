#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,j,m,n,x;
    printf("Enter the value of A\n");
    scanf("%d",&m);
    printf("Enter %d value of A\n",m);

    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
     for (i=0;i<m;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    printf("Enter the value of B\n");
    scanf("%d",&n);
    printf("Enter %d value of B\n",n);

    for(j=0;j<n;j++)
    {
        scanf("&d",&b[j]);
    }
    for (j=0;j<n;j++)
    {
        printf("%d",b[j]);
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0 &&!(j%2==0))
            {
                c[x]=a[i]*b[j];
            }
        }
    }
        for(x=0;x<m;x++)
        {
        printf("%d\n",c[x]);
        }

}
