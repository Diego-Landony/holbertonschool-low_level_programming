#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0'); /* Print first digit */
putchar(j + '0'); /* Print second digit */
if (i != 8 || j != 9) /* Add comma and space unless it's the last combination */
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}
putchar('\n'); /* Print newline character */
return (0);
}
