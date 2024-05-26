/*32. Write a C program to read and store the roll no and marks of 20 students using 
array. 
*/

#include <stdio.h>
void main()
{
	int i;
	int mar[20];
	int roll[20];
	for(i=1;i<=20;i++)
	{
		printf("ENTER THE MARKS: ");
		scanf("%d",&mar[i]);
		printf("ENTER THE ROLL NO: ");
		scanf("%d",&roll[i]);
		printf("YOUR MARKS IS %d AND ROLL NUMBER IS %d\n",mar[i],roll[i]);
	}
}
