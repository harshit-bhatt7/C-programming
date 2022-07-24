#include <stdio.h>
#include <ctype.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalnum(c) == 0)
        {printf("%c is not an alphanumeric character.", c);}
    else
        {printf("%c is an alphanumeric character.", c);}
}
