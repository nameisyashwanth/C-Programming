#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,count,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
      temp=temp/10;
      ++count;
    }
    int p=n;
    while(p!=0)
    {
        m=p%10;
        sum=sum+pow(m,count);
        p=p/10;
    }
    if(n==sum)
        printf("The number %d is a Armstrong number",n);
    else
        printf("The number %d is not a Armstrong number",n);
}
