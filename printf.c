#include "main.h"

/**
* _printf - prints all characters using format specifiers
* @format: strings of format signs
* Return: no of arguments
*/

int _printf(const char *format, ...)
{
	int len = -1;

	if (format != NULL)
	{
		int i;
		int (*func)(va_list);
		va_list arg;

		va_start(arg, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

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
					len += (func ? func(arg) : _putchar(format[i] + _putchar(format[i + 1])));
					i++;
				}
			}
			else
				len += _putchar(format[i]);
		}
		va_end(arg);
	}
	return (len);
}
