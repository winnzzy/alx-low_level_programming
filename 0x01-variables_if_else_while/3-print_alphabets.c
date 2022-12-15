#include <stdio.h>
/**
 * main - prints alphabets in lowercase, then in uppercase
 * Return: 0
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar(c - ('n' - 'A'));
	}
	putchar('\n');
	return (0);
}
