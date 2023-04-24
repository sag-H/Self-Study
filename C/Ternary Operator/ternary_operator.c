#include <stdio.h>

//These two functions are exactly the same.
//The only thing to consider when deciding wether to use ternary operator or not
// is readability. There's no difference as far as speed or memory.
int findMaxIf(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else 
	{
		return y;
	}
}

int findMaxTernary(int x, int y)
{
	//if what's in the brackets is true -> return x. If false return y.
	return (x > y) ? x : y;
}

int main()
{
	int maxIf = findMaxIf(4, 5);
		printf("maxIf: %d\n", maxIf);

	int maxTernary = findMaxTernary(4, 5);
		printf("maxTernary: %d", maxTernary);


}
