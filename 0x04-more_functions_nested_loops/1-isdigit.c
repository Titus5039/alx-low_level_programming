#include "main.h"

/**
 * _isdigit - function that checks 0 through 9
 * @c: parameter of 0 to 9
 * Return: 1 on succes and 0 on faillure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
