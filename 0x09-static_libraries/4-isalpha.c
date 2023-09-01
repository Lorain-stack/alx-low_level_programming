#include "main.h"

/**
*_isalpha - check for lower characters
*@c: the character to be checked
*a function that prints the alphabet x10
*Return: On success 1 and 0 for anything else
*/

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
