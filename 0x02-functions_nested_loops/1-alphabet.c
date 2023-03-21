#include "main.h"
/**
 *print_alphabet -a function that print alphabet in lower case
 *Description: a function that prints alphabet
 *Return: zero for success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
