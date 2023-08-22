#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e;
printf("Enter the start and end value\n");
scanf("%d%d",&a,&b);
printf("\n\nPrime no. from %d to %d are:\n",a,b);
while (a<=b)
{
    e=sqrt(a);
    c=2;
    d=1;
    while (c<=e)
    {
      if (a%c==0)
      {
       d=0;
       break;
      }
      c++;
    }
    if(d)printf("%d,",a);
    a++;
}
printf("\n\n");
return 0;
}
