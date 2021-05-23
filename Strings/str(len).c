/*Program to find string length using strlen*/
#include<stdio.h>
#include<strings.h>

int main()
{
    char strg[100];
    int str_len;
    printf("Enter any string:");
    gets(strg);
    str_len=strlen(strg);
    printf("String length:%d",str_len);
}
