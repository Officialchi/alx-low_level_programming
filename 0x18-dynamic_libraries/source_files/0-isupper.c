#include "main.h"

/**
 * _isupper - this function says if a character is upper or not.
 * @c: the character to be process
(* a blank line
* Description: this function says if a character is upper or not)?
(* section header: the header of this function is holberton.h)*
* Return: return 1 if c is upper and 0 in other cases.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
