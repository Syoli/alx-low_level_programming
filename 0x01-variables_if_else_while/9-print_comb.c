#include <stdio.h>
#include <ctype.h>

/**
 * main - Get a random number and print the number
 * positive,negative or zero
 * Return: Always 0 (success)
 */
int main(void)
	{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		{
		putchar(digit);
		if (digit == '9')
			continue;

		putchar(',');
		putchar(' ');
		}
		putchar('\n');
		return (0);
	}
