#include<stdio.h>
#include<math.h>
void main()
{
int a,b;
read_option:
printf("Enter the number\n");
scanf("%d",&a);
if(a% 2==0)
printf("It is an even number\n");
else
printf("It is an odd number\n");
b=pow(a,2);
printf("%d is the perfect square\n",b);
goto read_option;
}
