/*
 * c program to implement atoi function
 */

#include <stdio.h>

int myAtoi (char *);

int myAtoi (char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str [0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str [i] != '\0'; ++i)
	{
		res = res * 10 + str [i] - '0';
	}
	return sign * res;
}

int main (void)
{
	char str [20] = "abc";
	//char str [20] =  "-123";
	//char str [20] =  "89789";
	int val = 0;

	//printf ("Enter the string\n");

	//gets (str);

	val = myAtoi (str);
	printf ("%d\n", val);

	return 0;
}
