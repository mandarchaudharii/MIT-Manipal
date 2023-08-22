#include <stdio.h>

int main()
{
    int m, n, i, j, arr[10][10];
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
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("The Entered matrix is:");
    printf("\n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if (arr[i][j]!= arr[j][i])
                {
                    printf("This is not a symmetric matrix\n");
                    exit(0);
                }
            }
        }
printf("This is a symmetric matrix");
return 0;
}


