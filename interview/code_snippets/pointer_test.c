#include <stdio.h>

int main ()
{
	int *p;
	int *q;
	int *r;

	int x = 10;

	p = &x;
	q = &x;
	r = &x;
	
	printf ("&p = %u\t p = %u\t *p = %d\n", &p, p, *p);
	printf ("&q = %u\t q = %u\t *q = %d\n", &q, q, *q);
	printf ("&r = %u\t r = %u\t *r = %d\n", &r, r, *r);
}
