#include <stdio.h>
void main()
{
	int no,sum;
	char choice;
	sum=0;
	do{
			printf("ENTER THE NUMBER: ");
			scanf("%d",&no);
			sum+=no;
			printf("WANT TO ADD ANOTHER NUMBER? (Y/N): ");
			scanf(" %c",&choice);	
	}while(choice=='y'||'Y');
	printf("SUM=%d",sum);
}
