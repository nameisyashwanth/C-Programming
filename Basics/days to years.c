/*Program to covert days into years*/

#include<stdio.h>
#include<conio.h>
void main()
{
int d,y,w;
printf("Enter number of days:");
scanf("%d",&d);
y=d/365;
w=(d%365)/7;
d=d-((y*365)+(w*7));
printf("years:%d\nweeks:%d\ndays:%d",y,w,d);
}


