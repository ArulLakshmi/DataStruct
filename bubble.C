//Sorting-Bubble Sort
#include<stdio.h>
int main()
{ 
  int arr[50],n,t;// arr[50] is an array of 50 elements,n is the limit,t is the temporary variable
  printf("\n Enter the limit for the array :");
  scanf("%d",&n);
  printf("\n Enter the array elements : \n");
  for(int i=0;i<n;i++) // To input the array elements
   scanf("%d",&arr[i]);
  for(int j=0;j<n-1;j++)
   {
     for(int i=0;i<n-j-1;i++)
       { 
         if(arr[i]>arr[i+1])
          { 
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
          }
        }
    }
 printf("\n The sorted array is :\n");
 for(int i=0;i<n;i++)
 printf("%d \n",arr[i]);
return 0;
}
