#include <stdio.h>
void main()
{
	char ch;
	printf("ENTER THE CHARACTER TO BE CHECKED: ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' && ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("%c IS AN VOVEL",ch);
	}
	else
	{
		printf("%c IS AN CONSONANT",ch);
	}
}
