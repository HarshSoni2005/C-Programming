/*3. Write a program to calculate simple interest (i = (p*r*n)/100) 
where i = Simple interest p = Principal Amount, r = Rate of interest 
and n = Number of years*/

#include <stdio.h>
void main()
{
	int i,p,r,n;
	printf("ENTER THE PRINCIPLE AMONUNT: ");
	scanf("%d",&p);
	printf("ENTER THE RATE OF INTREST: ");
	scanf("%d",&r);
	printf("ENTER THE NUMBER OF YEARS: ");
	scanf("%d",&n);
	i=(p*r*n)/100;
	printf("SIMPLE INTREST=%d",i);
}
