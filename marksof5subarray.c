#include <stdio.h>
int main()
{
	int sub[5];
	int i;
	int sum=0;
	printf("ENTER THE MARKS OF 5 SUBJECTS: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&sub[i]);
		sum+=sub[i];
	}
	printf("TOTAL=%d\n",sum);
	return 0;
}
