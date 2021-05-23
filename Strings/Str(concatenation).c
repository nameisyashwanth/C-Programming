/*Program to concatenate(combine) to strings*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    printf("The final string is:%s",strcat(a,b));
}
