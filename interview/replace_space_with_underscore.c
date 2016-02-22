#include <stdio.h>
#include <string.h>

#if 0
int main ()
{
  int c, i;
  
  while ((c= getchar ()) != EOF)
  {
    if (c == ' ')
      putchar ('_');
  }
  return 0;
}
#endif

int main ()
{
  int i;
  char srcstr [50];
  // char dststr [50];
  
  printf ("Enter the string\n");
  
  gets (srcstr);
  
  for (i = 0; i < strlen (srcstr); i++)
  {
    if (srcstr [i] == ' ')
      srcstr [i] = '_';
  }
  puts (srcstr);
  return 0; 
}
