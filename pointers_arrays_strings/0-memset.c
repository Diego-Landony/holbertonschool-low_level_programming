#include "main.h"

/**
 * _memset - Llena el área de memoria con un byte constante.
 * @s: Puntero al área de memoria.
 * @b: Byte constante para llenar el área de memoria.
 * @n: Número de bytes para llenar.
 *
 * Return: Puntero al área de memoria s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return s;
}

