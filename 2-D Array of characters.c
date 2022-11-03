#define FOUND 1
#define NOTFOUND 0
main()
{
    char masterlist[6][10]={
                            "akshay"
                            "parag"
                            "raman"
                            "srinivas"
                            "gopal"
                            "rajesh"
                            };
    int i,flag,a;
    char yourname[10];
    printf("\n Enter your name");
    scanf("%s",&yourname);

    flag=NOTFOUND;
    a=strcmp(&masterlist[i][0],yourname);
    for(i=0;i<=5;i++)
    {

        if(a==0)
        {
            printf("welcome, you can enter this place");
            flag= FOUND;
            break;
        }

    }
    if(flag==NOTFOUND)
        printf("sorry, you are a trespasser");
}
