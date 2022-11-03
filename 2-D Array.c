#include<stdio.h>

int main()
{
int stud[4][2];
int i;
for(i=0;i<=3;i++)
{
    printf("\nEnter roll no. and marks");
    scanf("%d %d",&stud[i][0],&stud[i][1]);
}
for(i=0;i<=3;i++)
{
    printf("\n%d %d", stud[i][0], stud[i][1]);
}
}
