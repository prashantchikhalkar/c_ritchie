#include <stdio.h>

enum power {
	dalai,
	vladimir = 3,
	barak,
	hillary
};

int main (void)
{
	float leader [dalai + hillary] = {1.f, 2.f, 3.f, 4.f, 5.f};

	enum power p = barak;

	printf ("%0.f\n", leader [p >> 1 + 1]);

	return 0;
}
