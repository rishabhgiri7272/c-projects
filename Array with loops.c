#include<stdio.h>

int main()
{
    int marks[4]={30,50,60,77};
    int i=0;
    //For loop in array
    for(i=0;i<4;i++)
    {
        printf("students marks=%d\n",marks[i]);

    }
    //while loop in array
    while(i<4)
    {
         printf("students marks=%d\n",marks[i]);
        i++;

    }

    //Do while loop in array
    do
    {
        printf("students marks=%d\n",marks[i]);
        i++;
    }while(i<4);

}
