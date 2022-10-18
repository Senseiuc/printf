#include "main.h"
/**
  *print_binary - converts integers to binary and prints them
  *@ap: the arguments
  *
  *Return: int
  */
int print_binary(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int binaryNum[32]; /*Assuming 32 bit integer.*/
	int i, j;

	if (num == 0)
	{
		return (_putchar('0'));
	}

	for (i = 0; num > 0; )
	{
		binaryNum[i++] = num % 2;
		num /= 2;
	}

	/*Printing array in reverse order.*/
	for (j = i - 1; j >= 0; j--)
		_putchar(binaryNum[j] + '0');
	return (i);
}
