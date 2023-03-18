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
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			printf("%d", i);
			printf("%d", j);
			if (m == 89)
				continue;
			printf(",");
		}
		printf(" ");
	}
	return (0);
}
