/*Program to reverse a string*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],r[100];
    int i,j;
    printf("Enter the string to be reversed:");
    gets(a);
    j=strlen(a);
    for(i=0;i<=strlen(a);i++)
    {
        r[i]=a[j--];
        printf("%c",r[i]);
    }
}
