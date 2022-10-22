#include "main.h"

/**
 * print_c - Prints character data type
 * @arg: list of character arguments
 * Return: the characters
 */

int print_c(va_list arg)
{
	int c;

	c = (char)va_arg(arg, int);
	(_putchar(c));

	return (1);
}


/**
 * print_s - Print strings data type
 * @arg: list of arguments
 * Return: num of params printed
 */

int print_s(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_int - Print integer data type
 * @arg: list of arguments
 * Return: num of params printed
 */

int print_int(va_list arg)
{
	unsigned int num, temp_num, i, div, result;
	int numbers;

	numbers = va_arg(arg, int);

	i = 0;
	if (numbers < 0)
	{
		num = (numbers * -1);
		i += _putchar(45);
	}
	else
		num = numbers;
	temp_num = num;
	div = 1;
	while (temp_num > 9)
	{
		div *= 10;
		temp_num /= 10;
	}
	while (div > 0)
	{
		result = num / div;
		_putchar((result % 10) + '0');
		div /= 10;
		i++;
	}
	return (i);
}

/**
 * print_i - Print integers (%i)
 * @arg: list of arguments
 * Return: Number to print
 */

int print_i(va_list arg)
{
	return (print_int(arg));
}

/**
 * print_unint - print unsigned int
 * @arg: arguments to check
 * Return: number of arguments
 */

int print_unint(va_list arg)
{
	unsigned int num, div, temp, result, i;

	i = 0;

	num = va_arg(arg, unsigned int);
	temp = num;
	div = 1;

	if (num < 1)
		return (-1);
	if (num == 0)
		return (_putchar('0'));

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	while (div > 0)
	{
		result = num / div;
		_putchar((result % 10) + '0');
		num %= div;
		div /= 10;

		i++;
	}
	return (i);
}
