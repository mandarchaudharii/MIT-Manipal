#include<stdio.h>
int main()
{
int a,b,c,d=0;
printf("Enter a 3 digit integer\n");
scanf("%d",&a);
b=a;
while (b!=0)
{
    c=b%10;
    d+=c*c*c;
    b/=10;
}
if (d==a)
    printf("%d is an Armstrong Number\n",a);
else
    printf("%d is not an Armstrong Number\n",a);
return 0;
}
