#include <stdio.h>

/**
 * main -main function
 * Return: always 0
 */

int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		if (n != 'q' && n != 'e')
			putchar(n);
	putchar('\n');
	return (0);
}
