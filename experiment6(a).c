//program to find the maximum element and index in the array.
#include<stdio.h>
voisd main()
{
int i,temp=0;
float arr[5];
printf("Enter five numbers:\n");
for(i=0;i<5;++i)
{
scanf("%f",&arr[i]);
}
for(i=1;i<5;++i)
{
if(arr[temp]<arr[i])
temp=i;
}
printf("Largest element=%.2f\n",arr[temp]);
printf("Index=%d\n",temp);
}
