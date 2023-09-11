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
    printf("%c имеет номер %d\n", symbol , symbol);
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

 void bubble_sort(int data[], size_t data_size)
    {
    for (size_t nstops = 0; nstops < data_size - 1; nstops++)
        {
        bool was_stops = 0;
        for (size_t current = 0; current < data_size - nstops - 1; current ++)
            {
            if (data[current] >= data[current+1])
                {
                replace_two_elements(data, current, current+1);
                was_stops = 1;
                }


            }
        if (!was_stops)
            break;
        }
    }

void selection_sort(int data[], size_t data_size)
    {

    for (size_t current = 0; current < data_size -1 ; current ++)
        {
        int index = find_min(data + current, data_size - current);

        replace_two_elements(data, current, index + current);
        }
    printf("\n");
    }

int find_min(int data[], size_t data_size)
    {
    int min_data = data[0];
    size_t pos_min = 0;
    for (size_t current = 1; current < data_size; current++)
        {
        if (data[current] <= min_data)
            {
            min_data = data[current];
            pos_min = current;
            }
        }
    return pos_min;
    }

void replace_two_elements(int data[], int index1, int index2)
    {
    int heh = data[index1];
    data[index1] = data[index2];
    data[index2] = heh;
    }



void quick_sort(int data[], int left, int right)
    {

    int save_left = left;
    int save_right = right;
    int mid = data[left];


    while (left != right)
        {

        while ((data[right] >= mid) && (left < right))
            right--;

        if (left != right)
            {
            data[left] = data[right];
            left++;
            }

        while ((data[left] <= mid) && (left < right))
            left++;

        if (left != right)
            {
            data[right] = data[left];
            right--;
            }
        }

    data[left] = mid;
    mid = left;

    left = save_left;
    right = save_right;

    if (left < mid)
        quick_sort(data, left, mid - 1);
    if (right > mid)
        quick_sort(data, mid + 1, right);
}











