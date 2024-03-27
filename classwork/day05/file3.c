//factorial number using recurrsive function//
#include <stdio.h>
int factorial(int);
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n, result;
    printf("Ener a number for factorial: ");
    scanf("%d",&n);
    result=factorial(n);
    printf("Factorial of %d is %d",n,result);
    printf("\n\n");
    return 0;
}