#include "main.h"

/**
  *_printf - formats a string and print the string
  *@format: the string format
  *
  *Return: void
  */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				while (format[i + 1] == ' ')
					i++;
				if (format[i + 1] == '\0')
					return (-1);
				j += print_fstring(&i, format, ap);
				i += 2;
			}
			_putchar(format[i]);
			i++;
			j++;
		}
	}
	else
		return (-1);
	va_end(ap);
	return (j);
}
