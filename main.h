#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
* struct option - Stucture Option
* @flg: Str ptr
* @ptr: Ptr to the func
* Description: Define type struct optn with flg and ptr
*/

typedef struct option
{
	char *flg;
	int (*ptr)(va_list, char *, unsigned int);

} optn;

/*functions Prototypes */
int (*get_handler1(const char *spp, int idx))(va_list, char *, unsigned int);
int _printf(const char *format, ...);
int char_handler(va_list ar, char *buffer, unsigned int buffer_size);
int int_handler(va_list ar, char *buffer, unsigned int buffer_size);
int str_handler(va_list ar, char *buffer, unsigned int buffer_size);
int per_handler1(va_list arg __attribute__((unused)), char *a, unsigned int b);
int binary_handler1(va_list arg_l, char *buffer, unsigned int buf_size);


unsigned int buffer_handler1(char *buffer, char c, unsigned int buffer_size);
int _putchar(char *buffer, int buffersize);
int flags1(const char *ss, int idx);
int char_len1(char *cha);

int main(void);

#endif
