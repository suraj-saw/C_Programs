// program to swap two variables values without using third variables.
 
#include<stdio.h>

void swap(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Value of 1st variable: %d\n", a);
	printf("Value of 2nd variable: %d\n", b);
}

void main()
{
	int a, b;

	printf("\nEnter value for 1st variable: ");
	scanf("%d", &a);
	printf("Enter value for 2nd variable: ");
	scanf("%d", &b);
	
	printf("\nBefore Swapping\n");
	printf("Value of 1st variable: %d\n", a);
	printf("Value of 2nd variable: %d\n", b);

	printf("\nAfter Swapping\n");
	swap(a, b);
}	
        

        
