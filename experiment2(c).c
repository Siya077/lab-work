//program to find distance between two points.
#include<stdio.h>
void main()
{
float a,b,c,d;
printf("Enter the points:");
scanf("%f%f%f%f",&a,&b,&c,&d);
float distance=sqrt(pow((c-a),2)+((d-b),2));
printf("Enter the distance=%f",distance);
}
