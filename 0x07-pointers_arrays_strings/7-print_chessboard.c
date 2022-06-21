#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int Haile1, Haile2;

	for (Haile1 = 0; a[Haile1][7]; Haile1++)
	{
		for (Haile2 = 0; Haile2 < 8; Haile2++)
			_putchar(a[Haile1][Haile2]);

		_putchar('\n');
	}
}
