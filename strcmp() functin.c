#include<stdio.h>
char main()
{
    char string1[]= "jerry";
    char string2[]= "ferry";
    int i,j,k;

    i= strcmp(string1, "jerry");
    j= strcmp(string1,string2);
    k= strcmp(string1, "jerry");

    printf("\n %d %d %d", i,j,k);
}
