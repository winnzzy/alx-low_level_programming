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
	}
	putchar('\n');
	for (char c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
