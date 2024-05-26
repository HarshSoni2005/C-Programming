/*11. Write a program to read three numbers from keyboard and 
find out maximum out of these three. (nested if else)*/

#include <stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER THE FIRST NUMBER: ");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER: ");
	scanf("%d",&b);
	printf("ENTER THE THIRD NUMBER: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d IS LARGEST",a);
		}
		else
		{
			printf("%d IS LARGEST",c);
		}	
	}
	else
	{
		if(b>c)
		{
			printf("%d IS LARGEST",b);
		}
		else
		{
			printf("%d IS LARGEST",c);
		}
	}	
}
