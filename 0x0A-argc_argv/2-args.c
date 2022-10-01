#include "main.h"
#include <stdio.h>
/**
 *main - A program that prints all arguments it recieves
 *@argc: the arguement counter
 *@argv: the arguement values
 *Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
