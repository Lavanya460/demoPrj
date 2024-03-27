//program to check whether product of digitd at even places is divisible by sum of digits at odd place of a number//
#include <stdio.h>
int main()
{
    int num,it=1;
    int even_product=1, odd_sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        int digit =num%10;
        if(it%2 !=0)
        {
            even_product *= digit;
        }
        else{
            odd_sum += digit;
        }
        num = num/10;
        it++;
        
    }
    if(even_product % odd_sum==0)
    {
        printf("\nTRUE\n");
    }else {
        printf("\nFALSE\n");
    }
    printf("\n\n");
    return 0;
}
