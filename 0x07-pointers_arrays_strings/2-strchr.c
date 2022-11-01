#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to find
 * Return: Null if char is not found, or if the pointer is found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);
}
