#include "main.h"
/**
 *
 *_isalpha(int c) - it checks for alphabetic character.
 *
 * Returns: 1 if c is a letter, lowercase or uppercase, and 0 otherwise
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
