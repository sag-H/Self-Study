/*A do-while loop will execute the block of code at least once.
Compared to a while-loop which does'nt have to execute at all.*/
#include <stdio.h>

int main(void)
 {
   int i = 10;
   do {
      printf("i is: %i\n", i);
      i++;
      }
  while( i < 20 );
 }