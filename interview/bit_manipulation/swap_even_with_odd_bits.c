/*
 * c program to swap even bits with consecutive odd bits
 */

#include <stdio.h>

void swap_bits (int , int *);

void swap_bits (int num, int *new_num)
{
	*new_num = (num >> 1 & 0x55555555) | (num << 1 & 0xAAAAAAAA);
}

int main (void)
{
	unsigned int num, new_num;

	printf ("Enter the number\n");
	scanf ("%d", &num);

	swap_bits (num, &new_num);

	printf ("Given number %d after swapping even bits with odd becomes %d\n", num, new_num);

	return 0;
}
