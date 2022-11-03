#include<stdio.h>
void main()
{
    float a,b,r,ar,prm,ac,crcmf;

    printf("enter the a b r\n");
    scanf("%f%f%f",&a,&b,&r);

    ar=a*b;
    prm=2*(a+b);
    ac=3.14*r*r;
    crcmf=2*3.14*r;
    printf("area of rectangle:%f\n", ar);
    printf("perimeter of rectangle:%f\n", prm);
    printf("area of circle:%f\n", ac);
    printf("cercomferance of circle:%f\n", crcmf);
}
