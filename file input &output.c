#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int nol=0,not=0,nob=0,noc=0;

    fp=fopen("file input &output.C", "r");

    while(1)
    {
        ch=fgetc(fp);

        if(ch==EOF)
            break;

            noc++;
            if(ch==' ')
                nob++;
            if(ch=='\n')
                nol++;
            if(ch=='\t')
                not++;
                printf("%c",ch);
    }
    fclose(fp);
    printf("\nNumber of character=%d",noc);
    printf("\nNumber of blanks=%d",nob);
    printf("\nNumber of tabs=%d",not);
    printf("\nNumber of lines=%d",nol);
}
