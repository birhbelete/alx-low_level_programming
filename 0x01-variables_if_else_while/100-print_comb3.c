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

	for (i = 0; i <= 9, i++)
	{
		printf(i);
		for (j = i + 1; j <= 9; j++)
		{
			printf(j);
			printf(",");
			printf(" ");
		}
	}
	return (0);
}
