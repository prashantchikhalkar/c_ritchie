#include <stdio.h>

int fibonaci (int);

int fibonaci (int i)
{
	if (i == 0)
	{
		return 0;
	}
	else if (i == 1)
	{
		return 1;
	}
	else
	{
		return fibonaci (i - 1) + fibonaci (i - 2);
	}
}

int main (void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf ("%d\t", fibonaci (i));
	}
	printf ("\n");
	return 0;
}
