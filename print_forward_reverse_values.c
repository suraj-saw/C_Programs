// program to prompt the user to input integer values and print these values in forward and reverse order.

#include<stdio.h>

void promptValues(int values[], int n)
{
	for (int i=0;i<n;i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d", &values[i]);
	}
}

void forwardPrint(int values[], int n)
{
	for (int i=0;i<n;i++)
		printf("%d  ", values[i]);
	printf("\n");
}

void backwardPrint(int values[], int n)
{
	for (int i=n-1;i>=0;i--)
		printf("%d  ", values[i]);
	printf("\n");
}

void main()
{
	int n;
	printf("\nEnter the number of integer values: ");
	scanf("%d", &n);
	
	int values[n];
	promptValues(values, n);

	printf("\nYour entered values in forward order: ");
	forwardPrint(values, n);
	
	
	printf("\nYour entered values in reversed order: ");
	backwardPrint(values, n);

}

	
	
	





