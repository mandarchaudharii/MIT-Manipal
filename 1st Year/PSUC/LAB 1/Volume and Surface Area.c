#include<stdio.h>
int main ()

{
    float a,b,c;
    printf("VOLUME AND SURFACE AREA OF SPHERE");
    printf("\n\nENTER RADIUS IN CENTIMETER");
    scanf("%f", &a);
    b=4.0*3.142857*a*a;
    printf("\nSURFACE AREA=%f",b);
    c=(4.0/3.0)*3.142857*a*a*a;
    printf("\nVOLUME=%f",c);
    return 0;
}
