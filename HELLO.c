#include<stdio.h>
int main()
{
    int a,fect;
    printf("Enter a number");
    scanf("%d", &a);
    fect=rct(a);
    printf("\nFectorial of your no. is %d", fect);
}

int rct(x)
{
    int f;

    if(x==1)
        return 1;
    else
        f=x*rct(x-1);
        return(f);

}
