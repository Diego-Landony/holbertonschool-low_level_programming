#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i + '0'); /* Print first digit */
putchar(j + '0'); /* Print second digit */
putchar(k + '0'); /* Print third digit */
if (i != 7 || j != 8 || k != 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}
}
putchar('\n'); /* Print newline character */
return (0);
}
