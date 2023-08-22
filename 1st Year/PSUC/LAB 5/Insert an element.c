#include<stdio.h>
int main()
{
   int arr[50],pos,i,size,value;
   printf("Enter number of elements: \n");
   scanf("%d",&size);

   printf("\nInput the array elements: \n");

   for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
   printf("\nInput the position to be inserted: \n");
   scanf("%d",&pos);
   printf("\nEnter the value for that position:\n");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      arr[i+1]=arr[i];
   arr[pos-1]= value;
   printf("\nThe new array is: \n");
   for(i=0;i<=size;i++)
      printf("%d ",arr[i]);
   return 0;
}
