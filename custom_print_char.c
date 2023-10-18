#include "main.h"

/**
 * output_char - Print a single character.
 * @c: The character to print.
 *
 * Return: The number of characters printed.
 */
int output_char(char c)
{
	return (write(1, &c, 1));
}
