#include<stdio.h>
void main()
{
    int avg, sum=0;
    int i;
    int marks[30];

    for(i=0;i<=29;i++)
    {
        printf("\nEnter marks");
        scanf("%d", &marks[i]);
    }

    for(i=0;i<=29;i++)
        sum=sum+marks[i];
    avg=sum/30;
    printf("\nAverage marks= %d", avg);
}
