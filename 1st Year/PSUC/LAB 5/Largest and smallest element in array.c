#include<stdio.h>
int main()
{
int a[50],i,n,largest,smallest;
printf("Enter the number of elements:\n");
scanf("%d",&n);
printf("\nInput the array elements:\n");
for(i=0;i<n;++i)
scanf("%d",&a[i]);

largest=smallest=a[0];

for(i=1;i<n;++i)
{
if(a[i]>largest)
largest=a[i];

if(a[i]<smallest)
smallest=a[i];
}

printf("\nThe smallest element is %d\n",smallest);
printf("\nThe largest element is %d\n",largest);

return 0;
}
