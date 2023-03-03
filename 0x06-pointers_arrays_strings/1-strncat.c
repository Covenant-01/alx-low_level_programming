#include "main.h"
/**
 *_strncat -writing function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int string, a;
/* a is a counter for n bytes of src to be concatenated */
/* string = string of destination string */

	string = 0;
	while (dest[string] != '\0')
	{
		string++;
	}
	for (a = 0; a < n && src[a] != '\0'; a++, string++)
	{
		dest[string] = src[a];
	}
	dest[string] = '\0';
	return (dest);
}
