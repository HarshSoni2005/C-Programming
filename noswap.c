/*4. Write a C program to interchange two numbers. */

#include <stdio.h>
void main()
{
	int n1,n2,temp;
	printf("ENTER THE VALUE OF N1: ");
	scanf("%d",&n1);
	printf("ENTER THE VALUE OF N2: ");
	scanf("%d",&n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("N1=%d\n",n1);
	printf("N2=%d",n2);
}
