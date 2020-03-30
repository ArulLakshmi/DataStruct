// To check whether the given number is palindrome or not
#include<stdio.h>
#include<math.h>
int main()
{
 int n,n1,d=0,num=0,r;
 printf("\n Enter a number:");
 scanf("%d",&n);
 n1=n; // Stores the original number in n1
 while(n1!=0)// To count the number of digits
 {
   n1/=10;
   d++;
 }
 n1=n;
while(n1!=0)
{
 r=n1%10;// removes the last digit and stores it in r
 d--;
 num+=r*((double)pow(10,d));
 n1/=10;
}
if(num==n)
printf("\n The given number is a palindrome! \n");
else
printf("\n The given number is not a palindrome!\n");
return 0;
}

