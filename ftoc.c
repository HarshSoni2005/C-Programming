/**6. Write a program to compute Fahrenheit from centigrade 
(f=1.8*c +32)*/

#include <stdio.h>
void main()
{
	float f,c;
	printf("ENTER FARENHEIT: ");
	scanf("%f",&f);
	c=(f-32)*0.56;
	printf("CENTIGRADE=%f",c);
}	
