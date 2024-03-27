#include<stdio.h>
int main()
{
    int b[2]={10,20};

    int *ptr;

    printf("\nb[0] = %d",*(b+0));
    printf("\nb[1] = %d",*(b+1));
    ptr=b;
    printf("\nptr =%d",*ptr);

    *ptr = *ptr + 1;
    printf("\nptr= %d",*ptr);
    printf("\nb[0]= %d",*(b+0));
    printf("\nb[1]= %d",*(b+1));


    printf("\n\n");
    return 0;
}