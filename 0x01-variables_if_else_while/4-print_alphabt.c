#include <stdio.h>
/**
 * main -main Entry point
 * Description: 'When I was having that alphabet soup'
 * Return: Always 0
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
