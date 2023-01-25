#include "main.h"

/**
 * is_digit - check if digit
 * @c: the string
 * Return: 1, 0 otherwise
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
