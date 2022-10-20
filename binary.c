#include "main.h"

/**
* print_binary - prints base of 2
* @arg: argument list
* Return: number of binaries
*/

int print_binary(va_list arg)
{
	unsigned int num;
	int i, array[32], j, len;

	num = va_arg(arg, int);
	i = 0;

	if (num < 1)
	{
		_putchar(48);
		i++;
		return (i);
	}

	while (num > 0)
	{
		array[i] = num % 2;
		num /= 2;
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
		_putchar(array[j] + '0');
	return (i);
}
