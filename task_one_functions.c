#include "main.h"
/**
  *print_string - prints a string
  *@ap: the arguments
  *
  *Return: int
  */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 *print_char - prints a character
 *@ap: the arguments
 *
 *Return: int
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 *print_percent - prints percent symbol
 *@ap: the arguments
 *
 *Return: int
 */
int print_percent(va_list ap)
{
	(void) ap;

	_putchar('%');
	return (1);
}
