#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: input string
 * @c: character in the string
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
