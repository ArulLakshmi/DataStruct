// To check whether the given number is prime or not
#include<stdio.h>
int main()
{
 int n,x=0;
 printf("\n Enter a number:");
 scanf("%d",&n);
 if(n==1)
  printf("\n 1 is neither prime nor composite!\n");
 else
 {
   for(int i=2;i<n;i++)
     { if(n%i==0)
         {
           x++;
           break;
          } 
     }
 }
   if(x==0)
    printf("\n Given number is a prime number!\n");
   else
    printf("\n Given number is not a prime number!\n");
return 0;
}
