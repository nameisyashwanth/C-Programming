#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int n,m,count1=0;
   printf("Enter the number:");
   scanf("%d",&n);
   int temp1=n;
   while(temp1!=0)
   {
       temp1/=10;
       count1++;
   }
   m=n*n;
   count1=pow(10,count1);
   if(m%count1==n)
   {
       printf("The square of %d is %d",n,m);
       printf("\nTherefore the number %d is Automorphic number",n);
   }
    else
        printf("The number %d is not Automorphic number",n);
}
