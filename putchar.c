#include <unistd.h>

/**
* _putchar - Writes the character c to stdout
* @c: character to to print
* Return: 1 on success, -1 on error
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
