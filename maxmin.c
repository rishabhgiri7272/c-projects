#include<stdio.h>
int buildtourn();
int main()
{
    int tourn[100], i, n, m;
    printf("Give n:");
    scanf("%d", &n);
    printf("\n n= %d\n", n);
    for(i=n;i<=2*n-1;i++)
        scanf("%d", &tourn[i]);
        buildtourn(tourn,n);

        printf("\n MAX= %d \n", tourn[1]);
        printf("Next Max= %d \n", netmax(tourn, n));

}

int buildtourn(tourn,n)
int tourn[], n;
{
    int i;
    for(i=2*n-2;i>1;i=i-2)
    tourn[i/2] = maxi(tourn[i], tourn[i+1]);
}

int netmax(tourn,n)
int tourn[], n;
{
    int i=2, next;

    next=mini(tourn[2], tourn[3]);
    while(i<=2*n-1)
    {

        if(tourn[i]>tourn[i+1])
        {
        next= maxi(tourn[i+1], next);
        i= 2*i;
    }

    else
        {
            next = maxi(tourn[i], next);
                i=2*(i+1);
    }
    }
    return(next);
}
