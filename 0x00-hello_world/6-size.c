#include <stdio.h>
/**
 * main - print size of data in c program
 *
 * Return: 0
 */
int main(void)
{
	char h;
	int i;
	long int x;
	long long int y;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
i}
