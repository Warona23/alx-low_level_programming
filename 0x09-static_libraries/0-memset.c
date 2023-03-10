#include "main.h"

/**
 * _memset - fill a block of memory with a specifc value
 * @s: starting adress of memory to filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changde array with new value for n in bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
