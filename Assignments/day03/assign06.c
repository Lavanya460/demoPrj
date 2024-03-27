//Write a program to count number of ways to divide a number in 4 parts//

#include <stdio.h>

int main()
{
    int gNum = 6;
    int count = 0;
    int i = 1, j = 1, k = 1, l = 1;
    for (i = 1; i < gNum; i++)
    {
        for (j = i; j < gNum; j++)
        {
            for (k = j; k < gNum; k++)
            {
                for (l = k; l < gNum; l++)
                {
                    if ((i + j + k + l) == gNum)
                    {
                        // printf("\n%d+%d+%d+%d=%d", i, j, k, l, gNum);
                        count++;
                    }
                }
            }
        }
    }
    printf("\nNo of ways to get the output: %d", count);

    printf("\n\n");

    return 0;
}
