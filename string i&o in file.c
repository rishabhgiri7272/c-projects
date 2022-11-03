#include<stdio.h>
void exit();

void main()
{
    FILE *fp;
    char s[80];

    fp=fopen("POEM.TXT", "r");
    if(fp==NULL)
    {
        puts("cannot open file");
        exit();
    }
    while(fgets(s,79,fp)!=NULL)
        printf("%s",s);

    fclose(fp);
}
