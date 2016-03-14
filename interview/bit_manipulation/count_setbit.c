/*
 * c program to count number of setbit in given number
 */

#include <stdio.h>

unsigned int setbit_count (int);

unsigned int setbit_count (int num)
{
	int count = 0;

	while (num != 0)
	{
		if (((num) & 1) == 1)
			count++;
		num = num >> 1;
	}
	return count;
}

int main (void)
{
	int num, setbit;

	printf ("Enter the number\n");
	scanf ("%d", &num);
	printf ("Given number is %d\n", num);

	setbit = setbit_count (num);

	printf ("Number of setbit in number %d = %d\n", num, setbit);

	return 0;
}
