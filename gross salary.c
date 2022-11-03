#include<stdio.h>
void main()
{
    int basic,da,ha,gross;
    printf("Enter your basic salary: ");
    scanf("%d", &basic);

    da=(40*basic)/100;
    ha=(20*basic)/100;
    gross=basic+da+ha;

    printf("Your gross salary is: %d", gross);
}
