/*Program to find whether the entered character is a consonant or not*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
        printf("%c is an alphabet",ch);
    else
        printf("%c is not an alphabet",ch);
}
