#include "main.h"

/**
 * output_str - Print a string.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int output_str(char *str)
{
	if (str == NULL)
		str = "(null)";
	return (write(1, str, string_length(str)));
}

/**
 * string_length - Calculate the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int string_length(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
