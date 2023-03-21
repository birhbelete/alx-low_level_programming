#include "main.h"
/**
 *_islower -a function that checks lower case letter
 * Description:a function that check lower case letter
 * @c: function argument int c
 * Return: return 1 for sucess and return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
