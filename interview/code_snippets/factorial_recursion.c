#include <stdio.h>

int factorial (unsigned int);

int factorial (unsigned int num)
{
	if (num <= 1)
		return 1;
	else
		return num * factorial (num - 1);
}

int main (void)
{
	int number = 0;

	printf ("Enter the number\n");
	scanf ("%d", &number);

	printf ("Factorial of number %d is %d\n", number, factorial (number));

	return 0;
}
