#include <stdio.h>

int main (void)
{
	int a[10], i, n, big, pos;

	printf ("Enter the number of elements\n");
	scanf ("%d", &n);

	printf ("Enter the elements\n");
	
	for (i = 0; i < n; i++)
	{
		//scanf ("%d", &a[i]);
		scanf ("%d", a + i);
	}
	//big = a[i];
	big = *(a + 0);
	pos = 0;

	for (i = 0; i < n; i++)
	{
		//if (a[i] > big)
		if (* (a + i) > big)
		{
			//big = a[i];
			big = * (a + i);
			pos = i;
		}
	}
	printf ("Largest = %d\n", big);
	printf ("Position = %d\n", pos);
}
