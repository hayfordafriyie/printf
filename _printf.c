#include "main.h"

/**
 * _printf - write output to stdout
 * @format: character string
 * Return: hte number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buf(buffer, ibuf), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{
				function = get_print_func(format, i + 1);
				if ()
			}
		}
	}
}
