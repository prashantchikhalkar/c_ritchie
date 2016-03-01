/* c program to check whether given integer number is palindrome.
 * Display the given number with appropriate message.
 */
 
#include <stdio.h>

void main ()
{
  int num, temp, remainder, reverse = 0;
  
  printf ("Enter the number\n");
  scanf ("%d", &num);
  
  /* original number is stored at temp */
  temp = num;
  
  while (num > 0)
  {
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num /= 10;
  }
  printf ("Given number is = %d\n", temp);
  printf ("It's reverse is = %d\n", reverse);
  
  if (temp == reverse)
    printf ("Number is palindrome\n");
  else
    printf ("Number is not palindrome\n");
}
