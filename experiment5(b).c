 //program to find sum of digits of a number using while loop.
#include<stdio.h>
void main()
{
int number,remainder,sum=0;
printf("Enter any number");
scanf("%d",&number);
while(number>0)
{
remainder=number%10;
sum=sum+remainder;
nuumber=number/10;
}
printf("Sum of the digits of given number=%d\n",sum);
}
