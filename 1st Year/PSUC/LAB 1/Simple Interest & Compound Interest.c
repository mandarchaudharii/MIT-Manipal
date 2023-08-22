#include<stdio.h>
#include<math.h>
int main ()

{
    float p,n,r,SI,CI;
    printf("SI and CI");
    printf("\n\nENTER PRINCIPLE VALUE");
    scanf("%f", &p);
    printf("\n\nENTER TIME PERIOD IN YEARS");
    scanf("%f", &n);
    printf("\n\nENTER RATE OF INTEREST");
    scanf("%f", &r);
    SI=(p*n*r)/100.0;
    printf("\nSIMPLE INTEREST=%f",SI);
    CI=p*(pow((1.0+r/100.0),n))-p;
    printf("\nCOMPOUND INTEREST=%f",CI);
    return 0;
}
