/*
23. Read height and weight of 10 people and count the number of people having 
height greater than 170 and weight less than 50 using array.
*/

#include <stdio.h>
int main() 
{
    int height[10];
    int weight[10];
	int i,count=0;
    for (i=1;i<=10;i++) 
	{
        printf("Enter height for person %d (in cm): ",i);
        scanf("%d", &height[i]);
        printf("Enter weight for person %d (in kg): ",i);
        scanf("%d", &weight[i]);
    
        if(height[i]>170 && weight[i]<50) 
		{
            count++;
        }
    }
    printf("Number of people with height > 170 cm and weight < 50 kg: %d\n", count);
}

