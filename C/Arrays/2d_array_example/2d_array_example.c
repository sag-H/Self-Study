/*This code initializes a 2 dimentional array and populates it with values.
It then prints its elements with tabs after every 4th element.*/

#include <stdio.h>

int main()
{
	int a[3][4] = {
	   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
	   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
	   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
	};
	int i;
	int j;
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 3; j++) {
			printf("%d ", a[i][j]);

			//Print formatting, prevents tab when j == 0
			if (j != 0 && j % 3 == 0) {
				printf("\n");
			}
		}
	}
}