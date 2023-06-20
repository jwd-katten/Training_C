#include<stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	printf("entrer a character  ");
	scanf("%c", &c);
	printf("ASCII value of %c = %d\n", c, c);
	return (0);

}
