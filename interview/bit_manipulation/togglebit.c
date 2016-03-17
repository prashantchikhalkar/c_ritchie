/*
 * c program to toggle perticular bit in given number
 */

#include <stdio.h>

void toggleBit (int , int, int *);
void toggleBit (int num, int pos, int *new_number)
{
	*new_number = num ^ (1 << pos);
}

int main (void)
{
	int num, pos, new_number;

	printf ("Enter the number\n");
	scanf ("%d", &num);

	printf ("Enter the position\n");
	scanf ("%d", &pos);

	toggleBit (num, pos, &new_number);

	printf ("Given number %d after toggling bit %d becomes %d\n", 
	num, pos, new_number);

	return 0;
}
