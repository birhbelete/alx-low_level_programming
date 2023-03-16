#include <stdio.h>
/**
 *main - a function that prints a piece of art
 *Description: main function performs printf function
 *Return: zero for sucess
 */
int main(void)
{
	int a;
	float b;
	char c;
	long int li;
	long long int lli;

	printf("Size of int:%zu byte(s)\n" , sizeof(a));
	printf("Size of float:%zu byte(s)\n" , sizeof(b));
	printf("Size of char:%zu byte(s)\n" , sizeof(c));
	printf("Size of long int:%zu byte(s)\n" , sizeof(li));
	printf("Size of long long int:%zu byte(s)\n" , sizeof(lli));
	return (0);
	}
