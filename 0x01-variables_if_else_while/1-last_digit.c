#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Get a random number and print the number
 * positive,negative or zero
 * Return: Always 0 (success)
 */
	int main(void)
	{
		int n;
		int last;

		Srand(time(0));
		n = rand() - RAND_MAX / 2;
		last = n % 10;
		if (a > 5)
		{
			printf("Last digit of %d is %d and is 0\n", n, last);
		}
		else
		{
			if (last > 5)
			{
				printf("Last digit of %d is %d and is greater than 5\n", n, last);
			}
			else if (last < 6)
			{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
			}
		}	return (0);
	}
