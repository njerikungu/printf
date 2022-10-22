#include "main.h"

/**
  * _pow - get power
  * @base: base
  * @exp: exponent
  * Return: answer
  */

int _pow(unsigned int base, unsigned int exp)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exp; i++)
		ans *= base;
	return (ans);
}

/**
  * print_p - print address
  * @arg: argument
  * Return: num of chars
  */

int print_p(va_list arg)
{
	int len = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nill)";

	n = va_arg(arg, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			len++;
		}
		return (len);
	}
	_putchar('0');
	_putchar('x');
	len = 2;

	m = _pow(16, 15);
	a[0] = n / m;
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			len++;
		}
	}
	return (len);
}
