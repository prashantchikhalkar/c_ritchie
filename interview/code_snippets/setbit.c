#include <stdio.h>

int countset (int num)
{
  int count = 0;
  
  while (num) {
    if (((num) & 1) == 1)
      count++;
    num = num >> 1;  
  }
  return count;
}

int main ()
{
  int num, setbit;
  
  printf ("Enter the number \n");
  scanf ("%d", &num);
  
  setbit = countset (num);
  
  printf ("The number of setbit in given number = %d\n", setbit);
  
  return 0;
}
