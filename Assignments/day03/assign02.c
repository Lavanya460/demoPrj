// program using goto statement//

#include <stdio.h>
int main()
{ 
   int n, count;
   printf("\nenter a number to print table: ");
   scanf("%d",&n);
   
   count = 1;
Endst: 

   if(count <= 10) {
	   printf("%d x %d = %d\n",n,count, n * count);
	   count ++;
	   goto Endst;
      }
   
     return 0;
	   

}	
