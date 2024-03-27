#include <stdio.h>
int main(){
   int f=1, i, N;
   printf("Enter the value of N:");
   scanf("%d",&N);
   do{
       f = f * i;
       i++;
   }while (i<=N);
   printf("%d",f);
}       
