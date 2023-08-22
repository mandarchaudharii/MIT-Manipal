#include<stdio.h>
int main ()
{
    int a,x;
    float b,c;
    printf("DAYS CONVERTER");
    printf("\n\nPress 1 For Leap Year And 2 For Non Leap Year");
    scanf("%d",&x);
    if(x==1)
    {
    printf("\n\nEnter number of days");
    scanf("%d", &a);
    b=a/366.00;
    printf("\nNumber of Years is %f", b);
    c=a/7.00;
    printf("\nNumber of Weeks is %f", c);
    }
    else if(x==2)
    {
    printf("\n\nEnter number of days");
    scanf("%d", &a);
    b=a/365.00;
    printf("\nNumber of Years is %f", b);
    c=a/7.00;
    printf("\nNumber of Weeks is %f", c);
    }
    return 0;
}
