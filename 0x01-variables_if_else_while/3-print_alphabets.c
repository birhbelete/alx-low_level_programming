#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	int i = 97;
	int y = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
		putchar('\n');
	return (0);
}
