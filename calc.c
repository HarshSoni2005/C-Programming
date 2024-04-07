/*1. Write a program to that performs as calculator 
(addition, subtraction, multiplication, division, modulo).*/ 

#include <stdio.h>
void main()
{
	int n1,n2,ans;
	char op;
	printf("ENTER THE FIRST NUMBER: ");
	scanf("%d",&n1);
	printf("ENTER THE SECOND NUMBER: ");
	scanf("%d",&n2);
	printf("ENTER THE OPERATOR (+,-,/,*, % ): ");
	scanf(" %c",&op);
	if(op=='+')
	{
		ans=n1+n2;
		printf("ADDITION: %d",ans);
	}
	else if(op=='-')
	{
		ans=n1-n2;
		printf("SUBTRACTION: %d",ans);
	}
	else if(op=='/')
	{
		ans=n1/n2;
		printf("DIVISION: %d",ans);
	}
	else if(op=='*')
	{
		ans=n1*n2;
		printf("MULTIPLICATION: %d",ans);
	}
	else if(op=='%')
	{
		ans=n1%n2;
		printf("MODULO: %d",ans);
	}
	else
	{
		printf("INVALID OPERATOR!");
	}
}


