#include "main.h"

/**
 * _strlen -function returns the lengsth of a string.
 * *s - is an input string.
 * Return: Nohthing.
 */
int _strlen(char *s)
{
	int len =0;

	while (s[len] != '\0')
		len++;
	return (len);
}
