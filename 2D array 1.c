#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n;

    printf("Enter the numbers\n");
    scanf("%d %d",&m,&n);
    printf("Enter numbers of %d %d for matrix\n",m,n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}

