/*Program to find area and perimeter of a rectangle*/

#include<stdio.h>
#include<conio.h>
void main(){
float height,width,area,perimeter;
printf("Enter height and width of the rectangle:");
scanf("%f %f",&height,&width);
area=height*width;
perimeter=(2*height)+(2*width);
printf("Area is %fsq.mt and perimeter is %fmt",area,perimeter);
}
