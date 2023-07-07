#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cents, coins;
    int denominations[] = {25, 10, 5, 2, 1};
    int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    coins = 0;

    for (int i = 0; i < num_denominations; i++)
    {
        coins += cents / denominations[i];
        cents %= denominations[i];
    }

    printf("%d\n", coins);
    return 0;
}

