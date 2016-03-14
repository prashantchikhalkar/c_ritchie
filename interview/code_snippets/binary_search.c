#include <stdio.h>

#define SIZE 10

void binary_search (int item, int *a, int n, int *position);

void binary_search (int item, int *a, int n, int *position)
{
	int low, high, mid;

	low = 0;
	high = n - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
	
		if (item == *(a + mid))
		{
			*position = mid;
			return;
		}
		if (item < *(a + mid))
			high = mid - 1;
		else
			low = mid + 1;
	}
	*position = -1;
}

int main (void)
{
	int n, i, item, a[10], position;

	printf ("enter the number of elements\n");
	scanf ("%d", &n);

	printf ("Enter %d elements\n", n);
	for (i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	
	printf ("Enter the item to search\n");
	scanf ("%d", &item);

	binary_search (item, a, n, &position);
	
	if (position == -1)
		printf ("Item %d not found\n", item);
	else
		printf ("Item %d found at position %d\n", item, position);
}
