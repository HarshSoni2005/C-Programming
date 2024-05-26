#include <stdio.h>
int main()
{
	char lwr[100];
	int i;
	printf("ENTER THE LOWER CASE CHARACTER: ");
	gets(lwr);
	for(i=0;lwr[i]!='\0';i++)
	{
		if(lwr[i]>= 'a' && lwr[i]<= 'z')
		{
			lwr[i] = lwr[i]-32; 
		}
	}
	printf("THE NEW STRING IS = %s \n",lwr);
	return 0;
}

