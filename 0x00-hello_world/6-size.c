#include <stdio.h>

/**
 * main - block
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of long int: %i byte(s)\n", sizeof(li));
	printf("Size of long long int: %i byte(s)\n", sizeof(lli));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
