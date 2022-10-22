#include "main.h"

/**
* _printf - prints all characters using format specifiers
* @format: strings of format signs
* Return: no of arguments
*/

int _printf(const char *format, ...)
{
	int i = 0, len;
	va_list arg;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	len = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				len += _putchar(format[i]);
				i++;
			}
			else if (format[i + 1] != '\0')
			{
				func = get_func(format[i + 1]);
				if (func)
					len += func(arg);
				else if (!func)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len += 2;
				}
				i++;
			}
		}
		else
			len += _putchar(format[i]);
	}
	va_end(arg);
	return (len);
}
