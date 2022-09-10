#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *description - a comma followed by a space, in ascending order.
 * Return: Always 0.
 */

int main(void)

{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

putchar('\n');

return (0);

}
