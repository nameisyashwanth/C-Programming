/*Program to find area of a circle*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float r,area,peri;
printf("Enter radius of the circle in meters:");
scanf("%f",&r);
area=3.14*r*r;
peri=2*3.14*r;
printf("The area of circle is %fsq.m and perimeter is %fm",area,peri);
}
