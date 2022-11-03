#include<stdio.h>
void main()
{
    float c,f;
    printf("Please enter temperature in f: ");
    scanf("%f", &f);

    c=(f-32)*5/9;
    printf("Temperature in c: %f", c);
}
