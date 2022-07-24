#include<stdio.h>
void main()
{
    char name[20],i;
    printf("Enter your name\n");
    scanf("%s",&name);

    for(i=0;i<20;i++)
    {
        printf("%c\n",name[i]);
    }
}
