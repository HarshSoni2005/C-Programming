/*17. Write a C program to find factorial of a given number. */

#include <stdio.h>
void main()
{
	int no,res=1,i;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&no);
	for(i=1;i<no;no--)
	{
		printf("%d*",no);
		res=res*no;
	}
	printf("=%d",res);
}
