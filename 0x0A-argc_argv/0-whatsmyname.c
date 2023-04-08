#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]) 
{
	printf("%s\n", argv[argc - 1]);

	return 0;
}

