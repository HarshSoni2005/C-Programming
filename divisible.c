#include <stdio.h>
void main()
{
	int n;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	{
		printf("DIVISIBLE");
	}
	else
	{
		printf("NOT DIVISIBLE");
	}
}
