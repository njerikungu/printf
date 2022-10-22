#include "main.h"

/**
* _printf - prints all characters using format specifiers
* @format: strings of format signs
* Return: no of arguments
*/

int _printf(const char *format, ...)
{
	va_list arg;
	int (*func)(va_list);
	unsigned int i = 0, len = 0;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			len++;
		}
		if (!format[i])
			return (len);
		func = get_func(format[i + 1]);
		if (func != NULL)
		{
			len += func(arg);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		len++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(arg);
	return (len);
}
