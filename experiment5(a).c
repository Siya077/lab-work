//program to find if a number is prime or not using while.
#include<stdio.h>
void main()
{
  int i,n=2,a,prime=0;
printf("Enter the number:");
scanf("%d",&i);
while(n<i)
{
if(i%n==0)
{
prime++;
}
n++;
}
if(prime==0)
{
printf("This number is Prime.\n");
}
else
{
printf("This number is not Prime.\n");
}
}
