/*28. Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4! ..........
 ..-x^9/9! */

#include <stdio.h>
void main()
{
	int i,j,fact=1,n;
	float sum=0;
	printf("ENTER THE VALUE: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<0;j++)
		{
			fact=fact*i;
		}
		sum=sum+(1.0/fact);
	}
	printf("\n SUM OF SERIES=%f",sum);
}
