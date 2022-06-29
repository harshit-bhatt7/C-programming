#include <stdio.h>
#include <math.h>
void main ()
{
int a , b;
printf("Enter a number to get perfect square\n");
scanf("%d",&a);
b=pow(a,2);
printf("The perfect square is %d\n",b);

float c , d;
printf("Enter a number for square rooting\n");
scanf("%f",&d);
c=sqrt(d);
printf("The square root is %f\n",c);

int x,y;
printf("Enter a value for absolute value\n");
scanf("%d",&x);
y=abs(x);
printf("The absolute value is %d\n",y);

float n,m;
printf("Enter the ceil value\n");
scanf("%f",&n);
m=ceil(n);
printf("The ceil value is %f\n",m);

float p,q;
printf("Enter the floor value\n");
scanf("%f",&p);
q=floor(p);
printf("The floor value is %f\n",q);

printf("THANK YOU");
}
