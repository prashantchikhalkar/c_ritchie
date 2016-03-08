// c program to whether string is palindrome or not

#include <stdio.h>

int my_strlen (const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}	
	return length;
}

int my_strcmp (char *str_2, char *str_1)
{
	while (*str_1 != '\0' && *str_2!= '\0')
	{
		str_1++;
		str_2++;
	}
	return (*str_1 - *str_2);
}

int main ()
{
	char str [20];
	char rev_str [20];

	int i, length;

	printf ("Enter string to be checked\n");

	gets (str);

	length = my_strlen (str);

	for (i = length - 1; i >= 0; i--)
	{
		rev_str [length - i - 1] = str [i];
	}
	if (my_strcmp (rev_str, str) == 0)
		printf ("%s is palindrome\n", str);
	else
		printf ("%s is not palindrome\n", str);
	return 0;
}
