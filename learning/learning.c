#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/

int main(void)
{
	/*
		do
		{
		// statements
		} while (<condition>);
	*/
	int i = 0;

	do
{
	printf("%d", ++i);
	} while (i < 5);

return (0);
}
