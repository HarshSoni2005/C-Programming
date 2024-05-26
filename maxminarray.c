/*
16. Write a C program to find out the Maximum and Minimum number from given 10 number.
*/

#include <stdio.h>
void main()
{
	int i,min;
	int a[10];
	for(i=1;i<=10;i++)
	{
		printf("ENTER THE %d NUMBER: ",i);
		scanf("%d",&a[i]);
	}
	min=a[1];
	for(i=1;i<=10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("THE SMALLEST NUMBER IS %d",min);
}

