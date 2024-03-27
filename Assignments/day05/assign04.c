//sum of even and odd values of the array//
#include <stdio.h>
int even_sum(int arr[],int n)
{
    int i, sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            sum +=arr[i];
        }
    }
    return sum;
}
int odd_sum(int arr[],int n)
{
    int i, sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 != 0)
        {
            sum +=arr[i];
        }
    }
    return sum;
}
int main()
{
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int evenSum = even_sum(arr,n);
    int oddSum = odd_sum(arr,n);
    printf("Sum of even values:%d\n",evenSum);
    printf("Sum of odd values:%d\n",oddSum);
    printf("\n\n");
    return 0;
}
