#include <stdio.h>

int main ()
{
	int a [5] = {10, 20, 30, 40, 50};

	printf ("%p %p %p\n", &a[0], a, (a + 0));
	printf ("%p %p %p\n", &a[1], a, (a + 1));
	printf ("%p %p %p\n", &a[2], a, (a + 2));
	printf ("%p %p %p\n", &a[3], a, (a + 3));
	printf ("%p %p %p\n", &a[4], a, (a + 4));
}
