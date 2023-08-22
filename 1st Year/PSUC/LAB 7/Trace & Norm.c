#include <stdio.h>
int main()
{
    int norm=0, trace=0, m, n, i, j, arr[10][10];
    printf("Enter number of rows and columns respectively \n");
    scanf("%d %d",&m, &n);
    printf("\nEnter value of Elements \n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    if(m<=n)
    {
        for(i=0; i<m; i++)
        {
            trace=trace + arr[i][i];
        }
    }
    if(m>n)
    {
        for(j=0; j<n; j++)
        {
            trace=trace + arr[j][j];
        }
    }
printf("\nTrace = %d\n", trace);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            norm = norm + (arr[i][j]*arr[i][j]);
        }
    }
     printf("\nNorm = %d\n",norm);
  return 0;
}
