#include "main.h"
/**
 * _memset -used to set a memory block
 * @i: starting address of memory to be filled
 * j: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *i, char j, unsigned int n)
{
	int x;

	for (x=0; n > 0; x++)
	{
		i[x] = j;
		n--;
	}
	return (i);
}

