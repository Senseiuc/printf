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
 * print_rot13 - prints a string encrypted with rot13
 * @ap: the variadic argument
 * Return: amount of characters printed
 */

int print_rot13(va_list ap)
{
int len = 0;
int i, j;
char *s = va_arg(ap, char *);

char alpha[] =
"\n! aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char replace[] =
"\n!_ nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 55; j++)
{
if (s[i] == alpha[j])
{
len = len + _putchar(replace[j]);
break;
}
}
}
return (len);
}
