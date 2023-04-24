#include <stdio.h>
/**
* main - main Entry point
* Description: 'Program that prints the alphabet in uppercase'
* Return: Always 0
*/
int main(void)
{
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
n++;
}
putchar('\n');
return (0);
}
