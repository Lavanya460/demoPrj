#include <stdio.h>
 int main()
{ 
      char clr;
      printf("\nEnter the color of the traffic light (R/O/G): ");
      clr = getc(stdin);
      if(clr =='R')
      {
	   printf("\nStop the vehicle until green light glows");
      }
      else if(clr =='O')
      {
           printf("\nStart the vehicle and proceed");
      }
      else if(clr =='G')
      {
           printf("\nDrive....");
      }
      else
      { 
	   printf("\nTraffic light are off.\nHence move slowly considering the flow of traffic\n");
      }
      printf("\nSpeed Kills\n\n");
      
      printf("\n\n");
      return 0;      

}	


