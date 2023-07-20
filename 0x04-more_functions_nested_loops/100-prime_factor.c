#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor of
 * Return: The largest prime factor of the number
 */
unsigned long largest_prime_factor(unsigned long num)
{
	/* ... (rest of the function remains the same) ... */
}

/**
 * main - Entry point of the program
 * Return: Always 0
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long result = largest_prime_factor(number);

	printf("The largest prime factor of %lu is %lu\n", number, result);

	return (0);
}

