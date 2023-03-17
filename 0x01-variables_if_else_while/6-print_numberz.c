#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + 48);
	}
	putchar('\n');
	return (0);
}
