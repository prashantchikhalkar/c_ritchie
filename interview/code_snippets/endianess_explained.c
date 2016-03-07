/*
Write a C program to check if the underlying architecture is little endian or big endian.

Big endian and little endian are two formats to store multibyte data types into computer's memory. 
These two formats are also called network byte order and host byte order respectively. 

In a multibyte data type such as int or long or any other multibyte data type 
the right most byte is called least significant byte and the left most byte is called most significant byte. 

In big endian format the most significant byte is stored first, thus gets stored at the smallest address byte, 
while in little endian format the least significant byte is stored first.

As an example, if x a four byte integer contains a hex value 0x76543210 ('0x' stands for hex), 
the least significant byte will contain 0x10 and the most significant byte will store 0x76. 
Now if you take a pointer c of type char and assign x's address to c by casting x to char pointer, 
then on little endian architecture you will get 0x10 when *c is printed 
and on big endian architecture you will get 0x76 while printing down *c. 
Thereby you can find out the endianness for machine.

int x = 0x76543210;
char *c = (char*) &x;

Big endian format:
------------------
Byte address  | 0x01 | 0x02 | 0x03 | 0x04 | 
              +++++++++++++++++++++++++++++
Byte content  | 0x76 | 0x54 | 0x32 | 0x10 |
			 
Little endian format:
---------------------
Byte address  | 0x01 | 0x02 | 0x03 | 0x04 | 
              +++++++++++++++++++++++++++++
Byte content  | 0x10 | 0x32 | 0x54 | 0x76 |

*/

/* 
   Write a C program to find out if the underlying 
   architecture is little endian or big endian. 
 */
 
#include <stdio.h>
int main ()
{
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }
 
  return 0;
}
