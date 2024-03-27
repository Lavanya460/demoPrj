/*find the leaders in the array. An element is leader if it greater than all the elemets to its right side
 and the rightmost element is always a leader*/

#include<stdio.h>
void printLeaders(int arr[],int size)
{
    int rightmost_element = arr[size -1];
    printf("%d", rightmost_element);
    for(int i=size-2;i>=0;i--)
    {
        if(rightmost_element < arr[i])
        {
            rightmost_element =arr[i];
            printf(" %d",rightmost_element);
        }
    }
}
int main()
{
    int i,n;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printLeaders(arr,n);
    printf("\n\n");
    return 0;
}
