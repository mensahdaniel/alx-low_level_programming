#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	/* Handle the case when n is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Handle the base case */
	if (n / 10 == 0)
	{
		_putchar('0' + n);
		return;
	}

	/* Recursively print the remaining digits */
	print_number(n / 10);
	_putchar('0' + n % 10);
}

