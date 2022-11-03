#include<stdio.h>
int main()
{
    char name[3];
    float price[3];
    int pages[3],i;

    printf("\nEnter Name,Price and no. of pages of 3 books\n");

    for(i=0;i<=3;i++)
        scanf("%c %f %d",&name[i],&price[i],&pages[i]);

    printf("\n And this is what you Entered\n");
    for(i=0;i<=3;i++)
        printf("%c %f %d\n",name[i],price[i],pages[i]);
}
