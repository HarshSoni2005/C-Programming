/*7. Write a C program to find out distance travelled by the equation 
d = u*t + a*t2*/

#include <stdio.h>
void main()
{
	int u,a,d;
	float t;
	printf("ENTER VALUE OF U: ");
	scanf("%d",&u);
	printf("ENTER VALUE OF T: ");
	scanf("%f",&t);
	printf("ENTER VALUE OF A: ");
	scanf("%d",&a);
	d=(u*t)+(a*t*t);
	printf("VALUE OF D=%d",d);
}

