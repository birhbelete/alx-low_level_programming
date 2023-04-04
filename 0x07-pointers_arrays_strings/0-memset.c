#include "main.h"
/**
 * _memset -used to set a memory block
 * @i: starting address of memory to be filled
 * j: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *i, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

