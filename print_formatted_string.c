#include "main.h"
/**
  *print_fstring - handles the printing of the arguments
  *@pos: current loop position
  *@format: the sting to be formattted
  *@ap: the arguments
  *
  *Return: the number of characters printed
  */

int print_fstring(int *pos, const char *format, va_list ap)
{
	conv_spec_t con_spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	int i = 0;

	while (con_spec[i].spec != '\0')
	{
		if (con_spec[i].spec == format[*pos + 1])
		{
			return (con_spec[i].func(ap));
		}
		i++;
	}
	_putchar(format[*pos]);
	_putchar(format[*pos + 1]);
	return (2);
}
