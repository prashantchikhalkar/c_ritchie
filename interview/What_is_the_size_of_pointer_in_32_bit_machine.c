//Sizeof  of pointer in 32 bit machine is always 4 bytes.
//Sizeof  of pointer in 64 bit machine is always 8 bytes.

#include <stdio.h>

int main()
{
    int *p = NULL;
    printf ("%ld\n", sizeof (p));
    if(sizeof(p) == 4)
        printf("Machine is 32 bit\n");
    else
        printf("Machine is 64 bit\n");
    return 0;
}
