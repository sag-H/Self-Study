#include <stdio.h>
#include <stdarg.h>

/// @brief Calculates the average of the given numbers
/// @param amount_of_numbers 
/// @param num1,num2...
/// @return average of the numbers given 
double average(int amount_of_numbers,double num1,...)
{
    /*testetstest*/
   va_list valist;
   double sum = 0.0;
   int i;

   /* initialize valist for amount_of_numbers */
   va_start(valist, amount_of_numbers);

   /* access all the arguments assigned to valist */
   for (i = 0; i < amount_of_numbers; i++) {
      sum += va_arg(valist, int);
   }
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum/amount_of_numbers;}

int main()
{

return 0;
}