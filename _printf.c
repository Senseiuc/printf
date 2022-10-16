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
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				switch (format[i + 1])
				{
					case 'c':
						_putchar((char) va_arg(ap, int));
						i = i + 2;
						j++;
						break;
					case 's':
						j += _print_string(va_arg(ap, char *));
						i = i + 2;
						break;
					default:
						_putchar(format[i + 1]);
						j++;
						i = i + 2;
						break;
				}
			}
			_putchar(format[i]);
			i++;
			j++;
		}
	}
	va_end(ap);
	return (j);
}
