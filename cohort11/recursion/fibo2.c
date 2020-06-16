#include <stdio.h>

int fibo1(int n)
{
	if (n < 2)
		return (n);
	return fibo1(n - 1) + fibo1(n - 2);
}

void is_fibo(int n, int aux)
{
	if (fibo1(aux) == n)
	{
		printf("-> Yes\n");
		return;
	}
	else if (aux > 0)
		is_fibo(n, --aux);
	else
		printf("-> No\n");
}

int main()
{
	int fiboIndex = 14;

	printf("Number %d is in fibo series? ", fiboIndex);
	is_fibo(fiboIndex, fiboIndex);
	return (0);
}