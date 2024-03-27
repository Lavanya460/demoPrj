//Program to print alphabet triangle//

#include <stdio.h>
int main()
{
   int i,j;
   char alph = 'A';
   int n,blk;
   int ctr =1;

   printf("\nEnter the number as input for triangle:");
   scanf("%d", &n);

   for (i=1;i <= n;i++)
   {
       for(blk=1;blk <= n-i;blk++)
          printf("  ");
       for(j=0;j <=(ctr/2);j++)
       {
           printf("%c ", alph++);
       }   
       alph =alph -2;
       for(j=0;j <(ctr/2);j++)
       {
          printf("%c ",alph--);
       }
       ctr =ctr + 2;
       alph ='A';
       printf("\n\n");
   }
   return 0;
}