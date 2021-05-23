/*Program to find whether the given number is a palindrome or not
Palnidrome:A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward
Ex:1221, 12521*/

#include<stdio.h>
int main()
{
    int n,m,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int p=n;
    while(p!=0)
    {
      m=p%10;
      sum=sum*10+m;
      p=p/10;
    }
    if(sum==n)
        printf("The number %d is a palindrome",n);
    else
        printf("The number %d is not a palindrome",n);
}
