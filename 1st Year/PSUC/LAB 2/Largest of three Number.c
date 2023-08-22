#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("LARGEST AMONG THREE NUMBER");
    printf("\n\nEnter the first Integer Value");
    scanf("%d",&a);
    printf("\nEnter the second Integer Value");
    scanf("%d",&b);
    printf("\nEnter the third Integer Value");
    scanf("%d",&c);
    if (a>b && b>c)
        printf("%d Is the largest number", a);
    else if (b>c && b>a)
        printf("%d Is the largest number", b);
    else
        printf("%d Is the largest number", c);
    return 0;
}
