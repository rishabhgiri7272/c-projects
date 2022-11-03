#include<stdio.h>
void main()
{
    float distance,meters,cm,feet,inches;

    printf("enter distance in KM between two cities\n");
    scanf("%f", &distance);

    meters=1000*distance;
    cm=1000*100*distance;
    feet=3280.84*distance;
    inches=39370.08*distance;

    printf("distance in meters:%f\n", meters);
    printf("distance in cm:%f\n", cm);
    printf("distance in feet:%f\n", feet);
    printf("distance in inches:%f\n", inches);
}
