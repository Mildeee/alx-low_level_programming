#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Rturn: 1 and prints + n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
