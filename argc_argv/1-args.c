#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
