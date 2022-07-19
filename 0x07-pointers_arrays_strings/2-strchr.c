#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to be scanned
 * @c: character to be searched in s
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 *
 */

char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);

	return (result);
}
