#include "main.h"

/**
 * print_R - prints a string with rot13 encryption.
 * @arg: string to print.
 * Return: number of chars printed.
 */
int print_R(va_list arg)
{
	int i, j, cont = 0;
	char *str = va_arg(arg, char *);
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			break;
		}
		if (str[i] == alpha[j])
		{
			_putchar(rot13[j]);
			cont++;
		}
		else
		{
			_putchar(str[i]);
			cont++;
		}
	}

	return (cont);
}
