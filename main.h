#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);
void fill_buffer(char *buffer, const char *format, va_list *_list);
int _strlen(char *str);
int buffer_length(const char *format, va_list *_list);
int fill_char(char *buffer, int ch, int index);
int fill_str(char *buffer, char *str, int index);
void our_putchar(char *c, int n);

#endif
