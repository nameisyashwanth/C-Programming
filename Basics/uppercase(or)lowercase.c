/*Program to find whether the entered character is in uppercase or lowercase or special character*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
        if((ch>=65)&&(ch<=90))
        printf("Uppercase");
        else
        printf("Lowercase");
     else
            printf("Special character");
}
