#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @i: function argument
 * Return:last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		_putchar (j + 48);
		return (-1);
	}
	else
	{
		_putchar (j + 48);
		return (1);
	}
}
