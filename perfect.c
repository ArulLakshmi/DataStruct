//To check whether the given number is a perfect number or not
#include<stdio.h>
int main()
{
 int num,x=0;
 printf("\n Enter a number:");
 scanf("%d",&num);
 for(int i=1;i<num;i++)
  { if((i*i)==num) // Condition for perfect square
     { printf("\n The given number is a perfect square number!\n");
       x++;
       break;
     }
   }
if(x==0)
 printf("\n The given number is not a perfect square number! \n");
return 0;
}
