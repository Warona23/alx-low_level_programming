#include "main.h"
#include <unistd.>

/**
 * _putchar - writes the charater c to stdout
 * @c: the charater to print
 * Return: On success 1
 * On error, -1 is retuned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

