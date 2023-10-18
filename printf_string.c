#include "main.h"
/**
 * p_string - Prints a string
 * @var: argument
 * Return: length of a string
 */
int p_string(va_list var)
{
	char *str;
	int i;
	int longi;

	str = va_arg(var, char *);
	if (str == NULL)
	{
		str = "(null)";
		longi = _strlen(str);
		for (i = 0; i < longi; i++)
			_putchar(str[i]);
		return (longi);
	}
	else
	{
		longi = _strlen(str);
		for (i = 0; i < longi; i++)
			_putchar(str[i]);
		return (longi);
	}
}
