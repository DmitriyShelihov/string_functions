#include "TXLib.h"
#include <stdio.h>
#include <assert.h>
#include "assertion.h"
#include "StdFunctions.h"
#include "set_colour.h"
#include <string.h>

int main()
    {
    /*const char massiv1[100] = {'1','2', '3', '4',
                               '2', '3','0','G',
                               '4', '5', '6','K',
                               '7', '8', '9', 'A'} ;
    print_data(massiv1, 4, 4);
    printf("\n");
    const char massiv2[100] = {'1',
                               '2', '3',
                               '4', '5', '6',
                               '7', '8', '9', 'A'};

    print_triangle_data(massiv2, 4); */



    /*FILE *fp = fopen("mem.txt", "r");
    char expect[100] = {0};
    char*heh = my_fgets(expect, 100, fp);

    puts(heh);
    fclose(fp);*/



    /*  04.09.2023 */
    /*FILE *stream = fopen("mem.txt", "r");

    int nlines = NAN;
    int max_size = NAN;
    int current_line = 0;
    fscanf(stream, "%d %d ", &nlines, &max_size);


    char text1[5][10] = {};

    while (my_fgets(text1[current_line], max_size, stream))

        current_line++;
    print_two_dimensional((const char *[10])text1, 5, 10);


    return 0;      */

    FILE *source = fopen("tests.txt", "r");

    char text1[MAX_LEN][MAX_LEN] = {};
    int current = 0;

    while (fgets(text1[current++], MAX_LEN, source) )
        {
        continue;
        }

    for (size_t i = 0; i < MAX_LEN; ++i)
        {
        my_puts(text1[i]);
        }

    return 0;

    }

