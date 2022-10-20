#include "main.h"

/**
* print_hex - print hexadecimal
* @arg: argument list
* Return: no of arguments
*/

int print_hex(va_list arg)
{
	char arr[8];
	int i, j, temp, len;
	unsigned int num;

	num = va_arg(arg, int);
	i = 0;

	while (num > 0)
	{
		temp = 0;
		temp = num % 16;

		if (temp < 10)
		{
			arr[i] = 48 + temp;
			i++;
		}
		else
		{
			arr[i] = 55 + temp;
			i++;
		}
		num /= 16;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}
