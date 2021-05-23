/*Program to find average weight of two different items*/

#include<stdio.h>
#include<conio.h>
main()
{
float item1,item2,weight1,weight2,avg;
printf("No. of item1:");
scanf("%f",&item1);
printf("No. of item2:");
scanf("%f",&item2);
printf("weight of item1:");
scanf("%f",&weight1);
printf("weight of item2:");
scanf("%f",&weight2);
avg=((item1*weight1)+(item2*weight2))/(item1+item2);
printf("Average value is:%f",avg);
}
