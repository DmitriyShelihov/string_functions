#include "TXLib.h"
#include "assertion.h"
#include <stdio.h>
#include "StdFunctions.h"
#include "set_colour.h"


int my_puts(const char *source_string)
    {
    cooler_assert(source_string == NULL, NULL_ERROR, NULL_ERROR);

    while (*source_string != '\0')
        {
        putchar(*source_string);
        ++source_string;
        }


    return NOT_ERROR;
    }

const char* my_strchr(const char *source_string, int char_to_find)
    {
    cooler_assert(source_string == NULL, NULL_ERROR, NULL);
    cooler_assert(!isfinite(char_to_find), NAN_ERROR, NULL);

    while (*source_string != char_to_find && *source_string != '\0')
        ++source_string;

    if (*source_string != char_to_find)
        return NULL;
    return source_string;


    }

size_t my_strlen (const char *source_string)
    {
    cooler_assert(source_string == NULL, NULL_ERROR, NAN);
    size_t str_len = 0;
    while (*source_string != '\0')
        {
        ++str_len;
        ++source_string;

        }
    return str_len;
    }

char *my_strcpy (char *destination, const char *source)
    {
    cooler_assert(destination == NULL, NULL_ERROR, NULL);
    cooler_assert(source == NULL, NULL_ERROR, NULL);

    char *save_destination = destination;

    while (*source != '\0')
        {
        *destination = *source;
        destination ++;
        source++;
        }

    *destination = '\0';
    return save_destination;
    }

char *my_strncpy (char *destination, const char *source, size_t length_limit)
    {
    cooler_assert(destination == NULL, NULL_ERROR, NULL);
    cooler_assert(source == NULL, NULL_ERROR, NULL);
    cooler_assert(!isfinite(length_limit), NAN_ERROR, NULL);

    char *save_destination = destination;

    while (*source != '\0' && length_limit--)
        {
        *destination = *source;
        destination ++;
        source ++;
        }
    *destination = '\0';

    return save_destination;
    }

char *my_strcat (char *destination, const char *append)
    {
    cooler_assert(destination == NULL, NULL_ERROR, NULL);
    cooler_assert(append == NULL, NULL_ERROR, NULL);

    char *save_destination = destination;
    destination += my_strlen(destination);
    while (*append)
        {
        *destination = *append;
        append++;
        destination++;
        }

    *destination = '\0';
    return save_destination;
    }

char *my_strncat (char *destination, const char *append, size_t limit_size)
    {
    cooler_assert(destination == NULL, NULL_ERROR, NULL);
    cooler_assert(append == NULL, NULL_ERROR, NULL);

    char *save_destination = destination;
    destination += my_strlen(destination);
    while (*append && limit_size--)
        {
        *destination = *append;
        append++;
        destination++;
        }

    *destination = '\0';
    return save_destination;
    }

char *my_strdup(const char *str)
    {
    size_t str_len = my_strlen(str);
    cooler_assert(str == NULL, NULL_ERROR, NULL);

    char *dinamyc_str = (char*)calloc(str_len, sizeof(char));

    return my_strncpy(dinamyc_str, str, str_len);
    }

char *my_fgets (char *str, int limit_size, FILE *stream)
    {
    cooler_assert(str == NULL, NULL_ERROR, NULL);
    cooler_assert(!isfinite(limit_size),NAN_ERROR, NULL );
    cooler_assert(stream == NULL,  NULL_ERROR, NULL);
    char symbol = NAN;
    char* save_str = str;
    while ((symbol = (char)fgetc(stream)) != '\n' && symbol != EOF && limit_size--)
        {
        *str = symbol;
        str++;
        }
    if (!limit_size)
        return NULL;
    *str = '\0';

    return save_str;
    }

void ascii(char symbol)
    {
    printf("%c ����� ����� %d\n", symbol , symbol);
    }

void print_data(const char* data, size_t rows, size_t cols)
    {
    for (size_t lines = 0; lines < rows; lines ++)
        {
        for (size_t  elem = 0; elem < cols; elem++)
            {
            printf("%c ", *(data + lines*cols + elem));
            }
        printf("\n");
        }

    }

void print_triangle_data(const char*data, size_t rows)
    {
    for (size_t lines = 0; lines < rows; lines++)
        {
        for (size_t elem = 0; elem <= lines; elem++)
            {
            printf("%c ", *(data + elem + ((lines+1)*lines)/2 ));

            }

        printf("\n");
        }
    }












