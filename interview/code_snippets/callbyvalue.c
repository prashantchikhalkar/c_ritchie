#include <stdio.h>

void swap (int, int);

int main (void)
{
	int a, b;

	a = 10;
	b = 20;

	swap (a, b);

	printf ("a = %d\t b = %d\n", a, b);

	return 0;
}

void swap (int m, int n)
{
	int temp;

	temp = m;
	m = n;
	n = temp;

	printf ("m = %d\t n = %d\n", m, n);
	
}
