#include<stdio.h>
void main()
{
    int e,c,d;
    printf("enter the value in location C\n");
    scanf("%d", &c);
    printf("enter the value in location D\n");
    scanf("%d", &d);

    e=c;
    c=d;
    d=e;
    printf("new location of C:%d\n", c);
    printf("new location of D:%d", d);
}
