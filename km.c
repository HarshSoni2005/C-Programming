/*5. Write a C program to enter a distance in to kilometer 
and convert it in to meter, feet, inches and centimeter*/

#include <stdio.h>
void main()
{
	float km,ans;
	printf("ENTER KILOMETERS: ");
	scanf("%f",&km);
	ans=km*1000;
	printf("%f KM = %f METERS\n",km,ans);
	ans=km*100000;
	printf("%f KM = %f CENTIMETERS\n",km,ans);
	ans=km*3280.84;
	printf("%f KM = %f FEETS\n",km,ans);
	ans=km*39370.08;
	printf("%f KM = %f INCHES",km,ans);
}
