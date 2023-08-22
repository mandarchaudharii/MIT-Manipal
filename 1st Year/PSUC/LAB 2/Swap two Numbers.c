#include<stdio.h>
int main ()
{
    int a,b;
    printf("SWAP TWO NUMBERS");
    printf("\n\nEnter the first Integer Value");
    scanf("%d",&a);
    printf("\nEnter the second Integer Value");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nThe first Integer Value is %d", a);
    printf("\nThe second Integer Value is %d", b);
    return 0;
}
