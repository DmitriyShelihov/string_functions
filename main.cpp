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

    /*FILE *source = fopen("tests.txt", "r");

    char * buf = (char *)calloc(BIG_MAX_LEN, sizeof(char));

    char *text3[MAX_LEN] = {};

    int current = 0;


    while (fgets(buf, MAX_LEN, source))
        {
        char *str = (char *)calloc(strlen(buf) + 1, sizeof(char));

        text3[current] = strcpy(str, buf);
        current++;
        }

    for (size_t i = 0; i < MAX_LEN; i++)
        {
        if (text3[i] != NULL)
            {
            my_puts(text3[i]);
            fflush(stdout);
            }
        }
    free(buf); */

    /*FILE *stream = fopen("tests.txt", "r");
    int nlines = NAN;
    fscanf(stream, " %d ", &nlines);
    char ** text4 = {};
    text4 = (char **)calloc(nlines, sizeof(char*));

    char buf[MAX_LEN] = {};
    int current = 0;

    while (fgets(buf, BIG_MAX_LEN, stream))
        {
        text4[current] = strdup(buf);
        current++;
        }
    for (int i = 0; i < nlines; i++)
        fputs(text4[i], stdout);

    free(text4);
    fclose(stream);
    return 0;*/

    set_colour(FOREGROUND_RED);
    printf("сегодня 11.09.2023\n\n");
    set_colour(FOREGROUND_GREY);



    int mas[11] = {9, 2, 2, 234, 12314, 90, 284, 11, 10, 123};

    quick_sort(mas, 0, 10);

    for (size_t i = 0; i < 11; i++)
        printf("%d ", mas[i]);
    }

