/*
write a c program to take angle as input from user and check wether the triangle is
valid or not.
*/

#include <stdio.h>
void main()
{
	int a1,a2,a3,ans;
	printf("ENTER THE FIRST ANGLE OF TRIANGLE: ");
	scanf("%d",&a1);
	printf("ENTER THE SECOND ANGLE OF TRIANGLE: ");
	scanf("%d",&a2);
	printf("ENTER THE THIRD ANGLE OF TRIANGLE: ");
	scanf("%d",&a3);
	ans=a1+a2+a3;
	if(ans==180)
	{
		printf("TRIANGLE IS VALID");
	}
	else
	{
		printf("TRIANGLE IS INVALID");
	}
}
