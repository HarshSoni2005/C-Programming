/*15. Write a C program to read no 1 to 7 and print relatively day 
Sunday to Saturday.*/

#include <stdio.h>
void main()
{
	int no;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&no);
	if(no==1)
	{
		printf("MONDAY");
	}
	else if(no==2)
	{
		printf("TUESDAY");
	}
	else if(no==3)
	{
		printf("WEDNESDAY");
	}
	else if(no==4)
	{
		printf("THURSDAY");
	}
	else if(no==5)
	{
		printf("FRIDAY");
	}
	else if(no==6)
	{
		printf("SATURDAY");
	}
	else if(no==7)
	{
		printf("SUNDAY");
	}
	else 
	{
		printf("ENTER VALID NUMBER!");
	}
}
