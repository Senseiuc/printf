#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @ap: the variadic argument
 * Return: amount of characters printed
 */

int print_reverse(va_list ap)
{
int i = 0, lenr = 0;
char *s = va_arg(ap, char *);

while (s[i] != '\0')
i++;
lenr = i;
i--;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
return (lenr);
}

/**
 * rot13 - Converts string to rot13
 * @list: string to convert
 * Return: converted string
 */
int rot13(va_list list)
{
int i;
int x;
char *str;
char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

str = va_arg(list, char *);
if (str == NULL)
return (-1);
for (i = 0; str[i] != '\0'; i++)
{
for (x = 0; x <= 52; x++)
{
if (str[i] == s[x])
{
_putchar(u[x]);
break;
}
}
if (x == 53)
_putchar(str[i]);
}
return (i);
}
