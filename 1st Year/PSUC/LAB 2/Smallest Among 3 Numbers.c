#include<stdio.h>
int main ()
{
    int a,b,c,small;
    printf("SMALLEST AMONG THREE NUMBER");
    printf("\n\nEnter the first Integer Value");
    scanf("%d",&a);
    printf("\nEnter the second Integer Value");
    scanf("%d",&b);
    printf("\nEnter the third Integer Value");
    scanf("%d",&c);

    small=a<b?(a<c?a:c):(b<c?b:c);
    printf("%d Is the smallest number", small);
    return 0;
}
