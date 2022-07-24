#include<stdio.h>
#include<ctype.h>
void main()
{
    char c;

    c='m';
    printf("%c to %c\n",c,toupper(c));

    c='D ';
    printf("%c to %c",c,tolower(c));

}
