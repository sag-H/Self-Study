/*A function prototype gives the compiler information about a function:
1. The number of arguments the function is supposed to receive.
  (Using prototypes will make the compiler throw an error if an argument is missing)
2. The datatypes of the function's parameters.
3. The return type of the function. 
* Using function prototypes, we are able to call a function before declaring 
  it in the code. This allows us to have the main() function at the top.

Ommiting function prototypes may cause the program to compile with some
warnings, and sometimes generate strange output.
Thus, it is considered good practice to use prototype declaration for
every function that we call.*/

#include <stdio.h>

void hello(char[], int); //function prototype

int main()
{
	char name[] = "myname";
	int age = 21;
	hello(name, age);
	return 0;
}

void hello(char name[], int age)
{
	printf("\nHello %s", name);
	printf("\nYou are %d years old", age);
}