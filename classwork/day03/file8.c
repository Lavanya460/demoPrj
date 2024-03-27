//program to check if prodect of digits of a number at even and odd places is equal//
#include <stdio.h>
int main()
{
    int number,digit,evenProduct=1,oddProduct=1,position=1;
    printf("Enter a number:");
    scanf("%d",&number);
    
    while(number>0)
    {
        digit=number%10;
        if(position%2==0)
          evenProduct *= digit;
        else
        oddProduct *= digit;
        number/=10;
        position++;
    }
    if (evenProduct == oddProduct)
        printf("Yes\n");
    else
        printf("No\n");
    printf("\n\n");
    return 0;    
}