#include<stdio.h>

/*int main()
{
    float bs, gs, da, hra;

    printf("Enter basic salary:");
    scanf("%f", &bs);

    if(bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    printf("/nGross salary=Rs%f", gs);
}*/

/* *****Bonus*****
int main()
{
    int bonus, cy, yoj, yr_of_ser;
    printf("Enter the current year and year of joining\n");
    scanf("%d%d", &cy, &yoj);

    yr_of_ser=cy-yoj;

     if(yr_of_ser>3)
     {
         bonus=2500;
         printf("Bonus=Rs%d", bonus);
     }
     else
        printf("No Bonus this year");
}*/

// ****10% dic*****
int main()
{
    int qty, dic=0;
    float tot, rate;

    printf("Enter qty and rate:\n");
    scanf("%d%f", &qty, &rate);

    if(qty>1000)
        dic=10;

    tot=(qty*rate)-(qty*rate*dic/100);
    printf("\nTotal expenses = Rs.%f", tot);


}
