#include "main.h"
/**
 * _puts - prints str followed by a new line
 * @str: pointer to the string to point
 * Return: void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
