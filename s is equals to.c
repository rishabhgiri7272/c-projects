#include<stdio.h>

void main(){

int u, t, a;
float s;

printf("enter the value of u t a");
scanf("%d %d %d", &u, &t, &a);

s = u*t+1/2*a*t^2;

printf("%f", s);

}
