#include <stdio.h>

#include "main.h"



/**
 *
 * main - will prints all arguments it receives

 * @argc: will number it's arguments

 * @argv: array of arguments that has been passed

 *

 * Return: Always 0 (Success)

 */

int main(int argc, char *argv[])

{

	int a;



	for (a = 0; a < argc; a++)

	{

		printf("%s\n", argv[a]);

	}



	return (0);
}

