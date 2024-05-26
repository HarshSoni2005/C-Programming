#include <stdio.h>
struct personal
{
	char date[5];
	int salary;
	char name[10];
};
void main()
{
	int i;
	struct personal s1[5];
	for(i=0;i<5;i++ )
	{
		printf("Enter Details for person %d : \n",i+1);
		printf("\n");
		printf("Enter Date: ");
		scanf("%s",&s1[i].date);
		printf("Enter Salary: ");
		scanf("%d",&s1[i].salary);
		printf("Enter Name: ");
		scanf("%s",&s1[i].name);
	}
	for( i = 0; i<5; i++ )
	{
		printf("Date : %s\n",s1[i].date);
		printf("Salary : %d\n",s1[i].salary);
		printf("Name : %s\n",s1[i].name);
	}
}
