/*
 * count total number of reset bits in given number
 */

#include <stdio.h>

//unsigned int count_resetbit (int num);

unsigned int count_resetbit (int num)
{
	int count = 0;
	while (num)
	{
		if (((num) & 1) == 0)
		count++;	
		num = num >> 1;
	}
	return count;
}

int main (void) 
{
	int num, resetBit;

	printf ("Enter the number\n");
	scanf ("%d", &num);

	printf ("Given number is %d\n", num);

	resetBit = count_resetbit (num);

	printf ("Number of reset bit in number %d is %d\n", num, resetBit);

	return 0;
}	
