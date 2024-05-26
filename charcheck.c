/*12. Write a C program to check whether the entered character is capital, small letter, digit or 
any special character.*/ 

#include <stdio.h>
int main()
{
	int ch;
	printf("ENTER THE CHARACTER TO BE CHECKED: ");
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("%c IS CAPITAL LETTER",ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("%c IS SMALL LETTER",ch);	
	}	
	else if (ch >= '1' && ch <= '9')
	{
		printf("%c IS DIGIT",ch);
	}
	else
	{
		printf("%c IS A SPECIAL CHARACTER: ",ch);
	}
}

