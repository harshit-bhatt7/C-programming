#include <stdio.h>
#include <ctype.h>
void main()
{
    char c;

    printf("Enter a digit: ");
    scanf("%c",&c);

    if (isdigit(c) == 0)
     {
         printf("%c is not a digit.",c);
     }
    else
    {
         printf("%c is a digit.",c);
    }
}
