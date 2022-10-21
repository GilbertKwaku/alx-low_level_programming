#include "main.h"
/**
 *print_diagonal - draws a diagonal line
 *@n: numbers of '\' to be printed
**/
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putcha('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			for (y = 0; y < x; y++)
				_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
