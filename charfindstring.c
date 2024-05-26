/*37. Write a program to find a character from given string.*/

#include <stdio.h>
int main() 
{
	char str[20],ch,flag=1;
	int i;
	printf("ENTER CHARACTER:  \n");
	gets(str);
	printf("ENTER THE CHARACTER TO BE SEARCHED :");
	scanf("%c",&ch);
	printf("CHARACTER: \n");
  	for(i=0;str[i]!='\0';i++) 
	{
		if (str[i]==ch) 
		{
      		printf("%d POSITION\n",i+1);
      		flag=0;
        }
        else
        {
        	printf("CHARACTER NOT FOUND");
		}
    }
  	return 0;
}
