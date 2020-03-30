// To find the duplicates in  an array
#include<stdio.h>
int main()
{ 
 int a[50],n,c=0;// a[50] is an array of 50 elements,n is the limit 
 printf("\n Enter the limit for the array :");
 scanf("%d",&n);
 printf("\n Enter the array elements : \n");
 for(int i=0;i<n;i++) // To input the array elements
  scanf("%d",&a[i]);
 for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
     { 
      if (a[i]==a[j])
       c++;
     }
  }
if(c==0)
 printf("\n No duplicates are present!\n");
else
 printf("\n Duplicates are present!\n");
return 0;
}
