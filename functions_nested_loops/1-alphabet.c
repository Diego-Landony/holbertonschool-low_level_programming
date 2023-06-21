#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void) {
print_alphabet();
return (0);
}
void print_alphabet(void) {
char letter = 'a';
while (letter <= 'z') {
_putchar(letter);
letter++;
}
_putchar('\n');
}
int _putchar(char c) {
return putchar(c);
}

