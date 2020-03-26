#ifndef __HOLBERTON__
#define __HOLBERTON__

#define ULI_MAX sizeof(unsigned long int) * 8

unsigned int binary_to_uint(const char *b);
unsigned long int power(unsigned int a, unsigned int b);
int _strlen(const char *s);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif