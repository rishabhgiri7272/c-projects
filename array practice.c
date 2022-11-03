#include<stdio.h>

//4th program
int main()
{
    int arr[25], a, i, count=0;
    for(i=0; i<25; i++)
    {
        printf("Enter numbers: ");
        scanf("%d", &arr[i]);
    }
    printf("\n\nEnter number you want to search:");
    scanf("%d", &a);
    for(i=0; i<25; i++)
    {
        if(arr[i]==a)
            count++;
    }
    if(count)
    printf("\n\n %d is present in data %d times", a,count);
    else
        printf("\n\n %d is not present in data", a);
    return 0;
}

/*3rd program
int main()
{
    int sub[10],i;
    for(i=1; i<=10; i++)
    {
        printf("\n%d", sub[i]);
        //scanf("\n %d", sub[i]);
    }
}

/*2nd program
int main()
{
    int array[26],i;

    for(int i=0; i<=25; i++)
    {
        array[i]='A'+i;
        printf("\n%d %c", array[i], array[i]);
    }
}
1st program
int main()
{
    int num[2],temp;
    num[0]=100;
    num[1]=200;
    temp=num[1];
    num[1]=num[0];
    num[0]=temp;
    printf("\n %d %d", num[0], num[1]);
}*/
