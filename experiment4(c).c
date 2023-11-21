//program to find maximum of 'n' number using for loop.
#include<stdio.h>
void main()
{
int n,i;
float num,maximum;
printf("Enter the number of elements:");
scanf("%d",&n);
maximum=-999999999;
for(i=0;i<n;++i)
{
printf("Enter the number:");
scanf("%f",&num);
if(num>maximum)
{
maximum=num;
}
}
printf("Maximum number is:%.2f\n",maximum);
}//program to find maximum of 'n' number using for loop.
#include<stdio.h>
void main()
{
int n,i;
float num,maximum;
printf("Enter the number of elements:");
scanf("%d",&n);
maximum=-999999999;
for(i=0;i<n;++i)
{
printf("Enter the number:");
scanf("%f",&num);
if(num>maximum)
{
maximum=num;
}
}
printf("Maximum number is:%.2f\n",maximum);
}
