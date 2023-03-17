#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		fflush(stdout);
		if (i == 57)
			break;
		putchar(',');
		fflush(stdout);
		putchar(' ');
		fflush(stdout);
	}
	putchar('\n');
	fflush(stdout);
	return (0);
}
