#include <stdio.h>

/**
 * main - Entry point
 * description - prints lowercase alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{

int ch;

for (ch = 'a', ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
else
{
}
}
putchar('\n');
return (0);
}
