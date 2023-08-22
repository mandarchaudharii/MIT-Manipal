#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (i=1;i<=num/2;i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }
    }
    if (sum==num && num>0)
        printf("%d is a Perfect Number", num);
    else
        printf("%d is not a Perfect Number", num);
    return 0;
}
