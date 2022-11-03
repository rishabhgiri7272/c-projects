#include<string.h>
char main()
{
    char arr[]="Bamboozled";
    int len1, len2;
    len1=strlen(arr);
    len2=strlen("humptty dumptty");

    printf("\n string= %s length= %d", arr, len1);
    printf("\n string= %s length= %d", "humptty dumptty", len2);
}
