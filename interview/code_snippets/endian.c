// c program to check the machine is little endian or big endian

#include <stdio.h>

int main ()
{
	enum union {
		int a,
		char c [4];
	};
	enum endian obj;
	
	obj.a = 1;
	if (obj.c[0] == 1)
 		printf ("Little Endian\n");
	else
 		printf ("Big Endian\n");
		
}
