//Store Array from 1 to 100//
#include <stdio.h>
int storeArray(int arr[], int num);
int display(int *arr[],int num);

int storeArray(int arr[], int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
}

int display(int *arr[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
       printf("\n%ls", *arr[i]);
    }
}

int main()
{
    int i,num;
    int arr[num];
    printf("Enter the number of elements of the array: ");
    scanf("%d",&num);

    printf("\nEnter the elements up to %d: ",num);
    storeArray(arr, num);
    printf("stored elements are: ");
    display(arr,num);
    printf("\n\n");
    return 0;
}