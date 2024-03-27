//greatest number in the given list//

#include <stdio.h>
int main()
{
    int n;
    int arr[5];
    int temp;
    int max;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("arr[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(arr[max]<arr[i])
        {
           temp=arr[max];
           arr[max]=arr[i];
           arr[i]=temp;

        }
    }
    printf("Greatest element =%d", arr[max]);
    printf("\n\n");
    return 0;
}