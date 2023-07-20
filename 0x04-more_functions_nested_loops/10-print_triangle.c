#include "main.h"

/**
 * print_triangle - Prints a triangle using '#'
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size - row; col++)
			_putchar(' ');

		for (col = 1; col <= row; col++)
			_putchar('#');

		_putchar('\n');
	}
}

