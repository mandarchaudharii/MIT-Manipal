#include <stdio.h>
int main()
{
    int a,b,c,d=1;
    printf("Enter the number of rows\n");
    scanf("%d", &a);
    printf("\n");
    for (b=1;b<=a;b++)
    {
        for (c=1;c<=b;c++)
        {
            printf("%d ",d++);
        }
        printf("\n");
    }
    return 0;
}
