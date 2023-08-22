#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=1,d=0,e=0,f=0;
    printf("Enter '-1' to exit the loop");
    do
        {
        printf("\n");
        printf("\nEnter number: ");
        scanf("%d", &b);

        for(a=2; a<=sqrt(b);a++)
        {
            if (b%a==0)
            {
                c=0;
                break;
            }
        }
        if (b==1)
            f+=1;
        else if (b==-1)
            continue;
        else if (c==1)
            d+=1;
        else
            e+=1;
        }
    while (b!=-1);
    printf("\nPrime numbers: %d", d);
    printf("\nComposite numbers: %d", e);
    printf("\nNeither prime nor composite numbers: %d", f);
    printf("\n");
    return 0;
}
