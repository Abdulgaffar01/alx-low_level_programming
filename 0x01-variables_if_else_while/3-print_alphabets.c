#include <stdio.h>
#include <unistd.h>


/**
 * main - Prints all possible combinations of two different digits,
 *description - in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)

{

int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}

putchar('\n');


return (0);
}
