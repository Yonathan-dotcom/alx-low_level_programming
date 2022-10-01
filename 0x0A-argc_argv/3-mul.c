#include <stdlib.h>
#include <stdio.h>
/**
 *main- This program that multiplies two numbers
 *@argc: The arguements' counter
 *@argv: The arguements' values
 *Returns: always 0 (success)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
