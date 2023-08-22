#include <stdio.h>
int main()
{
    int i,j,n,k,product;
    printf("Enter the value for N numbers\n");
    scanf("%d", &n);
    printf("Enter the value for K terms\n");
    scanf("%d", &k);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=k;j++)
        {
            product=i*j;
            printf("%d x %d = %d\t",j,i,product);
        }
        printf("\n");
    }
    return 0;
}
