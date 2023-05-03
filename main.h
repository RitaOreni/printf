#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
void fill_buffer(char *buffer, const char *format, va_list *_list);
int _strlen(char *str);
int buffer_length(const char *format, va_list *_list);
int fill_char(char *buffer, int ch, int index);
int fill_str(char *buffer, char *str, int index);
void our_putchar(char *c, int n);
int int_length(int num);
void reverse_str(char *str, int len);
int int_length(int num);
int fill_int(char *buffer, int number, int index);
int fill_pointer(char *buffer, void *ptr, int index);
int fill_reverse_str(char *buffer, char *str, int index);
int len_bin(int value);
char *to_bin(int value);
int fill_binary(char *buffer, int value, int index);
int ui_length(unsigned int num);
int fill_ui(char *buffer, unsigned int number, int index);
int fill_hex(char *buffer, unsigned int value, int index);
int len_hex(unsigned int value);
char *to_hex(unsigned int value);
int len_octal(unsigned int value);
int fill_octal(char *buffer, unsigned int value, int index);
char *to_octal(unsigned int value);


#endif
