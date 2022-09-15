#include <stdio.h>
#include "main.h"

/**
 *  print_line - check for a digit
 *  @n : number of _ to be printed
 *  Return:void
 */

void print_line(int n)

{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)

		{

			if (i == n)

			{

				_putchar('_');

				_putchar('\n');


			}
			else
			{
				_putchar('_');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
