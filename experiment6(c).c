//program for linear search.
#include<stdio.h>
void main()
{
int arr[30];
int num,ele,found=0,i;
printf("Enter the number of elements:");
scanf("%d",&num);
printf("Enter the elements:");
for(i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the elements to search:");
scanf("%d",&ele);
for(i=0;i<num;i++)
{
if(arr[i]==ele)
{
printf("Element found at index %d element:%d\n",i,ele);
found=1;
break;
}
}
if(!found)
{
printf("Element not found in the array.");
}
}
