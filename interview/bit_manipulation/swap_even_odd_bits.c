/*
 * c program to swap even bits with odd bits in given number
 */

#include <stdio.h>

#define EVEN_BITS	0xAAAAAAAA
#define ODD_BITS	0x55555555

unsigned int swap_even_odd_bits (unsigned int, unsigned int);

unsigned int swap_even_odd_bits (unsigned int num, unsigned int new_number)
{
	unsigned int even_bits, odd_bits;

	even_bits = num & EVEN_BITS;	// get all even bits
	odd_bits = num & ODD_BITS;	// get all odd bits

	even_bits >>= 1;		// right shift even bits
	odd_bits <<= 1;			// left shift odd bits

	return (even_bits | odd_bits);
}

int main (void)
{
	unsigned int num, new_number = 0;

	printf ("Enter number \n");
	scanf ("%d", &num);

	printf ("Given number is %d\n", num);

	new_number = swap_even_odd_bits (num, new_number);

	printf ("%d after swapping even bits with odd bits is %d\n", 
	num, new_number);

	return 0;
}
