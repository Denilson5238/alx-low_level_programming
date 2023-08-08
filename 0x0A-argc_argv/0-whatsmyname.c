#include <stdio.h>

#include "main.h"

/**
* main -will  prints the name of the program
* @argc: will count the number of arguments
* @argv: will count the array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[]);
{
printf("%s\n", *argv);
return (0);
}
