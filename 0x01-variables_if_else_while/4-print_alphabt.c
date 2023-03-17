#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	int m = 97;

	while (m <= 122)
	{
		if (m == 101 || m == 113)
		{
			m++;
			continue;
		}
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
