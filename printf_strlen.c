#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: String pointer
 * Return: Length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strlenC - Strlen but for a constant char pointer
 * @str: Constant char pointer
 * Return: Length of the string
 */
int _strlenC(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
