#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * followed by new line
 * Return: 0(success)
 */
int main(void)
{
	char alph;

	for (alph='a'; alph<='z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
