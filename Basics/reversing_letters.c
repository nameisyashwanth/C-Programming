/*Program to reverse a 3 letter string*/

#include<stdio.h>
#include<conio.h>
void main()
{
char x,y,z;
printf("enter three letters to be reversed:");
scanf("%c %c %c",&x,&y,&z);
printf("the reverse of %c %c %c is %c %c %c",x,y,z,z,y,x);
}
