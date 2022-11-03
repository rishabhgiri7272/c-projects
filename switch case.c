#include<stdio.h>

void main()
{
    int choice,a,b,s;
    while(1)
    {
        printf("\n1.Odd Even\n");
        printf("2.Adding two numbers\n");
        printf("3.Natural numbers\n");
        printf("4.Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {

    case 1:
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a%2==0)
            printf("\nEven number");
        else
            printf("\nOdd number");
        break;

    case 2:
        printf("Enter two numbers: ");
        scanf("%d%d", &a,&b);
        s=a+b;
        printf("Sum of %d and %d is %d", a,b,s);
        break;

    case 3:
        printf("Enter a number: ");
        scanf("%d", &a);
            printf("Numbers are %d\n", a);
            for(b=1;b<=a;b++)
            {
                printf("%d\n", b);
            }
        break;

    case 4:
        return;
        }



    }
}
