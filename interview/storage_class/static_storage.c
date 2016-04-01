#include <stdio.h>

void increment (void);

void increment (void)
{
	static int static_var = 0;

	printf ("%d\n", static_var);
	++static_var;

	return;

}

int main (void)
{
	increment ();
	increment ();
	increment ();
	increment ();

	return 0;

}
