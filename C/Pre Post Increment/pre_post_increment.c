/*This programs shows the differences between pre (++i)
and post (i++) incrementation of a variable.*/

#include <stdio.h>

int main(void)
{ 
/*Pre-increment:
Here, the final value of 'b' will be 6 as the value of 'a'
will be incremented BEFORE performing the expression.
After performing the expression, the value of 'a' will be 6 due to
the pre-increment.*/
	int a = 5;
	int b = ++a;
    printf("\nPre-increment of a: a = %i, b = %i\n",a,b);

/*Post-increment:
Here, the final value of 'y' will be 5 as the value of 'x'
will be incremented only AFTER performing the expression. x's 
value won't change after running this line.*/
	int x = 5;
	int y = x++;
    printf("Post-increment of x: x = %i, y = %i\n\n",x,y);

//More examples: 
//1:
int c = 7, result;

//result = ++7 + 7++ --> result = 8 + 9 = 17
result = ++c + c++;
printf("originally: c = 7\n");
printf("Result of ++c + c++: %i\n",result);
printf("after operation: c = %i\n\n",c);

//2:
int k = 4, m = 5;
if(k++ < m)
{
    printf("k = %i ",k);
}

return 0;
}
