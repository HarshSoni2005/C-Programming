#include <stdio.h>
void main()
{
    char city[10];
    int i, length=0;
    printf("Enter a string:");
    gets(city);    
    for (i = 0; city[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of the string is: %d\n", length);
}
