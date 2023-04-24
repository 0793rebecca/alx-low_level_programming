#include <stdio.h>
/**
* main - main Entry point
* Description: 'Program that prints the alphabet in uppercase'
* Return: Always 0
*/
int main(void)
{
int d = 97;
int e = 65;

while (d <= 122)
{
putchar(d);
}
while (e <= 90)
{
putchar(e);
}
putchar('\n');
return (0);
}
