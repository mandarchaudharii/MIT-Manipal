#include<stdio.h>
int main ()

{
    float a,b;
    printf("FARENHEIT TO CENTIGRADE CALCULATOR");
    printf("\n\nENTER TEMPRATURE IN FARENHEIT");
    scanf("%f", &a);
    b=(5.0/9.0)*(a-32);
    printf("\nTEMPRATURE IN CENTIGRADE IS=%f",b);

    return 0;
}
