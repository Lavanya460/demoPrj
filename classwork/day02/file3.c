#include <stdio.h>

int main()
{
    int StudentId;
    char Name[20];
    char Gender;
    int PhoneNumber;
    char Add[20];
    int M1,M2,M3,M4;
    float  Avg;
    int Sum;
    int  Per;

    printf("\nEnter the studentId: ");
    scanf("%d", &studentId);

    printf("\nEnter the Name: ");
    scanf("%[^\n]s", Name);

    printf("\nEnter the Gender: ");
    scanf("%c", &Gender);

    printf("\nEnter the phone number: ");
    scanf("%d",&PhoneNumber);

    printf("\nEnter the Address: ");
    scanf("%s", Add);

    printf("\nEnter the marks of M1,M2,M3,M4/n");
    scanf("%d%d%d%d",&M1,&M2,&M3,&M4);
    printf("\nThe marks are: M1=%d M2=%d M3=%d M4=%d",M1,M2,M3,M4);

    Sum = M1+M2+M3+M4;
    Avg = Sum/4;
    printf("The average of marks: %f", Avg);

    Per=(Avg/100)*100;
    printf("\n Percentage:%d",Per);
    
    return 0;
}	


