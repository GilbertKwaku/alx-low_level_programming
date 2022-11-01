/**
 * _strpbrk - searches a string for any set of bytes
 * @s: The sring to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: If a set is matched - a pointer to the matched byte.
 *         Null if no set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
