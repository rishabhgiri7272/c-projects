#include<stdio.h>
void leap(int year);
void main()
{
    int year;
    printf("Enter a year");
    scanf("%d", &year);
    leap(year);
}
void leap(int year)
{
   if(year%400==0)
   {
       printf("\n %d is a leap year", year);
   }
   else if(year%100==0)
   {
       printf("\n %d is not a leap year", year);
   }
   else if(year%4==0)
   {
       printf("\n %d is a leap year", year);
   }
   else
   {
       printf("\n %d is not a leap year", year);
   }

}
