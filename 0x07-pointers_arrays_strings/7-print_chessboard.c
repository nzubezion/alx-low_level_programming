#include "main.h"
/**
 * print_chessboard - Entry point
 * There are a lot of things to learn in this code
 * betty styling is also applied effectively
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
