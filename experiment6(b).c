//program to sort an array using bubble sort.
#include<stdio.h>
void bubble_sort(int arr[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
int main()
{
int arr[]={5,3,2,1,4};
int n=size of (arr)/size of (arr[0]);
bubble_sort(arr,n);
printf("Sorted array:");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
} 
