#include "main.h"
#include <stdio.h>

/**
 * main - It ain't what they call you, it's what you answer to.
 * @argc: argument count.
 * @argv: argument values.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
