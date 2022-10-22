#include "main.h"

/**
 * print_octal - print in octal base no
 * @arg: argument to check
 * Return: number of arguments of base octal
 */

int print_octal(va_list arg)
{
	int arr[64], i, j, len;
	unsigned int num;

	num = va_arg(arg, int);

	i = 0;

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	while (num > 0)
	{
		arr[i] = num % 8;
		num /= 8;
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
		_putchar(arr[j] + '0');

	return (i);
}
