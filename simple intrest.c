#include<stdio.h>

void main(){

int principle, noy;
float roi, si;
printf("enter the value of principle, noy, roi: \n");
scanf("%d %d %f", &principle, &noy, &roi);

si = principle*noy*roi/100;
printf("%f", si);
}

