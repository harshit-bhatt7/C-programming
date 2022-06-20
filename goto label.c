#include<stdio.h>
void main()
{
int num1,num2,ans;
short int opt;
printf("1.Add\n, 2.Sub\n, 3.Mul\n, 4.Div\n");
read_option:
printf("Enter your option\n",opt);
scanf("%d",&opt);
printf("Enter 2 numbers\n");
scanf("%d %d",&num1,&num2);
switch(opt)
{
case 1:
ans=num1+num2;
printf("Answer is %d\n",ans);
break;
case 2:
ans=num1-num2;
printf("Answer is %d\n",ans);
break;
case 3:
ans=num1*num2;
printf("Answer is %d\n",ans);
break;
case 4:
ans=num1/num2;
printf("Answer is %d\n",ans);
break;
case 5:
printf("THANK YOU");
break;
default:
printf("Invalid\n");
goto read_option;
break;
}
}
