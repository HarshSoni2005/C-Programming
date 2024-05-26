/*13. Write a c program to prepare pay slip using following data: 
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50% of basic
, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf. */

#include <stdio.h>
void main()
{
	int hra,da,ma=300,pf=0.125,nt,gross,basic;
	printf("ENTER BASIC: ");
	scanf("%d",&basic);
	da=0.10*basic;
	hra=0.075*basic;
	gross=basic+da+hra+ma;
	printf("GROSS=%d\n",gross);
	nt=gross-pf;
	printf("NT=%d",nt);
}
