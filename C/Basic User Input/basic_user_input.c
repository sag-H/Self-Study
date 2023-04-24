/*
scanf() is a terrible function for user input. it terminates
when reaching a whitespace, it has no option to deal with
buffer overflow at all, and will write to unwanted memory
if the user input is longer than we hope for.

gets() is a bad function for user input. It doesn't terminate
when reaching a whitespace, and it also doesn't have a way to set
the buffer size of the input, opening the door for problems.

scanf_s() is a good user input function that mitigates buffer overflows.
Why NOT to use it:
1. It's not included in the Standard C Library, but in C Library Extension 1.
2. All bounds-checked functions (with _s suffix in their names) including
the scanf_s function are only guaranteed to work if__STDC_LIB_EXT1__ is 
pre-defined by the implementation.
3. It requires definition of the macro __STDC_WANT_LIB_EXT1__ as 1 to include
all the additions. Otherwise, if definded as 0 before including any of the 
headers that contain C Library Extension 1 additions, none of the additions
will be visible to the program.

fgets() is the best function for parsing user input:
1. It's included in the Standard C Library.
2. It allows the user to set the buffer size for the user input, preventing
buffer overflows caused by longer-than-expected user input.

by default fgets() reads from stdin (console), but can also read from a file.
*/

//Example of fgets() use to read from stdin:
#include<stdio.h>
int main()
{
    char buffer[5];

    printf("Enter the string: ");

    
      
      
    //fgets(name of char array, length of char array, where to read from)        
    fgets(buffer, 5, stdin);  /* in practice we get to use 4 characters because the special
                                 character \0 (EOF) must be stored at the last character.*/

    printf("\nYour input is: %s\n", buffer);

    /*If we enter 'abcdef' into stdin this will be the buffer:
    
    buffer: a  b  c  d  \0

    index:  0  1  2  3  4
    
    Therefore the program will return:
    'Your input is: abcd'

    Where did 'ef' go? Probably to the next 2 slots in memory. Let's check:
    */
   
    char next[5];
    fgets(next, 5, stdin);

    //Prints Next: 'ef'
    printf("Next: %s", next);

    return 0;
}


