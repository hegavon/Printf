#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @str: String pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenC - Strlen but for constant char pointer
 * @str: char pointer
 * Return: 1
 */
int _strlenC(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
