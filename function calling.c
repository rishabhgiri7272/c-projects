#include<stdio.h>

void findGreatest(int ,int );

int main(){
    int num1,num2;
    printf("This program is to determine greatest of two numbers\n");
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    findGreatest(num1,num2);
    return 0;
}
void findGreatest(int num1,int num2){
    if(num1>num2){
        printf("Greatest of these two is: %d",num1);
    }else if(num2>num1)
        printf("Greatest of these two is: %d",num2);
    else
        printf("Both are equal");
}
