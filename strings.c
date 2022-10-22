#include "main.h"

/**
  * hex_print - prints chars in ascii value in uppercase
  * @c: char to print
  * Return: num of chars
  */

int hex_print(char c)
{
	int i;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (i = 0; i < 2; i++)
	{
		if (d[i] >= 10)
			_putchar('0' + diff + d[i]);
		else
			_putchar('0' + d[i]);
	}
	return (i);
}

/**
  * print_S - print strings and non printable char
  * @S: string to print
  * Return: num of chars printed
  */

int print_S(va_list S)
{
	unsigned int i;
	int len;
	char *str = va_arg(S, char *);

	len = 0;
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			len += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
