#include "main.h"

/**
* print_hexlow - print hex in lowercase
* @arg: list of argument
* Return: no of arguments
*/

int print_hexlow(va_list arg)
{
	int i, j, temp, len;
	unsigned int num;
	char arr[8];

	num = va_arg(arg, int);
	i = 0;

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
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
			arr[i] = 87 + temp;
			i++;
		}
		num /= 16;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
		_putchar(arr[j]);

	return (i);
}
