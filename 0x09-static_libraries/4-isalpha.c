#include "main.h"

/**
 * _isalpha - checks for the alphabetic character
 * @c: the character to be checked will cheked out
 * Return: 1 if c is a letter of, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

