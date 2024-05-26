/*
21. Write a C program to find the sum and average of different numbers which are accepted by user 
for as many numbers the user wants. (For eg. sum of 2, 4, 5, 7, 9 is 27 and the average is 5.4) 
*/

#include <stdio.h>
void main()
{
  	int no,sum=0,i,val;
  	printf("\n How Many Number You Want to Enter : ");
  	scanf("%d",&no);
	for(i=0;i<no;i++)
    {
        printf("Enter No %d:",i+1);
    	scanf("%d",&val);
        sum=sum+val;
    }
    printf("\n Sum = %d",sum);
    printf("\n Average = %d",sum/no);
}
