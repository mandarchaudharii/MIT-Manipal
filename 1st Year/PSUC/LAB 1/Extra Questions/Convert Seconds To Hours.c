#include<stdio.h>
int main ()
{
    int a,x;
    float b,c;
    printf("DAYS CONVERTER");
    printf("\n\nEnter number of second");
    scanf("%d", &a);
    b=a/3600.00;
    printf("\nNumber of Hours is %f", b);
    c=a/60.00;
    printf("\nNumber of Minutes is %f", c);
    return 0;
}
