#include <stdio.h>
int main()
{
    int m, n, i, j, t, a[10][10];
    printf("Enter number of rows and columns respectively \n");
    scanf("%d %d",&m, &n);
    if(m!=n)
        {
            printf("Enter a square matrix \n");
            exit(0);
        }
    printf("\nEnter value of Elements \n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        t=a[i][m-i];
        a[i][m-i]=a[i][i];
        a[i][i]=t;
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
       {
        printf("%d  ", a[i][j]);
       }
       printf("\n");
    }
    return 0;
}
