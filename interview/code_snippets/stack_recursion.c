#include <stdio.h>

int call_me (int);

int main (void)
{
	int i = 10;

	printf ("%d\n", call_me (i));

	return 0;
}

int call_me (int x)
{
	if (x == 1)
	{
		return x;
	}
	else
	{	
		printf ("%d\n", x);
		return call_me (x - 1);
	}
}
