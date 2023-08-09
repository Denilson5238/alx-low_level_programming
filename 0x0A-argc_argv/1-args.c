#include <stdio.h>
#include "main.h"
/**
* main - print the number of arguments passed to the program
* @argc: it will print number of arguments
* @argv: it will print array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
