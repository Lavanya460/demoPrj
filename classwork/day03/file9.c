//Program to read sum and product of digits in a given number//

#include<stdio.h>
int main()
{
    int n;
    int dig,sum,pro;

    printf("\nEnter a number:");
    scanf("%d",&n);

    sum=0;
    pro=1;
    while(n>0)
    {
        dig=n%10;
        sum+=dig;
        pro*=dig;
        n=n/10;
    }
    printf("\nSum:%d",sum);
    printf("\nProduct:%d",pro);
    printf("\n\n");
    return 0;
}