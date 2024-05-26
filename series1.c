/*25. Write a program to evaluate the series 1^2+2^2+3^2+……+n^2 */

#include <stdio.h>
void main()
{
	int n,i,sum=0;
	printf("ENTER THE VALUE OF N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("\n SUM OF SERIES=%d",sum);
}
