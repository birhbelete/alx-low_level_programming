#include "main.h"
/**
 * _isalpha - checks for laphabetic character
 * @c:argument for the function
 * Return: return 1 for for alphabetic character and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	-putchar ('\n');
}
