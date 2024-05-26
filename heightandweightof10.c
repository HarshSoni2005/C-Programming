
/*23. Read height and weight of 10 people and count the number of people having 
height greater than 170 and weight less than 50*/

#include <stdio.h>
void main() 
{
    int count=0;  
    int h,w,i;
    for (i=1;i<=10;i++) 
	{
        printf("Enter height (in cm) and weight (in kg) for person %d: ", i);
        scanf("%d %d",&h,&w);

        if (h>170 && w< 50) 
		{
            count++;  
        }
    }
    printf("Number of people with height > 170 and weight < 50: %d\n", count);
}
