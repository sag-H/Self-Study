/*  Every string we take as input from stdin will have
 *  the trailing characters '\n' (after pressing ENTER)
 *  followed by '\0' (null terminator) at the end,
 *  denoting the end off the string.
 *  This shows the changes in string length when removing '\n'.
 * 
 *  Example: 
 *     If we enter the string "abc 123" with stdin,
 *     the string char array will look like this:
 *     
 *       string[0] = 'a'
 *       string[1] = 'b'
 *       string[2] = 'c'
 *       string[3] = ' '
 *       string[4] = '1'
 *       string[6] = '3'
 *       string[5] = '2'
 *       string[7] = '\n'  <-- When the user presses enter
 *       string[8] = '\0'      this newline char is added.
 *          
 *     String length will be 8. strlen() ignores the '\0'.
 *
 * 
 *     We can set the char at string[7] ('\n') to \0,
 *     thereby ending the string one character earlier.
 *     After which the string will look like this:
 *    
 *       string[0] = 'a'
 *       string[1] = 'b'
 *       string[2] = 'c'
 *       string[3] = ' '
 *       string[4] = '1'
 *       string[5] = '2'
 *       string[6] = '3'
 *       string[7] = '\0'
 *       string[8] = '\0'  <-- The extra null terminator won't matter.
 *
 *  Reference video: https://www.youtube.com/watch?v=0UJX96_ZpVE
 */

#include <stdio.h> 

// We include <string.h> to use strlen() which finds the length 
// of a string (excluding the null terminator '\0').
#include <string.h>

void print_string_characters(char string[])
{
    int string_length = strlen(string);

    for (int i = 0; i <= string_length; i++)
    {   
        // Printing an actual newline to the terminal where there's a \n char
        if (string[i] == '\n')
            printf("string[%d] = \\n \n", i);
        
        // Printing a '\0' where there's a null terminator
        else if (string[i] == '\0')
            printf("string[%d] = \\0 \n", i);
        
        // Otherwise just print the char in the char array
        else
            printf("string[%d] = %c \n", i, string[i]);
    }
}

void print_string_length(char string[])
{
    int string_length = strlen(string);
    printf("String length: %d", string_length);

}

int main()
{
    //128 bits is arbitrary for this example
    char user_input[128];
    printf("Enter String: ");
    fgets(user_input, 128, stdin);

    int user_input_length = strlen(user_input);
    printf("Before removing '\\n': \n");
    print_string_characters(user_input);
    print_string_length(user_input);
    printf("\n\n");

    user_input[strlen(user_input) - 1] = '\0';

    //Showing the new length of the string after the removal of '\n'
 /* user_input_length = strlen(user_input);
    printf("String length after '\\n' removal: %d\n", user_input_length);*/

    // Here we'll print each character individually to see the 
    // effect of replacing '\n' with '\0'.
    // When we reach a newline character we will activate a newline,
    // and when we reach null we'll print '\0'.

    printf("After removing '\\n': \n");
    print_string_characters(user_input);
    print_string_length (user_input);

    

    return 0;
}