// To find an element using linear search
#include<stdio.h>
int main()
{ 
 int a[50],n,key,flag=0;// a[50] is an array of 50 elements,n is the limit and key is the element to be searched
 printf("\n Enter the limit for the array :");
 scanf("%d",&n);
 printf("\n Enter the array elements : \n");
  for(int i=0;i<n;i++) // To input the array elements
   scanf("%d",&a[i]);
 printf("\n Enter the element to be searched :");
 scanf("%d",&key);
 for(int i=0;i<n;i++)
  {  
    if(a[i]==key)
     { printf("\n Number is present! \n");
       flag++;
     }
  }
 if(flag==0) 
  printf("\n Number is NOT present! \n");
 return 0;
}
