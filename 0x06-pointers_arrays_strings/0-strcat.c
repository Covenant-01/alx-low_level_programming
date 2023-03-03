#include "main.h"
/**
*_strcat -writing a function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*Return: pointer to destination string.
*/
	char *_strcat(char *dest, char *src)
{
int str, a;

str = 0;
while (dest[str] != '\0')
{
str++;
}
for (a = 0; src[a] != '\0'; a++, str++)
{
dest[str] = src[a];
}
dest[str] = '\0';
return (dest);
}

