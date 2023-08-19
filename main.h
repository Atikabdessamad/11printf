#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* struct opt - Stucture opt
* @f: Str ptr
* @ptr: Ptr to func
* Description: Define a type struct op with f and ptr
*/

typedef struct opt
{
	char *f;
	int (*ptr)(va_list, char *, unsigned int);

} op;


/*functions Prototypes */
int (*get_handler(const char *sp, int idx))(va_list, char *, unsigned int);
int _printf(const char *format, ...);
int char_handler(va_list arg, char *buffer, unsigned int buffer_size);
int integer_handler(va_list arg, char *buffer, unsigned int buffer_size);
int string_handler(va_list arg, char *buffer, unsigned int buffer_size);
int per_handler(va_list ar __attribute__((unused)), char *a, unsigned int b);
int binary_handler(va_list arg_list, char *buffer, unsigned int buf_size);


unsigned int buffer_handler(char *buffer, char ch, unsigned int buffer_size);
int _putchar(char *buffer, int buffersize);
int flags(const char *s, int idx);
int char_len(char *c);

#endif
