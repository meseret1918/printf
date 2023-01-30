#include "main.h"

/**
 * print_int - auxiliar function for prints an unsigned int number.
 * @num: number to print.
 * Return: always 0 (success).
 */
int print_int(unsigned int num)
{
	if (num / 10 != 0)
		print_int(num / 10);
	_putchar('0' + (num % 10));

	return (0);
}

/**
 * print_i - prints a int number.
 * @arg: number to print.
 * Return: number of digits printed.
 */
int print_i(va_list arg)
{
	int n = va_arg(arg, int);
	int cont = 1;
	unsigned int num;

	if (n < 0)
	{
		cont++;
		_putchar('-');
		num = -n;
		print_int(num);
	}
	else
	{
		num = n;
		print_int(num);
	}
	while (num / 10 != 0)
	{
		cont++;
		num = num / 10;
	}

	return (cont);
}

/**
 * print_u - prints a unsigned int number.
 * @arg: number to print.
 * Return: number of digits printed.
 */
int print_u(va_list arg)
{
	unsigned int num = va_arg(arg, int);
	int cont = 1;

	print_int(num);
	if (num == 4294967295)
		return (10);

	while (num / 10 != 0)
	{
		cont++;
		num = num / 10;
	}

	return (cont);
}

/**
 * print_b - prints a unsigned int number in binary notation.
 * @arg: number to print.
 * Return: number of digits printed.
 */
int print_b(va_list arg)
{
	int cont = 1, i = 0, tab[33];
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (cont);
	}
	while (num != 0)
	{
		tab[i] = (num % 2);
		num = num / 2;
		i++;
	}
	cont = i;
	i--;
	for (; i >= 0; i--)
		_putchar(tab[i] + '0');

	return (cont);
}

/**
 * print_o - prints a unsigned int number in octal notation.
 * @arg: number to print.
 * Return: number of digits printed.
 */
int print_o(va_list arg)
{
	int cont = 1, i = 0, tab[13];
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (cont);
	}
	while (num != 0)
	{
		tab[i] = (num % 8);
		num = num / 8;
		i++;
	}
	cont = i;
	i--;
	for (; i >= 0; i--)
		_putchar(tab[i] + '0');

	return (cont);
}
