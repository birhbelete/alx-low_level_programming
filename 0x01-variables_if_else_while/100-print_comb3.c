#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			printf("%d", i);
			printf("%d", j);
			if (i == 8 && j == 9)
				continue;
			printf(",");
		}
		printf(" ");
	}
	return (0);
}
