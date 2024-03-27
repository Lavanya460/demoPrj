#include <stdio.h>
int main(){
   int f=1, i, N;
   printf("Enter he value of N:");
   scanf("%d",&N);
   do{
       f = f * i;
       i++;
   }while (i<N);
   printf(f);
}       
