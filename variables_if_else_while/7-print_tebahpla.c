#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 15; i >= 0; i--)
{
if (i < 10)
putchar(i + '0'); /* Print digits 0-9 */
else
putchar(i + 'a' - 10); /* Print lowercase letters a-f */
}
printf('\n');
return (0);
}
