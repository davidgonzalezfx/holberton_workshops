#include <stdio.h>
#include <stdlib.h>

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - add a with b
 * @a: int
 * @b: int
 * Return: void
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract a with b
 * @a: int
 * @b: int
 * Return: void
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a with b
 * @a: int
 * @b: int
 * Return: void
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a with b
 * @a: int
 * @b: int
 * Return: void
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a module b
 * @a: int
 * @b: int
 * Return: void
 */
int op_mod(int a, int b)
{
	return (a % b);
}

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod}
	};

	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' &&
	    argv[2][0] != '-' &&
	    argv[2][0] != '*' &&
	    argv[2][0] != '/' &&
	    argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 &&
	(argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(argv[2])(num1, num2);
	printf("%d\n", res);

	return (0);
}
