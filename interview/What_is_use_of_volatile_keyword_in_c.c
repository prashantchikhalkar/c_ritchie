/* There are 2 important data type qualifiers in C language. They are ‘const‘ and ‘volatile‘.

‘volatile‘ is one of the mostly confused topic among beginners. I will try to explain it in a very simple way. 
Before understanding what ‘volatile‘ does, let us first go through the below code snippet  (Note: The code is just a skeleton).
*/

int main ( )

{
  int a, i;
  
  for( i = 0; i < 10; i++ ) {
    a = 5;
    printf ( “prashant has %d books\n”, a );
  }
  return 0;
}

/*
In the above program, for loop executes 10 times.
But each time the program enters the for loop it has to execute the statement “a = 5” redundantly which is a waste of execution time. 
Hence, during compilation, the compiler assumes that, the value of ‘a’ inside the loop will not be changed  
and thus instead of executing the statement “a = 5” 10 times, it will logically remove the statement “a = 5” 
from for loop when generating the assembly code to improve efficiency. 
This is done by the optimization algorithm of the compiler and this step is known as optimization of the code to enhance the performance of the program.

Now, consider the below program using volatile qualifier.
*/

int main ( )
{
  volatile int a, i;
  for( i = 0; i < 10; i++ ) {
    a = 5;
    printf ( “Subhash has %d books\n”, a );
  }
  return 0;
}

/*
Here the volatile keyword specifies that, the value of the variable ‘a’ may  change asynchronously by an external event. 
So, it informs the compiler not to remove the statement “a = 5” logically from the loop during compilation. 
Hence the optimization of the code does not take place.  
The above program is just to explain how ‘volatile‘ avoids optimization done by the compiler.

Practically, ‘volatile‘ not applied on a plain variable like shown above ( i.e. ‘a’ ). 
It is used on pointers that are pointing to an external device or in other words, 
which contains a port address of an external device whose value could change asynchronously during runtime. 
These kind of variables are mostly used while programming for embedded system devices and also while programming multithreaded applications.
*/
