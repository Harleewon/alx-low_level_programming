#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: single letter input
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
        return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c >= 'Z')));
}
