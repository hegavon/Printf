#include "main.h"

/**
 * p_string - Prints a string
 * @var: Argument
 * Return: Length of the string
 */
int p_string(va_list var)
{
	char *str;
	int i = 0;
	int longi = 0;

	str = va_arg(var, char *);

	if (str == NULL)
	{
		str = "(null)";
		longi = _strlen(str);
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (longi);
	}
	else
	{
		longi = _strlen(str);
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (longi);
	}
}
