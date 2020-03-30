// To check whether the given number is an amstrong number
#include<stdio.h>
#include<math.h>
int main()
{ int n,d=0,n1,num=0,r;
  printf("\n Enter a number:");
  scanf("%d",&n);
  n1=n; // Storing the original number in n1
  while(n1!=0)//while loop to count the number of digits
  {
    n1=n1/10;
    d++;
  } 
n1=n;
while(n1!=0)
{r=n1%10; // Removes the last digit from number and stores it in r
 num+=(double)pow(r,d);
 n1/=10;
}
 if(num==n)
 printf("\n The given number is an Amstrong number\n");
 else
 printf("\n The given number is not an Amstrong number \n");
return 0;
}
  
