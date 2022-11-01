#include "main.h"
/**
 * _memcpy - copy the memory
 * @dest: the char array copies into
 * @src: the char array copies from
 * @n: size
 * Return: updated dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
