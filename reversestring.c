/*40. Write a C program to reverse the given string*/

#include<stdio.h>
#include<string.h>
int main()
{
    char mystrg[60];
    int leng,i;
    printf("Insert the string you want to reverse: ");
    scanf("%s",&mystrg);
    leng=strlen(mystrg);
    for(i=leng;i>=0;i--)
	{
        printf("%c",mystrg[i]);        
    }
    return 0;
}


