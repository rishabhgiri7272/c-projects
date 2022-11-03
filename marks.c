#include<stdio.h>
void main()
{
    int phy,maths,chem,eng,gs;
    float total,percentage;

    printf("enter  marks of your all subject\n");
    scanf("%d%d%d%d%d", &phy,&maths,&chem,&eng,&gs);

    total=phy+maths+chem+eng+gs;
    percentage=(total/500)*100;

    if(percentage>=60)
    {
        printf("First Division\n");
    }
    else if(percentage>=50)
    {
        printf("Second Devision\n");
    }
    else if(percentage>=40)
    {
        printf("Third Devision\n");
    }
    else
    {
      printf("Fail\n");
    }

     printf("your total marks is:%f\n", total);
     printf("your percentage:%f", percentage);
}
