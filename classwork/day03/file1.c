
 // largest of 3 numbers using nested if else statements//



#include <stdio.h>
int main()
{
        int num1, num2, num3;
	printf("\n enter the values of num1,num2,num3: \n");
        scanf("%d%d%d", &num1, &num2, &num3); 
           
	if (num1 > num2)
        {
	    if (num1 > num3)
            {
               printf("%d is the largest among them.",num1);
            }
        }
        else if (num2 > num3)
	{ 
	      printf("%d is the largest among them.",num2);
        }
        else
	{
	      printf("%d is the largest among them.",num3);
        }
        	
        return 0;  	


}	
