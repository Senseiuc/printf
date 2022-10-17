#include "main.h"
/**
  *print_unsigned_int - prints unsigned integers
  *@ap: the arguments
  *
  *Return: int
  */
int print_unsigned_int(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int), var = 1;
	int lenght = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n / var > 9)
	{
		var *= 10;
	}
	while (var != 0)
	{
		lenght += _putchar(n / var + '0');
		n %= var;
		var /= 10;
	}
	return (lenght);
}

/**
 *print_octal_number - prints an octal number
 *@ap: the arguments
 *
 *Return: int
 */
int print_octal_number(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int), var = 1;
	int lenght = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n / var > 7)
	{
		var *= 8;
	}
	while (var != 0)
	{
		lenght += _putchar(n / var + '0');
		n %= var;
		var /= 8;
	}
	return (lenght);
}

/**
 *print_hexadecimal_all - prints hexadecimal numbers
 *@ap: the arguments
 *@c: a character that decides what alpha to print
 *
 *Return: int
 */
int print_hexadecimal_all(va_list ap, char c)
{
	unsigned int n = va_arg(ap, unsigned int), var = 1;
	int lenght = 0;
	int val;

	if (n == 0)
	{
		_putchar('0');
		return (1);
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

/**
 *print_hexadecimal - prints hexadecimal numbers
 *@ap: the arguments
 *
 *Return: int
 */
int print_hexadecimal(va_list ap)
{
	return (print_hexadecimal_all(ap, 'a'));
}

/**
 *print_hexadecimal_cap - prints hexadecimal numbers
 *@ap: the arguments
 *
 *Return: int
 */
int print_hexadecimal_cap(va_list ap)
{
	return (print_hexadecimal_all(ap, 'A'));
}
