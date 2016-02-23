// defines

#define EXPLAIN   0
#define AUTO      1  
#define STATIC    0
#define EXTERN    0
#define REGISTER  0

#if 0
#ifdef EXPLAIN

What is storage class specifier?
Storage class specifiers in C language tells the compiler :
  -> where to store a variable, 
  -> how to store the variable, 
  -> what is the initial value of the variable
  -> life time of the variable. 

Syntax: 
  storage_specifier data_type variable _name
  
Types of storage class specifier in c :

There are four storage class specifier in C Language,
  1. Automatic
  2. Register
  3. Static
  4. Extern
  
Storage Specifier     Storage place     Default value   Scope   Life
auto                  CPU Memory        Garbage value   local   Within the function only
extern                CPU Memory        zero            Global  Till end of main program,  
static                CPU Memory        zero            local   retains value of variable between function calls
register              Register memory   Garbage value   local   withing the function only

Note:
For faster access of a variable, it is better to go for register specifiers rather than auto specifiers.
Because, register variables are stored in register memory whereas auto variables are stored in main CPU memory.
Only few variables can be stored in register memory. So, we can use variables as register that are used very often in a C program.
#endif
#endif

#if 0
#ifdef AUTO
// Example Program for Auto variable in C

#include <stdio.h>

void increment (void);

int main ()
{
  increment ();
  increment ();
  increment ();
  increment ();
  
  return 0;
}

void increment (void)
{
  auto int i= 0;
  
  printf ("i = %d\n", i);
  i++;
}
#endif
#endif

#if 0
#ifdef STATIC
// Example program for static variable in C
#include <stdio.h>

void increment (void);

int main ()
{
  increment ();
  increment ();
  increment ();
  increment ();
  
  return 0;
}

void increment (void)
{
  static int i = 0;
  
  printf ("i = %d\n", i);
  i++;
}
#endif
#endif

#if 0
#ifdef EXTERN
// Example program for extern variable in C
// The scope of this extern variable is throughout the main program. 
// It is equivalent to global variable. 
// Definition for extern variable might be anywhere in the C program.
#include <stdio.h>

int x = 10;

int main ()
{
  extern int y;
  
  printf ("x = %d\n", x);
  printf ("y = %d\n", y);
  return 0;
}
int y = 50;
#endif
#endif

#if 1
#ifdef REGISTER
// Example program for register variable in C
// Register variables are also local variables, but stored in register memory.
// Whereas, auto variables are stored in main CPU memory. 
// Register variables will be accessed very faster than the normal variables
// since they are stored in register memory rather than main memory.
// But, only limited variables can be used as register since register size is very low. (16 bits, 32 bits or 64 bits)

#include <stdio.h>

int main ()
{
  register int i;
  int arr[5];  // declaring array
  
  arr [0] = 10; // initializing array
  arr [1] = 20;
  arr [2] = 30;
  arr [3] = 40;
  arr [4] = 50;
  
  for (i = 0; i < 5; i++) {   // accessing each variable
  printf ("value of arr [%d] = %d\n", i, arr[i]);
  }
  return 0;
}
#endif
#endif
