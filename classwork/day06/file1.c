#include<stdio.h>
int main()
{
    int qty=179;
    int *ptr;
    char *ptr1;
    float *ptr2;

    printf("\nSize of the qty=%d",sizeof(qty));
    printf("\nSize of the ptr=%d",sizeof(ptr));
    printf("\nSize of the ptr1=%d",sizeof(ptr1));
    printf("\nSize of the ptr2=%d",sizeof(ptr2));

    printf("\n Address of qty=%u",&qty);
    printf("\n Address of ptr->int=%u",&ptr);
    printf("\n Address of ptr->char=%u",&ptr1);
    printf("\n Address of ptr->float=%u",&ptr2);
    ptr=&qty;
    printf("\nContents of qty=%u",qty);
    printf("\nContents of ptr(address) %u is storing %u",&ptr,ptr);

    printf("\nContents of (contents of)ptr =%u",*ptr);

    *ptr=200;
    printf("\nContents of qty=%u",qty);
    printf("\nContents of ptr(address) %u is storing %u",&ptr,ptr);


    printf("\n\n");
    return 0;
}