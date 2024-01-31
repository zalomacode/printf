#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Prints formatted output to stdout.
 * @format: Format string containing conversion specifiers.
 * @...: Additional arguments corresponding to the conversion specifiers.
 * Return: Number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...) {
    va_list args;
    int count = 0;
    
    va_start(args, format);

    while (*format) {
        if (*format == '%' && *(format + 1) != '\0') {
            format++; // Move to the character after '%'
            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    count += putchar('%');
                    break;
                default:
                    putchar('%');
                    count++;
                    putchar(*format);
                    count++;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return count;
}

int main() {
    // Testing the _printf function
    int characters_printed = _printf("Hello, %s! %c is a great language.%%\n", "World", 'C');
    printf("Number of characters printed: %d\n", characters_printed);

    return 0;
}
