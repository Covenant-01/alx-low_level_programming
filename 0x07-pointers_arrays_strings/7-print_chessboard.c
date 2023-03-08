#include "main.h"

/**
 * print_chessboard -function that prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar([a][b]);
		}
		_putchar('\n');
	}
}