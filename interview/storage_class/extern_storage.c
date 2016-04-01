#include <stdio.h>

int global_1 = 10;

int main (void)
{
	extern int global_2;

	printf ("%d\n", global_1);
	printf ("%d\n", global_2);

	return 0;
}

int global_2 = 50;
