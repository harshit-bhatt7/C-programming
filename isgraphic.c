#include<stdio.h>
#include<ctype.h>
void main()
{
    int i;
    printf("All graphic characters in C: \n");
    for(i=0;i<=127;i++)
    {
        if(isgraph(i)!=0)
        {
            printf("%c",i);
        }
    }
}
