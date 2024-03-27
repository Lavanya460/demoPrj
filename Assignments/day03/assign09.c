//program to check if the sum of distinct digits of two integers are equal//
#include <stdio.h>
 
 int distinctDigitSum(int n)
 {
    int sum=0;
    int digit[10]={0};
    
    while(n>0)
    {
        int digitVal = n%10;
        if(!digit[digitVal])
        {
            sum +=digitVal;
            digit[digitVal]=1;
        }
        n=n/10;
    }
    return sum;
 }
 int main()
 {
    int m,n;
    printf("\nEnter the m value: ");
    scanf("%d",&m);
    printf("\nEnter the n value: ");
    scanf("%d",&n);
    if(distinctDigitSum(m)==distinctDigitSum(n))
    {
        printf("\nYES\n");
    }
    else{
        printf("\nNO\n");
    }
    printf("\n\n");
    return 0;

 }
