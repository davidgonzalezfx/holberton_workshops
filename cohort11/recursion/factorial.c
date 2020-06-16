#include <stdio.h>

int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int fact = 4;

	printf("Factorial de %d es %d\n", fact, factorial(fact));
	return (0);
}