#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where the data is to be copied
 * @src: memory where the data is to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
