/*This program showcases uses of sizeof().
The sizeof() function returns the number of bits something takes in memory.*/

#include <stdio.h>

int main(void)
{
   
   printf("Size of a char: %i\n", sizeof(char));
   printf("Size of a int: %i\n", sizeof(int));
   printf("Size of a float: %i\n", sizeof(float));
   printf("Size of a double: %i\n", sizeof(double));

   /*Since an array in C must contain elements of the same type, 
   sizeof() can be used to find its length (number of elements).
   Dividing the size of the whole array in memory, by the size of a 
   single element gives the numbers of elements. */
   int arr[] = { 1, 2, 3, 4, 7, 98, 0};
   int arr_length = sizeof(arr) / sizeof(arr[0]);
   
   printf("Size of the entire array in memory: %i\n",sizeof(arr));
   printf("Size of a single element: %i\n\n",sizeof(arr[0]));
   
   printf("The array: ");
   int i;
   for ( i = 0; i < arr_length ; i++ )
   {
      //Printing each element followed by "," unless it's last - then "."
     (i != arr_length-1) ? printf("%i, ", arr[i]) :printf("%i.\n", arr[i]);
   }
   
   printf("Number of elements in the array: %i", arr_length);
}