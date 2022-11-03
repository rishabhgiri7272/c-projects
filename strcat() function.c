#include<stdio.h>
char main()
{
    char source[]= "Rishabh Giri";
    char target[30]= "Hello!";

    strcat(target,source);
    printf("\n source string= %s", source);
    printf("\n target string= %s", target);
}
