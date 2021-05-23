/*Program to copy a string using strcpy*/
#include<stdio.h>
#include<strings.h>

int main()
{
    char source[]="Jingle Bell";
    char target[100];
    strcpy(target, source);
    printf("Source:%s",source);
    printf("\nTarget:%s",target);
}
