#include <stdio.h>
#define CAP 5
int main()
{
    int arr[CAP];
    printf("\nBase address of the array: %u",&arr[0]);
    printf("\nadress of arr[0]=%u",&arr[0]);
    printf("\nadress of arr[1]=%u",&arr[1]);
    printf("\nadress of arr[2]=%u",&arr[2]);
    printf("\nadress of arr[3]=%u",&arr[3]);
    printf("\nadress of arr[4]=%u",&arr[4]);

    printf("\n\n");
    return 0;
}