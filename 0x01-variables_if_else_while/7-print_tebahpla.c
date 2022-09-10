#include <stdio.h>


/**
 * main - Print the alphabet in lowercase letters in reverse
 * description: prints lowercase alphabets
 * Return: Always 0 (Success)
 */

int main(void)

{

char letter;


for (letter = 'z'; letter >= 'a'; letter--)

putchar(letter);


putchar('\n');


return (0);

}
