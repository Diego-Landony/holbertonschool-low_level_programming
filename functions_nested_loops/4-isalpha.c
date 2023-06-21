#include "main.h"
/**
 * _isalpha - checks if a character is an alphabetic letter
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
