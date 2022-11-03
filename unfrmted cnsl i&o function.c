#include<stdio.h>
char getch();
char getche();
char main()
{
    char ch;

    printf("\nPress any key to continue");
    getch();

    printf("\nType any character");
    ch=getche();

    printf("\nType any character");
    getchar();
    printf("\nContinue Y/N");
    fgetchar();
}
