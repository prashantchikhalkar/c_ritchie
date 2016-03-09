#include <stdio.h>

int main ()
{
    int i = 0, j = 1, k = -1, l = 1.1, m = 0.0, n = 0.1, o = -1.0;
    
    printf ("check if - else\n");
    
    if (i)
        printf ("passed : i = %d\n", i);
    else
        printf ("failed : i = %d\n", i);
    if (j)
        printf ("passed : j = %d\n", j);
    else
        printf ("failed : j = %d\n", j);
    if (k)
        printf ("passed : k = %d\n", k);
    else
        printf ("failed : k = %d\n", k);
    if (l)
        printf ("passed : l = %f\n", l);
    else
        printf ("failed : l = %f\n", l);
    if (m)
        printf ("passed : m = %f\n", m);
    else
        printf ("failed : m = %f\n", m);
    if (n)
        printf ("passed : n = %f\n", n);
    else
        printf ("failed : n = %f\n", n);
    if (o)
        printf ("passed : o = %f\n", o);
    else
        printf ("failed : o = %f\n", o);
  
  printf ("end of if-else\n");
  return 0;
}
