//else if ladder//

# include <stdio.h>
 
int main()
{
    int seats = 0;
    printf("\nIs the seats are avialable for the  bus reservation? (0/1):");
    scanf("%d",&seats);
    if(seats == 1)
    {  
       printf("\nseats are avialable, passenger got seat and\n");
    }
    else
    { 
        printf("\nseats are not available, passenger stands and\n"); 

    }
    printf("\ntravelled in the bus\n");
     
    return 0;

}


