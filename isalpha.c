#include <stdio.h>
#include <ctype.h>
void main()
{
    char c;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    if (isalpha(c) == 0)
    {
        printf("%c is not an alphabet.", c);
    }
    else
    {
        printf("%c is an alphabet.", c);
    }
}
