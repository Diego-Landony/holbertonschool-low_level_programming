#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
putchar(i / 10 + '0');   /* Print first digit of i */
putchar(i % 10 + '0');   /* Print second digit of i */
putchar(' ');            /* Print space */
putchar(j / 10 + '0');   /* Print first digit of j */
putchar(j % 10 + '0');   /* Print second digit of j */
if (i != 99 || j != 99)
/* Add comma and space unless it's the last combination */
{
putchar(',');/* Print comma */
putchar(' ');/* Print space */
}
}
}
putchar('\n');/* Print newline character */
return (0);
}
