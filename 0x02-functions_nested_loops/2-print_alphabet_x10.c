#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet ten times
 *Description:function that prints alphabet ten times
 *Return: zero for success
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 197; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
