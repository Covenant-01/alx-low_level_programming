#include "main.h"
/**
 *string_toupper - changing all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *x)
{
	int up;

	up = 0;

	while (up] != '\0')
	{
		if (x[up] >= 97 && x[up] <= 122)
		{
			x[up] = x[up] - 32;
		}
		up++;
	}
	return (x);
}
