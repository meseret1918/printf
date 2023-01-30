#include "main.h"

/**
 * print_c - prints a char.
 * @arg: char to print.
 * Return: always 1 (number of chars printed).
 */
int print_c(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * print_s - prints a string.
 * @arg: string to print.
 * Return: number of chars printed.
 */
int print_s(va_list arg)
{
	char *string = va_arg(arg, char *);
	int i = 0;

	if (string == NULL)
		string = "(null)";
	for (; string[i]; i++)
		_putchar(string[i]);
	return (i);
}

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string.
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * print_r - prints a reversed string.
 * @arg: string to print in reverse.
 * Return: number of chars printed.
 */
int print_r(va_list arg)
{
	char *s = va_arg(arg, char*);

	_print_rev_recursion(s);
	return (_strlen_recursion(s));
}

