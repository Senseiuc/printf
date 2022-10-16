#include "main.h"
/**
  *_print_string - prints a string
  *@str: the string to be printed
  *
  *Return: int
  */
int _print_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
