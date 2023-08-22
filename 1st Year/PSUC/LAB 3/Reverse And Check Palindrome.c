#include<stdio.h>
int main()
{
int a,b,c,rev=0;
printf("Enter an integer\n");
scanf("%d",&a);
b=a;
while (a>0)
{
    c=a%10;
    rev=rev*10+c;
    a/=10;
}
printf("Given Number is %d\n",b);
printf("Its reverse is %d\n",rev);
if (b==rev)
printf("Number is a Palindrome\n");
else
printf("Number is not a Palindrome\n");
return 0;
}
