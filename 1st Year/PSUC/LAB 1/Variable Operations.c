#include<stdio.h>
int main ()

{
    int a,b,Sum,Difference,Product,Quotient;
    printf("SUM DIFFERENCE PRODUCT QUOTIENT CALCULATOR");
    printf("\nEnter 1st Integer Value");
    scanf("%d", &a);
    printf("Enter 2nd Integer Value");
    scanf("%d", &b);
    Sum=a+b;
    printf("\nSum=%d",Sum);
    Difference=a-b;
    printf("\nDifference=%d",Difference);
    Product=a*b;
    printf("\nProduct=%d",Product);
    Quotient=a/b;
    printf("\nQuotient=%d",Quotient);

    return 0;
}
