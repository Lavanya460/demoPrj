//sum of even and odd postion values of the array//
#include <stdio.h>
int even_pos_sum(int arr[],int n)
{
    int i, sum=0;
    for(i=0;i<n;i+=2)
    {
        sum +=arr[i];
    }
    return sum;
}
int odd_pos_sum(int arr[],int n)
{
    int i, sum=0;
    for(i=1;i<n;i+=2)
    {
        sum +=arr[i];
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
    int evenPosSum = even_pos_sum(arr,n);
    int oddPosSum = odd_pos_sum(arr,n);
    printf("Sum of even position values:%d\n",evenPosSum);
    printf("Sum of odd position values:%d\n",oddPosSum);
    printf("\n\n");
    return 0;
}
