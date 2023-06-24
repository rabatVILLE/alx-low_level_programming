#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float f;
printf("Size of a char : %lu bytes \n", (unsigned long)sizeof(char));
printf("Size of an int : %lu bytes \n", (unsigned long)sizeof(int));
printf("Size of a long int : %lu bytes \n", (unsigned long)sizeof(long int));
printf("Size of a long long int : %lu bytes \n", (unsigned long)sizeof(long long int));
printf("Size of a float : %lu bytes \n", (unsigned long)sizeof(float));
        return (0);
}
