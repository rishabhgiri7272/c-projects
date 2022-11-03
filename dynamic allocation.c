#include<stdio.h>
float main()
{
    float *b;

    b=(float *) malloc(10*sizeof(float));
    printf(" b =%p \n\n", b);
    printf(" (b+1) =%p \n\n", (b+1));
    printf(" (b+2) =%p \n\n", (b+2));
    b[2]=4;
    printf(" *(b+2)=%fn \n\n", *(b+2));
}
