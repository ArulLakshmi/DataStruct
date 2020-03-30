//To find the factorial of a number
#include<stdio.h>
int main()
{
 int n,fact=1;
 printf("\n Enter a number:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
  { fact*=i;
  }
 printf("\n Factorial of number %d is %d \n",n,fact);
return 0;
}
