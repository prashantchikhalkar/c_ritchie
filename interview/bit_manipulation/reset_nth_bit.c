/*
 * c program to reset nth bit in given number
 */

#include <stdio.h>

int resetBit (int, int, int);

int resetBit (int num, int position, int new_number)
{
	new_number = num & ~(1 << position);
	return new_number;
}

 int main (void)
 {
	int num, position, new_number;

	printf ("Enter a 32 bit number\n");
	scanf ("%d", &num);

	printf ("Given number is %d\n", num);

	printf ("Enter the position\n");
	scanf ("%d", &position);

	printf ("Given position is %d\n", position);

	new_number = resetBit (num, position, new_number);

	printf ("Given number %d after resetting bit at %d is %d\n", 
	num, position, new_number);

	return 0;
 }
