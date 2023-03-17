#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	char x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
