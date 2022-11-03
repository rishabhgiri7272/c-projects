#include<stdio.h>
char main()
{
    char source[]= "sayonara";
    char target[20];

    strcpy(target,source);
    printf("\n source string= %s", source);
    printf("\n target string= %s", target);
}
