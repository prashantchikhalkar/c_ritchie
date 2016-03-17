/*
 * c program to find the number is power of two
 */

#include <stdio.h>

void power_of_two (int);

void power_of_two (int num)
{
	if (!((num) & (num - 1)))
		printf ("%d is power of 2\n", num);
	else	
		printf ("%d is not power of 2\n", num);
	return;	
}

int main (void)
{
	int num = 0;

	printf ("Enter the number\n");
	scanf ("%d", &num);

	power_of_two (num);

	return 0;
}
