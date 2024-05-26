/* 1. WRITE A C PROGRAM TO CALCULATE PROFIT OR LOSS */

#include <stdio.h>
void main()
{
	float pp /*purhcase price*/ , sp /*selling price*/,profit,loss;
	printf("ENTER THE PRICE ON WHICH YOU PURCHASED THE PRODUCT: ");
	scanf("%f",&pp);
	printf("ENTER THE PRICE ON WHICH YOU SOLD THE PRODUCT: ");
	scanf("%f",&sp);
	if(sp<pp)
	{
		loss=pp-sp;
		printf("YOU HAVE INCURED LOSS\n");
		printf("THE AMOUNT OF LOSS IS %2f",loss);	
	}
	else if(sp>pp)
	{
		profit=sp-pp;
		printf("YOU HAVE INCURED PROFIT\n");
		printf("THE AMOUNT OF PROFIT IS %2f",profit);
	}
	else
	{
		printf("ENTER THE VALID NUMBER!");
	}
}
