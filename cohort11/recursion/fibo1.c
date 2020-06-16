#include <stdio.h>

int fibo1(int n)
{
	if (n < 2)
		return (n);	
	return fibo1(n - 1) + fibo1(n - 2);
}

int main()
{
	int fiboIndex = 6;

	printf("Fibo number on index: %d -> %d\n", fiboIndex, fibo1(fiboIndex));
	return (0);
}