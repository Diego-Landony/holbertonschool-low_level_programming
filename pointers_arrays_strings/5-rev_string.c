#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/* Obtener la longitud de la cadena */
	while (s[length] != '\0')
		length++;

	end = length - 1;

	/* Intercambiar los caracteres desde el principio y el final */
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
