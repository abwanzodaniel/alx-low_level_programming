#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c check the char
 * Return: 1 if the char is uppercase or lowercase, 0 for otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
		return (1);
	else
		return (0);
}
