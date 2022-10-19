#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * _printf - function
 * @format: the constant character string
 * @...: Other arguments that will be passed as parameters
 * 
 * Description: A function that takes in multiple arguments
 *  and returns integer
 * 
 * Return: success
 */

int _printf(const char *format, ...)
{
    int num_arguments = strlen(format);

    va_list args;

    va_start(args, format);

    for (int i = 0; i < num_arguments; i++)
    {
        if (format[i] == 'c')
        {
            char x = va_arg(args, char);

            printf("%c", x);
        }
        if (format[i] == 's')
        {
            char x = va_arg(args, char);

            printf("%s", x);
        }
        if (format[i] == '%')
        {
            char x = va_arg(args, char);

            printf("%%", x);
        }
}


}