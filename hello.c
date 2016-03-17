#include <stdio.h>

int main ()
{
	int num1, num2, sum;

	printf ("Hello, World\n");	

	printf ("Enter two numbers\n");
	scanf ("%d %d", &num1, &num2);

	printf ("Given numbers are %d and %d\n", num1, num2);

	sum = num1 + num2;

	printf ("sum of %d + %d = %d\n", num1, num2, sum);
	return 0;
}
