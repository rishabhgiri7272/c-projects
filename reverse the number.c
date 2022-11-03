#include<stdio.h>


void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i=0; i<n-1; i++)
    arr[i] = arr[i+1];
    arr[n-1] = temp;
}


void leftRotate(int arr[], int d, int n)
{
    int i;
    for(i=0; i<d; i++)
        leftRotatebyOne(arr, n);
}

void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d\n", arr[i]);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,11,12,13};
    leftRotate(arr, 5, 12);
    printArray(arr, 12);
    return 0;
}
