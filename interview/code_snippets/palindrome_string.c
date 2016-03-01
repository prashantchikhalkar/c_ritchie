/*
 * c program to check whether string is palindrome or not ?
 */
 
#include <stdio.h>

void main ()
{
  char str [25], revstr [25] = {'\0'};
  
  int i, length = 0, flag = 0;
  
  printf ("Enter the string\n");
  gets (str);
  
  /* keep going through each character of the string till it's end */
  
  for (i = 0; str [i] != '\0'; i++)
  {
    length++;
  }
  
  printf ("The length of the string '%s' = %d\n", str, length);
  
  for (i = length - 1; i >= 0; i--)
  {
    revstr [length - i - 1] = str [i];
  }
  
  /* check if the string is palindrome */
  
  for (flag = 1, i = 0; i < length; i++)
  {
    if (revstr [i] != str [i])
      flag = 0;
  }
  
  if (flag == 1)
    printf ("%s is palindrome\n");
  else
    printf ("%s is not palindrome\n");
  
}    
