#include "main.h"
#include <stdarg.h>
/**
 * p_char - prints a character
 * @var: Arguements
 * Return: 1
 */
int p_char(va_list var)
{
	char str;

	str = va_arg(var, int);
	_putchar(str);
	return (1);
}
