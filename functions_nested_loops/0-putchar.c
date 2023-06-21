#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    char c[] = "_putchar\n";
    write(1, c, sizeof(c) - 1);
    return 0;
}
