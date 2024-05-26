/*WRITE A C PROGRAM TO INPUT MONTH NUMBER AND PRINT NUMBER OF DAYS IN THAT MONTH*/

#include <stdio.h>
void main()
{
	int month;
	printf("ENTER THE MONTH FROM 1 TO 12 : ");
	scanf("%d",&month);
	if(month<=12 && 1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month)
	{
		printf("%d have 31 days",month);
	}
	else if(4 == month || 6 == month || 9 == month || 11 == month)
	{
		printf("%d have 30 days",month);
	}
	else if(month==2)
	{
		printf("%d have 28 days",month);
	}
	else 
	{
		printf("ENTER THE VALID MONTH BETWEEN 1 TO 12!");
	}
}
