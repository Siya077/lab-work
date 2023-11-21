//to print armstrong number using while loop.
#include<stdio.h>
void main()
{
int num,sum=0,r,i,num1;
printf("Enter the number:");
scanf("%d",&num);
num1=num;
while(num>0)
{
i++;
num=num/10;
}
num=num1;
while(num>0)
{
r=num%10;
sum=sum+(r*r*r);
num=num/10;
}
if(num1==sum)
{
printf("Given number is armstrong.");
}
else
{
printf("Given number is a not armstrong.");
}
}
