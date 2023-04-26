#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase to the console.
 * the console supports ASCII characters.
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
