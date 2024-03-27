//least number in the given list//
#include <stdio.h>
int main()
{
    int n;
    int arr[5];
    int temp;
    int min;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("arr[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<n;i++)
    {
         if(arr[i]<arr[min])
        {
           temp=arr[min];
           arr[min]=arr[i];
           arr[i]=temp;
        }
    }
    printf("Least element =%d", arr[min]);
    printf("\n\n");
    return 0;
}