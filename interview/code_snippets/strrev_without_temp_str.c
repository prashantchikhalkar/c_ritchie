// program to reverse a string without using temporary string.

#include <stdio.h>
#include <string.h>

int main ()
{
	char str [] = "prashant";

	reverse (str);
	
	printf ("%s\n", str);
}

void reverse (char s [])
{
	int c, i, j;

	for (i = 0, j = strlen (s) - 1; i < j; i++, j--)
	{
		c = s [i];
		s [i] = s [j];
		s [j] = c;
	}
}
