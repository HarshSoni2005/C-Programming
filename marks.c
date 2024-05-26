/*14.Write a program to read marks from keyboard and your program
should display equivalent grade according 
to following table(if else ladder) 
Marks Grade 
100 - 80 Distinction 
79 - 60 First Class 
59 - 40 Second Class 
< 40 Fail*/

#include <stdio.h>
void main()
{
	int marks;
	printf("ENTER THE MARKS: ");
	scanf("%d",&marks);
	if(marks>80)
	{
		printf("DISTINCTION",marks);
	}
	else if(marks>60)
	{
		printf("FIRST CLASS",marks);
	}
	else if(marks>40)
	{
		printf("SECOND CLASS",marks);
	}
	else if(marks<40)
	{
		printf("FAIL CLASS",marks);
	}
}
