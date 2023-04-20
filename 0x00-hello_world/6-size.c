#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: using a sizeof to print the size of various types.
 *
 * Return Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("size of an int: %u byte(s)\n", sizeof(int));
printf("size of a long int: %u byte(s)\n", sizeof(long int));
printf("size of long long int: %u byte(s)\n", sizeof(long long int));
printf("size of a float: %u byte(S)\n", sizeof(float));
return (0);
}

