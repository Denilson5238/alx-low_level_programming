#include <stdio.h>

#include "main.h"
	
/**

 * _atoi - will converts a string to an integer
 *
 * @s: we have string to be converted

 * Return: the int converted it from the string
 
 */

int _atoi(char *s)

{

	int i, b, u, len, j, digit;

	i = 0;

	b = 0;
	
	u = 0;

	len = 0;

	j = 0;

	digit = 0;

	while (s[len] != '\0')

		len++;

	while (i < len && j == 0)

	{

		if (s[i] == '-')

			++b;

		if (s[i] >= '0' && s[i] <= '9')

        	{
			digit = s[i] - '0';

			if (b % 2)

				digit = -digit;

			u = u * 10 + digit;

			j = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')

		        	break;

			j = 0;
	    }

		i++;
	}
	if (j == 0)
		
		return (0);

	return (u);

}

/**
 * main - this sectin will multiplies two numbers

 * @argc: while this section will number the arguments

 * @argv: here we have array of arguments

 *

 * Return: 0 (Success), 1 (Error)

 */

int main(int argc, char *argv[])

{

	int result, num1, num2;



	if (argc < 3 || argc > 3)

	{

		printf("Error\n");

		return (1);

	}



	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;



	printf("%d\n", result);



	return (0);

}

