#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

char *_memset(char *s, char b, unsigned int n){ 
   unsigned int i; 
 
   for (i = 0; i < n; i++) 
       s[i] = b; 
 
   return s; 
}
