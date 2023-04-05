#include "main.h"
/*
 *_puts_rec - functions like put()
 *@s is the input
 *return:always 0(success)
 */
void _puts_recursion(char*s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
