/*
write a c program to check wether the year is leap year or not if year is divisible 
by 4 and year is not divisible by 100 or year is exactly divisible by 400.
*/

#include <stdio.h>
int main ()
{
	int year;
	printf("ENTER THE YEAR: ");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || year%400==0)
	{
		printf("LEAP YEAR");
	}
	else
	{
		printf("NOT A LEAP YEAR");
	}
	return 0;
}
