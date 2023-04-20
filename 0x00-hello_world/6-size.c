#include <stdio.h>
/**
 * main - Write a C program that prints the size of various types of functions on the computer
 *
 * Return: Always 0
 */
int main(void)
{
char 1;
int 4;
long int 8;
long long int 8;
float 4;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
Printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
Printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
Printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

