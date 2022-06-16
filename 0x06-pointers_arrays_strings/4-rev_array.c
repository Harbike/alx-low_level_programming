#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
int *start_p, *end_p, p;
int i;
start_p = a;
end_p = a;

for (i = 0; i < n - 1; i++)
{
end_p++;
}
for (i = 0; i < n / 2; i++)
{
p = *end_p;
*end_p = *start_p;
*start_p = p;

start_p++;
end_p--;
}
}
