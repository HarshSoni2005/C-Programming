/*
34. Write a program to find maximum element from 1-Dimensional array. 

*/

#include <stdio.h>
void main()
{
	int max,i;
	int a[9];
	printf("ENTER THE NUMBERS: ");
	for(i=1;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[1];
	for(i=1;i<=9;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("THE LARGEST NUMBER IS %d\n",max);
}

