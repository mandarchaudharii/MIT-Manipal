#include<stdio.h>
int main ()
{
    int a;
    printf("Value Of Function For Different X Values");
    printf("\n\nEnter any Integer Value for X");
    scanf("%d",&a);
    if (a>0)
    printf("Function 'y' will give value of %d as 1", a);
    else if (a==0)
    printf("Function 'y' will give value of %d as 0", a);
    else
    printf("Function 'y' will give value of %d as -1", a);
    return 0;
}
