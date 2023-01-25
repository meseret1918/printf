#include "main.h"

/**
 * is_printable - check if printable char
 * @c: the string
 * Return: 1, 0 otherwise
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
