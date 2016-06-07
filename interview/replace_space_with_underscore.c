// This program will conver the spaces in the input string into underscore
// compile with cc filename.c
// run with ./a.out
// Enter the string to be parsed
// E.g. input string is "prashant v chikhalkar"
// output string will be "prashant_v_chikhalkar"

#include <stdio.h>
#include <string.h>

int main ()
{
  int i;
  char str [50];
  
  printf ("Enter the string\n");
  gets (str);
  
  for (i = 0; i < strlen (str); i++)
  {
    if (str [i] == ' ')
      str [i] = '_';
  }
  printf ("%s\n", str);
  return 0; 
}
