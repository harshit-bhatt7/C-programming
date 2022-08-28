#include<stdio.h>
void sort_array(int a[])
{
    int temp;
    int i;
    int j;
    int n;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void main()
{
    int a[10],n,i,j;
    printf("How many no you want?\n");
    scanf("%d",&n);
    printf("Enter %d no\n",n);
    for (i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    sort_array(a);
     printf("The sorted array is\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
