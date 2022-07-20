#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _compare - compares each string
 * @s: string
 * @n1: smallest repeater
 * @n2: larget repeater
 * 
 * Return: (.)
 */
int _compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _compare(s, n1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 *
 * Return: 1 if s is a palindrome, else return 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen_recursion(s) - 1));
}
