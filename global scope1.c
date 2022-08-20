#include<stdio.h>
void p(int a)
{
    if(a%2==0)
    {
        printf("Number is even\n",a);
    }
    else
    {
        printf("Number is odd\n",a);
    }
}
void main()
{
    void p(a);
    int a;
    printf("Enter number\n",a);
    scanf("%d",&a);
    p(a);
}
