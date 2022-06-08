#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j; #declaring two variables

	for (i = 0; i < 100; i++) // i starts at zero, is less than 100 and increments by 1.
	{
		for (j = 0; j < 100; j++) //j starts at zero,is less than 100 and increments by 1.
		{
			if (i < j) //i is less than j
			{
				putchar((i / 10) + 48); // (i divide by 10)add to 48
				putchar((i % 10) + 48); // (i modulus 10) add to 48
				putchar(' '); // puts space between two numbers
				putchar((j / 10) + 48); // (j divide by 10) add to 48
				putchar((j % 10) + 48); // (j divide by 10) add to 48
				if (i != 98 || j != 99)//i is not equal to 98 or j is not equal to 99.
				{
					putchar(',');// comma between pair of integers.
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');// new line
	return (0);
}
