// program that takes a number as input and print in Octal ad Hex using printf() in C.

#include<stdio.h>

void main()
{
	int num;

	printf("\nEnter a number: ");
	scanf("%d", &num);

	printf("%d in Octal = %o\n", num, num);
	printf("%d in Hexadcimal = %x\n", num, num);
}

