/*
 * c program to find that number is even or odd using bitwise operator
 */

#include <stdio.h>

void even_or_odd (int);

void even_or_odd (int num)
{
	if ((num) & 1)
		printf ("Given number %d is odd number\n", num);
	else	
		printf ("Given number %d is even number\n", num);
	return;	
}

int main (void)
{
	int num;

	printf ("Enter the number\n");
	scanf ("%d", &num);

	even_or_odd (num);

	return 0;
}
