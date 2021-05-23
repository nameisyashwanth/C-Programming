/*Program to find the reverse of a string using strrev*/
#include<stdio.h>
#include<strings.h>

int main()
{
    char strg[100];
    printf("Enter any  string to reverse:");
    gets(strg);
    printf("Reverse of string is:%s",strrev(strg));
}
