//program to calculate factorial of a number using for loop.
#include<stdio.h>
void main()
{
int num;
unsigned long long factorial=1;
printf("Enter a positive integer:");
scanf("%d",&num);
if(num<0)
{
printf("ERROR:Factorial is not defined for negative numbers.");
}
else
{
for(i=0;i<=num;i++)
{
factorial*=i;
}
printf("Factorial of %d=%llu\n",num,factorial);
}
}
