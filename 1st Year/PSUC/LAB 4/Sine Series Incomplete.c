#include<stdio.h>
#include<math.h>
int main()
{
    float n,i,x,sum,t,num;
    printf("Enter angle in degree:\n");
    scanf("%f", &x);
    printf("Enter limit of digits:\n");
    scanf("%f", &n);
    num=x;
    x=x*3.1428/180;
    sum=t=x;
    for (i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum+=t;
    }
    printf("Sin(%.0f) = %f",num,sum);
    return 0;
}
