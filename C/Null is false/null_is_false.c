/*In C, a null value is considered False by the compiler.
A non-null value is considered True.*/

#include <stdio.h>

int main(void)
{
char mynull = NULL;
char notnullchar = 'a';
int notnullint = 6;

if(notnullchar){
    printf("notnullchar = True\n");
}

if(notnullint){
    printf("notnullint = True\n");
}

if(mynull){
    printf("Will never get printed.");
}

else{
    printf("mynull = False");
}

return 0;
}