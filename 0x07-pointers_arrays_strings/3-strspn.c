#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring(task3)
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, blue;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		blue = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				blue = 1;
			}
		}
		if (blue == 0)
		{
			return (c);
		}
	}

	return (0);
}
