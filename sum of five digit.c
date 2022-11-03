#include<stdio.h>
void main()
{
    int num,last_digit,next_digit,total;
    printf("enter the number whose sum of digits is to be calculated:");
    scanf("%d", &num);

    last_digit=num%10;
    total=last_digit;

    next_digit=(num/10)%10;
    total=total+next_digit;

    next_digit=(num/100)%10;
    total=total+next_digit;

    next_digit=(num/1000)%10;
    total=total+next_digit;

    next_digit=(num/10000)%10;
    total=total+next_digit;

    printf("sum of the digit is:%d", total);
}
