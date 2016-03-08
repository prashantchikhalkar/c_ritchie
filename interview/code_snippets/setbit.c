// program to count total number of setbit in 32 bit number

#include <stdio.h>

int countset (int num)
{
	int count = 0;
	
	while (num != 0)
	{
		count++;
		num = num & (num - 1);
	}
	return count;
}

int main ()
{
	int num, count = 0;
	
	printf ("Enter the number\n");
	scanf ("&num");

	count = countset (num);
	printf ("Number of setbit = %d\n", count);
	
	return 0;
}	
