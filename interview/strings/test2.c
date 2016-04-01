#include <stdio.h>

#define var 	3

int main (void)
{
	char *cricket [var + ~0] = {"clarke", "kallis"};

	char *ptr = cricket [1 + ~0];

	printf ("%c\n", *++ptr);

	return 0;
}
