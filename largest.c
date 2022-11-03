#include<stdio.h>
int largest(int arr[], int n);

int main()
{
    int arr[5];
    int i,t,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);
        printf("%d", largest(arr,n));
        printf("\n");
    }

}
int largest(int arr[], int n)
{

int i;
int max=arr[0];
for(i=1;i<n;i++)
    if(arr[i]>max)
    max=arr[i];
return max;
}
