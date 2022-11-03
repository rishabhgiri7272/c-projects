#include<stdio.h>
int main()
{
    int i,j;
    float x,y;
    char a;
    struct
    {
        char name[25];
        char roll_no[8];
        float sgpa[8];
        float cgpa[8];
    }stud1;

    printf("Give the Name of student:\n");
    scanf("%s",stud1.name); fflush(stdin);

    printf("Give roll no of Student:\n");
    scanf("%s",stud1.roll_no); fflush(stdin);

    printf("Enter the no of Semesters:");
    scanf("%u",&j);

    printf("Give the SGPA value:\n");
    for(i=0;i<j;i++)
    scanf("%f",&(stud1.sgpa[i]));

    printf("%s %s\n", stud1.name,stud1.roll_no);
    for(x=0.0,i=0;i<j;i++)
    {
        x=(x*i+stud1.sgpa[i])/(i+1);
        stud1.cgpa[i]=x;
        printf("The CGPA in sem %d is %5.2f\n", i+1,stud1.cgpa[i]);
    }
}
