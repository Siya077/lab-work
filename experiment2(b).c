//program to calculate area and perimeter of circle,square and rectangle.
#include<stdio.h>
void main()
{
//for circle.
float r;
printf("Enter the radius of circle:");
scanf("%f",&r);
float area1,peri1;
area1=3.14*r*r;
peri1=2*3.14*r;
printf("Area of circle=%.2f\n",area1);
printf("Perimeter of circle=%.2f\n",peri1);
//for square.
float s;
printf("Enter the side of square:");
scanf("%f",&s);
float area2,peri2;
area2=s*s;
peri2=4*s;
printf("Area of square=%.2f\n",area2);
printf("Perimeter of square=%.2f\n",peri2);
//for rectangle.
float l,b;
printf("Enter the length and breadth of rectangle:");
scanf("%f%f",&l,&b);
float area3,peri3;
area3=l*b;
peri3=2*(l+b);
printf("Area of rectangle=%.2f\n",area3);
printf("Perimeter of rectangle=%.2f\n",peri3);
}
