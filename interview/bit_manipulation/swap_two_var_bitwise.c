/*
 * c program to swap two variables using bitwise operator
 */

#include <stdio.h>

void swap (int *, int *);

void swap (int *num1, int *num2)
{
	*num1 = *num1 ^ *num2;
	*num2= *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}

int main (void)
{
	int num1, num2;

	printf ("Enter two numbers\n");
	scanf ("%d %d", &num1, &num2);

	printf ("Given numbers are %d and %d\n", num1, num2);

	swap (&num1, &num2);

	printf ("Given numbers after swapping are %d and %d\n", num1, num2);

	return 0;
}
