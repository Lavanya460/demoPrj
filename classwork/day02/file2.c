#include <stdio.h>
int main()
 {
   /* char ch;
     
    ch = getchar();    
    printf("\nread character from stdin is: %c", ch);
    */
     char str1[20];
     puts("/Enter a string: ");
     fgets(str1,19,stdin);
    // scanf("%[^\n]s", str1);
     puts(str1);     
     printf("\n\n");
     return 0;

 }



