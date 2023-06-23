#include <stdio.h>
#include <math.h>
/**
* main - encuentra e imprime el factor primo más grande del número 612852475143,
* seguido de una nueva línea.
* Return: Siempre retorna 0 (éxito).
*/
int main(void)
{
long int n;
long int max;
long int i;
n = 612852475143;
max = -1;
while (n % 2 == 0)
{
max = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
