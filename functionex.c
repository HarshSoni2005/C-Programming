	#include <stdio.h>
/* function declaration */
int max(int n1,int n2);
void main()
{
	/* local variable definition */
	int a=100;
	int b=200;
	int ret;
	/* calling a function to get max value */
	ret=max(a,b);
	printf("MAX VALUE IS : %d\n",ret);
}
/* function returning the max between two numbers */
int max(int num1,int num2)
{
	/* local variable declaration */
	int result;
	if(num1>num2)
	{
		result=num1;	
	}
	else
	{
		result=num2;	
	} 
	return result;
}

