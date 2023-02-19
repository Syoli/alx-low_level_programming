#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{

char  alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
alphabet = tolower(alphabet);
putchar(alphabet);
}
putchar('\n');
return (0);
}
