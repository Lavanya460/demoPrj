//Write a program to sort the elments in the list in descending order//
#include<stdio.h>
int main()
{
    int arr[6];
    int n,i,j,temp;
    printf("\nEnter the array elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("arr[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("The sorted list of elements in descending order:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n\n");
    return 0;
    
}    
