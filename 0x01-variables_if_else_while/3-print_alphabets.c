#include <stdio.h>

/**
 *main - print lowercase and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{

	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		putchar++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		putchar++;
	}
	
	putchar('\n');

	return (0);	
}
