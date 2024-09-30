#include<stdio.h>
int main()
{
float num1,num2,result;
char a;
printf("\n-----input------\n");
printf("enter the num1:");
scanf("%f",&num1);
printf("enter the num2:");
scanf("%f",&num2);
printf("enter the operator(+,-,/,*):");
scanf(" %c",&a);
printf("\n-------output-----\n");
switch(a)
{
case'+':result:num1+num2;
printf("%.2f + %.2f=%.2f",num1,num2,result);
break;
case'-':result=num1-num2;
printf("%.2f - %.2f=%.2f",num1,num2,result);
break;
case'*':result=num1*num2;
printf("%.2f * %.2f=%.2f",num1,num2,result);
case'/':
if(num2!=0)
{
result=num1/num2;
{
printf("%.2f / %.2f=%.2f",num1,num2,result);
}
}
else
{
printf("error! cannot be divided by zero.\n");
}
break;
default:
printf("invalid operator!/n");
break;
}
return 0;
}

