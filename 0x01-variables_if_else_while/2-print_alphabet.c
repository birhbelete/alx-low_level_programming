#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	char i = 'a';
	
	while (i <= 'z')
	{
		putchar("%c", i);
		i++;
	}
	putchar("\n");
	return (0);
}
	
