#include "main.h"
/**
  *print_string_S - prints strings with hex for non printable
  *@ap: the arguments
  *
  *Return: int
  */
int print_string_S(va_list ap)
{
	char *n = va_arg(ap, char *);
	int l = 0, lenght = 0, ac = 0;

	if (n == NULL)
		n = "(null)";
	while (n[l] != 0)
	{
		ac = n[l];
		if ((ac < 0 && ac < 32) || ac >= 127)
		{
			lenght += _putchar('\\');
			lenght += _putchar('x');
			lenght += print_hex_val(ac);
			l++;
			continue;
		}
		else
			lenght += _putchar(n[l]);
		l++;
	}
	return (lenght);
}

/**
 *print_hex_val - prints a string
 *@n: the value to be converted
 *
 *Return: int
 */
int print_hex_val(int n)
{
	int lenght = 0, val, var = 1;
	char c = 'A';

	if (n < 16)
	{
		lenght += _putchar('0');
	}
	while (n / var > 15)
	{
		var *= 16;
	}
	while (var != 0)
	{
		val = n / var;
		if (val > 9)
			lenght += _putchar(c + (val - 10));
		else
			lenght += _putchar(val + '0');
		n %= var;
		var /= 16;
	}
	return (lenght);
}
