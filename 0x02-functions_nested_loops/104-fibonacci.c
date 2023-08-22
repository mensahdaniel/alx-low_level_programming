#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	 unsigned long int num1 = 1, num2 = 2, next_num;
	int count;

	printf("%lu, %lu, ", num1, num2);
	for (count = 2; count < 98; ++count)
	{
	next_num = num1 + num2;
	printf("%lu", next_num);

	if (count < 97)
	printf(", ");

	num1 = num2;
	num2 = next_num;
	}
	printf("\n");
	return (0);
}
