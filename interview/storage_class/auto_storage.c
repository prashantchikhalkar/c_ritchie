#include <stdio.h>

void increment (void);

void increment (void)
{
	auto int auto_var = 0;
	printf ("%d\n", auto_var);
	++auto_var;

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
