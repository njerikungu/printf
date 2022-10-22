#include "main.h"

/**
  * reverse_str - reverse string
  * @arg: string to reverse
  * Return: num of chars printed
  */

int reverse_str(va_list arg)
{
	char *str;
	int i, len = 0;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
