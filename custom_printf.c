#include "main.h"

/**
 * _printf - Clones original printf
 * @format: The format string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	find f[] = {
		{"%c", p_char},
		{"%s", p_string},
		{"%%", p_percent},
		{"%d", p_dec},
		{"%i", p_int}
	};

	va_list args;
	int i = 0;
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		int p = 0;

		for (; p < 5; p++)
		{
			if (format[i] == f[p].data[0] && format[i + 1] == f[p].data[1])
			{
				len += f[p].a(args);
				i += 2;
				break;
			}
		}
		if (p == 5)
		{
			_putchar(format[i]);
			i++;
			len++;
		}
	}

	va_end(args);
	return (len);
}
