#include<stdio.h>
int main() 
{
    int a[10][10], b[10][10], c[10][10], n, i, j, k;
    printf("Enter the value of N (N <= 10): ");
    scanf("%d", & n);
    
    //INPUT FOR A
    
    printf("Enter the elements of Matrix-A: \n");
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++) 
		{
            scanf("%d", & a[i][j]);
        }
    }
    
    //INPUT FOR B
    
    printf("Enter the elements of Matrix-B: \n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            scanf("%d", & b[i][j]);
        }
    }
    
    //MULTIPLICATION OF MATRIX
    
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            c[i][j] = 0;
            for (k = 0; k < n; k++) 
			{
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

	//DISPLAY OF MULTIPLICATION

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

