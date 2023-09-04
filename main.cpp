#include "TXLib.h"
#include <stdio.h>
#include "assertion.h"
#include "StdFunctions.h"
#include "set_colour.h"
#include <string.h>

int main()
    {
    const char massiv1[100] = {'1','2', '3', '4',
                       '2', '3','0','G',
                       '4', '5', '6','K',
                       '7', '8', '9', 'A'} ;
    print_data(massiv1, 4, 4);
    printf("\n");
    const char massiv2[100] = { '1',
                                '2', '3',
                                '4', '5', '6',
                                '7', '8', '9', 'A'};
    print_triangle_data(massiv2, 4);


    return 0;
    }

