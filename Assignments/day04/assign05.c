//Find a continuous sub-array which adds to a given number sum//

#include <stdio.h>

void findSubarray(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=1;j<n;j++)
        {
            curr_sum +=arr[j];
            if(curr_sum == sum)
            {
                printf("Subarray is found between indexes %d and %d\n",i,j);
                return;

            }
        }
    }
     printf("\nNO subarray found\n");
}
   
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int gNum=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    findSubarray(arr,n,gNum);
    return 0;
}
