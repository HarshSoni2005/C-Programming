#include <stdio.h>
int check(int); //declaration
void main()
{
	int no;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&no);
	check(no); //calling
}
int check(int no) //defination
{
	if(no%2==0)
	{
		printf("%d IS EVEN",no);
	}
	else
	{
		printf("%d IS ODD",no);
	}
}
