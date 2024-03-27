//Check whether a given number can be expressed as the sum of two prime number//
#include<stdio.h>
int isPrime(int num)
{
    if(num<=1)
    {
        return 0;//0 or 1 is not prime
    }
    for(int i=2;i*i <= num;i++)
    {
        if(num % i==0)
        {
            return 0;
        }
    }
    return 1;
}
int countWay(int num)
{
    int i,count=0;
    for(i=2;i<=num/2;i++)
    {
        if(isPrime(i) && isPrime(num-i))
        {
            printf("%d = %d + %d\n",num,i,num-i);
            count++;
        }
    }
    printf("No of ways:%d\n",count);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ways=countWay(num);
    printf("\n\n");
    return 0;
}