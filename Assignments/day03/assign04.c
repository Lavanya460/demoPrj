//Write the logic to print Number Star Right Triangle pattern//


#include <stdio.h>
int main()
{
   int i,j,n,count=0;
   printf("\nEnter the number of rows:");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
          count++;
          if (j!=0)
	  printf("*%d",count);
          else
	  printf("%d",count);
       }
       printf("\n");
   }
   return 0;  


}
