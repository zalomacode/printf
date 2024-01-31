#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * Struct to store conversion specifier and corresponding function.
 */
typedef struct {
    const char *id;
    int (*f)(va_list);
} convert_match;

/**
 * Function prototypes for printf-related functions.
 */
int printf_string(va_list args);
int printf_char(va_list args);
int printf_37(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_bin(va_list args);
int printf_unsigned(va_list args);
int printf_oct(va_list args);
int printf_hex(va_list args);
int printf_HEX(va_list args);
int printf_exclusive_string(va_list args);
int printf_pointer(va_list args);

/**
 * Your _printf function prototype.
 */
int _printf(const char * const format, ...);

#endif /* MAIN_H */
