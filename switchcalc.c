#include <stdio.h>
void main()
{
	int n1,n2,ans;
	char op;
	printf("ENTER THE FIRST NUMBER: ");
	scanf("%d",&n1);
	printf("ENTER THE SECOND NUMBER: ");
	scanf("%d",&n2);
	printf("ENTER THE OPERATOR (+,-,/,*,%%): ");
	scanf(" %c",&op);
	switch(op)
	{
	case '+':
		ans=n1+n2;
		printf("ADDITION=%d",ans);
		break;
	case '-':
		ans=n1-n2;
		printf("SUBTRACTION=%d",ans);
		break;
	case '/':
		ans=n1/n2;
		printf("DIVISION=%d",ans);
		break;
	case '*':
		ans=n1*n2;
		printf("MULTIPLICATION=%d",ans);
		break;
	case '%':
		ans=n1%n2;
		printf("MODULO=%d",ans);
		break;
	}
}
