/*
 * Set nth bit in given number
 */

#include <stdio.h>

int setbit (int num, int position, int new_number);

int setbit (int num, int position, int new_number)
{
	new_number = num | 1 << position;

	return new_number;
}

int main (void)
{
	int num, position, new_number;

	printf ("Enter the number\n");
	scanf ("%d", &num);

	
	printf ("Enter the position\n");
	scanf ("%d", &position);

	new_number = setbit (num, position, new_number);

	printf ("Given Number %d after setting bit number %d becomes %d\n", num, position, new_number);
}
