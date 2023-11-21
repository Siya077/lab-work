//program to print fibonacci series using for loop.
#include<stdio.h>
void main()
{
int i,n;
int a=0,b=1;
int nextTerm=a+b;
printf("Enter number of terms:");
scanf("%d",&n);
printf("Fibonacci series:\t %d%d",a,b);
for(i=3;i<=n;i++)
{
printf("%d",nextTerm);
a=b;
b=nextTerm;
nextTerm=a+b;
}
}
