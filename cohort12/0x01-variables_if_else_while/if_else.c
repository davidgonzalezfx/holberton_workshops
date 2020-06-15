#include <stdio.h>

int main()
{
	int num1 = 10;
	int num2 = 3;
	char operator = '*';
	
	printf("C Calculator\n");
	printf("Instructions:\n");
	printf("1. Modify num1 and num2 variables to input numbers\n");
	printf("2. Valid values for operator variable: [+,-,*,/,%%]\n");
	printf("=================\n");

	printf("a: %d\n", num1);
	printf("op: %c\n", operator);
	printf("b: %d\n", num2);

	if (operator == '+')
	{
		printf("-> %d\n", num1 + num2);
	}
	else if (operator == '-')
	{
		printf("-> %d\n", num1 - num2);
	}
	else if (operator == '*')
	{
		printf("-> %d\n", num1 * num2);
	}
	else if (operator == '/')
	{
		printf("-> %d\n", num1 / num2);
	}
	else if (operator == '%')
	{
		printf("-> %d\n", num1 % num2);
	}
	else
	{
		printf("Please input a valid operator variable [+,-,*,/,%%]\n");
	}	
	/* Using switch statement */
	/* 
	switch (operator)
	{
		case '+':
			printf("-> %d\n", num1 + num2);
		case '-':
			printf("-> %d\n", num1 - num2);
		case '*':
			printf("-> %d\n", num1 * num2);
		case '/':
			printf("-> %d\n", num1 / num2);
		case '%':
			printf("-> %d\n", num1 % num2);
		default:
			printf("Please input a valid operator variable [+,-,*,/,%%]\n");
	}
	*/	
	printf("=================\n");
	return 0;
}
